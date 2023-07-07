Content.makeFrontInterface(770, 466);

Engine.setLatencySamples(500);

const var mod1 = Synth.getModulator("mod1");
const var mod2 = Synth.getModulator("mod2");
const var mod3 = Synth.getModulator("mod3");
const var mod4 = Synth.getModulator("mod4");
const var mod5 = Synth.getModulator("mod5");
const var mod6 = Synth.getModulator("mod6");
const var mod7 = Synth.getModulator("mod7");
const var mod8 = Synth.getModulator("mod8");
const var mod9 = Synth.getModulator("mod9");

const var modtype1 = Content.getComponent("modtype1");
const var ScriptSliderPack1 = Content.getComponent("ScriptSliderPack1");
const var modtable1 = Content.getComponent("modtable1");



inline function onmodtype1Control(component, value)
{
	modtable1.showControl(1-value); 
	ScriptSliderPack1.showControl(value);
	mod1.setAttribute(mod1.type, value);
	
};

Content.getComponent("modtype1").setControlCallback(onmodtype1Control);

const var modtype2 = Content.getComponent("modtype2");
const var ScriptSliderPack2 = Content.getComponent("ScriptSliderPack2");
const var modtable2 = Content.getComponent("modtable2");



inline function onmodtype2Control(component, value)
{
	modtable2.showControl(1-value); 
	ScriptSliderPack2.showControl(value);
	mod2.setAttribute(mod2.type, value);
};

Content.getComponent("modtype2").setControlCallback(onmodtype2Control);

const var modtype3 = Content.getComponent("modtype3");
const var ScriptSliderPack3 = Content.getComponent("ScriptSliderPack3");
const var modtable3 = Content.getComponent("modtable3");



inline function onmodtype3Control(component, value)
{
	modtable3.showControl(1-value); 
	ScriptSliderPack3.showControl(value);
	mod3.setAttribute(mod3.type, value);
};

Content.getComponent("modtype3").setControlCallback(onmodtype3Control);


const var modtype4 = Content.getComponent("modtype4");
const var ScriptSliderPack4 = Content.getComponent("ScriptSliderPack4");
const var modtable4 = Content.getComponent("modtable4");



inline function onmodtype4Control(component, value)
{
	modtable4.showControl(1-value); 
	ScriptSliderPack4.showControl(value);
	mod4.setAttribute(mod4.type, value);
};

Content.getComponent("modtype4").setControlCallback(onmodtype4Control);

const var modtype5 = Content.getComponent("modtype5");
const var ScriptSliderPack5 = Content.getComponent("ScriptSliderPack5");
const var modtable5 = Content.getComponent("modtable5");



inline function onmodtype5Control(component, value)
{
	modtable5.showControl(1-value); 
	ScriptSliderPack5.showControl(value);
	mod5.setAttribute(mod5.type, value);
};

Content.getComponent("modtype5").setControlCallback(onmodtype5Control);

const var modtype6 = Content.getComponent("modtype6");
const var ScriptSliderPack6 = Content.getComponent("ScriptSliderPack6");
const var modtable6 = Content.getComponent("modtable6");



inline function onmodtype6Control(component, value)
{
	modtable6.showControl(1-value); 
	ScriptSliderPack6.showControl(value);
	mod6.setAttribute(mod6.type, value);
};

Content.getComponent("modtype6").setControlCallback(onmodtype6Control);

const var modtype7 = Content.getComponent("modtype7");
const var ScriptSliderPack7 = Content.getComponent("ScriptSliderPack7");
const var modtable7 = Content.getComponent("modtable7");


inline function onmodtype7Control(component, value)
{
	modtable7.showControl(1-value); 
	ScriptSliderPack7.showControl(value);
	mod7.setAttribute(mod7.type, value);
};

Content.getComponent("modtype7").setControlCallback(onmodtype7Control);

const var modtype8 = Content.getComponent("modtype8");
const var ScriptSliderPack8 = Content.getComponent("ScriptSliderPack8");
const var modtable8 = Content.getComponent("modtable8");



inline function onmodtype8Control(component, value)
{
	modtable8.showControl(1-value); 
	ScriptSliderPack8.showControl(value);
	mod8.setAttribute(mod8.type, value);
};

Content.getComponent("modtype8").setControlCallback(onmodtype8Control);

const var modtype9 = Content.getComponent("modtype9");
const var ScriptSliderPack9 = Content.getComponent("ScriptSliderPack9");
const var modtable9 = Content.getComponent("modtable9");



inline function onmodtype9Control(component, value)
{
	modtable9.showControl(1-value); 
	ScriptSliderPack9.showControl(value);
	mod9.setAttribute(mod9.type, value);
};

Content.getComponent("modtype9").setControlCallback(onmodtype9Control);


const var mods = [];

mods[0] = Content.getComponent("MODSTO3");
mods[1] = Content.getComponent("MODS4TO7");
mods[2] = Content.getComponent("MODS4TO9");



inline function onMODPAGEControl(component, value)
{
		
	for (i = 0; i < mods.length; i++)
        mods[i].fadeComponent(value - 1 == i, 500);
};

Content.getComponent("MODPAGE").setControlCallback(onMODPAGEControl);

const var PRESETS = Content.getComponent("PRESETS");
const var presetpanel = Content.getComponent("presetpanel");


inline function onPRESETSControl(component, value)
{
	presetpanel.showControl(1-value); 
	presetpanel.showControl(value);
};

Content.getComponent("PRESETS").setControlCallback(onPRESETSControl);

const var ulp = Content.getComponent("ulp");


ulp.setMouseCallback(function(event)
{
  if (event.clicked)
  {
    Engine.openWebsite("https://modularsamples.gumroad.com/");
  } 
  else 
  {
    link_hover = event.hover;
    this.repaint();
  }
});

const var modsyncmode = Content.getComponent("modsyncmode");


inline function onmodsyncmodeControl(component, value)
{
	mod1.setAttribute(mod1.syncmode, value);
	mod2.setAttribute(mod2.syncmode, value);
	mod3.setAttribute(mod3.syncmode, value);
	mod4.setAttribute(mod4.syncmode, value);
	mod5.setAttribute(mod5.syncmode, value);
	mod6.setAttribute(mod6.syncmode, value);
	mod7.setAttribute(mod7.syncmode, value);
	mod8.setAttribute(mod8.syncmode, value);
	mod9.setAttribute(mod9.syncmode, value);
};

Content.getComponent("modsyncmode").setControlCallback(onmodsyncmodeControl);

const var voice = Content.getComponent("voice");

const var voices = [];

voices[0] = Content.getComponent("SLOT1");
voices[1] = Content.getComponent("SLOT2");
voices[2] = Content.getComponent("SLOT3");
voices[3] = Content.getComponent("SLOT4");


inline function onvoiceControl(component, value)
{
	for (i = 0; i < voices.length; i++)
        voices[i].fadeComponent(value - 1 == i, 500);
};

Content.getComponent("voice").setControlCallback(onvoiceControl);


//include("input.js");
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
 