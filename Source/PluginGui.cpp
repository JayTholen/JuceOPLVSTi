/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "OPLLookAndFeel.h"
//[/Headers]

#include "PluginGui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
void PluginGui::updateFromParameters()
{
	emulatorSlider->setValue(processor->getEnumParameter("Emulator"), juce::NotificationType::dontSendNotification);

/// setToggleState(bool, bool) is deprecated.
/// Jeff-Russ replaced the second arg of "false" with dontSendNotification:

	sineImageButton->setToggleState(false, dontSendNotification);
	halfsineImageButton->setToggleState(false, dontSendNotification);
	abssineImageButton->setToggleState(false, dontSendNotification);
	quartersineImageButton->setToggleState(false, dontSendNotification);
	alternatingsineImageButton->setToggleState(false, dontSendNotification);
	camelsineImageButton->setToggleState(false, dontSendNotification);
	squareImageButton->setToggleState(false, dontSendNotification);
	logsawImageButton->setToggleState(false, dontSendNotification);
	switch(processor->getEnumParameter("Modulator Wave")) {
		case 0: sineImageButton->setToggleState(true, dontSendNotification); break;
		case 1: halfsineImageButton->setToggleState(true, dontSendNotification); break;
		case 2: abssineImageButton->setToggleState(true, dontSendNotification); break;
		case 3: quartersineImageButton->setToggleState(true, dontSendNotification); break;
		case 4: alternatingsineImageButton->setToggleState(true, dontSendNotification); break;
		case 5: camelsineImageButton->setToggleState(true, dontSendNotification); break;
		case 6: squareImageButton->setToggleState(true, dontSendNotification); break;
		case 7: logsawImageButton->setToggleState(true, dontSendNotification); break;

	}
	sineImageButton2->setToggleState(false, dontSendNotification);
	halfsineImageButton2->setToggleState(false, dontSendNotification);
	abssineImageButton2->setToggleState(false, dontSendNotification);
	quartersineImageButton2->setToggleState(false, dontSendNotification);
	alternatingsineImageButton2->setToggleState(false, dontSendNotification);
	camelsineImageButton2->setToggleState(false, dontSendNotification);
	squareImageButton2->setToggleState(false, dontSendNotification);
	logsawImageButton2->setToggleState(false, dontSendNotification);
	switch(processor->getEnumParameter("Carrier Wave")) {
		case 0: sineImageButton2->setToggleState(true, dontSendNotification); break;
		case 1: halfsineImageButton2->setToggleState(true, dontSendNotification); break;
		case 2: abssineImageButton2->setToggleState(true, dontSendNotification); break;
		case 3: quartersineImageButton2->setToggleState(true, dontSendNotification); break;
		case 4: alternatingsineImageButton2->setToggleState(true, dontSendNotification); break;
		case 5: camelsineImageButton2->setToggleState(true, dontSendNotification); break;
		case 6: squareImageButton2->setToggleState(true, dontSendNotification); break;
		case 7: logsawImageButton2->setToggleState(true, dontSendNotification); break;
	}

/// setSelectedItemIndex(bool, bool) is deprecated.
/// Jeff-Russ replaced the second arg of "true" with "sendNotificationAsync":

	frequencyComboBox->setSelectedItemIndex (
                processor->getEnumParameter("Modulator Frequency Multiplier"),
                                            sendNotificationAsync);
	frequencyComboBox2->setSelectedItemIndex (
                processor->getEnumParameter("Carrier Frequency Multiplier"),
                                              sendNotificationAsync);

	attenuationSlider->setValue(processor->getEnumParameter("Modulator Attenuation") * -0.75, juce::NotificationType::dontSendNotification);
	attenuationSlider2->setValue(processor->getEnumParameter("Carrier Attenuation") * -0.75, juce::NotificationType::dontSendNotification);

	aSlider->setValue(processor->getIntParameter("Modulator Attack"), juce::NotificationType::dontSendNotification);
	dSlider->setValue(processor->getIntParameter("Modulator Decay"), juce::NotificationType::dontSendNotification);
	sSlider->setValue(processor->getIntParameter("Modulator Sustain Level"), juce::NotificationType::dontSendNotification);
	rSlider->setValue(processor->getIntParameter("Modulator Release"), juce::NotificationType::dontSendNotification);
	aSlider2->setValue(processor->getIntParameter("Carrier Attack"), juce::NotificationType::dontSendNotification);
	dSlider2->setValue(processor->getIntParameter("Carrier Decay"), juce::NotificationType::dontSendNotification);
	sSlider2->setValue(processor->getIntParameter("Carrier Sustain Level"), juce::NotificationType::dontSendNotification);
	rSlider2->setValue(processor->getIntParameter("Carrier Release"), juce::NotificationType::dontSendNotification);

/// Jeff-Russ replaced the second arg of "true" with "sendNotificationAsync":

	keyscaleAttenuationComboBox->setSelectedItemIndex (
                        processor->getEnumParameter("Modulator Keyscale Level"),
                                                       sendNotificationAsync);
	keyscaleAttenuationComboBox2->setSelectedItemIndex (
                        processor->getEnumParameter("Carrier Keyscale Level"),
                                                        sendNotificationAsync);


	tremoloButton->setToggleState(processor->getBoolParameter("Modulator Tremolo"), dontSendNotification);
	vibratoButton->setToggleState(processor->getBoolParameter("Modulator Vibrato"), dontSendNotification);
	sustainButton->setToggleState(processor->getBoolParameter("Modulator Sustain"), dontSendNotification);
	keyscaleEnvButton->setToggleState(processor->getBoolParameter("Modulator Keyscale Rate"), dontSendNotification);

	tremoloButton2->setToggleState(processor->getBoolParameter("Carrier Tremolo"), dontSendNotification);
	vibratoButton2->setToggleState(processor->getBoolParameter("Carrier Vibrato"), dontSendNotification);
	sustainButton2->setToggleState(processor->getBoolParameter("Carrier Sustain"), dontSendNotification);
	keyscaleEnvButton2->setToggleState(processor->getBoolParameter("Carrier Keyscale Rate"), dontSendNotification);

	vibratoSlider->setValue(processor->getEnumParameter("Vibrato Depth") * 7.0 + 7.0, juce::NotificationType::dontSendNotification);
	tremoloSlider->setValue(processor->getEnumParameter("Tremolo Depth") * 3.8 + 1.0, juce::NotificationType::dontSendNotification);
	feedbackSlider->setValue(processor->getIntParameter("Modulator Feedback"), juce::NotificationType::dontSendNotification);

/// Jeff-Russ replaced the second arg of "true" with "sendNotificationAsync":

	velocityComboBox->setSelectedItemIndex (
                    processor->getEnumParameter("Modulator Velocity Sensitivity"),
                                            sendNotificationAsync);
	velocityComboBox2->setSelectedItemIndex (
                    processor->getEnumParameter("Carrier Velocity Sensitivity"),
                                             sendNotificationAsync);
	algorithmComboBox->setSelectedItemIndex (
                    processor->getEnumParameter("Algorithm"),
                                             sendNotificationAsync);
	percussionComboBox->setSelectedItemIndex (
                    processor->getEnumParameter("Percussion Mode"),
                                              sendNotificationAsync);

	tooltipWindow.setColour(tooltipWindow.backgroundColourId, Colour(0x0));
	tooltipWindow.setColour(tooltipWindow.textColourId, Colour(COLOUR_MID));
}

void PluginGui::setRecordButtonState(bool recording) {
	if (recording) {
		recordButton->setColour(TextButton::buttonColourId, Colour(COLOUR_RECORDING));
		recordButton->setButtonText("Recording..");
		recordButton->setColour(ToggleButton::textColourId, Colour(COLOUR_RECORDING));
	} else {
		recordButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
		recordButton->setButtonText("Record to DRO");
		recordButton->setColour(ToggleButton::textColourId, Colour(COLOUR_MID));
	}
}

//[/MiscUserDefs]

//==============================================================================
PluginGui::PluginGui (AdlibBlasterAudioProcessor* ownerFilter)
    : AudioProcessorEditor (ownerFilter)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("Modulator")));
    groupComponent->setTextLabelPosition (Justification::centredLeft);
    groupComponent->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyComboBox = new ComboBox ("frequency combo box"));
    frequencyComboBox->setEditableText (false);
    frequencyComboBox->setJustificationType (Justification::centredLeft);
    frequencyComboBox->setTextWhenNothingSelected (String());
    frequencyComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    frequencyComboBox->addListener (this);

    addAndMakeVisible (frequencyLabel = new Label ("frequency label",
                                                   TRANS("Base Frequency")));
    frequencyLabel->setTooltip (TRANS("Multiplier applied to base note frequency"));
    frequencyLabel->setFont (Font (15.00f, Font::plain));
    frequencyLabel->setJustificationType (Justification::centredLeft);
    frequencyLabel->setEditable (false, false, false);
    frequencyLabel->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (aSlider = new Slider ("a slider"));
    aSlider->setTooltip (TRANS("Envelope attack rate"));
    aSlider->setRange (0, 15, 1);
    aSlider->setSliderStyle (Slider::LinearVertical);
    aSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 30, 20);
    aSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    aSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    aSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    aSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    aSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    aSlider->addListener (this);

    addAndMakeVisible (aLabel = new Label ("a label",
                                           TRANS("A")));
    aLabel->setTooltip (TRANS("Attack rate"));
    aLabel->setFont (Font (15.00f, Font::plain));
    aLabel->setJustificationType (Justification::centred);
    aLabel->setEditable (false, false, false);
    aLabel->setColour (Label::textColourId, Colour (0xff007f00));
    aLabel->setColour (TextEditor::textColourId, Colours::black);
    aLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dSlider = new Slider ("d slider"));
    dSlider->setTooltip (TRANS("Envelope decay rate"));
    dSlider->setRange (0, 15, 1);
    dSlider->setSliderStyle (Slider::LinearVertical);
    dSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 30, 20);
    dSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    dSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    dSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    dSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    dSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    dSlider->addListener (this);

    addAndMakeVisible (dLabel = new Label ("d label",
                                           TRANS("D")));
    dLabel->setTooltip (TRANS("Decay rate"));
    dLabel->setFont (Font (15.00f, Font::plain));
    dLabel->setJustificationType (Justification::centred);
    dLabel->setEditable (false, false, false);
    dLabel->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel->setColour (TextEditor::textColourId, Colours::black);
    dLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sSlider = new Slider ("s slider"));
    sSlider->setTooltip (TRANS("Envelope sustain level"));
    sSlider->setRange (0, 15, 1);
    sSlider->setSliderStyle (Slider::LinearVertical);
    sSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 30, 20);
    sSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    sSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    sSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    sSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    sSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    sSlider->addListener (this);

    addAndMakeVisible (dLabel2 = new Label ("d label",
                                            TRANS("S")));
    dLabel2->setTooltip (TRANS("Sustain level"));
    dLabel2->setFont (Font (15.00f, Font::plain));
    dLabel2->setJustificationType (Justification::centred);
    dLabel2->setEditable (false, false, false);
    dLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel2->setColour (TextEditor::textColourId, Colours::black);
    dLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rSlider = new Slider ("r slider"));
    rSlider->setTooltip (TRANS("Envelope release rate"));
    rSlider->setRange (0, 15, 1);
    rSlider->setSliderStyle (Slider::LinearVertical);
    rSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 30, 20);
    rSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    rSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    rSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    rSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    rSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    rSlider->addListener (this);

    addAndMakeVisible (rLabel = new Label ("r label",
                                           TRANS("R")));
    rLabel->setTooltip (TRANS("Release rate"));
    rLabel->setFont (Font (15.00f, Font::plain));
    rLabel->setJustificationType (Justification::centred);
    rLabel->setEditable (false, false, false);
    rLabel->setColour (Label::textColourId, Colour (0xff007f00));
    rLabel->setColour (TextEditor::textColourId, Colours::black);
    rLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attenuationSlider = new Slider ("attenuation slider"));
    attenuationSlider->setRange (-47.25, 0, 0.75);
    attenuationSlider->setSliderStyle (Slider::LinearHorizontal);
    attenuationSlider->setTextBoxStyle (Slider::TextBoxRight, true, 64, 20);
    attenuationSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    attenuationSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    attenuationSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    attenuationSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    attenuationSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    attenuationSlider->addListener (this);

    addAndMakeVisible (attenuationLabel = new Label ("attenuation label",
                                                     TRANS("Attenuation")));
    attenuationLabel->setTooltip (TRANS("Final output level adjustment"));
    attenuationLabel->setFont (Font (15.00f, Font::plain));
    attenuationLabel->setJustificationType (Justification::centred);
    attenuationLabel->setEditable (false, false, false);
    attenuationLabel->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel = new Label ("db label",
                                            TRANS("dB")));
    dbLabel->setFont (Font (15.00f, Font::plain));
    dbLabel->setJustificationType (Justification::centred);
    dbLabel->setEditable (false, false, false);
    dbLabel->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel->setColour (TextEditor::textColourId, Colours::black);
    dbLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sineImageButton = new ImageButton ("sine image button"));
    sineImageButton->setButtonText (TRANS("Sine"));
    sineImageButton->setRadioGroupId (1);
    sineImageButton->addListener (this);

    sineImageButton->setImages (false, true, true,
                                ImageCache::getFromMemory (full_sine_png, full_sine_pngSize), 0.500f, Colour (0x00000000),
                                Image(), 0.500f, Colour (0x00000000),
                                Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (halfsineImageButton = new ImageButton ("half sine image button"));
    halfsineImageButton->setButtonText (TRANS("Half Sine"));
    halfsineImageButton->setRadioGroupId (1);
    halfsineImageButton->addListener (this);

    halfsineImageButton->setImages (false, true, true,
                                    ImageCache::getFromMemory (half_sine_png, half_sine_pngSize), 0.500f, Colour (0x00000000),
                                    Image(), 0.500f, Colour (0x00000000),
                                    Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (abssineImageButton = new ImageButton ("abs sine image button"));
    abssineImageButton->setButtonText (TRANS("Abs Sine"));
    abssineImageButton->setRadioGroupId (1);
    abssineImageButton->addListener (this);

    abssineImageButton->setImages (false, true, true,
                                   ImageCache::getFromMemory (abs_sine_png, abs_sine_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (quartersineImageButton = new ImageButton ("quarter sine image button"));
    quartersineImageButton->setButtonText (TRANS("Quarter Sine"));
    quartersineImageButton->setRadioGroupId (1);
    quartersineImageButton->addListener (this);

    quartersineImageButton->setImages (false, true, true,
                                       ImageCache::getFromMemory (quarter_sine_png, quarter_sine_pngSize), 0.500f, Colour (0x00000000),
                                       Image(), 0.500f, Colour (0x00000000),
                                       Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (waveLabel = new Label ("wave label",
                                              TRANS("Wave")));
    waveLabel->setFont (Font (15.00f, Font::plain));
    waveLabel->setJustificationType (Justification::centredLeft);
    waveLabel->setEditable (false, false, false);
    waveLabel->setColour (Label::textColourId, Colour (0xff007f00));
    waveLabel->setColour (TextEditor::textColourId, Colours::black);
    waveLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tremoloButton = new ToggleButton ("tremolo button"));
    tremoloButton->setTooltip (TRANS("Modulate amplitude at 3.7 Hz"));
    tremoloButton->setButtonText (TRANS("Tremolo"));
    tremoloButton->addListener (this);
    tremoloButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (vibratoButton = new ToggleButton ("vibrato button"));
    vibratoButton->setTooltip (TRANS("Modulate frequency at 6.1 Hz"));
    vibratoButton->setButtonText (TRANS("Vibrato"));
    vibratoButton->addListener (this);
    vibratoButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (sustainButton = new ToggleButton ("sustain button"));
    sustainButton->setTooltip (TRANS("Enable or disable sustain when note is held"));
    sustainButton->setButtonText (TRANS("Sustain"));
    sustainButton->addListener (this);
    sustainButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (keyscaleEnvButton = new ToggleButton ("keyscale env button"));
    keyscaleEnvButton->setTooltip (TRANS("Speed up envelope rate with note frequency"));
    keyscaleEnvButton->setButtonText (TRANS("Keyscale Env. Rate"));
    keyscaleEnvButton->addListener (this);
    keyscaleEnvButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (dbLabel2 = new Label ("db label",
                                             TRANS("dB/8ve\n")));
    dbLabel2->setFont (Font (15.00f, Font::plain));
    dbLabel2->setJustificationType (Justification::centred);
    dbLabel2->setEditable (false, false, false);
    dbLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel2->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel2->setColour (TextEditor::textColourId, Colours::black);
    dbLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent2 = new GroupComponent ("new group",
                                                             TRANS("Carrier")));
    groupComponent2->setTextLabelPosition (Justification::centredLeft);
    groupComponent2->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent2->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyComboBox2 = new ComboBox ("frequency combo box"));
    frequencyComboBox2->setEditableText (false);
    frequencyComboBox2->setJustificationType (Justification::centredLeft);
    frequencyComboBox2->setTextWhenNothingSelected (String());
    frequencyComboBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    frequencyComboBox2->addListener (this);

    addAndMakeVisible (frequencyLabel3 = new Label ("frequency label",
                                                    TRANS("Base Frequency")));
    frequencyLabel3->setTooltip (TRANS("Multiplier applied to base note frequency"));
    frequencyLabel3->setFont (Font (15.00f, Font::plain));
    frequencyLabel3->setJustificationType (Justification::centredLeft);
    frequencyLabel3->setEditable (false, false, false);
    frequencyLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel3->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (aSlider2 = new Slider ("a slider"));
    aSlider2->setRange (0, 15, 1);
    aSlider2->setSliderStyle (Slider::LinearVertical);
    aSlider2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 20);
    aSlider2->setColour (Slider::thumbColourId, Colour (0xff007f00));
    aSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    aSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    aSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    aSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    aSlider2->addListener (this);

    addAndMakeVisible (aLabel2 = new Label ("a label",
                                            TRANS("A")));
    aLabel2->setTooltip (TRANS("Attack rate"));
    aLabel2->setFont (Font (15.00f, Font::plain));
    aLabel2->setJustificationType (Justification::centred);
    aLabel2->setEditable (false, false, false);
    aLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    aLabel2->setColour (TextEditor::textColourId, Colours::black);
    aLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dSlider2 = new Slider ("d slider"));
    dSlider2->setRange (0, 15, 1);
    dSlider2->setSliderStyle (Slider::LinearVertical);
    dSlider2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 20);
    dSlider2->setColour (Slider::thumbColourId, Colour (0xff007f00));
    dSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    dSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    dSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    dSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    dSlider2->addListener (this);

    addAndMakeVisible (dLabel3 = new Label ("d label",
                                            TRANS("D")));
    dLabel3->setTooltip (TRANS("Decay rate"));
    dLabel3->setFont (Font (15.00f, Font::plain));
    dLabel3->setJustificationType (Justification::centred);
    dLabel3->setEditable (false, false, false);
    dLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel3->setColour (TextEditor::textColourId, Colours::black);
    dLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sSlider2 = new Slider ("s slider"));
    sSlider2->setRange (0, 15, 1);
    sSlider2->setSliderStyle (Slider::LinearVertical);
    sSlider2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 20);
    sSlider2->setColour (Slider::thumbColourId, Colour (0xff007f00));
    sSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    sSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    sSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    sSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    sSlider2->addListener (this);

    addAndMakeVisible (dLabel4 = new Label ("d label",
                                            TRANS("S")));
    dLabel4->setTooltip (TRANS("Sustain level"));
    dLabel4->setFont (Font (15.00f, Font::plain));
    dLabel4->setJustificationType (Justification::centred);
    dLabel4->setEditable (false, false, false);
    dLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    dLabel4->setColour (TextEditor::textColourId, Colours::black);
    dLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (rSlider2 = new Slider ("r slider"));
    rSlider2->setRange (0, 15, 1);
    rSlider2->setSliderStyle (Slider::LinearVertical);
    rSlider2->setTextBoxStyle (Slider::TextBoxBelow, true, 40, 20);
    rSlider2->setColour (Slider::thumbColourId, Colour (0xff007f00));
    rSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    rSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    rSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    rSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    rSlider2->addListener (this);

    addAndMakeVisible (rLabel2 = new Label ("r label",
                                            TRANS("R")));
    rLabel2->setTooltip (TRANS("Release rate"));
    rLabel2->setFont (Font (15.00f, Font::plain));
    rLabel2->setJustificationType (Justification::centred);
    rLabel2->setEditable (false, false, false);
    rLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    rLabel2->setColour (TextEditor::textColourId, Colours::black);
    rLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attenuationSlider2 = new Slider ("attenuation slider"));
    attenuationSlider2->setRange (-47.25, 0, 0.75);
    attenuationSlider2->setSliderStyle (Slider::LinearHorizontal);
    attenuationSlider2->setTextBoxStyle (Slider::TextBoxRight, true, 64, 20);
    attenuationSlider2->setColour (Slider::thumbColourId, Colour (0xff007f00));
    attenuationSlider2->setColour (Slider::trackColourId, Colour (0x7f007f00));
    attenuationSlider2->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    attenuationSlider2->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    attenuationSlider2->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    attenuationSlider2->addListener (this);

    addAndMakeVisible (attenuationLabel2 = new Label ("attenuation label",
                                                      TRANS("Attenuation")));
    attenuationLabel2->setTooltip (TRANS("Final output level adjustment"));
    attenuationLabel2->setFont (Font (15.00f, Font::plain));
    attenuationLabel2->setJustificationType (Justification::centred);
    attenuationLabel2->setEditable (false, false, false);
    attenuationLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel2->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel3 = new Label ("db label",
                                             TRANS("dB")));
    dbLabel3->setFont (Font (15.00f, Font::plain));
    dbLabel3->setJustificationType (Justification::centred);
    dbLabel3->setEditable (false, false, false);
    dbLabel3->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel3->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel3->setColour (TextEditor::textColourId, Colours::black);
    dbLabel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (sineImageButton2 = new ImageButton ("sine image button"));
    sineImageButton2->setButtonText (TRANS("Sine"));
    sineImageButton2->setRadioGroupId (2);
    sineImageButton2->addListener (this);

    sineImageButton2->setImages (false, true, true,
                                 ImageCache::getFromMemory (full_sine_png, full_sine_pngSize), 0.500f, Colour (0x00000000),
                                 Image(), 0.500f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (halfsineImageButton2 = new ImageButton ("half sine image button"));
    halfsineImageButton2->setButtonText (TRANS("Half Sine"));
    halfsineImageButton2->setRadioGroupId (2);
    halfsineImageButton2->addListener (this);

    halfsineImageButton2->setImages (false, true, true,
                                     ImageCache::getFromMemory (half_sine_png, half_sine_pngSize), 0.500f, Colour (0x00000000),
                                     Image(), 0.500f, Colour (0x00000000),
                                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (abssineImageButton2 = new ImageButton ("abs sine image button"));
    abssineImageButton2->setButtonText (TRANS("Abs Sine"));
    abssineImageButton2->setRadioGroupId (2);
    abssineImageButton2->addListener (this);

    abssineImageButton2->setImages (false, true, true,
                                    ImageCache::getFromMemory (abs_sine_png, abs_sine_pngSize), 0.500f, Colour (0x00000000),
                                    Image(), 0.500f, Colour (0x00000000),
                                    Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (quartersineImageButton2 = new ImageButton ("quarter sine image button"));
    quartersineImageButton2->setButtonText (TRANS("Quarter Sine"));
    quartersineImageButton2->setRadioGroupId (2);
    quartersineImageButton2->addListener (this);

    quartersineImageButton2->setImages (false, true, true,
                                        ImageCache::getFromMemory (quarter_sine_png, quarter_sine_pngSize), 0.500f, Colour (0x00000000),
                                        Image(), 0.500f, Colour (0x00000000),
                                        Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (waveLabel2 = new Label ("wave label",
                                               TRANS("Wave")));
    waveLabel2->setFont (Font (15.00f, Font::plain));
    waveLabel2->setJustificationType (Justification::centredLeft);
    waveLabel2->setEditable (false, false, false);
    waveLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    waveLabel2->setColour (TextEditor::textColourId, Colours::black);
    waveLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tremoloButton2 = new ToggleButton ("tremolo button"));
    tremoloButton2->setTooltip (TRANS("Modulate amplitude at 3.7 Hz"));
    tremoloButton2->setButtonText (TRANS("Tremolo"));
    tremoloButton2->addListener (this);
    tremoloButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (vibratoButton2 = new ToggleButton ("vibrato button"));
    vibratoButton2->setTooltip (TRANS("Modulate frequency at 6.1 Hz"));
    vibratoButton2->setButtonText (TRANS("Vibrato"));
    vibratoButton2->addListener (this);
    vibratoButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (sustainButton2 = new ToggleButton ("sustain button"));
    sustainButton2->setTooltip (TRANS("Enable or disable sustain when note is held"));
    sustainButton2->setButtonText (TRANS("Sustain"));
    sustainButton2->addListener (this);
    sustainButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (keyscaleEnvButton2 = new ToggleButton ("keyscale env button"));
    keyscaleEnvButton2->setTooltip (TRANS("Speed up envelope rate with note frequency"));
    keyscaleEnvButton2->setButtonText (TRANS("Keyscale Env. Rate"));
    keyscaleEnvButton2->addListener (this);
    keyscaleEnvButton2->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (frequencyLabel4 = new Label ("frequency label",
                                                    TRANS("Keyscale Attenuation (db/8ve)")));
    frequencyLabel4->setTooltip (TRANS("Attenuate amplitude with note frequency in db/8ve"));
    frequencyLabel4->setFont (Font (15.00f, Font::plain));
    frequencyLabel4->setJustificationType (Justification::centred);
    frequencyLabel4->setEditable (false, false, false);
    frequencyLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel4->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent3 = new GroupComponent ("new group",
                                                             TRANS("Common")));
    groupComponent3->setTextLabelPosition (Justification::centredLeft);
    groupComponent3->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent3->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (tremoloSlider = new Slider ("tremolo slider"));
    tremoloSlider->setRange (1, 4.8, 3.8);
    tremoloSlider->setSliderStyle (Slider::LinearHorizontal);
    tremoloSlider->setTextBoxStyle (Slider::TextBoxRight, true, 32, 20);
    tremoloSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    tremoloSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    tremoloSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    tremoloSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    tremoloSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    tremoloSlider->addListener (this);

    addAndMakeVisible (frequencyLabel5 = new Label ("frequency label",
                                                    TRANS("Tremolo Depth\n")));
    frequencyLabel5->setTooltip (TRANS("OPL global tremolo depth"));
    frequencyLabel5->setFont (Font (15.00f, Font::plain));
    frequencyLabel5->setJustificationType (Justification::centredLeft);
    frequencyLabel5->setEditable (false, false, false);
    frequencyLabel5->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel5->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel5 = new Label ("db label",
                                             TRANS("dB")));
    dbLabel5->setFont (Font (15.00f, Font::plain));
    dbLabel5->setJustificationType (Justification::centredLeft);
    dbLabel5->setEditable (false, false, false);
    dbLabel5->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel5->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel5->setColour (TextEditor::textColourId, Colours::black);
    dbLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (vibratoSlider = new Slider ("vibrato slider"));
    vibratoSlider->setRange (7, 14, 7);
    vibratoSlider->setSliderStyle (Slider::LinearHorizontal);
    vibratoSlider->setTextBoxStyle (Slider::TextBoxRight, true, 32, 20);
    vibratoSlider->setColour (Slider::thumbColourId, Colour (0xff007f00));
    vibratoSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    vibratoSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    vibratoSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    vibratoSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    vibratoSlider->addListener (this);

    addAndMakeVisible (frequencyLabel6 = new Label ("frequency label",
                                                    TRANS("Vibrato Depth")));
    frequencyLabel6->setTooltip (TRANS("OPL global vibrato depth"));
    frequencyLabel6->setFont (Font (15.00f, Font::plain));
    frequencyLabel6->setJustificationType (Justification::centredLeft);
    frequencyLabel6->setEditable (false, false, false);
    frequencyLabel6->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel6->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel6 = new Label ("db label",
                                             TRANS("cents\n")));
    dbLabel6->setTooltip (TRANS("A unit of pitch; 100 cents per semitone"));
    dbLabel6->setFont (Font (15.00f, Font::plain));
    dbLabel6->setJustificationType (Justification::centredLeft);
    dbLabel6->setEditable (false, false, false);
    dbLabel6->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel6->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel6->setColour (TextEditor::textColourId, Colours::black);
    dbLabel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (feedbackSlider = new Slider ("feedback slider"));
    feedbackSlider->setRange (0, 7, 1);
    feedbackSlider->setSliderStyle (Slider::RotaryVerticalDrag);
    feedbackSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 30, 20);
    feedbackSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    feedbackSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    feedbackSlider->setColour (Slider::rotarySliderFillColourId, Colour (0xff00af00));
    feedbackSlider->setColour (Slider::rotarySliderOutlineColourId, Colour (0xff007f00));
    feedbackSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    feedbackSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    feedbackSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    feedbackSlider->addListener (this);

    addAndMakeVisible (frequencyLabel7 = new Label ("frequency label",
                                                    TRANS("F")));
    frequencyLabel7->setTooltip (TRANS("Extent to which modulator output is fed back into itself"));
    frequencyLabel7->setFont (Font (15.00f, Font::plain));
    frequencyLabel7->setJustificationType (Justification::centred);
    frequencyLabel7->setEditable (false, false, false);
    frequencyLabel7->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel7->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (velocityComboBox = new ComboBox ("velocity combo box"));
    velocityComboBox->setEditableText (false);
    velocityComboBox->setJustificationType (Justification::centredLeft);
    velocityComboBox->setTextWhenNothingSelected (String());
    velocityComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    velocityComboBox->addItem (TRANS("Off"), 1);
    velocityComboBox->addItem (TRANS("Light"), 2);
    velocityComboBox->addItem (TRANS("Heavy"), 3);
    velocityComboBox->addListener (this);

    addAndMakeVisible (velocityComboBox2 = new ComboBox ("velocity combo box"));
    velocityComboBox2->setEditableText (false);
    velocityComboBox2->setJustificationType (Justification::centredLeft);
    velocityComboBox2->setTextWhenNothingSelected (String());
    velocityComboBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    velocityComboBox2->addItem (TRANS("Off"), 1);
    velocityComboBox2->addItem (TRANS("Light"), 2);
    velocityComboBox2->addItem (TRANS("Heavy"), 3);
    velocityComboBox2->addListener (this);

    addAndMakeVisible (attenuationLabel4 = new Label ("attenuation label",
                                                      TRANS("Velocity Sensitivity")));
    attenuationLabel4->setTooltip (TRANS("Set or disable velocity senstivity"));
    attenuationLabel4->setFont (Font (15.00f, Font::plain));
    attenuationLabel4->setJustificationType (Justification::centred);
    attenuationLabel4->setEditable (false, false, false);
    attenuationLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel4->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (alternatingsineImageButton = new ImageButton ("alternating sine image button"));
    alternatingsineImageButton->setButtonText (TRANS("Alternating Sine"));
    alternatingsineImageButton->setRadioGroupId (1);
    alternatingsineImageButton->addListener (this);

    alternatingsineImageButton->setImages (false, true, true,
                                           ImageCache::getFromMemory (alternating_sine_png, alternating_sine_pngSize), 0.500f, Colour (0x00000000),
                                           Image(), 0.500f, Colour (0x00000000),
                                           Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (camelsineImageButton = new ImageButton ("camel sine image button"));
    camelsineImageButton->setButtonText (TRANS("Camel Sine"));
    camelsineImageButton->setRadioGroupId (1);
    camelsineImageButton->addListener (this);

    camelsineImageButton->setImages (false, true, true,
                                     ImageCache::getFromMemory (camel_sine_png, camel_sine_pngSize), 0.500f, Colour (0x00000000),
                                     Image(), 0.500f, Colour (0x00000000),
                                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (squareImageButton = new ImageButton ("square image button"));
    squareImageButton->setButtonText (TRANS("Square"));
    squareImageButton->setRadioGroupId (1);
    squareImageButton->addListener (this);

    squareImageButton->setImages (false, true, true,
                                  ImageCache::getFromMemory (square_png, square_pngSize), 0.500f, Colour (0x00000000),
                                  Image(), 0.500f, Colour (0x00000000),
                                  Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (logsawImageButton = new ImageButton ("logsaw image button"));
    logsawImageButton->setButtonText (TRANS("Logarithmic Sawtooth"));
    logsawImageButton->setRadioGroupId (1);
    logsawImageButton->addListener (this);

    logsawImageButton->setImages (false, true, true,
                                  ImageCache::getFromMemory (logarithmic_saw_png, logarithmic_saw_pngSize), 0.500f, Colour (0x00000000),
                                  Image(), 0.500f, Colour (0x00000000),
                                  Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (alternatingsineImageButton2 = new ImageButton ("alternating sine image button"));
    alternatingsineImageButton2->setButtonText (TRANS("Alternating Sine"));
    alternatingsineImageButton2->setRadioGroupId (2);
    alternatingsineImageButton2->addListener (this);

    alternatingsineImageButton2->setImages (false, true, true,
                                            ImageCache::getFromMemory (alternating_sine_png, alternating_sine_pngSize), 0.500f, Colour (0x00000000),
                                            Image(), 0.500f, Colour (0x00000000),
                                            Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (camelsineImageButton2 = new ImageButton ("camel sine image button"));
    camelsineImageButton2->setButtonText (TRANS("Camel Sine"));
    camelsineImageButton2->setRadioGroupId (2);
    camelsineImageButton2->addListener (this);

    camelsineImageButton2->setImages (false, true, true,
                                      ImageCache::getFromMemory (camel_sine_png, camel_sine_pngSize), 0.500f, Colour (0x00000000),
                                      Image(), 0.500f, Colour (0x00000000),
                                      Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (squareImageButton2 = new ImageButton ("square image button"));
    squareImageButton2->setButtonText (TRANS("Square"));
    squareImageButton2->setRadioGroupId (2);
    squareImageButton2->addListener (this);

    squareImageButton2->setImages (false, true, true,
                                   ImageCache::getFromMemory (square_png, square_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (logsawImageButton2 = new ImageButton ("logsaw image button"));
    logsawImageButton2->setButtonText (TRANS("Logarithmic Sawtooth"));
    logsawImageButton2->setRadioGroupId (2);
    logsawImageButton2->addListener (this);

    logsawImageButton2->setImages (false, true, true,
                                   ImageCache::getFromMemory (logarithmic_saw_png, logarithmic_saw_pngSize), 0.500f, Colour (0x00000000),
                                   Image(), 0.500f, Colour (0x00000000),
                                   Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algorithmComboBox = new ComboBox ("algorithm combo box"));
    algorithmComboBox->setEditableText (false);
    algorithmComboBox->setJustificationType (Justification::centredLeft);
    algorithmComboBox->setTextWhenNothingSelected (String());
    algorithmComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    algorithmComboBox->addItem (TRANS("FM"), 1);
    algorithmComboBox->addItem (TRANS("Additive"), 2);
    algorithmComboBox->addListener (this);

    addAndMakeVisible (frequencyLabel8 = new Label ("frequency label",
                                                    TRANS("Algorithm")));
    frequencyLabel8->setTooltip (TRANS("In additive mode, carrier and modulator output are simply summed rather than modulated"));
    frequencyLabel8->setFont (Font (15.00f, Font::plain));
    frequencyLabel8->setJustificationType (Justification::centred);
    frequencyLabel8->setEditable (false, false, false);
    frequencyLabel8->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel8->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dbLabel4 = new Label ("db label",
                                             TRANS("dB/8ve\n")));
    dbLabel4->setFont (Font (15.00f, Font::plain));
    dbLabel4->setJustificationType (Justification::centred);
    dbLabel4->setEditable (false, false, false);
    dbLabel4->setColour (Label::textColourId, Colour (0xff007f00));
    dbLabel4->setColour (Label::outlineColourId, Colour (0x00000000));
    dbLabel4->setColour (TextEditor::textColourId, Colours::black);
    dbLabel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (keyscaleAttenuationComboBox2 = new ComboBox ("keyscale combo box"));
    keyscaleAttenuationComboBox2->setEditableText (false);
    keyscaleAttenuationComboBox2->setJustificationType (Justification::centredLeft);
    keyscaleAttenuationComboBox2->setTextWhenNothingSelected (String());
    keyscaleAttenuationComboBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    keyscaleAttenuationComboBox2->addItem (TRANS("-0.0"), 1);
    keyscaleAttenuationComboBox2->addItem (TRANS("-3.0"), 2);
    keyscaleAttenuationComboBox2->addItem (TRANS("-1.5"), 3);
    keyscaleAttenuationComboBox2->addItem (TRANS("-6.0"), 4);
    keyscaleAttenuationComboBox2->addListener (this);

    addAndMakeVisible (keyscaleAttenuationComboBox = new ComboBox ("keyscale combo box"));
    keyscaleAttenuationComboBox->setEditableText (false);
    keyscaleAttenuationComboBox->setJustificationType (Justification::centredLeft);
    keyscaleAttenuationComboBox->setTextWhenNothingSelected (String());
    keyscaleAttenuationComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    keyscaleAttenuationComboBox->addItem (TRANS("-0.0"), 1);
    keyscaleAttenuationComboBox->addItem (TRANS("-3.0"), 2);
    keyscaleAttenuationComboBox->addItem (TRANS("-1.5"), 3);
    keyscaleAttenuationComboBox->addItem (TRANS("-6.0"), 4);
    keyscaleAttenuationComboBox->addListener (this);

    addAndMakeVisible (groupComponent4 = new GroupComponent ("new group",
                                                             TRANS("Channels")));
    groupComponent4->setTextLabelPosition (Justification::centredLeft);
    groupComponent4->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent4->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (groupComponent5 = new GroupComponent ("new group",
                                                             TRANS("Emulator (currently locked)")));
    groupComponent5->setTextLabelPosition (Justification::centredLeft);
    groupComponent5->setColour (GroupComponent::outlineColourId, Colour (0xff007f00));
    groupComponent5->setColour (GroupComponent::textColourId, Colour (0xff007f00));

    addAndMakeVisible (emulatorSlider = new Slider ("emulator slider"));
    emulatorSlider->setRange (0, 1, 1);
    emulatorSlider->setSliderStyle (Slider::LinearHorizontal);
    emulatorSlider->setTextBoxStyle (Slider::NoTextBox, true, 44, 20);
    emulatorSlider->setColour (Slider::thumbColourId, Colour (0xff00af00));
    emulatorSlider->setColour (Slider::trackColourId, Colour (0x7f007f00));
    emulatorSlider->setColour (Slider::textBoxTextColourId, Colour (0xff007f00));
    emulatorSlider->setColour (Slider::textBoxBackgroundColourId, Colours::black);
    emulatorSlider->setColour (Slider::textBoxHighlightColourId, Colour (0xff00af00));
    emulatorSlider->addListener (this);

    addAndMakeVisible (emulatorLabel = new Label ("emulator label",
                                                  TRANS("DOSBox")));
    emulatorLabel->setTooltip (TRANS("Use the OPL emulator from the DOSBox project"));
    emulatorLabel->setFont (Font (15.00f, Font::plain));
    emulatorLabel->setJustificationType (Justification::centredRight);
    emulatorLabel->setEditable (false, false, false);
    emulatorLabel->setColour (Label::textColourId, Colour (0xff007f00));
    emulatorLabel->setColour (TextEditor::textColourId, Colours::black);
    emulatorLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (emulatorLabel2 = new Label ("emulator label",
                                                   TRANS("ZDoom")));
    emulatorLabel2->setTooltip (TRANS("Use the OPL emulator from the ZDoom project"));
    emulatorLabel2->setFont (Font (15.00f, Font::plain));
    emulatorLabel2->setJustificationType (Justification::centredLeft);
    emulatorLabel2->setEditable (false, false, false);
    emulatorLabel2->setColour (Label::textColourId, Colour (0xff007f00));
    emulatorLabel2->setColour (TextEditor::textColourId, Colours::black);
    emulatorLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (recordButton = new ToggleButton ("record button"));
    recordButton->setTooltip (TRANS("Start recording all register writes to a DRO file - an OPL recording file format defined by DOSBox"));
    recordButton->setButtonText (TRANS("Record to DRO (not working yet)"));
    recordButton->addListener (this);
    recordButton->setColour (ToggleButton::textColourId, Colour (0xff007f00));

    addAndMakeVisible (percussionComboBox = new ComboBox ("percussion combo box"));
    percussionComboBox->setEditableText (false);
    percussionComboBox->setJustificationType (Justification::centredLeft);
    percussionComboBox->setTextWhenNothingSelected (String());
    percussionComboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    percussionComboBox->addItem (TRANS("Off"), 1);
    percussionComboBox->addItem (TRANS("Bass drum"), 2);
    percussionComboBox->addItem (TRANS("Snare"), 3);
    percussionComboBox->addItem (TRANS("Tom"), 4);
    percussionComboBox->addItem (TRANS("Cymbal"), 5);
    percussionComboBox->addItem (TRANS("Hi-hat"), 6);
    percussionComboBox->addListener (this);

    addAndMakeVisible (percussionLabel = new Label ("percussion label",
                                                    TRANS("Percussion Mode")));
    percussionLabel->setTooltip (TRANS("Enable percussion instruments instead of oscillators"));
    percussionLabel->setFont (Font (15.00f, Font::plain));
    percussionLabel->setJustificationType (Justification::centred);
    percussionLabel->setEditable (false, false, false);
    percussionLabel->setColour (Label::textColourId, Colour (0xff007f00));
    percussionLabel->setColour (TextEditor::textColourId, Colours::black);
    percussionLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (exportButton = new TextButton ("export button"));
    exportButton->setButtonText (TRANS("Export .SBI instrument"));
    exportButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    exportButton->addListener (this);
    exportButton->setColour (TextButton::buttonColourId, Colour (0xff007f00));
    exportButton->setColour (TextButton::buttonOnColourId, Colours::lime);

    addAndMakeVisible (loadButton = new TextButton ("load button"));
    loadButton->setButtonText (TRANS("Load .SBI instrument"));
    loadButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    loadButton->addListener (this);
    loadButton->setColour (TextButton::buttonColourId, Colour (0xff007f00));
    loadButton->setColour (TextButton::buttonOnColourId, Colours::lime);

    addAndMakeVisible (versionLabel = new Label ("version label",
                                                 String()));
    versionLabel->setFont (Font (12.00f, Font::plain));
    versionLabel->setJustificationType (Justification::centredRight);
    versionLabel->setEditable (false, false, false);
    versionLabel->setColour (Label::textColourId, Colour (0xff007f00));
    versionLabel->setColour (TextEditor::textColourId, Colours::black);
    versionLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ToggleButtonOffExample = new ImageButton ("Toggle Button Off Example"));
    ToggleButtonOffExample->setButtonText (TRANS("new button"));
    ToggleButtonOffExample->addListener (this);

    ToggleButtonOffExample->setImages (false, true, true,
                                       ImageCache::getFromMemory (toggle_off_sq_png, toggle_off_sq_pngSize), 1.000f, Colour (0x00000000),
                                       Image(), 1.000f, Colour (0x00000000),
                                       Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ToggleButtonOnExample = new ImageButton ("Toggle Button On Example"));
    ToggleButtonOnExample->setButtonText (TRANS("new button"));
    ToggleButtonOnExample->addListener (this);

    ToggleButtonOnExample->setImages (false, true, true,
                                      ImageCache::getFromMemory (toggle_on_sq_png, toggle_on_sq_pngSize), 1.000f, Colour (0x00000000),
                                      Image(), 1.000f, Colour (0x00000000),
                                      Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Toggle buttons")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::green);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Line borders")));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::green);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LineBorderButton1C = new ImageButton ("Line Border 1C"));
    LineBorderButton1C->setButtonText (TRANS("new button"));

    LineBorderButton1C->setImages (false, true, false,
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1A = new ImageButton ("Line Border 1A"));
    LineBorderButton1A->setButtonText (TRANS("new button"));

    LineBorderButton1A->setImages (false, true, false,
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1B = new ImageButton ("Line Border 1B"));
    LineBorderButton1B->setButtonText (TRANS("new button"));

    LineBorderButton1B->setImages (false, true, false,
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Temporarily removed labels to avoid making wider boxes.")));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::green);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LineBorderButton3A = new ImageButton ("Line Border 3A"));
    LineBorderButton3A->setButtonText (TRANS("new button"));

    LineBorderButton3A->setImages (false, true, false,
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton3B = new ImageButton ("Line Border 3B"));
    LineBorderButton3B->setButtonText (TRANS("new button"));

    LineBorderButton3B->setImages (false, true, false,
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                   ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton3B2 = new ImageButton ("Line Border 3B"));
    LineBorderButton3B2->setButtonText (TRANS("new button"));

    LineBorderButton3B2->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1C2 = new ImageButton ("Line Border 1C"));
    LineBorderButton1C2->setButtonText (TRANS("new button"));

    LineBorderButton1C2->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1A2 = new ImageButton ("Line Border 1A"));
    LineBorderButton1A2->setButtonText (TRANS("new button"));

    LineBorderButton1A2->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1B2 = new ImageButton ("Line Border 1B"));
    LineBorderButton1B2->setButtonText (TRANS("new button"));

    LineBorderButton1B2->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1C3 = new ImageButton ("Line Border 1C"));
    LineBorderButton1C3->setButtonText (TRANS("new button"));

    LineBorderButton1C3->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_horiz_png, line_border_horiz_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (LineBorderButton1B3 = new ImageButton ("Line Border 1B"));
    LineBorderButton1B3->setButtonText (TRANS("new button"));

    LineBorderButton1B3->setImages (false, true, false,
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000),
                                    ImageCache::getFromMemory (line_border_vert_png, line_border_vert_pngSize), 0.600f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOffEx1 = new ImageButton ("Algorithm Switch Off AM"));
    algoSwitchButtonOffEx1->setButtonText (TRANS("new button"));
    algoSwitchButtonOffEx1->addListener (this);

    algoSwitchButtonOffEx1->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOffEx2 = new ImageButton ("Algorithm Switch Off FM"));
    algoSwitchButtonOffEx2->setButtonText (TRANS("new button"));
    algoSwitchButtonOffEx2->addListener (this);

    algoSwitchButtonOffEx2->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOnEx1 = new ImageButton ("Algorithm Switch On AM"));
    algoSwitchButtonOnEx1->setButtonText (TRANS("new button"));
    algoSwitchButtonOnEx1->addListener (this);

    algoSwitchButtonOnEx1->setImages (false, true, true,
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOnEx2 = new ImageButton ("Algorithm Switch On FM"));
    algoSwitchButtonOnEx2->setButtonText (TRANS("new button"));
    algoSwitchButtonOnEx2->addListener (this);

    algoSwitchButtonOnEx2->setImages (false, true, true,
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("AM")));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::textColourId, Colours::green);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           TRANS("FM")));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::textColourId, Colours::green);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("AM")));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (Label::textColourId, Colours::black);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           TRANS("FM")));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::textColourId, Colours::black);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           TRANS("Example AM/FM switches")));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centred);
    label8->setEditable (false, false, false);
    label8->setColour (Label::textColourId, Colours::green);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOn2Ex1 = new ImageButton ("Algorithm Switch On2 AM"));
    algoSwitchButtonOn2Ex1->setButtonText (TRANS("new button"));
    algoSwitchButtonOn2Ex1->addListener (this);

    algoSwitchButtonOn2Ex1->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOn2Ex2 = new ImageButton ("Algorithm Switch On2 FM"));
    algoSwitchButtonOn2Ex2->setButtonText (TRANS("new button"));
    algoSwitchButtonOn2Ex2->addListener (this);

    algoSwitchButtonOn2Ex2->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on2_png, algo_switch_on2_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label9 = new Label ("new label",
                                           TRANS("AM")));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::textColourId, Colours::black);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            TRANS("FM")));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colours::black);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOn3Ex1 = new ImageButton ("Algorithm Switch On3 AM"));
    algoSwitchButtonOn3Ex1->setButtonText (TRANS("new button"));
    algoSwitchButtonOn3Ex1->addListener (this);

    algoSwitchButtonOn3Ex1->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (algoSwitchButtonOn3Ex2 = new ImageButton ("Algorithm Switch On3 FM"));
    algoSwitchButtonOn3Ex2->setButtonText (TRANS("new button"));
    algoSwitchButtonOn3Ex2->addListener (this);

    algoSwitchButtonOn3Ex2->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label11 = new Label ("new label",
                                            TRANS("AM")));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (Label::textColourId, Colours::black);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label12 = new Label ("new label",
                                            TRANS("FM")));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::textColourId, Colours::black);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (TwoOpAMButton = new ImageButton ("Two OP AM Button"));
    TwoOpAMButton->setButtonText (TRANS("new button"));
    TwoOpAMButton->addListener (this);

    TwoOpAMButton->setImages (false, true, false,
                              ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000),
                              ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000),
                              ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (TwoOpFMButton = new ImageButton ("Two OP FM Button"));
    TwoOpFMButton->setButtonText (TRANS("new button"));
    TwoOpFMButton->addListener (this);

    TwoOpFMButton->setImages (false, true, true,
                              ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000),
                              ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000),
                              ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label13 = new Label ("new label",
                                            TRANS("M")));
    label13->setFont (Font (15.00f, Font::plain));
    label13->setJustificationType (Justification::centred);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label14 = new Label ("new label",
                                            TRANS("C")));
    label14->setFont (Font (15.00f, Font::plain));
    label14->setJustificationType (Justification::centred);
    label14->setEditable (false, false, false);
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label15 = new Label ("new label",
                                            TRANS("M")));
    label15->setFont (Font (15.00f, Font::plain));
    label15->setJustificationType (Justification::centred);
    label15->setEditable (false, false, false);
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label16 = new Label ("new label",
                                            TRANS("C")));
    label16->setFont (Font (15.00f, Font::plain));
    label16->setJustificationType (Justification::centred);
    label16->setEditable (false, false, false);
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label17 = new Label ("new label",
                                            TRANS("Example Algorithms")));
    label17->setFont (Font (15.00f, Font::plain));
    label17->setJustificationType (Justification::centred);
    label17->setEditable (false, false, false);
    label17->setColour (Label::textColourId, Colours::green);
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent6 = new GroupComponent ("new group",
                                                             String()));
    groupComponent6->setColour (GroupComponent::outlineColourId, Colours::green);

    addAndMakeVisible (algoSwitchButtonOnEx3 = new ImageButton ("Algorithm Switch On AM"));
    algoSwitchButtonOnEx3->setButtonText (TRANS("new button"));
    algoSwitchButtonOnEx3->addListener (this);

    algoSwitchButtonOnEx3->setImages (false, true, true,
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000),
                                      ImageCache::getFromMemory (algo_switch_on_png, algo_switch_on_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label18 = new Label ("new label",
                                            TRANS("AM")));
    label18->setFont (Font (15.00f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::textColourId, Colours::black);
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOffEx3 = new ImageButton ("Algorithm Switch Off FM"));
    algoSwitchButtonOffEx3->setButtonText (TRANS("new button"));
    algoSwitchButtonOffEx3->addListener (this);

    algoSwitchButtonOffEx3->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label19 = new Label ("new label",
                                            TRANS("FM")));
    label19->setFont (Font (15.00f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::textColourId, Colours::green);
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (TwoOpAMButton2 = new ImageButton ("Two OP AM Button"));
    TwoOpAMButton2->setButtonText (TRANS("new button"));
    TwoOpAMButton2->addListener (this);

    TwoOpAMButton2->setImages (false, true, false,
                               ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000),
                               ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000),
                               ImageCache::getFromMemory (twoopAm_png, twoopAm_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label20 = new Label ("new label",
                                            TRANS("M")));
    label20->setFont (Font (15.00f, Font::plain));
    label20->setJustificationType (Justification::centred);
    label20->setEditable (false, false, false);
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label21 = new Label ("new label",
                                            TRANS("C")));
    label21->setFont (Font (15.00f, Font::plain));
    label21->setJustificationType (Justification::centred);
    label21->setEditable (false, false, false);
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label22 = new Label ("new label",
                                            TRANS("Example Algo Sections w/ Diagram")));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centred);
    label22->setEditable (false, false, false);
    label22->setColour (Label::textColourId, Colours::green);
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOffEx4 = new ImageButton ("Algorithm Switch Off AM"));
    algoSwitchButtonOffEx4->setButtonText (TRANS("new button"));
    algoSwitchButtonOffEx4->addListener (this);

    algoSwitchButtonOffEx4->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label23 = new Label ("new label",
                                            TRANS("AM")));
    label23->setFont (Font (15.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::textColourId, Colours::green);
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOn3Ex3 = new ImageButton ("Algorithm Switch On3 FM"));
    algoSwitchButtonOn3Ex3->setButtonText (TRANS("new button"));
    algoSwitchButtonOn3Ex3->addListener (this);

    algoSwitchButtonOn3Ex3->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label24 = new Label ("new label",
                                            TRANS("FM")));
    label24->setFont (Font (15.00f, Font::plain));
    label24->setJustificationType (Justification::centredLeft);
    label24->setEditable (false, false, false);
    label24->setColour (Label::textColourId, Colours::black);
    label24->setColour (TextEditor::textColourId, Colours::black);
    label24->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (TwoOpFMButton2 = new ImageButton ("Two OP FM Button"));
    TwoOpFMButton2->setButtonText (TRANS("new button"));
    TwoOpFMButton2->addListener (this);

    TwoOpFMButton2->setImages (false, true, true,
                               ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000),
                               ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000),
                               ImageCache::getFromMemory (twoopFm_png, twoopFm_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label25 = new Label ("new label",
                                            TRANS("M")));
    label25->setFont (Font (15.00f, Font::plain));
    label25->setJustificationType (Justification::centred);
    label25->setEditable (false, false, false);
    label25->setColour (TextEditor::textColourId, Colours::black);
    label25->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label26 = new Label ("new label",
                                            TRANS("C")));
    label26->setFont (Font (15.00f, Font::plain));
    label26->setJustificationType (Justification::centred);
    label26->setEditable (false, false, false);
    label26->setColour (TextEditor::textColourId, Colours::black);
    label26->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent7 = new GroupComponent ("new group",
                                                             String()));
    groupComponent7->setColour (GroupComponent::outlineColourId, Colours::green);

    addAndMakeVisible (algoSwitchButtonOffEx5 = new ImageButton ("Algorithm Switch Off AM"));
    algoSwitchButtonOffEx5->setButtonText (TRANS("new button"));
    algoSwitchButtonOffEx5->addListener (this);

    algoSwitchButtonOffEx5->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_off_png, algo_switch_off_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label27 = new Label ("new label",
                                            TRANS("AM")));
    label27->setFont (Font (15.00f, Font::plain));
    label27->setJustificationType (Justification::centredLeft);
    label27->setEditable (false, false, false);
    label27->setColour (Label::textColourId, Colours::green);
    label27->setColour (TextEditor::textColourId, Colours::black);
    label27->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (algoSwitchButtonOn3Ex4 = new ImageButton ("Algorithm Switch On3 FM"));
    algoSwitchButtonOn3Ex4->setButtonText (TRANS("new button"));
    algoSwitchButtonOn3Ex4->addListener (this);

    algoSwitchButtonOn3Ex4->setImages (false, true, true,
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000),
                                       ImageCache::getFromMemory (algo_switch_on3_png, algo_switch_on3_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (label28 = new Label ("new label",
                                            TRANS("FM")));
    label28->setFont (Font (15.00f, Font::plain));
    label28->setJustificationType (Justification::centredLeft);
    label28->setEditable (false, false, false);
    label28->setColour (Label::textColourId, Colours::black);
    label28->setColour (TextEditor::textColourId, Colours::black);
    label28->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (groupComponent8 = new GroupComponent ("new group",
                                                             String()));
    groupComponent8->setColour (GroupComponent::outlineColourId, Colours::green);

    addAndMakeVisible (frequencyLabel9 = new Label ("frequency label",
                                                    TRANS("Algorithm")));
    frequencyLabel9->setTooltip (TRANS("In additive mode, carrier and modulator output are simply summed rather than modulated"));
    frequencyLabel9->setFont (Font (15.00f, Font::plain));
    frequencyLabel9->setJustificationType (Justification::centredLeft);
    frequencyLabel9->setEditable (false, false, false);
    frequencyLabel9->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel9->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label29 = new Label ("new label",
                                            TRANS("Example Algo Section w/o Diagram")));
    label29->setFont (Font (15.00f, Font::plain));
    label29->setJustificationType (Justification::centred);
    label29->setEditable (false, false, false);
    label29->setColour (Label::textColourId, Colours::green);
    label29->setColour (TextEditor::textColourId, Colours::black);
    label29->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label30 = new Label ("new label",
                                            TRANS("Off             On (Bright)          On (Dark)       On (Solid)")));
    label30->setFont (Font (15.00f, Font::plain));
    label30->setJustificationType (Justification::centred);
    label30->setEditable (false, false, false);
    label30->setColour (Label::textColourId, Colours::green);
    label30->setColour (TextEditor::textColourId, Colours::black);
    label30->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (frequencyLabel10 = new Label ("frequency label",
                                                     TRANS("Keyscale Attenuation (db/8ve)")));
    frequencyLabel10->setTooltip (TRANS("Attenuate amplitude with note frequency in db/8ve"));
    frequencyLabel10->setFont (Font (15.00f, Font::plain));
    frequencyLabel10->setJustificationType (Justification::centred);
    frequencyLabel10->setEditable (false, false, false);
    frequencyLabel10->setColour (Label::textColourId, Colour (0xff007f00));
    frequencyLabel10->setColour (TextEditor::textColourId, Colours::black);
    frequencyLabel10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attenuationLabel5 = new Label ("attenuation label",
                                                      TRANS("Velocity Sensitivity")));
    attenuationLabel5->setTooltip (TRANS("Set or disable velocity senstivity"));
    attenuationLabel5->setFont (Font (15.00f, Font::plain));
    attenuationLabel5->setJustificationType (Justification::centred);
    attenuationLabel5->setEditable (false, false, false);
    attenuationLabel5->setColour (Label::textColourId, Colour (0xff007f00));
    attenuationLabel5->setColour (TextEditor::textColourId, Colours::black);
    attenuationLabel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
	LookAndFeel::setDefaultLookAndFeel(new OPLLookAndFeel());

	frequencyComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	frequencyComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	frequencyComboBox->setColour (ComboBox::backgroundColourId, Colours::black);

	frequencyComboBox->addItem ("x1/2", 16);		// can't use 0 :(
    frequencyComboBox->addItem ("x1", 1);
    frequencyComboBox->addItem ("x2", 2);
    frequencyComboBox->addItem ("x3", 3);
    frequencyComboBox->addItem ("x4", 4);
    frequencyComboBox->addItem ("x5", 5);
    frequencyComboBox->addItem ("x6", 6);
    frequencyComboBox->addItem ("x7", 7);
    frequencyComboBox->addItem ("x8", 8);
    frequencyComboBox->addItem ("x9", 9);
    frequencyComboBox->addItem ("x10", 10);
    frequencyComboBox->addItem ("x12", 12);
    frequencyComboBox->addItem ("x15", 15);

	frequencyComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	frequencyComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	frequencyComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);
	frequencyComboBox2->addItem ("x1/2", 16);		// can't use 0 :(
    frequencyComboBox2->addItem ("x1", 1);
    frequencyComboBox2->addItem ("x2", 2);
    frequencyComboBox2->addItem ("x3", 3);
    frequencyComboBox2->addItem ("x4", 4);
    frequencyComboBox2->addItem ("x5", 5);
    frequencyComboBox2->addItem ("x6", 6);
    frequencyComboBox2->addItem ("x7", 7);
    frequencyComboBox2->addItem ("x8", 8);
    frequencyComboBox2->addItem ("x9", 9);
    frequencyComboBox2->addItem ("x10", 10);
    frequencyComboBox2->addItem ("x12", 12);
    frequencyComboBox2->addItem ("x15", 15);

	velocityComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	velocityComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	velocityComboBox->setColour (ComboBox::backgroundColourId, Colours::black);
	velocityComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	velocityComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	velocityComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);

	algorithmComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	algorithmComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	algorithmComboBox->setColour (ComboBox::backgroundColourId, Colours::black);

	keyscaleAttenuationComboBox->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox->setColour (ComboBox::buttonColourId, Colours::black);
	keyscaleAttenuationComboBox->setColour (ComboBox::backgroundColourId, Colours::black);
	keyscaleAttenuationComboBox2->setColour (ComboBox::textColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::outlineColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::arrowColourId, Colour (COLOUR_MID));
	keyscaleAttenuationComboBox2->setColour (ComboBox::buttonColourId, Colours::black);
	keyscaleAttenuationComboBox2->setColour (ComboBox::backgroundColourId, Colours::black);

	percussionComboBox->setColour(ComboBox::textColourId, Colour(COLOUR_MID));
	percussionComboBox->setColour(ComboBox::outlineColourId, Colour(COLOUR_MID));
	percussionComboBox->setColour(ComboBox::arrowColourId, Colour(COLOUR_MID));
	percussionComboBox->setColour(ComboBox::buttonColourId, Colours::black);
	percussionComboBox->setColour(ComboBox::backgroundColourId, Colours::black);

	sineImageButton->setClickingTogglesState(true);
	sineImageButton->setRepaintsOnMouseActivity(false);
	abssineImageButton->setClickingTogglesState(true);
	abssineImageButton->setRepaintsOnMouseActivity(false);
	halfsineImageButton->setClickingTogglesState(true);
	halfsineImageButton->setRepaintsOnMouseActivity(false);
	quartersineImageButton->setClickingTogglesState(true);
	quartersineImageButton->setRepaintsOnMouseActivity(false);
	alternatingsineImageButton->setClickingTogglesState(true);
	alternatingsineImageButton->setRepaintsOnMouseActivity(false);
	camelsineImageButton->setClickingTogglesState(true);
	camelsineImageButton->setRepaintsOnMouseActivity(false);
	squareImageButton->setClickingTogglesState(true);
	squareImageButton->setRepaintsOnMouseActivity(false);
	logsawImageButton->setClickingTogglesState(true);
	logsawImageButton->setRepaintsOnMouseActivity(false);

	sineImageButton2->setClickingTogglesState(true);
	sineImageButton2->setRepaintsOnMouseActivity(false);
	abssineImageButton2->setClickingTogglesState(true);
	abssineImageButton2->setRepaintsOnMouseActivity(false);
	halfsineImageButton2->setClickingTogglesState(true);
	halfsineImageButton2->setRepaintsOnMouseActivity(false);
	quartersineImageButton2->setClickingTogglesState(true);
	quartersineImageButton2->setRepaintsOnMouseActivity(false);
	alternatingsineImageButton2->setClickingTogglesState(true);
	alternatingsineImageButton2->setRepaintsOnMouseActivity(false);
	camelsineImageButton2->setClickingTogglesState(true);
	camelsineImageButton2->setRepaintsOnMouseActivity(false);
	squareImageButton2->setClickingTogglesState(true);
	squareImageButton2->setRepaintsOnMouseActivity(false);
	logsawImageButton2->setClickingTogglesState(true);
	logsawImageButton2->setRepaintsOnMouseActivity(false);

	recordButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	tremoloButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	vibratoButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	keyscaleEnvButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	sustainButton->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	tremoloButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	vibratoButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	keyscaleEnvButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));
	sustainButton2->setColour(TextButton::buttonColourId, Colour(COLOUR_MID));

	Font fw(Font::getDefaultMonospacedFontName(), 14, Font::bold);
	for (unsigned int i = 0; i < channels.size(); ++i)
	{
		Label *channel = new Label("chan label", TRANS("-"));
		channel->setColour(Label::textColourId, Colour(COLOUR_MID));
		channel->setJustificationType(Justification::centred);
		addAndMakeVisible(channel);
		channels[i] = channel;
	}
	versionLabel->setText(String(ProjectInfo::versionString), NotificationType::dontSendNotification);
    //[/UserPreSize]

    setSize (860, 520);


    //[Constructor] You can add your own custom stuff here..
	processor = ownerFilter;
	startTimer(1000/30);
    //[/Constructor]
}

PluginGui::~PluginGui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    frequencyComboBox = nullptr;
    frequencyLabel = nullptr;
    aSlider = nullptr;
    aLabel = nullptr;
    dSlider = nullptr;
    dLabel = nullptr;
    sSlider = nullptr;
    dLabel2 = nullptr;
    rSlider = nullptr;
    rLabel = nullptr;
    attenuationSlider = nullptr;
    attenuationLabel = nullptr;
    dbLabel = nullptr;
    sineImageButton = nullptr;
    halfsineImageButton = nullptr;
    abssineImageButton = nullptr;
    quartersineImageButton = nullptr;
    waveLabel = nullptr;
    tremoloButton = nullptr;
    vibratoButton = nullptr;
    sustainButton = nullptr;
    keyscaleEnvButton = nullptr;
    dbLabel2 = nullptr;
    groupComponent2 = nullptr;
    frequencyComboBox2 = nullptr;
    frequencyLabel3 = nullptr;
    aSlider2 = nullptr;
    aLabel2 = nullptr;
    dSlider2 = nullptr;
    dLabel3 = nullptr;
    sSlider2 = nullptr;
    dLabel4 = nullptr;
    rSlider2 = nullptr;
    rLabel2 = nullptr;
    attenuationSlider2 = nullptr;
    attenuationLabel2 = nullptr;
    dbLabel3 = nullptr;
    sineImageButton2 = nullptr;
    halfsineImageButton2 = nullptr;
    abssineImageButton2 = nullptr;
    quartersineImageButton2 = nullptr;
    waveLabel2 = nullptr;
    tremoloButton2 = nullptr;
    vibratoButton2 = nullptr;
    sustainButton2 = nullptr;
    keyscaleEnvButton2 = nullptr;
    frequencyLabel4 = nullptr;
    groupComponent3 = nullptr;
    tremoloSlider = nullptr;
    frequencyLabel5 = nullptr;
    dbLabel5 = nullptr;
    vibratoSlider = nullptr;
    frequencyLabel6 = nullptr;
    dbLabel6 = nullptr;
    feedbackSlider = nullptr;
    frequencyLabel7 = nullptr;
    velocityComboBox = nullptr;
    velocityComboBox2 = nullptr;
    attenuationLabel4 = nullptr;
    alternatingsineImageButton = nullptr;
    camelsineImageButton = nullptr;
    squareImageButton = nullptr;
    logsawImageButton = nullptr;
    alternatingsineImageButton2 = nullptr;
    camelsineImageButton2 = nullptr;
    squareImageButton2 = nullptr;
    logsawImageButton2 = nullptr;
    algorithmComboBox = nullptr;
    frequencyLabel8 = nullptr;
    dbLabel4 = nullptr;
    keyscaleAttenuationComboBox2 = nullptr;
    keyscaleAttenuationComboBox = nullptr;
    groupComponent4 = nullptr;
    groupComponent5 = nullptr;
    emulatorSlider = nullptr;
    emulatorLabel = nullptr;
    emulatorLabel2 = nullptr;
    recordButton = nullptr;
    percussionComboBox = nullptr;
    percussionLabel = nullptr;
    exportButton = nullptr;
    loadButton = nullptr;
    versionLabel = nullptr;
    ToggleButtonOffExample = nullptr;
    ToggleButtonOnExample = nullptr;
    label = nullptr;
    label2 = nullptr;
    LineBorderButton1C = nullptr;
    LineBorderButton1A = nullptr;
    LineBorderButton1B = nullptr;
    label3 = nullptr;
    LineBorderButton3A = nullptr;
    LineBorderButton3B = nullptr;
    LineBorderButton3B2 = nullptr;
    LineBorderButton1C2 = nullptr;
    LineBorderButton1A2 = nullptr;
    LineBorderButton1B2 = nullptr;
    LineBorderButton1C3 = nullptr;
    LineBorderButton1B3 = nullptr;
    algoSwitchButtonOffEx1 = nullptr;
    algoSwitchButtonOffEx2 = nullptr;
    algoSwitchButtonOnEx1 = nullptr;
    algoSwitchButtonOnEx2 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    algoSwitchButtonOn2Ex1 = nullptr;
    algoSwitchButtonOn2Ex2 = nullptr;
    label9 = nullptr;
    label10 = nullptr;
    algoSwitchButtonOn3Ex1 = nullptr;
    algoSwitchButtonOn3Ex2 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    TwoOpAMButton = nullptr;
    TwoOpFMButton = nullptr;
    label13 = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    groupComponent6 = nullptr;
    algoSwitchButtonOnEx3 = nullptr;
    label18 = nullptr;
    algoSwitchButtonOffEx3 = nullptr;
    label19 = nullptr;
    TwoOpAMButton2 = nullptr;
    label20 = nullptr;
    label21 = nullptr;
    label22 = nullptr;
    algoSwitchButtonOffEx4 = nullptr;
    label23 = nullptr;
    algoSwitchButtonOn3Ex3 = nullptr;
    label24 = nullptr;
    TwoOpFMButton2 = nullptr;
    label25 = nullptr;
    label26 = nullptr;
    groupComponent7 = nullptr;
    algoSwitchButtonOffEx5 = nullptr;
    label27 = nullptr;
    algoSwitchButtonOn3Ex4 = nullptr;
    label28 = nullptr;
    groupComponent8 = nullptr;
    frequencyLabel9 = nullptr;
    label29 = nullptr;
    label30 = nullptr;
    frequencyLabel10 = nullptr;
    attenuationLabel5 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PluginGui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginGui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent->setBounds (16, 80, 408, 312);
    frequencyComboBox->setBounds (149, 165, 66, 24);
    frequencyLabel->setBounds (32, 165, 112, 24);
    aSlider->setBounds (30, 203, 30, 88);
    aLabel->setBounds (30, 293, 30, 24);
    dSlider->setBounds (70, 203, 30, 88);
    dLabel->setBounds (70, 293, 30, 24);
    sSlider->setBounds (110, 203, 30, 88);
    dLabel2->setBounds (110, 293, 30, 24);
    rSlider->setBounds (150, 203, 30, 88);
    rLabel->setBounds (150, 293, 30, 24);
    attenuationSlider->setBounds (130, 350, 232, 24);
    attenuationLabel->setBounds (32, 350, 106, 24);
    dbLabel->setBounds (362, 350, 32, 24);
    sineImageButton->setBounds (88, 105, 34, 30);
    halfsineImageButton->setBounds (128, 105, 34, 30);
    abssineImageButton->setBounds (168, 105, 34, 30);
    quartersineImageButton->setBounds (208, 105, 34, 30);
    waveLabel->setBounds (32, 107, 48, 24);
    tremoloButton->setBounds (323, 162, 80, 24);
    vibratoButton->setBounds (243, 162, 72, 24);
    sustainButton->setBounds (243, 198, 70, 24);
    keyscaleEnvButton->setBounds (323, 186, 101, 48);
    dbLabel2->setBounds (792, 712, 72, 16);
    groupComponent2->setBounds (440, 80, 408, 312);
    frequencyComboBox2->setBounds (573, 165, 66, 24);
    frequencyLabel3->setBounds (456, 165, 112, 24);
    aSlider2->setBounds (462, 203, 30, 88);
    aLabel2->setBounds (462, 293, 30, 24);
    dSlider2->setBounds (510, 203, 30, 88);
    dLabel3->setBounds (510, 293, 30, 24);
    sSlider2->setBounds (558, 203, 30, 88);
    dLabel4->setBounds (558, 293, 30, 24);
    rSlider2->setBounds (606, 203, 30, 88);
    rLabel2->setBounds (606, 293, 30, 24);
    attenuationSlider2->setBounds (554, 350, 232, 24);
    attenuationLabel2->setBounds (456, 350, 106, 24);
    dbLabel3->setBounds (782, 350, 40, 24);
    sineImageButton2->setBounds (512, 105, 34, 30);
    halfsineImageButton2->setBounds (552, 105, 34, 30);
    abssineImageButton2->setBounds (592, 105, 34, 30);
    quartersineImageButton2->setBounds (632, 105, 34, 30);
    waveLabel2->setBounds (456, 107, 48, 24);
    tremoloButton2->setBounds (746, 162, 80, 24);
    vibratoButton2->setBounds (666, 162, 72, 24);
    sustainButton2->setBounds (666, 198, 70, 24);
    keyscaleEnvButton2->setBounds (746, 186, 102, 48);
    frequencyLabel4->setBounds (752, 280, 88, 48);
    groupComponent3->setBounds (16, 400, 832, 96);
    tremoloSlider->setBounds (149, 424, 80, 24);
    frequencyLabel5->setBounds (40, 424, 104, 24);
    dbLabel5->setBounds (230, 416, 32, 40);
    vibratoSlider->setBounds (149, 456, 80, 24);
    frequencyLabel6->setBounds (40, 456, 96, 24);
    dbLabel6->setBounds (230, 448, 48, 40);
    feedbackSlider->setBounds (190, 232, 30, 59);
    frequencyLabel7->setBounds (190, 293, 30, 24);
    velocityComboBox->setBounds (244, 249, 72, 24);
    velocityComboBox2->setBounds (672, 249, 72, 24);
    attenuationLabel4->setBounds (664, 280, 80, 48);
    alternatingsineImageButton->setBounds (288, 105, 34, 30);
    camelsineImageButton->setBounds (248, 105, 34, 30);
    squareImageButton->setBounds (328, 105, 34, 30);
    logsawImageButton->setBounds (368, 105, 34, 30);
    alternatingsineImageButton2->setBounds (714, 106, 34, 30);
    camelsineImageButton2->setBounds (674, 106, 34, 30);
    squareImageButton2->setBounds (754, 106, 34, 30);
    logsawImageButton2->setBounds (794, 106, 34, 30);
    algorithmComboBox->setBounds (314, 450, 112, 24);
    frequencyLabel8->setBounds (304, 422, 136, 24);
    dbLabel4->setBounds (792, 688, 72, 16);
    keyscaleAttenuationComboBox2->setBounds (763, 249, 60, 24);
    keyscaleAttenuationComboBox->setBounds (338, 249, 60, 24);
    groupComponent4->setBounds (16, 8, 832, 64);
    groupComponent5->setBounds (24, 712, 408, 64);
    emulatorSlider->setBounds (208, 736, 40, 24);
    emulatorLabel->setBounds (120, 736, 72, 24);
    emulatorLabel2->setBounds (256, 736, 72, 24);
    recordButton->setBounds (32, 680, 224, 24);
    percussionComboBox->setBounds (476, 450, 112, 24);
    percussionLabel->setBounds (456, 422, 152, 24);
    exportButton->setBounds (644, 455, 168, 24);
    loadButton->setBounds (644, 422, 168, 24);
    versionLabel->setBounds (640, 496, 198, 16);
    ToggleButtonOffExample->setBounds (1032, 584, 12, 12);
    ToggleButtonOnExample->setBounds (1064, 584, 12, 12);
    label->setBounds (1000, 608, 104, 24);
    label2->setBounds (872, 608, 104, 24);
    LineBorderButton1C->setBounds (20, 332, 400, 6);
    LineBorderButton1A->setBounds (20, 144, 400, 6);
    LineBorderButton1B->setBounds (230, 148, 6, 186);
    label3->setBounds (776, 736, 104, 56);
    LineBorderButton3A->setBounds (288, 410, 6, 82);
    LineBorderButton3B->setBounds (450, 410, 6, 82);
    LineBorderButton3B2->setBounds (612, 410, 6, 82);
    LineBorderButton1C2->setBounds (444, 332, 400, 6);
    LineBorderButton1A2->setBounds (444, 144, 400, 6);
    LineBorderButton1B2->setBounds (654, 148, 6, 186);
    LineBorderButton1C3->setBounds (892, 584, 20, 6);
    LineBorderButton1B3->setBounds (936, 576, 6, 20);
    algoSwitchButtonOffEx1->setBounds (952, 701, 64, 24);
    algoSwitchButtonOffEx2->setBounds (952, 727, 64, 24);
    algoSwitchButtonOnEx1->setBounds (1040, 701, 64, 24);
    algoSwitchButtonOnEx2->setBounds (1040, 727, 64, 24);
    label4->setBounds (970, 701, 32, 24);
    label5->setBounds (971, 727, 32, 24);
    label6->setBounds (1057, 701, 32, 24);
    label7->setBounds (1058, 727, 32, 24);
    label8->setBounds (944, 816, 320, 24);
    algoSwitchButtonOn2Ex1->setBounds (1128, 700, 64, 24);
    algoSwitchButtonOn2Ex2->setBounds (1128, 727, 64, 24);
    label9->setBounds (1145, 700, 32, 24);
    label10->setBounds (1146, 727, 32, 24);
    algoSwitchButtonOn3Ex1->setBounds (1216, 700, 64, 24);
    algoSwitchButtonOn3Ex2->setBounds (1216, 727, 64, 24);
    label11->setBounds (1233, 700, 31, 24);
    label12->setBounds (1234, 727, 32, 24);
    TwoOpAMButton->setBounds (1173, 484, 60, 56);
    TwoOpFMButton->setBounds (1156, 568, 80, 26);
    label13->setBounds (1179, 489, 24, 24);
    label14->setBounds (1179, 518, 24, 24);
    label15->setBounds (1166, 572, 24, 24);
    label16->setBounds (1195, 572, 24, 24);
    label17->setBounds (1128, 608, 136, 24);
    groupComponent6->setBounds (933, 56, 168, 95);
    algoSwitchButtonOnEx3->setBounds (949, 82, 64, 24);
    label18->setBounds (966, 82, 32, 24);
    algoSwitchButtonOffEx3->setBounds (949, 108, 64, 24);
    label19->setBounds (968, 108, 32, 24);
    TwoOpAMButton2->setBounds (1029, 77, 60, 56);
    label20->setBounds (1035, 82, 24, 24);
    label21->setBounds (1035, 111, 24, 24);
    label22->setBounds (952, 160, 328, 40);
    algoSwitchButtonOffEx4->setBounds (1125, 82, 64, 24);
    label23->setBounds (1143, 82, 32, 24);
    algoSwitchButtonOn3Ex3->setBounds (1125, 109, 64, 24);
    label24->setBounds (1143, 109, 32, 24);
    TwoOpFMButton2->setBounds (1196, 94, 80, 26);
    label25->setBounds (1206, 98, 24, 24);
    label26->setBounds (1235, 98, 24, 24);
    groupComponent7->setBounds (1112, 56, 168, 95);
    algoSwitchButtonOffEx5->setBounds (1037, 250, 64, 24);
    label27->setBounds (1055, 250, 32, 24);
    algoSwitchButtonOn3Ex4->setBounds (1103, 250, 64, 24);
    label28->setBounds (1121, 250, 32, 24);
    groupComponent8->setBounds (1018, 200, 168, 95);
    frequencyLabel9->setBounds (1067, 216, 72, 24);
    label29->setBounds (944, 304, 328, 40);
    label30->setBounds (961, 768, 319, 24);
    frequencyLabel10->setBounds (328, 280, 88, 48);
    attenuationLabel5->setBounds (240, 280, 80, 48);
    //[UserResized] Add your own custom resize handling here..
	for (unsigned int i = 0; i < channels.size(); ++i)
		channels[i]->setBounds(68+88*i, 36, 20, 20);
    //[/UserResized]
}

void PluginGui::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]

    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == frequencyComboBox)
    {
        //[UserComboBoxCode_frequencyComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId();
		if (id > 15) id = 0;
		processor->setEnumParameter("Modulator Frequency Multiplier", id);
        //[/UserComboBoxCode_frequencyComboBox]
    }
    else if (comboBoxThatHasChanged == frequencyComboBox2)
    {
        //[UserComboBoxCode_frequencyComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId();
		if (id > 15) id = 0;
		processor->setEnumParameter("Carrier Frequency Multiplier", id);
        //[/UserComboBoxCode_frequencyComboBox2]
    }
    else if (comboBoxThatHasChanged == velocityComboBox)
    {
        //[UserComboBoxCode_velocityComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Modulator Velocity Sensitivity", id);
        //[/UserComboBoxCode_velocityComboBox]
    }
    else if (comboBoxThatHasChanged == velocityComboBox2)
    {
        //[UserComboBoxCode_velocityComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Carrier Velocity Sensitivity", id);
        //[/UserComboBoxCode_velocityComboBox2]
    }
    else if (comboBoxThatHasChanged == algorithmComboBox)
    {
        //[UserComboBoxCode_algorithmComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Algorithm", id);
        //[/UserComboBoxCode_algorithmComboBox]
    }
    else if (comboBoxThatHasChanged == keyscaleAttenuationComboBox2)
    {
        //[UserComboBoxCode_keyscaleAttenuationComboBox2] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Carrier Keyscale Level", id);
        //[/UserComboBoxCode_keyscaleAttenuationComboBox2]
    }
    else if (comboBoxThatHasChanged == keyscaleAttenuationComboBox)
    {
        //[UserComboBoxCode_keyscaleAttenuationComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Modulator Keyscale Level", id);
        //[/UserComboBoxCode_keyscaleAttenuationComboBox]
    }
    else if (comboBoxThatHasChanged == percussionComboBox)
    {
        //[UserComboBoxCode_percussionComboBox] -- add your combo box handling code here..
		int id = comboBoxThatHasChanged->getSelectedId() - 1;
		processor->setEnumParameter("Percussion Mode", id);
        //[/UserComboBoxCode_percussionComboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void PluginGui::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == aSlider)
    {
        //[UserSliderCode_aSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Attack", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_aSlider]
    }
    else if (sliderThatWasMoved == dSlider)
    {
        //[UserSliderCode_dSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Decay", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_dSlider]
    }
    else if (sliderThatWasMoved == sSlider)
    {
        //[UserSliderCode_sSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Sustain Level", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_sSlider]
    }
    else if (sliderThatWasMoved == rSlider)
    {
        //[UserSliderCode_rSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Release", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_rSlider]
    }
    else if (sliderThatWasMoved == attenuationSlider)
    {
        //[UserSliderCode_attenuationSlider] -- add your slider handling code here..
		processor->setEnumParameter("Modulator Attenuation", -(int)(sliderThatWasMoved->getValue()/0.75));
        //[/UserSliderCode_attenuationSlider]
    }
    else if (sliderThatWasMoved == aSlider2)
    {
        //[UserSliderCode_aSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Attack", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_aSlider2]
    }
    else if (sliderThatWasMoved == dSlider2)
    {
        //[UserSliderCode_dSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Decay", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_dSlider2]
    }
    else if (sliderThatWasMoved == sSlider2)
    {
        //[UserSliderCode_sSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Sustain Level", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_sSlider2]
    }
    else if (sliderThatWasMoved == rSlider2)
    {
        //[UserSliderCode_rSlider2] -- add your slider handling code here..
		processor->setIntParameter("Carrier Release", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_rSlider2]
    }
    else if (sliderThatWasMoved == attenuationSlider2)
    {
        //[UserSliderCode_attenuationSlider2] -- add your slider handling code here..
		processor->setEnumParameter("Carrier Attenuation", -(int)(sliderThatWasMoved->getValue()/0.75));
        //[/UserSliderCode_attenuationSlider2]
    }
    else if (sliderThatWasMoved == tremoloSlider)
    {
        //[UserSliderCode_tremoloSlider] -- add your slider handling code here..
		processor->setEnumParameter("Tremolo Depth", sliderThatWasMoved->getValue() < 2.0 ? 0 : 1);
        //[/UserSliderCode_tremoloSlider]
    }
    else if (sliderThatWasMoved == vibratoSlider)
    {
        //[UserSliderCode_vibratoSlider] -- add your slider handling code here..
		processor->setEnumParameter("Vibrato Depth", sliderThatWasMoved->getValue() < 8.0 ? 0 : 1);
        //[/UserSliderCode_vibratoSlider]
    }
    else if (sliderThatWasMoved == feedbackSlider)
    {
        //[UserSliderCode_feedbackSlider] -- add your slider handling code here..
		processor->setIntParameter("Modulator Feedback", (int)sliderThatWasMoved->getValue());
        //[/UserSliderCode_feedbackSlider]
    }
    else if (sliderThatWasMoved == emulatorSlider)
    {
        //[UserSliderCode_emulatorSlider] -- add your slider handling code here..
        //[/UserSliderCode_emulatorSlider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void PluginGui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == sineImageButton)
    {
        //[UserButtonCode_sineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 0);
        //[/UserButtonCode_sineImageButton]
    }
    else if (buttonThatWasClicked == halfsineImageButton)
    {
        //[UserButtonCode_halfsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 1);
        //[/UserButtonCode_halfsineImageButton]
    }
    else if (buttonThatWasClicked == abssineImageButton)
    {
        //[UserButtonCode_abssineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 2);
        //[/UserButtonCode_abssineImageButton]
    }
    else if (buttonThatWasClicked == quartersineImageButton)
    {
        //[UserButtonCode_quartersineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 3);
        //[/UserButtonCode_quartersineImageButton]
    }
    else if (buttonThatWasClicked == tremoloButton)
    {
        //[UserButtonCode_tremoloButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Tremolo", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_tremoloButton]
    }
    else if (buttonThatWasClicked == vibratoButton)
    {
        //[UserButtonCode_vibratoButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Vibrato", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_vibratoButton]
    }
    else if (buttonThatWasClicked == sustainButton)
    {
        //[UserButtonCode_sustainButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Sustain", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_sustainButton]
    }
    else if (buttonThatWasClicked == keyscaleEnvButton)
    {
        //[UserButtonCode_keyscaleEnvButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Keyscale Rate", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_keyscaleEnvButton]
    }
    else if (buttonThatWasClicked == sineImageButton2)
    {
        //[UserButtonCode_sineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 0);
        //[/UserButtonCode_sineImageButton2]
    }
    else if (buttonThatWasClicked == halfsineImageButton2)
    {
        //[UserButtonCode_halfsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 1);
        //[/UserButtonCode_halfsineImageButton2]
    }
    else if (buttonThatWasClicked == abssineImageButton2)
    {
        //[UserButtonCode_abssineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 2);
        //[/UserButtonCode_abssineImageButton2]
    }
    else if (buttonThatWasClicked == quartersineImageButton2)
    {
        //[UserButtonCode_quartersineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 3);
        //[/UserButtonCode_quartersineImageButton2]
    }
    else if (buttonThatWasClicked == tremoloButton2)
    {
        //[UserButtonCode_tremoloButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Tremolo", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_tremoloButton2]
    }
    else if (buttonThatWasClicked == vibratoButton2)
    {
        //[UserButtonCode_vibratoButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Vibrato", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_vibratoButton2]
    }
    else if (buttonThatWasClicked == sustainButton2)
    {
        //[UserButtonCode_sustainButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Sustain", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_sustainButton2]
    }
    else if (buttonThatWasClicked == keyscaleEnvButton2)
    {
        //[UserButtonCode_keyscaleEnvButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Keyscale Rate", buttonThatWasClicked->getToggleState() ? 1 : 0);
        //[/UserButtonCode_keyscaleEnvButton2]
    }
    else if (buttonThatWasClicked == alternatingsineImageButton)
    {
        //[UserButtonCode_alternatingsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 4);
        //[/UserButtonCode_alternatingsineImageButton]
    }
    else if (buttonThatWasClicked == camelsineImageButton)
    {
        //[UserButtonCode_camelsineImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 5);
        //[/UserButtonCode_camelsineImageButton]
    }
    else if (buttonThatWasClicked == squareImageButton)
    {
        //[UserButtonCode_squareImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 6);
        //[/UserButtonCode_squareImageButton]
    }
    else if (buttonThatWasClicked == logsawImageButton)
    {
        //[UserButtonCode_logsawImageButton] -- add your button handler code here..
		processor->setEnumParameter("Modulator Wave", 7);
        //[/UserButtonCode_logsawImageButton]
    }
    else if (buttonThatWasClicked == alternatingsineImageButton2)
    {
        //[UserButtonCode_alternatingsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 4);
        //[/UserButtonCode_alternatingsineImageButton2]
    }
    else if (buttonThatWasClicked == camelsineImageButton2)
    {
        //[UserButtonCode_camelsineImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 5);
        //[/UserButtonCode_camelsineImageButton2]
    }
    else if (buttonThatWasClicked == squareImageButton2)
    {
        //[UserButtonCode_squareImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 6);
        //[/UserButtonCode_squareImageButton2]
    }
    else if (buttonThatWasClicked == logsawImageButton2)
    {
        //[UserButtonCode_logsawImageButton2] -- add your button handler code here..
		processor->setEnumParameter("Carrier Wave", 7);
        //[/UserButtonCode_logsawImageButton2]
    }
    else if (buttonThatWasClicked == recordButton)
    {
        //[UserButtonCode_recordButton] -- add your button handler code here..
        //[/UserButtonCode_recordButton]
    }
    else if (buttonThatWasClicked == exportButton)
    {
        //[UserButtonCode_exportButton] -- add your button handler code here..
		WildcardFileFilter wildcardFilter("*.sbi", String::empty, "SBI files");
		FileBrowserComponent browser(FileBrowserComponent::saveMode + FileBrowserComponent::canSelectFiles,
			instrumentSaveDirectory,
			&wildcardFilter,
			nullptr);
		FileChooserDialogBox dialogBox("Export to",
			"Specify SBI output file",
			browser,
			true,
			Colours::darkgreen);
		if (dialogBox.show())
		{
			File selectedFile = browser.getSelectedFile(0);
			instrumentSaveDirectory = browser.getRoot();
			processor->saveInstrumentToFile(selectedFile.getFullPathName());
		}
        //[/UserButtonCode_exportButton]
    }
    else if (buttonThatWasClicked == loadButton)
    {
        //[UserButtonCode_loadButton] -- add your button handler code here..
		WildcardFileFilter wildcardFilter("*.sbi", String::empty, "SBI files");
		FileBrowserComponent browser(FileBrowserComponent::openMode + FileBrowserComponent::canSelectFiles,
			instrumentLoadDirectory,
			&wildcardFilter,
			nullptr);
		FileChooserDialogBox dialogBox("Load",
			"Select SBI instrument file",
			browser,
			false,
			Colours::darkgreen);
		if (dialogBox.show())
		{
			File selectedFile = browser.getSelectedFile(0);
			instrumentLoadDirectory = browser.getRoot();
			processor->loadInstrumentFromFile(selectedFile.getFullPathName());
		}
        //[/UserButtonCode_loadButton]
    }
    else if (buttonThatWasClicked == ToggleButtonOffExample)
    {
        //[UserButtonCode_ToggleButtonOffExample] -- add your button handler code here..
        //[/UserButtonCode_ToggleButtonOffExample]
    }
    else if (buttonThatWasClicked == ToggleButtonOnExample)
    {
        //[UserButtonCode_ToggleButtonOnExample] -- add your button handler code here..
        //[/UserButtonCode_ToggleButtonOnExample]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOffEx1)
    {
        //[UserButtonCode_algoSwitchButtonOffEx1] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOffEx1]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOffEx2)
    {
        //[UserButtonCode_algoSwitchButtonOffEx2] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOffEx2]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOnEx1)
    {
        //[UserButtonCode_algoSwitchButtonOnEx1] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOnEx1]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOnEx2)
    {
        //[UserButtonCode_algoSwitchButtonOnEx2] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOnEx2]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn2Ex1)
    {
        //[UserButtonCode_algoSwitchButtonOn2Ex1] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn2Ex1]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn2Ex2)
    {
        //[UserButtonCode_algoSwitchButtonOn2Ex2] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn2Ex2]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn3Ex1)
    {
        //[UserButtonCode_algoSwitchButtonOn3Ex1] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn3Ex1]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn3Ex2)
    {
        //[UserButtonCode_algoSwitchButtonOn3Ex2] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn3Ex2]
    }
    else if (buttonThatWasClicked == TwoOpAMButton)
    {
        //[UserButtonCode_TwoOpAMButton] -- add your button handler code here..
        //[/UserButtonCode_TwoOpAMButton]
    }
    else if (buttonThatWasClicked == TwoOpFMButton)
    {
        //[UserButtonCode_TwoOpFMButton] -- add your button handler code here..
        //[/UserButtonCode_TwoOpFMButton]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOnEx3)
    {
        //[UserButtonCode_algoSwitchButtonOnEx3] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOnEx3]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOffEx3)
    {
        //[UserButtonCode_algoSwitchButtonOffEx3] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOffEx3]
    }
    else if (buttonThatWasClicked == TwoOpAMButton2)
    {
        //[UserButtonCode_TwoOpAMButton2] -- add your button handler code here..
        //[/UserButtonCode_TwoOpAMButton2]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOffEx4)
    {
        //[UserButtonCode_algoSwitchButtonOffEx4] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOffEx4]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn3Ex3)
    {
        //[UserButtonCode_algoSwitchButtonOn3Ex3] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn3Ex3]
    }
    else if (buttonThatWasClicked == TwoOpFMButton2)
    {
        //[UserButtonCode_TwoOpFMButton2] -- add your button handler code here..
        //[/UserButtonCode_TwoOpFMButton2]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOffEx5)
    {
        //[UserButtonCode_algoSwitchButtonOffEx5] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOffEx5]
    }
    else if (buttonThatWasClicked == algoSwitchButtonOn3Ex4)
    {
        //[UserButtonCode_algoSwitchButtonOn3Ex4] -- add your button handler code here..
        //[/UserButtonCode_algoSwitchButtonOn3Ex4]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
	//==============================================================================
    // These methods implement the FileDragAndDropTarget interface, and allow our component
    // to accept drag-and-drop of files..

    bool PluginGui::isInterestedInFileDrag (const StringArray& files)
    {
        return 1 == files.size() && (
			files[0].toLowerCase().endsWith(".sbi")
			|| files[0].toLowerCase().endsWith(".sb2")
			|| files[0].toLowerCase().endsWith(".sb0")
		);
    }

    void PluginGui::fileDragEnter (const StringArray& files, int x, int y)
    {
    }

    void PluginGui::fileDragMove (const StringArray& files, int x, int y)
    {
    }

    void PluginGui::fileDragExit (const StringArray& files)
    {
    }

    void PluginGui::filesDropped (const StringArray& files, int x, int y)
    {
		if (isInterestedInFileDrag(files)) {
			processor->loadInstrumentFromFile(files[0]);
		}
    }

	void PluginGui::timerCallback()
	{
		for (int i = 0; i < Hiopl::CHANNELS; ++i) {
			channels[i]->setText(processor->getChannelEnvelopeStage(i + 1), NotificationType::dontSendNotification);
		}
			//channels[i]->setState(processor->isChannelActive(i+1) ? Button::buttonDown : Button::buttonNormal);
	}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PluginGui" componentName=""
                 parentClasses="public AudioProcessorEditor, public FileDragAndDropTarget, public DragAndDropContainer, public Timer"
                 constructorParams="AdlibBlasterAudioProcessor* ownerFilter" variableInitialisers=" AudioProcessorEditor (ownerFilter)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="860" initialHeight="520">
  <BACKGROUND backgroundColour="ff000000"/>
  <GROUPCOMPONENT name="new group" id="d2c7c07bf2d78c30" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="16 80 408 312" outlinecol="ff007f00"
                  textcol="ff007f00" title="Modulator" textpos="33"/>
  <COMBOBOX name="frequency combo box" id="4e65faf3d9442460" memberName="frequencyComboBox"
            virtualName="" explicitFocusOrder="0" pos="149 165 66 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="7414532477c7f744" memberName="frequencyLabel"
         virtualName="" explicitFocusOrder="0" pos="32 165 112 24" tooltip="Multiplier applied to base note frequency"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Base Frequency"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="a slider" id="1b9be27726a5b3ae" memberName="aSlider" virtualName=""
          explicitFocusOrder="0" pos="30 203 30 88" tooltip="Envelope attack rate"
          thumbcol="ff007f00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="30" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="a label" id="9dd0b13f00b4de42" memberName="aLabel" virtualName=""
         explicitFocusOrder="0" pos="30 293 30 24" tooltip="Attack rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="A"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="d slider" id="d4cc8ddf2fc9cf2b" memberName="dSlider" virtualName=""
          explicitFocusOrder="0" pos="70 203 30 88" tooltip="Envelope decay rate"
          thumbcol="ff007f00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="30" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="d label" id="a7f17b098b85f10b" memberName="dLabel" virtualName=""
         explicitFocusOrder="0" pos="70 293 30 24" tooltip="Decay rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="D"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="s slider" id="9bcadfc61e498bce" memberName="sSlider" virtualName=""
          explicitFocusOrder="0" pos="110 203 30 88" tooltip="Envelope sustain level"
          thumbcol="ff007f00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="30" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="d label" id="6467455c7573fefa" memberName="dLabel2" virtualName=""
         explicitFocusOrder="0" pos="110 293 30 24" tooltip="Sustain level"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="S"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="r slider" id="5616976a8c5a3f5f" memberName="rSlider" virtualName=""
          explicitFocusOrder="0" pos="150 203 30 88" tooltip="Envelope release rate"
          thumbcol="ff007f00" trackcol="7f007f00" textboxtext="ff007f00"
          textboxbkgd="ff000000" textboxhighlight="ff00af00" min="0" max="15"
          int="1" style="LinearVertical" textBoxPos="TextBoxBelow" textBoxEditable="0"
          textBoxWidth="30" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="r label" id="ef30d2907e867666" memberName="rLabel" virtualName=""
         explicitFocusOrder="0" pos="150 293 30 24" tooltip="Release rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="R"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="attenuation slider" id="dfb943cd83b3977f" memberName="attenuationSlider"
          virtualName="" explicitFocusOrder="0" pos="130 350 232 24" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="-47.25" max="0" int="0.75" style="LinearHorizontal"
          textBoxPos="TextBoxRight" textBoxEditable="0" textBoxWidth="64"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="attenuation label" id="643f88854c82ca3e" memberName="attenuationLabel"
         virtualName="" explicitFocusOrder="0" pos="32 350 106 24" tooltip="Final output level adjustment"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Attenuation"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="666be8c96c85c9f1" memberName="dbLabel" virtualName=""
         explicitFocusOrder="0" pos="362 350 32 24" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="sine image button" id="5e72e0ec4fc09c1a" memberName="sineImageButton"
               virtualName="" explicitFocusOrder="0" pos="88 105 34 30" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="full_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="half sine image button" id="bf9e0504c5e9e5d5" memberName="halfsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="128 105 34 30" buttonText="Half Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="half_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="abs sine image button" id="1b0b532ac934edae" memberName="abssineImageButton"
               virtualName="" explicitFocusOrder="0" pos="168 105 34 30" buttonText="Abs Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="abs_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="quarter sine image button" id="47d1bd1fd4ae011d" memberName="quartersineImageButton"
               virtualName="" explicitFocusOrder="0" pos="208 105 34 30" buttonText="Quarter Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="quarter_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <LABEL name="wave label" id="d35c942584ea52a6" memberName="waveLabel"
         virtualName="" explicitFocusOrder="0" pos="32 107 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Wave" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="tremolo button" id="1e6ab9b2f1fee312" memberName="tremoloButton"
                virtualName="" explicitFocusOrder="0" pos="323 162 80 24" tooltip="Modulate amplitude at 3.7 Hz"
                txtcol="ff007f00" buttonText="Tremolo" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="vibrato button" id="a989eb6692e3dbd8" memberName="vibratoButton"
                virtualName="" explicitFocusOrder="0" pos="243 162 72 24" tooltip="Modulate frequency at 6.1 Hz"
                txtcol="ff007f00" buttonText="Vibrato" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="sustain button" id="e0ae2bc46ec1861c" memberName="sustainButton"
                virtualName="" explicitFocusOrder="0" pos="243 198 70 24" tooltip="Enable or disable sustain when note is held"
                txtcol="ff007f00" buttonText="Sustain" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="keyscale env button" id="a3f62a22526b4b49" memberName="keyscaleEnvButton"
                virtualName="" explicitFocusOrder="0" pos="323 186 101 48" tooltip="Speed up envelope rate with note frequency"
                txtcol="ff007f00" buttonText="Keyscale Env. Rate" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="db label" id="b9b3cedf2b541262" memberName="dbLabel2" virtualName=""
         explicitFocusOrder="0" pos="792 712 72 16" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB/8ve&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="93b9aaeb75040aed" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="440 80 408 312" outlinecol="ff007f00"
                  textcol="ff007f00" title="Carrier" textpos="33"/>
  <COMBOBOX name="frequency combo box" id="30b8c81b6bd2a17" memberName="frequencyComboBox2"
            virtualName="" explicitFocusOrder="0" pos="573 165 66 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="65d58d2259c13bf1" memberName="frequencyLabel3"
         virtualName="" explicitFocusOrder="0" pos="456 165 112 24" tooltip="Multiplier applied to base note frequency"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Base Frequency"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="a slider" id="d6d2f4556ea9394" memberName="aSlider2" virtualName=""
          explicitFocusOrder="0" pos="462 203 30 88" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="a label" id="9ec6412cc79720bc" memberName="aLabel2" virtualName=""
         explicitFocusOrder="0" pos="462 293 30 24" tooltip="Attack rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="A"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="d slider" id="4a1f1b6038500f67" memberName="dSlider2" virtualName=""
          explicitFocusOrder="0" pos="510 203 30 88" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="d label" id="10231adaf9e23e14" memberName="dLabel3" virtualName=""
         explicitFocusOrder="0" pos="510 293 30 24" tooltip="Decay rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="D"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="s slider" id="2fc057248a815958" memberName="sSlider2" virtualName=""
          explicitFocusOrder="0" pos="558 203 30 88" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="d label" id="5b881f2381defac" memberName="dLabel4" virtualName=""
         explicitFocusOrder="0" pos="558 293 30 24" tooltip="Sustain level"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="S"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="r slider" id="5474ad005fb58e97" memberName="rSlider2" virtualName=""
          explicitFocusOrder="0" pos="606 203 30 88" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="15" int="1" style="LinearVertical"
          textBoxPos="TextBoxBelow" textBoxEditable="0" textBoxWidth="40"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="r label" id="ca2834438bee82a9" memberName="rLabel2" virtualName=""
         explicitFocusOrder="0" pos="606 293 30 24" tooltip="Release rate"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="R"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="attenuation slider" id="edb48da87d7535dd" memberName="attenuationSlider2"
          virtualName="" explicitFocusOrder="0" pos="554 350 232 24" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="-47.25" max="0" int="0.75" style="LinearHorizontal"
          textBoxPos="TextBoxRight" textBoxEditable="0" textBoxWidth="64"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="attenuation label" id="958314f88253f461" memberName="attenuationLabel2"
         virtualName="" explicitFocusOrder="0" pos="456 350 106 24" tooltip="Final output level adjustment"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Attenuation"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="7efc6195ef5e25d1" memberName="dbLabel3" virtualName=""
         explicitFocusOrder="0" pos="782 350 40 24" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="sine image button" id="27e01d31ba835965" memberName="sineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="512 105 34 30" buttonText="Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="full_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="half sine image button" id="6e9afdb08dd4edac" memberName="halfsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="552 105 34 30" buttonText="Half Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="half_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="abs sine image button" id="361941cfa04130c1" memberName="abssineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="592 105 34 30" buttonText="Abs Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="abs_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="quarter sine image button" id="3fa62f49fdd1a41f" memberName="quartersineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="632 105 34 30" buttonText="Quarter Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="quarter_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <LABEL name="wave label" id="c810628f3c772781" memberName="waveLabel2"
         virtualName="" explicitFocusOrder="0" pos="456 107 48 24" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="Wave" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="tremolo button" id="a517934e39704073" memberName="tremoloButton2"
                virtualName="" explicitFocusOrder="0" pos="746 162 80 24" tooltip="Modulate amplitude at 3.7 Hz"
                txtcol="ff007f00" buttonText="Tremolo" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="vibrato button" id="736b965a99641077" memberName="vibratoButton2"
                virtualName="" explicitFocusOrder="0" pos="666 162 72 24" tooltip="Modulate frequency at 6.1 Hz"
                txtcol="ff007f00" buttonText="Vibrato" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="sustain button" id="a3832cb840cae1f2" memberName="sustainButton2"
                virtualName="" explicitFocusOrder="0" pos="666 198 70 24" tooltip="Enable or disable sustain when note is held"
                txtcol="ff007f00" buttonText="Sustain" connectedEdges="0" needsCallback="1"
                radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="keyscale env button" id="4cd968dae86d143c" memberName="keyscaleEnvButton2"
                virtualName="" explicitFocusOrder="0" pos="746 186 102 48" tooltip="Speed up envelope rate with note frequency"
                txtcol="ff007f00" buttonText="Keyscale Env. Rate" connectedEdges="0"
                needsCallback="1" radioGroupId="0" state="0"/>
  <LABEL name="frequency label" id="a1e2dd50c2835d73" memberName="frequencyLabel4"
         virtualName="" explicitFocusOrder="0" pos="752 280 88 48" tooltip="Attenuate amplitude with note frequency in db/8ve"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Keyscale Attenuation (db/8ve)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="7392f7d1c8cf6e74" memberName="groupComponent3"
                  virtualName="" explicitFocusOrder="0" pos="16 400 832 96" outlinecol="ff007f00"
                  textcol="ff007f00" title="Common" textpos="33"/>
  <SLIDER name="tremolo slider" id="ab64abee7ac8874b" memberName="tremoloSlider"
          virtualName="" explicitFocusOrder="0" pos="149 424 80 24" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="1" max="4.7999999999999998224"
          int="3.7999999999999998224" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="0" textBoxWidth="32" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="frequency label" id="134ce8f87da62b88" memberName="frequencyLabel5"
         virtualName="" explicitFocusOrder="0" pos="40 424 104 24" tooltip="OPL global tremolo depth"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Tremolo Depth&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="db label" id="720df8e7c502dd91" memberName="dbLabel5" virtualName=""
         explicitFocusOrder="0" pos="230 416 32 40" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="vibrato slider" id="b45a1f20f22cf5ca" memberName="vibratoSlider"
          virtualName="" explicitFocusOrder="0" pos="149 456 80 24" thumbcol="ff007f00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="7" max="14" int="7" style="LinearHorizontal"
          textBoxPos="TextBoxRight" textBoxEditable="0" textBoxWidth="32"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="frequency label" id="1412b9d14e37bcbe" memberName="frequencyLabel6"
         virtualName="" explicitFocusOrder="0" pos="40 456 96 24" tooltip="OPL global vibrato depth"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Vibrato Depth"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="db label" id="e13e0aff8b974a36" memberName="dbLabel6" virtualName=""
         explicitFocusOrder="0" pos="230 448 48 40" tooltip="A unit of pitch; 100 cents per semitone"
         textCol="ff007f00" outlineCol="0" edTextCol="ff000000" edBkgCol="0"
         labelText="cents&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="feedback slider" id="f9d22e12f5e417e4" memberName="feedbackSlider"
          virtualName="" explicitFocusOrder="0" pos="190 232 30 59" thumbcol="ff00af00"
          trackcol="7f007f00" rotarysliderfill="ff00af00" rotaryslideroutline="ff007f00"
          textboxtext="ff007f00" textboxbkgd="ff000000" textboxhighlight="ff00af00"
          min="0" max="7" int="1" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="0" textBoxWidth="30" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="frequency label" id="880eaf14af62578a" memberName="frequencyLabel7"
         virtualName="" explicitFocusOrder="0" pos="190 293 30 24" tooltip="Extent to which modulator output is fed back into itself"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="F"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <COMBOBOX name="velocity combo box" id="cbe10e5236447f15" memberName="velocityComboBox"
            virtualName="" explicitFocusOrder="0" pos="244 249 72 24" editable="0"
            layout="33" items="Off&#10;Light&#10;Heavy" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="velocity combo box" id="f5c4883d9feaa700" memberName="velocityComboBox2"
            virtualName="" explicitFocusOrder="0" pos="672 249 72 24" editable="0"
            layout="33" items="Off&#10;Light&#10;Heavy" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <LABEL name="attenuation label" id="d9297cdef25630de" memberName="attenuationLabel4"
         virtualName="" explicitFocusOrder="0" pos="664 280 80 48" tooltip="Set or disable velocity senstivity"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Velocity Sensitivity"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="alternating sine image button" id="2a054359a782e92d" memberName="alternatingsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="288 105 34 30" buttonText="Alternating Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="alternating_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="camel sine image button" id="d6f66822f7f64480" memberName="camelsineImageButton"
               virtualName="" explicitFocusOrder="0" pos="248 105 34 30" buttonText="Camel Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="camel_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="square image button" id="85e53fb506289115" memberName="squareImageButton"
               virtualName="" explicitFocusOrder="0" pos="328 105 34 30" buttonText="Square"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="square_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="logsaw image button" id="fca4c858138cdd7b" memberName="logsawImageButton"
               virtualName="" explicitFocusOrder="0" pos="368 105 34 30" buttonText="Logarithmic Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="logarithmic_saw_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="alternating sine image button" id="32c5f60cc145d464" memberName="alternatingsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="714 106 34 30" buttonText="Alternating Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="alternating_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="camel sine image button" id="215395763c6a03f2" memberName="camelsineImageButton2"
               virtualName="" explicitFocusOrder="0" pos="674 106 34 30" buttonText="Camel Sine"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="camel_sine_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="square image button" id="d85202a2e5f8b158" memberName="squareImageButton2"
               virtualName="" explicitFocusOrder="0" pos="754 106 34 30" buttonText="Square"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="square_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="logsaw image button" id="d713984cff8b67b5" memberName="logsawImageButton2"
               virtualName="" explicitFocusOrder="0" pos="794 106 34 30" buttonText="Logarithmic Sawtooth"
               connectedEdges="0" needsCallback="1" radioGroupId="2" keepProportions="1"
               resourceNormal="logarithmic_saw_png" opacityNormal="0.5" colourNormal="0"
               resourceOver="" opacityOver="0.5" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <COMBOBOX name="algorithm combo box" id="fffe0faaf234ed7" memberName="algorithmComboBox"
            virtualName="" explicitFocusOrder="0" pos="314 450 112 24" editable="0"
            layout="33" items="FM&#10;Additive" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="frequency label" id="e60c13739cf857ba" memberName="frequencyLabel8"
         virtualName="" explicitFocusOrder="0" pos="304 422 136 24" tooltip="In additive mode, carrier and modulator output are simply summed rather than modulated"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Algorithm"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="db label" id="1f10b7e3cf477c89" memberName="dbLabel4" virtualName=""
         explicitFocusOrder="0" pos="792 688 72 16" textCol="ff007f00"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="dB/8ve&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <COMBOBOX name="keyscale combo box" id="9b766b7b6a67cbf4" memberName="keyscaleAttenuationComboBox2"
            virtualName="" explicitFocusOrder="0" pos="763 249 60 24" editable="0"
            layout="33" items="-0.0&#10;-3.0&#10;-1.5&#10;-6.0" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="keyscale combo box" id="7d8e1de0e1579999" memberName="keyscaleAttenuationComboBox"
            virtualName="" explicitFocusOrder="0" pos="338 249 60 24" editable="0"
            layout="33" items="-0.0&#10;-3.0&#10;-1.5&#10;-6.0" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <GROUPCOMPONENT name="new group" id="52f9803abb342980" memberName="groupComponent4"
                  virtualName="" explicitFocusOrder="0" pos="16 8 832 64" outlinecol="ff007f00"
                  textcol="ff007f00" title="Channels" textpos="33"/>
  <GROUPCOMPONENT name="new group" id="7abc643f4d6a2dbf" memberName="groupComponent5"
                  virtualName="" explicitFocusOrder="0" pos="24 712 408 64" outlinecol="ff007f00"
                  textcol="ff007f00" title="Emulator (currently locked)" textpos="33"/>
  <SLIDER name="emulator slider" id="88ec3755c4760ed9" memberName="emulatorSlider"
          virtualName="" explicitFocusOrder="0" pos="208 736 40 24" thumbcol="ff00af00"
          trackcol="7f007f00" textboxtext="ff007f00" textboxbkgd="ff000000"
          textboxhighlight="ff00af00" min="0" max="1" int="1" style="LinearHorizontal"
          textBoxPos="NoTextBox" textBoxEditable="0" textBoxWidth="44"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="emulator label" id="22c2c30d0f337081" memberName="emulatorLabel"
         virtualName="" explicitFocusOrder="0" pos="120 736 72 24" tooltip="Use the OPL emulator from the DOSBox project"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="DOSBox"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="34"/>
  <LABEL name="emulator label" id="4f8869b5724c0195" memberName="emulatorLabel2"
         virtualName="" explicitFocusOrder="0" pos="256 736 72 24" tooltip="Use the OPL emulator from the ZDoom project"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="ZDoom"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="record button" id="880010ee79039cbe" memberName="recordButton"
                virtualName="" explicitFocusOrder="0" pos="32 680 224 24" tooltip="Start recording all register writes to a DRO file - an OPL recording file format defined by DOSBox"
                txtcol="ff007f00" buttonText="Record to DRO (not working yet)"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <COMBOBOX name="percussion combo box" id="75a838b61782e17b" memberName="percussionComboBox"
            virtualName="" explicitFocusOrder="0" pos="476 450 112 24" editable="0"
            layout="33" items="Off&#10;Bass drum&#10;Snare&#10;Tom&#10;Cymbal&#10;Hi-hat"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="percussion label" id="a3400e2e5e8e7900" memberName="percussionLabel"
         virtualName="" explicitFocusOrder="0" pos="456 422 152 24" tooltip="Enable percussion instruments instead of oscillators"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Percussion Mode"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="export button" id="88c84ed1e2b284d3" memberName="exportButton"
              virtualName="" explicitFocusOrder="0" pos="644 455 168 24" bgColOff="ff007f00"
              bgColOn="ff00ff00" buttonText="Export .SBI instrument" connectedEdges="3"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="load button" id="a42176161523f448" memberName="loadButton"
              virtualName="" explicitFocusOrder="0" pos="644 422 168 24" bgColOff="ff007f00"
              bgColOn="ff00ff00" buttonText="Load .SBI instrument" connectedEdges="3"
              needsCallback="1" radioGroupId="0"/>
  <LABEL name="version label" id="cd68ca110847cc18" memberName="versionLabel"
         virtualName="" explicitFocusOrder="0" pos="640 496 198 16" textCol="ff007f00"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="12" bold="0" italic="0" justification="34"/>
  <IMAGEBUTTON name="Toggle Button Off Example" id="672bea5ea2e1fabd" memberName="ToggleButtonOffExample"
               virtualName="" explicitFocusOrder="0" pos="1032 584 12 12" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="toggle_off_sq_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Toggle Button On Example" id="1a4b1e2ee10b30aa" memberName="ToggleButtonOnExample"
               virtualName="" explicitFocusOrder="0" pos="1064 584 12 12" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="toggle_on_sq_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="d00839172c49b458" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="1000 608 104 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Toggle buttons"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="75faa73445635a7f" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="872 608 104 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Line borders" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="Line Border 1C" id="d189b7564dfbe6f4" memberName="LineBorderButton1C"
               virtualName="" explicitFocusOrder="0" pos="20 332 400 6" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_horiz_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_horiz_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_horiz_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1A" id="e2102e76055ea2d2" memberName="LineBorderButton1A"
               virtualName="" explicitFocusOrder="0" pos="20 144 400 6" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_horiz_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_horiz_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_horiz_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1B" id="c602d4512bd5e4ad" memberName="LineBorderButton1B"
               virtualName="" explicitFocusOrder="0" pos="230 148 6 186" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <LABEL name="new label" id="96790ccaf0f7ecec" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="776 736 104 56" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Temporarily removed labels to avoid making wider boxes."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="Line Border 3A" id="1580c8aff382b259" memberName="LineBorderButton3A"
               virtualName="" explicitFocusOrder="0" pos="288 410 6 82" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 3B" id="fc83124bf01494ec" memberName="LineBorderButton3B"
               virtualName="" explicitFocusOrder="0" pos="450 410 6 82" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 3B" id="715998c8f1483cd2" memberName="LineBorderButton3B2"
               virtualName="" explicitFocusOrder="0" pos="612 410 6 82" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1C" id="fb69fc397f48c0b2" memberName="LineBorderButton1C2"
               virtualName="" explicitFocusOrder="0" pos="444 332 400 6" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_horiz_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_horiz_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_horiz_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1A" id="2096630c63845b7d" memberName="LineBorderButton1A2"
               virtualName="" explicitFocusOrder="0" pos="444 144 400 6" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_horiz_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_horiz_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_horiz_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1B" id="84b521f64fc5ec24" memberName="LineBorderButton1B2"
               virtualName="" explicitFocusOrder="0" pos="654 148 6 186" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1C" id="d45929173c0e1a86" memberName="LineBorderButton1C3"
               virtualName="" explicitFocusOrder="0" pos="892 584 20 6" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_horiz_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_horiz_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_horiz_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Line Border 1B" id="1755b1c2b6e4ae68" memberName="LineBorderButton1B3"
               virtualName="" explicitFocusOrder="0" pos="936 576 6 20" buttonText="new button"
               connectedEdges="0" needsCallback="0" radioGroupId="0" keepProportions="0"
               resourceNormal="line_border_vert_png" opacityNormal="0.60000002384185791016"
               colourNormal="0" resourceOver="line_border_vert_png" opacityOver="0.60000002384185791016"
               colourOver="0" resourceDown="line_border_vert_png" opacityDown="0.60000002384185791016"
               colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch Off AM" id="c840af0d765d6eb3" memberName="algoSwitchButtonOffEx1"
               virtualName="" explicitFocusOrder="0" pos="952 701 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_off_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_off_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch Off FM" id="aa0f44b1ed8dad85" memberName="algoSwitchButtonOffEx2"
               virtualName="" explicitFocusOrder="0" pos="952 727 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_off_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_off_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch On AM" id="e876ffbe79764275" memberName="algoSwitchButtonOnEx1"
               virtualName="" explicitFocusOrder="0" pos="1040 701 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch On FM" id="b215e3921423b6e4" memberName="algoSwitchButtonOnEx2"
               virtualName="" explicitFocusOrder="0" pos="1040 727 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="8e80bd8b126eeb36" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="970 701 32 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1f98e50cc47ec1a6" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="971 727 32 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8cfbc479cf413916" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="1057 701 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e231c8016dbdd4b" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="1058 727 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="58e93cab537ef6c0" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="944 816 320 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Example AM/FM switches"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="Algorithm Switch On2 AM" id="afdb65f653352953" memberName="algoSwitchButtonOn2Ex1"
               virtualName="" explicitFocusOrder="0" pos="1128 700 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on2_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on2_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on2_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch On2 FM" id="92f052947cb1a55" memberName="algoSwitchButtonOn2Ex2"
               virtualName="" explicitFocusOrder="0" pos="1128 727 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on2_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on2_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on2_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="247e4f52e4cfd135" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="1145 700 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="aec882448be58719" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="1146 727 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Algorithm Switch On3 AM" id="9c9fbd61392d18d7" memberName="algoSwitchButtonOn3Ex1"
               virtualName="" explicitFocusOrder="0" pos="1216 700 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on3_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on3_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on3_png" opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Algorithm Switch On3 FM" id="7c15f9c7da34e18d" memberName="algoSwitchButtonOn3Ex2"
               virtualName="" explicitFocusOrder="0" pos="1216 727 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on3_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on3_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on3_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="336158e70e8469ef" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="1233 700 31 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="281e5575b4c17d57" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="1234 727 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Two OP AM Button" id="bc89b5f960a478ae" memberName="TwoOpAMButton"
               virtualName="" explicitFocusOrder="0" pos="1173 484 60 56" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="0"
               resourceNormal="twoopAm_png" opacityNormal="1" colourNormal="0"
               resourceOver="twoopAm_png" opacityOver="1" colourOver="0" resourceDown="twoopAm_png"
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Two OP FM Button" id="5dbdd24f69156c98" memberName="TwoOpFMButton"
               virtualName="" explicitFocusOrder="0" pos="1156 568 80 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="twoopFm_png" opacityNormal="1" colourNormal="0"
               resourceOver="twoopFm_png" opacityOver="1" colourOver="0" resourceDown="twoopFm_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="54bf3742f6cf39a7" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="1179 489 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="M" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="a73d54281a9f1e4b" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="1179 518 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="C" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c7714e4c9c108a80" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="1166 572 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="M" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6fad65a5c825f676" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="1195 572 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="C" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d9d895b8fa9bea7f" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="1128 608 136 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Example Algorithms"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="d489f4c4cbfaf3a" memberName="groupComponent6"
                  virtualName="" explicitFocusOrder="0" pos="933 56 168 95" outlinecol="ff008000"
                  title=""/>
  <IMAGEBUTTON name="Algorithm Switch On AM" id="3b9987473ffb3a54" memberName="algoSwitchButtonOnEx3"
               virtualName="" explicitFocusOrder="0" pos="949 82 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="ddfd6855a5c3769a" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="966 82 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Algorithm Switch Off FM" id="3bbe951e7d48f558" memberName="algoSwitchButtonOffEx3"
               virtualName="" explicitFocusOrder="0" pos="949 108 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_off_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_off_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="ec3250e2f0f72c27" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="968 108 32 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Two OP AM Button" id="6dd4e125e7f2454f" memberName="TwoOpAMButton2"
               virtualName="" explicitFocusOrder="0" pos="1029 77 60 56" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="0"
               resourceNormal="twoopAm_png" opacityNormal="1" colourNormal="0"
               resourceOver="twoopAm_png" opacityOver="1" colourOver="0" resourceDown="twoopAm_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="6c2ac34805e7a509" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="1035 82 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="M" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="68b10a34cd551295" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="1035 111 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="C" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="5c48c62a06b13a38" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="952 160 328 40" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Example Algo Sections w/ Diagram"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <IMAGEBUTTON name="Algorithm Switch Off AM" id="1ca80deedba9b959" memberName="algoSwitchButtonOffEx4"
               virtualName="" explicitFocusOrder="0" pos="1125 82 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_off_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_off_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="c7f07212d02cdf5b" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="1143 82 32 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Algorithm Switch On3 FM" id="840e067b2b3498f8" memberName="algoSwitchButtonOn3Ex3"
               virtualName="" explicitFocusOrder="0" pos="1125 109 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on3_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on3_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on3_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="4f6fc36b09626a98" memberName="label24" virtualName=""
         explicitFocusOrder="0" pos="1143 109 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Two OP FM Button" id="6de80642ad3057e6" memberName="TwoOpFMButton2"
               virtualName="" explicitFocusOrder="0" pos="1196 94 80 26" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="twoopFm_png" opacityNormal="1" colourNormal="0"
               resourceOver="twoopFm_png" opacityOver="1" colourOver="0" resourceDown="twoopFm_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="5d9df21ba856feea" memberName="label25" virtualName=""
         explicitFocusOrder="0" pos="1206 98 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="M" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="bc2f20892df7121b" memberName="label26" virtualName=""
         explicitFocusOrder="0" pos="1235 98 24 24" edTextCol="ff000000"
         edBkgCol="0" labelText="C" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <GROUPCOMPONENT name="new group" id="35d4aeb27da92db" memberName="groupComponent7"
                  virtualName="" explicitFocusOrder="0" pos="1112 56 168 95" outlinecol="ff008000"
                  title=""/>
  <IMAGEBUTTON name="Algorithm Switch Off AM" id="186e15fd17374b39" memberName="algoSwitchButtonOffEx5"
               virtualName="" explicitFocusOrder="0" pos="1037 250 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_off_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_off_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_off_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="18a95b2639e6ca06" memberName="label27" virtualName=""
         explicitFocusOrder="0" pos="1055 250 32 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="AM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Algorithm Switch On3 FM" id="a280aa6d341570b7" memberName="algoSwitchButtonOn3Ex4"
               virtualName="" explicitFocusOrder="0" pos="1103 250 64 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="algo_switch_on3_png" opacityNormal="1" colourNormal="0"
               resourceOver="algo_switch_on3_png" opacityOver="1" colourOver="0"
               resourceDown="algo_switch_on3_png" opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="7f064fc52edca9aa" memberName="label28" virtualName=""
         explicitFocusOrder="0" pos="1121 250 32 24" textCol="ff000000"
         edTextCol="ff000000" edBkgCol="0" labelText="FM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="4c77a30ef34ca25d" memberName="groupComponent8"
                  virtualName="" explicitFocusOrder="0" pos="1018 200 168 95" outlinecol="ff008000"
                  title=""/>
  <LABEL name="frequency label" id="70b9f51419600f29" memberName="frequencyLabel9"
         virtualName="" explicitFocusOrder="0" pos="1067 216 72 24" tooltip="In additive mode, carrier and modulator output are simply summed rather than modulated"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Algorithm"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="31a16fa32fc39ae9" memberName="label29" virtualName=""
         explicitFocusOrder="0" pos="944 304 328 40" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Example Algo Section w/o Diagram"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="2470d0303393253b" memberName="label30" virtualName=""
         explicitFocusOrder="0" pos="961 768 319 24" textCol="ff008000"
         edTextCol="ff000000" edBkgCol="0" labelText="Off             On (Bright)          On (Dark)       On (Solid)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="frequency label" id="9d58547998708b6b" memberName="frequencyLabel10"
         virtualName="" explicitFocusOrder="0" pos="328 280 88 48" tooltip="Attenuate amplitude with note frequency in db/8ve"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Keyscale Attenuation (db/8ve)"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  <LABEL name="attenuation label" id="63aa860d1d8ae341" memberName="attenuationLabel5"
         virtualName="" explicitFocusOrder="0" pos="240 280 80 48" tooltip="Set or disable velocity senstivity"
         textCol="ff007f00" edTextCol="ff000000" edBkgCol="0" labelText="Velocity Sensitivity"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: full_sine_png, 203, "../img/full_sine.png"
static const unsigned char resource_PluginGui_full_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,146,73,68,65,84,88,133,237,151,81,14,64,
48,16,68,183,226,94,110,225,18,110,230,146,252,116,35,153,166,97,219,21,131,125,63,66,144,241,76,75,147,136,108,66,192,240,116,0,101,60,61,99,133,253,249,158,32,47,48,162,38,208,64,237,120,39,52,70,146,
224,168,185,250,196,206,102,104,140,68,16,228,232,72,235,59,119,234,10,141,145,8,130,148,51,235,212,120,39,235,117,75,222,230,110,209,24,41,103,86,43,78,163,141,198,72,4,65,250,59,162,116,126,181,105,
140,68,16,196,175,35,74,227,191,238,135,141,40,198,245,208,15,140,24,161,49,178,3,63,99,23,114,126,178,233,88,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::full_sine_png = (const char*) resource_PluginGui_full_sine_png;
const int PluginGui::full_sine_pngSize = 203;

// JUCER_RESOURCE: half_sine_png, 179, "../img/half_sine.png"
static const unsigned char resource_PluginGui_half_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,122,73,68,65,84,88,133,237,148,65,10,128,
32,20,5,191,209,189,186,69,135,236,22,157,172,22,33,193,72,20,102,248,130,55,155,40,50,198,73,77,17,177,133,0,67,111,129,204,120,251,198,130,251,249,27,145,31,20,201,37,88,224,234,249,75,100,138,164,224,
174,121,58,227,198,101,100,138,88,132,156,107,164,246,159,55,90,43,50,69,44,66,202,147,117,170,252,82,237,184,245,184,200,20,41,79,214,78,200,20,177,8,177,8,177,8,177,8,177,8,177,8,217,1,254,115,12,122,
78,109,41,249,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::half_sine_png = (const char*) resource_PluginGui_half_sine_png;
const int PluginGui::half_sine_pngSize = 179;

// JUCER_RESOURCE: abs_sine_png, 181, "../img/abs_sine.png"
static const unsigned char resource_PluginGui_abs_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,124,73,68,65,84,88,133,237,148,81,10,128,
32,16,5,215,232,94,221,162,67,118,201,250,81,130,17,209,182,192,13,222,252,21,62,153,125,150,201,204,78,11,192,50,91,160,176,118,87,28,120,222,7,119,126,152,251,65,35,101,34,78,210,122,255,50,23,166,145,
100,252,107,122,19,183,214,121,115,153,48,141,72,132,220,223,200,232,25,147,143,114,97,26,145,8,169,111,214,205,185,147,55,151,9,211,72,125,179,78,34,76,35,18,33,18,33,18,33,18,33,18,33,18,33,23,197,62,
17,185,230,123,254,103,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::abs_sine_png = (const char*) resource_PluginGui_abs_sine_png;
const int PluginGui::abs_sine_pngSize = 181;

// JUCER_RESOURCE: quarter_sine_png, 181, "../img/quarter_sine.png"
static const unsigned char resource_PluginGui_quarter_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,124,73,68,65,84,88,133,237,150,81,10,
128,32,16,68,215,232,94,221,162,67,118,139,78,150,31,41,209,196,162,174,31,205,199,60,8,177,28,120,77,33,38,51,187,140,128,229,111,129,74,91,228,40,215,40,131,57,154,70,86,247,73,164,133,137,28,113,35,
245,141,118,152,183,136,230,10,52,141,72,4,121,254,17,252,198,189,68,115,0,77,35,18,65,190,251,200,230,172,244,238,207,230,206,123,160,105,36,153,206,35,111,36,130,72,4,145,8,34,17,68,34,136,68,144,12,
123,138,13,78,65,207,81,74,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::quarter_sine_png = (const char*) resource_PluginGui_quarter_sine_png;
const int PluginGui::quarter_sine_pngSize = 181;

// JUCER_RESOURCE: camel_sine_png, 174, "../img/camel_sine.png"
static const unsigned char resource_PluginGui_camel_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,117,73,68,65,84,88,133,237,148,209,9,192,
32,12,68,99,233,94,221,162,67,118,139,78,86,63,218,80,56,41,129,40,245,62,238,129,136,6,225,229,132,20,51,187,140,128,101,182,128,243,45,114,60,43,91,31,38,242,51,107,115,227,93,238,201,115,18,154,68,
36,130,20,243,57,18,253,117,111,61,128,38,17,137,32,18,65,218,201,186,5,47,122,235,200,121,111,52,137,188,115,100,50,52,137,72,4,145,8,34,17,68,34,136,68,16,137,32,21,146,46,14,97,109,79,27,36,0,0,0,0,
73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::camel_sine_png = (const char*) resource_PluginGui_camel_sine_png;
const int PluginGui::camel_sine_pngSize = 174;

// JUCER_RESOURCE: alternating_sine_png, 197, "../img/alternating_sine.png"
static const unsigned char resource_PluginGui_alternating_sine_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,140,73,68,65,84,88,133,99,100,96,
96,248,207,48,8,0,211,64,59,0,6,112,59,100,21,20,15,184,67,232,12,88,48,68,96,161,16,134,131,79,35,48,104,66,100,212,33,232,128,145,1,86,142,16,74,11,52,78,43,131,38,68,70,29,130,14,70,29,130,14,48,75,
86,123,2,58,112,201,103,67,233,169,36,186,224,32,132,26,52,33,130,40,71,8,1,26,151,51,131,38,68,70,29,130,14,70,29,130,14,136,207,53,48,64,163,22,220,160,9,145,81,135,160,3,210,211,8,12,80,185,197,54,
12,66,132,202,96,208,132,8,0,67,200,18,200,95,246,147,104,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::alternating_sine_png = (const char*) resource_PluginGui_alternating_sine_png;
const int PluginGui::alternating_sine_pngSize = 197;

// JUCER_RESOURCE: square_png, 179, "../img/square.png"
static const unsigned char resource_PluginGui_square_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,122,73,68,65,84,88,133,237,150,177,17,128,48,
12,3,29,142,189,216,130,37,216,44,75,66,99,83,40,85,34,238,80,161,111,146,198,190,143,10,59,45,34,238,16,96,251,91,160,216,223,91,39,59,157,92,185,96,34,197,236,203,216,36,19,153,68,44,130,88,4,177,8,
98,17,100,156,172,199,98,167,217,186,43,207,156,228,50,137,180,96,255,35,181,107,86,119,148,90,34,22,65,44,130,88,4,177,8,50,238,154,85,200,223,188,76,34,252,174,249,8,153,68,30,246,154,9,40,60,195,35,
102,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::square_png = (const char*) resource_PluginGui_square_png;
const int PluginGui::square_pngSize = 179;

// JUCER_RESOURCE: logarithmic_saw_png, 206, "../img/logarithmic_saw.png"
static const unsigned char resource_PluginGui_logarithmic_saw_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,30,8,6,0,0,0,73,255,204,20,0,0,0,149,73,68,65,84,88,133,237,150,81,
10,128,32,16,68,215,232,94,221,194,75,116,158,46,225,37,235,103,37,24,19,139,218,118,64,31,136,172,32,12,15,87,13,34,178,11,1,147,119,128,204,25,36,233,112,15,226,204,8,130,148,65,156,206,10,177,17,39,
104,130,204,197,74,212,57,65,109,12,177,145,12,154,193,245,143,33,54,178,64,189,65,125,247,142,193,125,200,170,179,26,166,49,18,196,234,63,210,58,91,208,149,52,70,234,93,243,150,134,1,164,3,35,72,237,
94,82,104,140,140,32,200,255,65,162,92,118,78,199,70,42,208,4,177,123,107,30,66,99,228,0,184,114,16,107,149,79,109,141,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::logarithmic_saw_png = (const char*) resource_PluginGui_logarithmic_saw_png;
const int PluginGui::logarithmic_saw_pngSize = 206;

// JUCER_RESOURCE: channeloff_png, 414, "../img/channeloff.png"
static const unsigned char resource_PluginGui_channeloff_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,0,31,243,255,97,0,0,0,6,98,75,71,68,0,0,0,0,0,0,249,67,187,127,
0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,7,222,8,25,20,6,56,156,246,144,159,0,0,0,29,105,84,88,116,67,111,109,109,101,110,116,0,0,0,0,0,67,114,101,97,116,101,100,32,
119,105,116,104,32,71,73,77,80,100,46,101,7,0,0,1,2,73,68,65,84,56,203,165,211,61,78,66,65,20,5,224,143,193,82,119,224,62,104,40,166,196,194,202,10,66,65,137,149,75,120,121,193,21,216,104,108,164,32,178,
128,183,1,94,66,67,66,172,172,140,27,176,178,192,202,70,139,55,26,2,138,2,39,153,102,230,220,159,185,231,220,154,85,100,14,113,138,46,154,233,118,138,17,10,185,183,101,122,88,9,110,99,129,11,20,104,164,
83,164,187,69,226,252,128,204,64,230,67,166,239,55,100,250,137,51,176,86,185,122,104,249,11,153,86,226,182,161,150,254,188,192,185,220,141,255,160,234,242,26,71,117,209,25,142,229,27,90,95,69,105,46,58,
193,107,72,211,30,218,30,67,116,67,146,106,178,67,130,9,154,193,158,8,201,36,113,135,216,136,105,72,14,235,237,144,160,135,81,248,118,92,182,133,10,21,183,129,162,174,244,46,122,194,157,104,166,244,252,
167,145,24,163,35,247,80,79,186,62,138,14,112,43,122,81,154,111,168,60,198,165,220,85,229,196,245,101,186,199,44,233,60,89,26,88,47,181,221,145,27,127,133,212,246,93,231,79,44,229,73,181,37,137,229,213,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::channeloff_png = (const char*) resource_PluginGui_channeloff_png;
const int PluginGui::channeloff_pngSize = 414;

// JUCER_RESOURCE: channelon_png, 326, "../img/channelon.png"
static const unsigned char resource_PluginGui_channelon_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,0,31,243,255,97,0,0,0,6,98,75,71,68,0,0,0,0,0,0,249,67,187,127,
0,0,0,9,112,72,89,115,0,0,11,19,0,0,11,19,1,0,154,156,24,0,0,0,7,116,73,77,69,7,222,8,25,20,6,39,17,254,157,106,0,0,0,29,105,84,88,116,67,111,109,109,101,110,116,0,0,0,0,0,67,114,101,97,116,101,100,32,
119,105,116,104,32,71,73,77,80,100,46,101,7,0,0,0,170,73,68,65,84,56,203,173,147,177,13,194,48,16,69,159,143,148,176,81,20,101,129,84,84,68,217,5,89,176,0,204,16,193,0,30,0,69,202,8,169,88,131,12,64,145,
139,176,82,64,116,230,117,182,252,206,242,249,159,99,201,145,45,80,1,13,144,235,110,15,180,64,192,51,198,199,221,66,62,0,55,190,83,227,185,207,139,77,36,159,128,11,191,217,83,146,209,241,248,20,152,110,
94,35,207,20,148,60,233,24,156,190,249,133,141,157,104,195,172,84,162,221,182,210,72,244,85,22,114,33,17,209,144,88,233,69,19,102,165,21,32,36,20,8,162,217,174,13,114,141,103,156,146,216,49,80,146,1,197,
74,249,140,231,250,151,97,114,169,227,252,6,230,208,38,246,228,75,209,233,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::channelon_png = (const char*) resource_PluginGui_channelon_png;
const int PluginGui::channelon_pngSize = 326;

// JUCER_RESOURCE: toggle_off_sq_png, 118, "../img/toggle_off_sq.png"
static const unsigned char resource_PluginGui_toggle_off_sq_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,12,0,0,0,12,8,6,0,0,0,86,117,92,231,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,
0,48,73,68,65,84,40,21,99,100,172,103,248,207,64,2,96,1,169,253,223,72,156,14,160,225,12,76,196,41,69,168,26,213,128,8,11,220,44,218,135,18,56,166,65,49,72,44,0,0,186,23,4,27,1,178,34,38,0,0,0,0,73,69,
78,68,174,66,96,130,0,0};

const char* PluginGui::toggle_off_sq_png = (const char*) resource_PluginGui_toggle_off_sq_png;
const int PluginGui::toggle_off_sq_pngSize = 118;

// JUCER_RESOURCE: toggle_on_sq_png, 134, "../img/toggle_on_sq.png"
static const unsigned char resource_PluginGui_toggle_on_sq_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,12,0,0,0,12,8,6,0,0,0,86,117,92,231,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,
64,73,68,65,84,40,21,99,100,172,103,248,207,64,2,96,1,169,253,223,72,156,14,160,225,12,96,13,32,229,32,14,62,0,51,148,9,159,34,108,114,163,26,176,133,10,186,24,60,30,96,225,140,174,0,157,15,214,64,40,
210,144,53,1,0,212,234,7,159,245,36,0,105,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::toggle_on_sq_png = (const char*) resource_PluginGui_toggle_on_sq_png;
const int PluginGui::toggle_on_sq_pngSize = 134;

// JUCER_RESOURCE: line_border_horiz_png, 108, "../img/line_border_horiz.png"
static const unsigned char resource_PluginGui_line_border_horiz_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,22,0,0,0,6,8,6,0,0,0,199,98,110,160,0,0,0,1,115,82,71,66,0,174,206,28,233,
0,0,0,38,73,68,65,84,40,21,99,100,96,96,248,15,196,84,7,76,84,55,17,106,32,11,67,176,32,77,204,166,153,139,25,129,206,29,90,97,12,0,88,84,2,111,238,165,1,44,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::line_border_horiz_png = (const char*) resource_PluginGui_line_border_horiz_png;
const int PluginGui::line_border_horiz_pngSize = 108;

// JUCER_RESOURCE: line_border_vert_png, 107, "../img/line_border_vert.png"
static const unsigned char resource_PluginGui_line_border_vert_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,6,0,0,0,22,8,6,0,0,0,227,26,237,211,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,37,73,68,65,84,40,21,99,100,96,96,248,15,196,12,12,193,130,96,138,97,237,123,48,205,4,225,97,146,163,18,24,97,50,236,131,4,0,123,194,3,43,141,43,209,32,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::line_border_vert_png = (const char*) resource_PluginGui_line_border_vert_png;
const int PluginGui::line_border_vert_pngSize = 107;

// JUCER_RESOURCE: algo_switch_off_png, 162, "../img/algo_switch_off.png"
static const unsigned char resource_PluginGui_algo_switch_off_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,52,0,0,0,20,8,6,0,0,0,194,212,30,221,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,92,73,68,65,84,88,9,237,151,177,13,0,32,12,195,90,196,223,136,203,129,178,248,133,168,74,167,140,113,60,53,115,197,137,70,55,139,229,236,30,68,79,78,140,30,40,80,24,136,45,52,147,13,105,122,161,149,
13,177,133,102,178,33,77,47,180,178,33,182,208,76,54,164,233,133,86,54,196,22,154,201,134,52,189,208,234,127,172,245,233,117,185,11,224,6,4,43,49,160,14,163,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::algo_switch_off_png = (const char*) resource_PluginGui_algo_switch_off_png;
const int PluginGui::algo_switch_off_pngSize = 162;

// JUCER_RESOURCE: algo_switch_on_png, 168, "../img/algo_switch_on.png"
static const unsigned char resource_PluginGui_algo_switch_on_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,52,0,0,0,20,8,6,0,0,0,194,212,30,221,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,98,73,68,65,84,88,9,237,151,177,13,192,48,12,195,236,52,223,244,200,92,153,115,10,7,233,196,19,4,67,158,52,138,226,228,204,21,21,141,110,94,150,231,205,22,72,223,174,24,45,72,0,97,32,140,33,25,109,
72,82,11,74,217,16,198,144,140,54,36,169,5,165,108,8,99,72,70,27,146,212,130,82,54,132,49,36,163,13,73,106,65,169,255,99,189,159,94,151,59,99,230,7,124,25,120,111,199,0,0,0,0,73,69,78,68,174,66,96,130,
0,0};

const char* PluginGui::algo_switch_on_png = (const char*) resource_PluginGui_algo_switch_on_png;
const int PluginGui::algo_switch_on_pngSize = 168;

// JUCER_RESOURCE: algo_switch_on2_png, 169, "../img/algo_switch_on2.png"
static const unsigned char resource_PluginGui_algo_switch_on2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,52,0,0,0,20,8,6,0,0,0,194,212,30,221,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,99,73,68,65,84,88,9,237,151,177,13,128,48,16,3,31,68,145,58,115,48,123,166,201,48,116,33,130,226,86,176,44,127,229,210,231,171,254,168,209,87,25,221,245,177,204,199,3,233,110,117,122,144,64,17,32,
182,208,76,49,164,233,133,86,49,196,22,154,41,134,52,189,208,42,134,216,66,51,197,144,166,23,90,197,16,91,104,166,24,210,244,66,171,255,99,221,159,158,203,189,241,194,4,31,18,119,100,16,0,0,0,0,73,69,
78,68,174,66,96,130,0,0};

const char* PluginGui::algo_switch_on2_png = (const char*) resource_PluginGui_algo_switch_on2_png;
const int PluginGui::algo_switch_on2_pngSize = 169;

// JUCER_RESOURCE: algo_switch_on3_png, 151, "../img/algo_switch_on3.png"
static const unsigned char resource_PluginGui_algo_switch_on3_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,52,0,0,0,20,8,6,0,0,0,194,212,30,221,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,81,73,68,65,84,88,9,237,146,65,10,0,32,12,195,166,71,159,237,199,21,252,65,47,65,70,118,47,165,201,70,237,117,170,209,205,70,91,222,20,7,253,110,84,67,26,130,9,248,114,48,240,184,78,67,49,50,56,160,
33,24,120,92,167,161,24,25,28,208,16,12,60,174,211,80,140,12,14,180,51,116,1,132,232,1,179,41,122,114,149,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::algo_switch_on3_png = (const char*) resource_PluginGui_algo_switch_on3_png;
const int PluginGui::algo_switch_on3_pngSize = 151;

// JUCER_RESOURCE: twoopAm_png, 1872, "../img/Two-OP AM.png"
static const unsigned char resource_PluginGui_twoopAm_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,183,0,0,0,171,8,6,0,0,0,36,122,13,127,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,7,10,
73,68,65,84,120,1,237,157,191,110,84,71,20,135,231,174,221,208,145,221,164,67,72,116,161,112,30,0,185,72,73,210,217,239,1,72,32,37,101,156,50,145,82,36,77,222,194,86,20,41,166,11,5,242,3,64,65,164,20,
150,44,58,194,138,138,10,103,178,70,1,123,61,123,175,239,222,57,103,207,153,217,143,6,239,253,115,230,204,247,251,52,26,95,175,215,77,216,31,199,80,235,191,102,244,125,216,249,103,175,214,233,49,175,110,
2,163,238,211,156,133,64,185,4,144,187,220,236,232,252,10,2,200,125,5,32,78,151,75,0,185,203,205,142,206,175,32,128,220,87,0,226,116,185,4,54,91,91,223,157,54,173,231,188,157,56,248,116,47,196,127,191,
243,214,22,253,216,18,96,229,182,229,207,232,138,4,144,91,17,46,165,109,9,32,183,45,127,70,87,36,128,220,138,112,41,109,75,0,185,109,249,51,186,34,1,228,86,132,75,105,91,2,200,109,203,159,209,21,9,32,
183,34,92,74,219,18,64,110,91,254,140,174,72,0,185,21,225,82,218,150,0,114,219,242,103,116,69,2,200,173,8,151,210,182,4,144,219,150,63,163,43,18,64,110,69,184,148,182,37,208,180,254,130,176,208,91,94,
155,237,141,122,127,1,121,65,118,241,233,105,57,111,21,94,208,127,77,135,88,185,107,74,147,185,204,17,64,238,57,28,188,168,137,64,251,111,226,40,204,242,214,157,155,10,85,237,75,30,31,157,216,55,65,7,
9,1,86,238,4,9,7,106,33,128,220,181,36,201,60,18,2,200,157,32,225,64,45,4,144,187,150,36,153,71,66,0,185,19,36,28,168,133,0,114,215,146,36,243,72,8,32,119,130,132,3,181,16,64,238,90,146,100,30,9,1,228,
78,144,112,160,22,2,200,93,75,146,204,35,33,128,220,9,18,14,212,66,0,185,107,73,146,121,36,4,144,59,65,194,129,90,8,32,119,45,73,50,143,132,0,114,39,72,56,80,11,1,228,174,37,73,230,145,16,64,238,4,9,7,
106,33,128,220,181,36,201,60,18,2,200,157,32,225,64,45,4,144,187,150,36,153,71,66,0,185,19,36,28,168,133,0,114,215,146,36,243,72,8,32,119,130,132,3,181,16,88,233,231,150,212,2,173,115,30,251,99,95,31,
31,39,244,177,120,157,115,118,122,146,149,219,105,48,180,149,79,160,125,229,62,152,252,144,95,126,86,225,167,55,34,101,40,2,129,101,9,180,203,29,227,55,203,22,227,122,8,120,34,192,182,196,83,26,244,34,
74,0,185,69,113,82,204,19,129,246,109,137,167,46,75,234,197,234,233,132,183,167,52,14,50,99,229,118,16,2,45,232,16,216,12,77,243,173,78,233,143,85,101,158,186,124,44,199,23,16,232,71,96,51,236,188,254,
177,223,165,3,175,218,222,64,238,129,232,184,45,143,0,219,146,60,126,220,237,152,0,114,59,14,135,214,242,8,32,119,30,63,238,118,76,0,185,29,135,67,107,121,4,144,59,143,31,119,59,38,128,220,142,195,161,
181,60,2,200,157,199,143,187,29,19,64,110,199,225,208,90,30,1,228,206,227,199,221,142,9,32,183,227,112,104,45,143,0,114,231,241,227,110,199,4,144,219,113,56,180,150,71,0,185,243,248,113,183,99,2,200,237,
56,28,90,203,35,128,220,121,252,184,219,49,1,228,118,28,14,173,229,17,64,238,60,126,220,237,152,0,114,59,14,135,214,242,8,32,119,30,63,238,118,76,0,185,29,135,67,107,121,4,86,250,185,37,199,71,39,121,
221,114,55,4,150,32,192,202,189,4,44,46,45,139,0,114,151,149,23,221,46,65,64,125,91,18,159,158,54,75,244,195,165,16,16,35,192,202,45,134,146,66,222,8,32,183,183,68,232,71,140,0,114,139,161,164,80,22,129,
131,241,31,225,247,201,231,89,53,46,221,140,220,151,128,240,210,136,64,12,95,133,119,241,121,216,159,252,28,30,223,24,75,116,129,220,18,20,169,33,67,32,134,217,3,142,120,63,188,125,251,119,56,152,220,
11,127,126,153,245,192,3,185,101,98,161,138,44,129,113,136,241,151,240,230,249,179,240,219,103,119,135,150,70,238,161,228,184,79,159,64,140,183,195,233,233,97,24,184,31,71,110,253,136,24,33,151,192,192,
253,56,114,231,130,231,254,213,16,24,176,31,71,238,213,68,195,40,114,4,122,239,199,145,91,14,58,149,86,73,224,226,126,124,127,114,123,209,208,188,239,99,17,149,18,143,173,243,159,234,107,194,187,16,154,
95,195,181,107,123,225,238,203,233,135,248,88,185,63,144,224,255,114,9,156,237,199,99,188,119,249,249,56,43,119,185,145,206,119,190,206,43,247,60,137,217,34,222,188,8,97,244,136,149,251,50,24,94,151,79,
32,134,247,139,54,114,151,31,37,51,56,39,48,13,163,230,65,248,100,107,43,236,188,58,204,250,217,253,121,77,190,130,128,33,129,228,27,202,39,239,155,65,110,195,76,86,50,244,238,180,140,239,171,134,127,
207,240,56,196,230,97,216,125,61,219,103,207,255,67,238,121,30,188,42,134,64,243,87,104,70,15,207,182,31,109,45,179,231,110,35,195,113,175,4,230,246,213,93,77,178,114,119,209,225,156,31,2,45,251,234,174,
6,145,187,139,14,231,188,16,104,221,87,119,53,136,220,93,116,56,103,75,224,255,31,198,116,237,171,187,26,100,207,221,69,135,115,86,4,166,179,159,50,222,15,215,183,190,24,42,246,89,227,172,220,86,241,49,
110,74,96,192,190,58,45,114,126,4,185,207,89,240,149,37,129,38,28,206,158,87,63,90,244,188,122,104,91,200,61,148,28,247,201,18,216,153,126,45,91,112,246,214,41,233,130,212,131,128,23,2,200,237,37,9,250,
16,39,160,190,45,105,182,55,162,120,215,142,11,242,169,182,126,194,97,229,246,147,5,157,8,19,64,110,97,160,148,243,67,64,125,91,114,113,170,183,238,220,188,248,178,154,175,249,91,63,62,163,100,229,246,
153,11,93,9,16,64,110,1,136,148,240,73,0,185,125,230,66,87,2,4,144,91,0,34,37,124,18,64,110,159,185,208,149,0,1,228,22,128,72,9,159,4,144,219,103,46,116,37,64,0,185,5,32,82,194,39,1,228,246,153,11,93,
9,16,64,110,1,136,148,240,73,0,185,125,230,66,87,2,4,144,91,0,34,37,124,18,64,110,159,185,208,149,0,1,228,22,128,72,9,159,4,144,219,103,46,116,37,64,0,185,5,32,82,194,39,1,228,246,153,11,93,9,16,64,110,
1,136,148,240,73,0,185,125,230,66,87,2,4,144,91,0,34,37,124,18,64,110,159,185,208,149,0,1,228,22,128,72,9,159,4,144,219,103,46,116,37,64,96,165,159,91,34,208,175,255,18,195,255,228,156,255,185,21,214,
33,43,119,97,129,209,110,127,2,200,221,159,21,87,22,70,0,185,11,11,140,118,251,19,64,238,254,172,184,178,48,2,200,93,88,96,180,219,159,0,79,75,250,179,234,119,229,238,180,233,119,33,87,105,19,96,229,214,
38,76,125,51,2,200,109,134,158,129,181,9,32,183,54,97,234,155,17,64,110,51,244,12,172,77,0,185,181,9,83,223,140,0,114,155,161,103,96,109,2,200,173,77,152,250,102,4,144,219,12,61,3,107,19,64,110,109,194,
212,55,35,128,220,102,232,25,88,155,0,114,107,19,166,190,25,1,228,54,67,207,192,218,4,144,91,155,48,245,205,8,32,183,25,122,6,214,38,128,220,218,132,169,111,70,0,185,205,208,51,176,54,1,228,214,38,76,
125,51,2,200,109,134,158,129,181,9,32,183,54,97,234,155,17,64,110,51,244,12,172,77,0,185,181,9,83,223,140,0,114,155,161,103,96,109,2,200,173,77,152,250,102,4,86,250,185,37,199,71,39,102,19,101,224,245,
35,192,202,189,126,153,175,205,140,145,123,109,162,94,191,137,254,7,149,161,178,110,197,68,224,25,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* PluginGui::twoopAm_png = (const char*) resource_PluginGui_twoopAm_png;
const int PluginGui::twoopAm_pngSize = 1872;

// JUCER_RESOURCE: twoopFm_png, 1203, "../img/Two-OP FM.png"
static const unsigned char resource_PluginGui_twoopFm_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,219,0,0,0,81,8,6,0,0,0,91,168,211,254,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,4,109,
73,68,65,84,120,1,237,221,177,79,147,65,24,199,241,231,10,11,147,218,202,102,76,220,100,168,127,128,97,208,193,4,221,202,127,225,0,38,144,232,40,140,154,104,162,131,254,23,109,140,137,176,201,96,248,3,
100,208,196,129,132,184,41,13,46,76,224,249,86,36,185,148,247,170,190,125,142,222,221,251,197,193,151,123,233,241,220,231,233,47,111,175,77,139,145,110,211,74,174,95,166,177,46,157,239,107,185,46,143,
117,165,37,208,72,171,92,170,69,32,93,1,194,150,110,239,168,60,49,1,194,150,88,195,40,55,93,1,194,150,110,239,168,60,49,1,194,150,88,195,40,55,93,129,105,111,233,139,125,227,61,23,219,137,222,229,53,177,
63,31,199,86,22,245,32,224,10,112,101,115,53,56,70,32,160,0,97,11,136,203,212,8,184,2,132,205,213,224,24,129,128,2,132,45,32,46,83,35,224,10,16,54,87,131,99,4,2,10,16,182,128,184,76,141,128,43,64,216,
92,13,142,17,8,40,64,216,2,226,50,53,2,174,0,97,115,53,56,70,32,160,0,97,11,136,203,212,8,184,2,132,205,213,224,24,129,128,2,132,45,32,46,83,35,224,10,16,54,87,131,99,4,2,10,16,182,128,184,76,141,128,
43,96,188,31,248,163,244,22,27,51,63,149,239,7,10,185,146,127,142,237,135,227,137,188,53,9,231,146,102,68,54,196,149,45,178,134,80,78,190,2,132,45,223,222,178,178,200,4,252,239,212,14,80,232,181,155,87,
3,204,58,249,41,119,183,247,38,95,132,83,1,206,14,70,68,135,92,217,34,106,6,165,228,45,64,216,242,238,47,171,139,72,128,176,69,212,12,74,201,91,128,176,229,221,95,86,23,145,0,97,139,168,25,148,146,183,
0,97,203,187,191,172,46,34,1,194,22,81,51,40,37,111,1,194,150,119,127,89,93,68,2,132,45,162,102,80,74,222,2,132,45,239,254,178,186,136,4,8,91,68,205,160,148,188,5,8,91,222,253,101,117,17,9,16,182,136,
154,65,41,121,11,16,182,188,251,203,234,34,18,32,108,17,53,131,82,34,18,232,53,223,201,219,214,117,205,138,8,155,166,38,115,229,35,96,229,174,28,217,29,233,182,94,200,230,149,166,198,194,8,155,134,34,
115,228,41,96,165,120,115,181,93,150,195,195,47,210,107,45,201,251,91,99,189,217,154,176,229,121,55,97,85,186,2,77,177,246,165,28,236,124,148,55,179,11,85,167,38,108,85,229,184,93,253,4,172,157,147,227,
227,13,169,184,159,35,108,245,187,203,176,226,113,5,42,238,231,8,219,184,240,220,190,158,2,21,246,115,132,173,158,119,21,86,173,39,240,207,251,57,194,166,135,206,76,117,22,112,247,115,221,214,92,25,197,
88,79,101,150,77,88,251,177,110,115,50,31,183,254,252,71,189,232,39,229,252,55,229,193,126,206,216,59,197,75,5,175,101,102,102,77,22,190,246,79,111,194,149,237,84,130,255,17,208,18,24,236,231,172,93,26,
126,125,206,127,101,235,181,158,168,252,238,103,7,42,211,48,9,2,9,10,156,238,231,238,75,111,118,213,31,54,107,31,38,184,56,74,70,32,62,1,43,166,248,39,60,140,140,175,53,84,148,143,64,95,26,230,129,92,
106,183,165,243,109,195,127,101,203,103,193,172,4,129,243,21,48,114,36,98,156,39,72,182,126,255,126,194,166,221,6,165,63,34,249,223,101,213,236,143,78,74,104,231,234,207,118,110,138,53,43,178,184,255,
105,184,135,132,109,88,132,239,17,168,36,96,62,139,105,172,12,30,46,250,110,62,45,198,60,242,157,84,26,215,121,86,83,169,24,166,65,64,89,96,176,47,91,151,11,237,87,114,123,171,120,248,232,255,154,150,
206,254,83,255,105,133,51,243,83,132,77,129,145,41,34,19,240,236,203,70,85,201,195,200,81,58,156,67,160,92,192,187,47,43,255,241,147,81,194,54,74,135,115,8,184,2,198,20,79,122,52,86,71,237,203,220,31,
31,62,230,117,182,97,17,190,71,224,172,64,191,120,110,99,89,46,182,111,84,13,218,96,74,174,108,103,97,25,65,224,68,160,194,190,108,20,29,97,27,165,195,185,250,10,24,217,40,94,47,91,45,123,189,172,42,10,
97,171,42,199,237,242,22,232,244,239,105,47,144,61,155,182,40,243,33,224,17,32,108,30,24,134,17,208,22,32,108,218,162,204,135,128,71,128,176,121,96,24,70,64,91,128,176,105,139,50,31,2,30,1,194,230,129,
97,24,1,109,1,194,166,45,202,124,8,120,4,8,155,7,134,97,4,180,5,8,155,182,40,243,33,224,17,32,108,30,24,134,17,208,22,32,108,218,162,204,135,128,71,128,176,121,96,24,70,64,91,128,176,105,139,50,31,2,30,
1,194,230,129,97,24,1,109,129,115,125,139,205,238,246,158,118,253,204,87,34,128,115,9,74,4,67,92,217,34,104,2,37,212,67,128,176,213,163,207,172,50,2,129,95,213,163,177,117,99,210,56,193,0,0,0,0,73,69,
78,68,174,66,96,130,0,0};

const char* PluginGui::twoopFm_png = (const char*) resource_PluginGui_twoopFm_png;
const int PluginGui::twoopFm_pngSize = 1203;


//[EndFile] You can add extra defines here...
//[/EndFile]
