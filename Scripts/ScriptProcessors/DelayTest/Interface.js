Content.makeFrontInterface(350, 200);


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
 