Content.makeFrontInterface(820, 530);

const var FloatingTile1 = Content.getComponent("FloatingTile1");
const var ScriptFX1 = Synth.getEffect("Script FX1");
const var Label42 = Content.getComponent("Label42");
const var Granular = Content.getComponent("Granular");

inline function onModeControl(component, value)
{
	

if(value == 1)
	    	{
	Label42.showControl(1);
	Granular.showControl(0);
	ScriptFX1.setAttribute(ScriptFX1.dmode, 0);
	}
	
	if(value == 2)
		    	{
		Label42.showControl(1);
		Granular.showControl(0);
		ScriptFX1.setAttribute(ScriptFX1.dmode, 1);
		}
		
		if(value == 3)
			    	{
			Label42.showControl(0);
			Granular.showControl(1);
			ScriptFX1.setAttribute(ScriptFX1.dmode, 2);
			}


};

Content.getComponent("Mode").setControlCallback(onModeControl);



inline function onPresetsControl(component, value)
{
FloatingTile1.showControl(value);
};

Content.getComponent("Presets").setControlCallback(onPresetsControl);

const var dp1 = Synth.getDisplayBufferSource("Script FX1");

const var rb1 = dp1.getDisplayBuffer(0);


const var BUFFER_LENGTH = 16384;

const var properties = {
  "BufferLength": BUFFER_LENGTH,
  "NumChannels": 2
};


rb1.setRingBufferProperties(properties);


const var Waveform1 = Content.getComponent("Waveform1");


Waveform1.setTimerCallback(function()
{

	this.data.buffer = rb1.createPath(this.getLocalBounds(0), // area
									 [0, BUFFER_LENGTH, 0, 1.0], // [x_start, x_end, y_min, y_max]
									 0.0 // start value (the initial value at position 0)
									 );
	this.repaint();
});

Waveform1.startTimer(30);

Waveform1.setPaintRoutine(function(g)
{
	g.fillAll(0xFF000000);
	g.setColour(0xFFA90707);
	g.fillPath(this.data.buffer, this.getLocalBounds(0));
});


const var Table1 = Content.getComponent("Table1");
const var Table2 = Content.getComponent("Table2");

const var ScriptSliderPack1 = Content.getComponent("ScriptSliderPack1");
const var ScriptSliderPack2 = Content.getComponent("ScriptSliderPack2");

inline function onModModeControl(component, value)
{
if(value == 0)
	    	{
	Table1.showControl(1);
	ScriptSliderPack1.showControl(0);
	ScriptFX1.setAttribute(ScriptFX1.RecModType, 0);
	}
if(value == 1)
	    	{
	Table1.showControl(0);
	ScriptSliderPack1.showControl(1);
	ScriptFX1.setAttribute(ScriptFX1.RecModType, 1);
	}

};

Content.getComponent("ModMode").setControlCallback(onModModeControl);


inline function onPbModModeControl(component, value)
{
if(value == 0)
	    	{
	Table2.showControl(1);
	ScriptSliderPack2.showControl(0);
	ScriptFX1.setAttribute(ScriptFX1.PbModType, 0);
	}
if(value == 1)
	    	{
	Table2.showControl(0);
	ScriptSliderPack2.showControl(1);
	ScriptFX1.setAttribute(ScriptFX1.PbModType, 1);
	}
};

Content.getComponent("PbModMode").setControlCallback(onPbModModeControl);



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
 