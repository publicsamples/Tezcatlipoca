Processor 
Type SynthChain ID DelayTest Bypassed Gain 	   �#��?Balance 	        VoiceLimit 	      P@KillFadeTime 	      4@IconColour 0 packageName  BuildVersion �  EditorStates BodyShown 0 Visible 1 Solo 0 Folded 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type ScriptProcessor ID Interface Bypassed Script Content.makeFrontInterface(350, 200);


const var TimeR = [Content.getComponent("TimeR1"),
                   Content.getComponent("Label8")];

const var TimeL1 = Content.getComponent("TimeL1");
const var TimeR1 = Content.getComponent("TimeR1");

const var TimeL2 = Content.getComponent("TimeL2");
const var TimeR2 = Content.getComponent("TimeR2");





const var MultiParams = [Content.getComponent("Label18"),
                         Content.getComponent("MulSmooth"),
                         Content.getComponent("MultiStages"),
                         Content.getComponent("Label17"),
                         Content.getComponent("Label16"),
                         Content.getComponent("MultiFilterMode"),
                         Content.getComponent("MultiDelayMode"),
                         Content.getComponent("Label15")];


const var PingPong = [Content.getComponent("PingPong"),
                      Content.getComponent("Label4")];

const var ClkDivide = Content.getComponent("ClkDivide");

const var ScriptFX1 = Synth.getEffect("Script FX1");



const var BbdExtra = [Content.getComponent("Label14"),
                      Content.getComponent("BBDTimeMod"),
                      Content.getComponent("BBDSmooth"),
                      Content.getComponent("Label13")];


inline function onModeControl(component, value)
{	if (value == 1)
	 {
	
	ScriptFX1.setAttribute(ScriptFX1.Mode, 0);
	for(s in PingPong)
	       s.showControl(0);
	 for(s in TimeR)
	        s.showControl(0);   


	}
	
	if (value == 2)
		 {
		
		ScriptFX1.setAttribute(ScriptFX1.Mode, 1);
		for(s in PingPong)
		       s.showControl(1);
		     	 for(s in TimeR)
	        s.showControl(1);      
	         

		
		}
		
		if (value == 3)
			 {
			
			ScriptFX1.setAttribute(ScriptFX1.Mode, 2);
			for(s in PingPong)
			       s.showControl(0);
			     	 for(s in TimeR)
	        s.showControl(0);   
	        
			}
			
			if (value == 4)
					 {
					
					ScriptFX1.setAttribute(ScriptFX1.Mode, 3);
					for(s in PingPong)
					       s.showControl(0);
					    	 for(s in TimeR)
	        s.showControl(0);      
	    		
					}
		if (value == 5)
						 {
						
						ScriptFX1.setAttribute(ScriptFX1.Mode, 4);
						for(s in PingPong)
						       s.showControl(0);
						    	 for(s in TimeR)
		        s.showControl(0);      
		      		
						}			
						
						if (value == 6)
											 {
											
											ScriptFX1.setAttribute(ScriptFX1.Mode, 5);
											for(s in PingPong)
											       s.showControl(0);
											    	 for(s in TimeR)
							        s.showControl(0);      
							      		
											}		
											
				if (value == 7)
														 {
														
														ScriptFX1.setAttribute(ScriptFX1.Mode, 6);
														for(s in PingPong)
														       s.showControl(0);
														    	 for(s in TimeR)
										        s.showControl(0);      
										      		
														}											
};

Content.getComponent("Mode").setControlCallback(onModeControl);

const var ExtraParams = Content.getComponent("ExtraParams");


inline function onExtraControl(component, value)
{
ExtraParams.showControl(1-value);
};

Content.getComponent("Extra").setControlCallback(onExtraControl);

const var PresetPsanel = Content.getComponent("PresetPsanel");



inline function onpresetsControl(component, value)
{
PresetPsanel.showControl(1-value);
};

Content.getComponent("presets").setControlCallback(onpresetsControl);


function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0 contentShown 1 onInitOpen 1  ChildProcessors   Content  Control type ScriptSlider id Mix value 	   @
��? Control type ScriptSlider id 
FeedBack value 	    )\�? Control type ScriptButton id 	Reverse value 	         Control type ScriptButton id 
PingPong value 	      �? Control type ScriptSlider id Tone value 	      �? Control type ScriptSlider id TimeL1 value 	         Control type ScriptSlider id TimeR1 value 	      *@ Control type ScriptSlider id ClkDivide value 	      0@ Control type ScriptButton id 	Button2 value 	      �? Control type ScriptComboBox id MultiFilterMode value 	       @ Control type ScriptSlider id MultiStages value 	   @�z�� Control type ScriptSliderPack id ScriptSliderPack1 value 	      @data 032.rGEt9zLyL6iqGEtOWOJ79v0iB7Sb8nvOjBWO+PJb87C  Control type ScriptSliderPack id ScriptSliderPack2 value 	      @data 032.35QA+jBWO7Sb8nvOOJb8935Qg6CWOJrOtdT39fqGE7C  Control type ScriptSlider id MultiStages1 value 	      �? Control type ScriptSlider id MultiStages2 value 	      �? Control type ScriptSlider id MultiStages3 value 	    ���? Control type ScriptSlider id ClkDivide1 value 	   ���? Control type ScriptSlider id BBDTimeMod3 value 	      @ Control type ScriptComboBox id Mode value 	      @ Control type ScriptButton id Extra value 	         Control type ScriptButton id Sync value 	      �? Control type ScriptSlider id TimeL2 value 	     @�@ Control type ScriptSlider id TimeR2 value 	     Pq@ Control type ScriptButton id 	presets value 	      �? UIData  ContentProperties DeviceType 	Desktop Component 	type ScriptPanel id Panel1 x 	      I�y 	      D�width 	     ��@height 	     p�@itemColour 4282293171 itemColour2 4282293171 locked 1  Component 
type ScriptLabel id Label1 x 	     @o@y 	     �W@text DELAY TEST fontSize 	      9@width 	     �V@height 	     �Q@bgColour 4278190080 editable 0  Component type ScriptSlider id Mix x 	     �f@y 	      &@processorId Script FX1 parameterId Mix width 	      N@height 	      I@numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below scaleFactor 	   `ff�? Component type ScriptSlider id 
FeedBack x 	      q@y 	      (@processorId Script FX1 parameterId 
Feedback width 	      N@height 	      I@numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below scaleFactor 	   `ff�? Component 	type ScriptButton id 	Reverse x 	      4@y 	     @X@width 	      D@height 	      D@isMetaParameter 1 processorId Script FX1 parameterId 	Reverse  Component 	type ScriptButton id 
PingPong x 	      Y@y 	     @X@width 	      D@height 	      D@processorId Script FX1 parameterId 
PingPong visible  Component type ScriptSlider id Tone x 	     �X@y 	      &@processorId Script FX1 parameterId Tone middlePosition 	      �?width 	      N@height 	      I@numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below scaleFactor 	   `ff�?defaultValue 	      �? Component type ScriptLabel id Label3 x 	      &@y 	     �a@width 	      N@height 	      4@text 	reverse multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptLabel id Label4 x 	     �U@y 	     �a@width 	     �Q@height 	      4@text 
PingPong multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 visible  Component type ScriptLabel id Label5 x 	      j@y 	      l@width 	      D@height 	      4@text Sync multiline 1 itemColour 4278190080 bgColour 4278190080 visible 0  Component type ScriptSlider id TimeL1 x 	      0@y 	      (@processorId Script FX1 parameterId DTime text 
TIME (L) width 	      N@height 	      I@middlePosition 	      �?max 	      2@stepSize 	      �?mode TempoSync numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below scaleFactor 	   `ff�? Component type ScriptSlider id TimeR1 x 	     �f@y 	     @X@processorId Script FX1 parameterId DtimeR text 
TIME (L) width 	      D@height 	      D@middlePosition 	      �?max 	      2@stepSize 	      �?mode TempoSync numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below visible  Component type ScriptLabel id Label6 x 	      e@y 	     �f@width 	      I@height 	      4@text mode multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptLabel id Label7 x 	      .@y 	     @P@width 	      I@height 	      4@text time multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptLabel id Label8 x 	      f@y 	     �a@width 	      I@height 	      4@text time R multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 visible  Component type ScriptLabel id Label9 x 	     `p@y 	     @P@width 	     �Q@height 	      4@text 
feedback multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptLabel id 	Label10 x 	     �X@y 	      P@width 	      I@height 	      4@text cut multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptLabel id 	Label11 x 	     �f@y 	      P@width 	      I@height 	      4@text mix multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component type ScriptPanel id ExtraParams x 	       @y 	        width 	     @u@height 	     �e@itemColour 4282528049 itemColour2 4282528049 Component 	type ScriptPanel id ScriptPanel1 x 	      @y 	      @width 	     �b@height 	      D@parentComponent ExtraParams itemColour 4282293171 itemColour2 4282293171 Component type ScriptSlider id ClkDivide x 	     �K@y 	      @processorId Script FX1 parameterId Div width 	      D@height 	      D@min 	      �?max 	      0@stepSize 	      �?text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below parentComponent ScriptPanel1 middlePosition 	      !@ Component type ScriptLabel id 	Label12 x 	      X@y 	      @width 	      I@height 	      >@text tempo divide multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel1  Component type ScriptLabel id 	Label20 x 	      @y 	      *@width 	      I@height 	      .@text global multiline 1 bgColour 213 editable 0 parentComponent ScriptPanel1 textColour 4278190080 itemColour2 	1118481  Component 	type ScriptPanel id ScriptPanel3 x 	     �d@y 	      @width 	     @e@height 	      d@parentComponent ExtraParams itemColour 4282293171 itemColour2 4282293171 Component 	type ScriptButton id 	Button2 x 	      &@y 	     �N@width 	      4@height 	      4@processorId Script FX1 parameterId SHIn parentComponent ScriptPanel3  Component type ScriptLabel id 	Label22 x 	       @y 	        width 	     �Q@height 	      .@text multistage multiline 1 bgColour 213 editable 0 parentComponent ScriptPanel3 textColour 4278190080 itemColour2 	1118481  Component type ScriptComboBox id MultiFilterMode x 	      @y 	     �Z@max    width 	      >@height 	      4@processorId Script FX1 parameterId MultiFtype items 
LP
HP
BP parentComponent ScriptPanel3 itemColour 4294901760  Component type ScriptSlider id MultiStages x 	      $@y 	      4@processorId Script FX1 parameterId MultiDelSH width 	      >@height 	      >@min 	      �text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below middlePosition 	        parentComponent ScriptPanel3 scaleFactor 	   ����? Component type ScriptLabel id 	Label15 x 	      @y 	     �U@width 	      >@height 	      $@text s&h in multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3 fontSize 	      &@ Component type ScriptLabel id 	Label16 x 	      @y 	      `@width 	      @@height 	      >@text Filter Mode multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3  Component type ScriptLabel id 	Label17 x 	     �B@y 	      7@width 	      I@height 	      4@text 	Del s&h multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3 processorId Script FX1 parameterId MultiDelSH  Component type ScriptLabel id 	Label18 x 	     @]@y 	      8@width 	      I@height 	      4@text 	cut s&h multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3  Component type ScriptSliderPack id ScriptSliderPack1 x 	     �E@y 	     �J@width 	      T@height 	      I@parentComponent ScriptPanel3 processorId Script FX1 itemColour 2009273364 itemColour2 
16777215 textColour 
16776960 sliderAmount 	       @ Component type ScriptSliderPack id ScriptSliderPack2 x 	     �E@y 	     �Z@width 	      T@height 	      I@parentComponent ScriptPanel3 processorId Script FX1 itemColour 4291478544 itemColour2 
16777215 textColour 
16777215 SliderPackIndex 1 sliderAmount 	       @ Component type ScriptSlider id MultiStages1 x 	     �V@y 	      3@processorId Script FX1 parameterId MultiCutSH width 	      >@height 	      >@min 	      �text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below middlePosition 	        parentComponent ScriptPanel3 scaleFactor 	   ����? Component type ScriptSlider id MultiStages2 x 	      a@y 	     �I@processorId Script FX1 parameterId ShMix width 	      >@height 	      >@text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below middlePosition 	      �?parentComponent ScriptPanel3 scaleFactor 	   ����? Component type ScriptSlider id MultiStages3 x 	     �`@y 	     �Z@processorId Script FX1 parameterId 
MultiRes width 	      >@height 	      >@text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below middlePosition 	      �?parentComponent ScriptPanel3 scaleFactor 	   ����? Component type ScriptLabel id 	Label27 x 	     �_@y 	     @a@width 	      D@height 	      4@text res multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3  Component type ScriptLabel id 	Label28 x 	     @_@y 	      T@width 	      I@height 	      4@text 	s&h mix multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel3  Component 	type ScriptPanel id ScriptPanel2 x 	      @y 	     �J@width 	     �b@height 	     �[@parentComponent ExtraParams itemColour 4282293171 itemColour2 4282293171 Component type ScriptLabel id 	Label23 x 	     �S@y 	     @R@width 	      I@height 	      4@text pitch multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel2  Component type ScriptSlider id ClkDivide1 x 	      3@y 	      :@processorId Script FX1 parameterId 	GranPos width 	      D@height 	      D@min 	      �?stepSize 	      �?text Clock Divide numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below parentComponent ScriptPanel2  Component type ScriptLabel id 	Label24 x 	      $@y 	     @R@width 	      I@height 	      4@text 
position multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 parentComponent ScriptPanel2  Component type ScriptLabel id 	Label26 x 	      �?y 	      @width 	      I@height 	      .@text 
granular multiline 1 bgColour 213 editable 0 parentComponent ScriptPanel2 textColour 4278190080 itemColour2 	1118481  Component type ScriptSlider id BBDTimeMod3 x 	     @U@y 	      :@processorId Script FX1 parameterId GranPitch width 	      D@height 	      D@middlePosition 	     � @text BBD Time Mod numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showValuePopup Below parentComponent ScriptPanel2 tooltip %1.input 2.sine 3.saw 4.random 5.S&H showTextBox 0 max 	      @defaultValue 	      �? Component 	type ScriptComboBox id Mode x 	     �`@y 	     �f@max    width 	      >@height 	      4@items 'Mono
Stereo
BBDish
Tape
Granular
Muti itemColour 4294901760  Component type ScriptButton id Extra x 	      ,@y 	     �f@width 	      >@height 	      4@isMetaParameter 1 itemColour 4294901760  Component type ScriptLabel id 	Label19 x 	      I@y 	     �f@width 	     �Q@height 	      4@text extra params multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Component 	type ScriptButton id Sync x 	      m@y 	     @f@width 	      >@height 	      4@isMetaParameter 1 itemColour 4294901760 visible 0  Component type ScriptLabel id 	Label25 x 	     �p@y 	      f@width 	     �Q@height 	      4@text sync multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0 visible 0  Component type ScriptSlider id TimeL2 x 	      4@y 	      (@processorId Script FX1 parameterId DTime text 
TIME (L) width 	      N@height 	      I@middlePosition 	     �r@max 	     @�@stepSize 	      �?mode Time numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below scaleFactor 	   `ff�?visible 0  Component type ScriptSlider id TimeR2 x 	     �f@y 	     @X@processorId Script FX1 parameterId DtimeR text 
TIME (L) width 	      D@height 	      D@middlePosition 	     �r@max 	     @�@stepSize 	      �?mode Time numStrips 	     @_@filmstripImage {PROJECT_FOLDER}k9.png isVertical 0 showTextBox 0 showValuePopup Below visible 0  Component type ScriptFloatingTile id PresetPsanel x 	        y 	     �Q�width 	     �u@height 	     @o@ContentType PresetBrowser bgColour 4143972352 itemColour 4287692721 itemColour2 0 Data �{
  "ShowSaveButton": true,
  "ShowExpansionsAsColumn": false,
  "ShowFolderButton": true,
  "ShowNotes": true,
  "ShowEditButtons": true,
  "EditButtonOffset": 10,
  "ShowAddButton": true,
  "ShowRenameButton": true,
  "ShowDeleteButton": true,
  "ShowSearchBar": true,
  "ShowFavoriteIcon": true,
  "FullPathFavorites": false,
  "ButtonsInsideBorder": false,
  "NumColumns": 1,
  "ColumnWidthRatio": [
    0.3333333333333333,
    0.3333333333333333,
    0.3333333333333333
  ],
  "ListAreaOffset": [
    0,
    0,
    0,
    0
  ],
  "ColumnRowPadding": [
    0,
    0,
    0,
    0
  ],
  "SearchBarBounds": [],
  "MoreButtonBounds": [],
  "SaveButtonBounds": [],
  "FavoriteButtonBounds": []
} visible  Component type ScriptButton id 	presets x 	     �k@y 	     �f@width 	      >@height 	      4@isMetaParameter 1 itemColour 4294901760  Component type ScriptLabel id 	Label21 x 	     p@y 	     �f@width 	     �Q@height 	      4@text 	presets multiline 1 itemColour 4278190080 bgColour 4278190080 editable 0  Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor Type Hardcoded Master FX ID Script FX1 Bypassed Network dlay Mix 	   @
��?Feedback 	    )\�?Mode 	      @Sync 	      �?DTime 	     @�@Reverse 	        DtimeR 	     Pq@PingPong 	      �?Tone 	      �?GranPos 	   ���?GranPitch 	      @Div 	      0@MultiRes 	    ���?MultiDelSH 	   @�z��MultiCutSH 	      �?SHIn 	      �?ShMix 	      �?MultiFtype 	       @EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� SliderPacks  SliderPack EmbeddedData 032.rGEt9zLyL6iqGEtOWOJ79v0iB7Sb8nvOjBWO+PJb87C  SliderPack EmbeddedData 032.35QA+jBWO7Sb8nvOOJb8935Qg6CWOJrOtdT39fqGE7C  Processor Type 
Dynamics ID Dynamics1 Bypassed GateEnabled 	        GateThreshold 	   ��LI�GateAttack 	      �?GateRelease 	      Y@CompressorEnabled 	      �?CompressorThreshold 	   ���"�CompressorRatio 	   ��� @CompressorAttack 	   @3#W@CompressorRelease 	   `�)@LimiterEnabled 	        LimiterThreshold 	     �0�LimiterAttack 	      �?LimiterRelease 	      $@CompressorMakeup 	      �?LimiterMakeup 	        EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� Processor Type 
ScriptFX ID Script FX2 Bypassed NumDisplayBuffers    Script � function prepareToPlay(sampleRate, blockSize)
{
	
}
 function processBlock(channels)
{
	
}
 function onControl(number, value)
{
	
}
  EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� Content   Networks  Network ID stored Version 0.0.0  UIData  ContentProperties DeviceType 	Desktop  Processor Type AudioLooper ID Audio Loop Player1 Bypassed Gain 	   ��<�?Balance 	        VoiceLimit 	      p@KillFadeTime 	      4@IconColour 0 SyncMode 	      �?PitchTracking 	        LoopEnabled 	      �?RootNote 	     @P@SampleStartMod 	        Reversed 	        FileName �/Library/Application Support/modularsamples/oi grandadxxx/AudioFiles/GrandadGoesToTheMovies/VirginWitch/Speech/SpeechChain.wav min     max ��. loopStart     loopEnd ��. EditorStates BodyShown 1 Visible 1 Solo 0 Folded 1  ChildProcessors  Processor Type MidiProcessorChain ID Midi Processor Bypassed EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type ModulatorChain ID GainModulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0  ChildProcessors  Processor 	Type SimpleEnvelope ID DefaultEnvelope1 Bypassed Monophonic 	        Retrigger 	      �?Intensity 	      �?Attack 	      @Release 	      $@LinearMode 	      �?EditorStates BodyShown 1 Visible 1 Solo 0  ChildProcessors  Processor Type ModulatorChain ID Attack Time Modulation Bypassed Intensity 	      �?EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type ModulatorChain ID PitchModulation Bypassed Intensity 	        EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   Processor Type EffectChain ID FX Bypassed EditorStates BodyShown 1 Visible 0 Solo 0 Folded 1  ChildProcessors   RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� RoutingMatrix NumSourceChannels    Channel0     Send0 ����Channel1    Send1 ���� macro_controls  macro name 	Macro 1 value 	        midi_cc ���� macro name 	Macro 2 value 	        midi_cc ���� macro name 	Macro 3 value 	        midi_cc ���� macro name 	Macro 4 value 	        midi_cc ���� macro name 	Macro 5 value 	        midi_cc ���� macro name 	Macro 6 value 	        midi_cc ���� macro name 	Macro 7 value 	        midi_cc ���� macro name 	Macro 8 value 	        midi_cc ���� MidiAutomation   MPEData Enabled  