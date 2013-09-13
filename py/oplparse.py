import sys
import json

REG_SCOPE = {
    0x00: 'Chip',
    0x20: '0x20',
    0x30: '0x20',
    0x40: '0x40',
    0x50: '0x40',
    0x60: 'Attack/decay',
    0x70: 'Attack/decay',
    0x80: 'Sustain/release',
    0x90: 'Sustain/release',
    0xA0: 'Frequency (L)',
    0xB0: 'Key on/off/Frequency(H)',
    0xE0: 'Wave select', 
    0xF0: 'Wave select',
}

# Map register ranges to channel + operator
OPERATOR_MAP = {
    0x00: (1, 1),
    0x01: (2, 1),
    0x02: (3, 1),
    0x03: (1, 2),
    0x04: (2, 2),
    0x05: (3, 2),
    0x08: (4, 1),
    0x09: (5, 1),
    0x0a: (6, 1),
    0x0b: (4, 2),
    0x0c: (4, 2),
    0x0d: (6, 2),
    0x10: (7, 1),
    0x11: (8, 1),
    0x12: (9, 1),
    0x13: (7, 2),
    0x14: (8, 2),
    0x15: (9, 2),
}
OSC_MAP = {1: 'mod', 2: 'car'}

def reg_to_chan_and_op(reg):
    # from REGOP in opl driver
    #return ( ( reg >> 3) & 0x20 ) | ( reg & 0x1f ) 
    chan, op = OPERATOR_MAP.get(reg % 32, (-1, 1))
    print 'ch%02d.%s: ' % (chan, OSC_MAP[op]),
    return chan, op

def interpret_00(reg, val, ev):
    regs = {1:'TEST', 2:'Timer 1', 3:'Timer 2', 4:'Timer Ctrl', 8:'CSM/keysplit'}
    print '%02X (%s)' % (reg, regs.get(reg, '??')),

def interpret_20(reg, val, ev):
    ch, op = reg_to_chan_and_op(reg)
    ev[2]['ch'] = ch
    bitfields = {7: 'AM', 6: 'vib', 5: 'sus', 4:'ksr'}
    bf = val & 0xf0
    opts = []
    for b, opt in bitfields.iteritems():
        optset = 'X' if (bf & (0x1 << b)) else '-'
        opts.append('%s:%s' % (opt, optset))
    fm_mult = val & 0x0f
    mults = {0:0.5, 0xb:0xa, 0xd:0xc, 0xf:0xe}
    fm_mult = mults.get(fm_mult, fm_mult)
    opts.append('fm_mult:x%d' % (fm_mult))
    ev[op-1]['fm_mult'] = fm_mult
    print '; '.join(opts) ,

def _db_atten_to_factor(atten_db):
    return (10 ** -(atten_db / 10))

def interpret_40(reg, val, ev):
    ch, op = reg_to_chan_and_op(reg)
    ev[2]['ch'] = ch
    bit_db = {5:24, 4:12, 3:6, 2:3, 1:1.5, 0:0.75}
    oct_db = {0:0, 0x40:3, 0x80:1.5, 0xC0:6}
    lvl = 0
    for b, db in bit_db.iteritems():
        if (val & (0x1 << b)):
            lvl += db
    oct_scale = '-%d dB/8ve' % oct_db[val & 0xC0]
    factor = _db_atten_to_factor(lvl)
    ev[op-1]['db'] = lvl
    ev[op-1]['scale'] = factor
    print '%d dB; (x%.4f) %s' % (lvl, factor, oct_scale) ,  

def interpret_60(reg, val, ev):
    ch, op = reg_to_chan_and_op(reg)
    ev[2]['ch'] = ch
    a = val >> 4
    d = val & 0x0f
    ev[op-1]['a'] = a
    ev[op-1]['d'] = d
    print 'Att: 0x%1x; Dec: 0x%1x' % (a, d) ,
    
def interpret_80(reg, val, ev):
    ch, op = reg_to_chan_and_op(reg)
    ev[2]['ch'] = ch
    s = val >> 4
    r = val & 0x0f
    ev[op-1]['s'] = s
    ev[op-1]['r'] = r    
    print 'Sus: 0x%1x; Rel: 0x%1x' % (s, r) ,
    
def interpret_A0(reg, val, ev):
    global freq_lsb
    freq_lsb = val
    chan = 1 + reg % 0xA0
    print 'ch%02d:      Freq-LSB=%02X' % (chan, val) , 
    
def interpret_B0(reg, val, ev):
    global freq_lsb
    oct = (val >> 2) & 0x7
    fnum = ((val & 0x3) << 8) + freq_lsb
    chan = 1 + reg % 0xB0
    key = 'ON' if (1 << 5) & val else 'off'
    frq = _fnum_to_hz(fnum, oct)
    ev[1]['frq'] = frq
    ev[2]['key'] = key
    ev[2]['ch'] = chan
    #ev[0]['gate'] = key
    print 'ch%02d:      Key-%s; f0x%03X oct:%d (%.4f Hz)' % (chan, key, fnum, oct, frq) ,

'''
A0-A8: Frequency Number:

   Determines the pitch of the note. Highest bits of F-Number are stored
   in the register below.


B0-B8: Key On / Block Number / F-Number(hi bits):

   bit 5:    KEY-ON. When 1, channel output is enabled.
   bits 2-4: Block Number. Roughly determines the octave.
   bits 0-1: Frequency Number. 2 highest bits of the above register.

	     The following formula is used to determine F-Number and Block:

		F-Number = Music Frequency * 2^(20-Block) / 49716 Hz
'''

def _fnum_to_hz(fnum, octave):
    return (49716.0 * fnum) / (2 ** (21 - octave))
   
def interpret_BD(reg, val, ev):
    print '* BD' ,

def interpret_C0(reg, val, ev):
    alg = 'ADD' if val & 0x1 else 'MODULATE'
    feedback = (val >> 1) & 0xc
    print 'feedback: %d  algo: %s' % (feedback, alg) ,

def interpret_E0(reg, val, ev):
    ch, op = reg_to_chan_and_op(reg)
    ev[2]['ch'] = ch
    waves = {0: 'SIN', 1: 'HALFSIN', 2: 'ABSSIN', 3: 'QUARTSIN'}
    wav = waves[val & 0x3]
    ev[op-1]['wav'] = wav
    print wav ,

def interpret_write(ts, reg, val, ev):
    print '%10d : ' % ts,
    if reg >= 0x01 and reg <= 0x08:
        interpret_00(reg, val, ev)
    elif reg >= 0x20 and reg <= 0x35:
        interpret_20(reg, val, ev)
    elif reg >= 0x40 and reg <= 0x55:
        interpret_40(reg, val, ev)
    elif reg >= 0x60 and reg <= 0x75:
        interpret_60(reg, val, ev)
    elif reg >= 0x80 and reg <= 0x95:
        interpret_80(reg, val, ev)
    elif reg >= 0xA0 and reg <= 0xA8:
        interpret_A0(reg, val, ev)
    elif reg >= 0xB0 and reg <= 0xB8:
        interpret_B0(reg, val, ev)        
    elif reg == 0xBD:
        interpret_BD(reg, val, ev)
    elif reg >= 0xC0 and reg <= 0xC8:
        interpret_C0(reg, val, ev)
    elif reg >= 0xE0 and reg <= 0xF5:
        interpret_E0(reg, val, ev)
    else:
        print '?????', 
    print
        
    #scope = REG_SCOPE.get(reg & 0xF0, '??')
    #chan, operator = reg_to_chan_and_op(reg)
    #aprint '%10f : %02d.%1d : %02x : %20s' % (float(ts)/1000, chan, operator, val, scope)

def parse_opldump(stream):
    events = dict()
    t0 = tp = False
    line = stream.readline()
    while len(line) >= 1:
        ts, opl2, op = line.split(':')
        if 'OPL2' == opl2:
            ts = int(ts)
            if not t0:
                t0 = ts
            ts -= t0
            reg, val = op.split('=')
            reg = int(reg, 16)
            val = int(val, 16)
            try:
                ev = events[ts]
            except KeyError:
                ev = [dict(), dict(), dict()]
                events[ts] = ev            
            interpret_write(ts, reg, val, ev)
        line = stream.readline() 
    return events

def get_javascript_for(event):
    mod = event[0]
    car = event[1]
    anc = event[2]
    indent = 8*' '
    lines = []
    if 'ch' in anc:
        lines.append('var ch = opl2.channels[%d];\n' % (anc['ch'] - 1))
    if 'fm_mult' in car:
        lines.append('ch.setModulatorMultiplier(%d); ch.setCarrierMultiplier(%d);\n' % (mod['fm_mult'], car['fm_mult']))
    if 'scale' in car:
        lines.append('ch.setModulatorAttenuation(%f); ch.setCarrierAttenuation(%f);\n' % (mod['scale'], car['scale']))
    if 'a' in mod:
        lines.append('ch.setEnvParams(ch.modEnv, 1/%d, 1/%d, 1/%d, 1/%d);\n' % (mod['a'], mod['d'], mod['s']+1, mod['r']))
    if 'a' in car:
        lines.append('ch.setEnvParams(ch.carEnv, 1/%d, 1/%d, 1/%d, 1/%d);\n' % (car['a'], car['d'], car['s']+1, car['r']))
    if 'wav' in car:
        lines.append('ch.setCarrierWaveform(ch.%s); ch.setModulatorWaveform(ch.%s);\n' % (car['wav'], mod['wav']))
    if 'key' in anc:
        if 'ON' == anc['key'].upper():
            lines.append('ch.noteOn(%f);\n' % car['frq'])
        elif 'OFF' == anc['key'].upper():
            lines.append('ch.noteOff();\n')
    return indent + indent.join(lines)
        
    
def find_unique_instruments(events, js_filename):
    instruments = dict()
    timestamps = events.keys()
    timestamps.sort()
    js_out = open(js_filename, 'wb')
    with js_out:
        js_out.write('song = function(sch, opl2) {\n')
        for t in timestamps:
            js_out.write('    sch.addAbsolute(%d, function() {\n' % t)
            js_out.write('        console.log(%d);\n' % t)
            js_out.write(get_javascript_for(events[t]))
            js_out.write('    });\n')
            instr_json = json.dumps(events[t])
            if instr_json not in instruments:
                instruments[instr_json] = t
        js_out.write('};\n')
    return instruments

def print_instrument(json_i, ts):
    print
    print '@ %10d:' % ts
    try:
        d = json.loads(json_i)
        print 'Waveforms: %10s%10s' % (d[0]['wav'], d[1]['wav'])
        print 'Freq mult: %9dx%9dx' % (d[0]['fm_mult'], d[1]['fm_mult'])
        print 'Levels:    %7d dB%7d dB' % (-d[0]['db'], -d[1]['db'])
        envs = (d[0]['a'], d[0]['d'], d[0]['s'], d[0]['r'], d[1]['a'], d[1]['d'], d[1]['s'], d[1]['r'])
        print 'Envelopes:    %1x %1x %1x %1x    %1x %1x %1x %1x' % envs
    except KeyError:
        print 'incomplete instrument?'
    
def main(argv):
    events = parse_opldump(sys.stdin)
    instruments = find_unique_instruments(events, argv[1])
    for i in instruments:
        print_instrument(i, instruments[i])

if '__main__' == __name__:
    main(sys.argv)
