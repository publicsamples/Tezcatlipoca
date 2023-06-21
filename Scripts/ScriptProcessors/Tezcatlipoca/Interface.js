Content.makeFrontInterface(928, 690);

Engine.setLatencySamples(500);

const var mod1 = Synth.getModulator("mod1");
const var mod2 = Synth.getModulator("mod2");
const var mod3 = Synth.getModulator("mod3");
const var mod4 = Synth.getModulator("mod4");
const var mod5 = Synth.getModulator("mod5");
const var mod6 = Synth.getModulator("mod6");

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



const var MODSTO3 = Content.getComponent("MODSTO3");
const var MODS4TO7 = Content.getComponent("MODS4TO7");
const var MODPAGE = Content.getComponent("MODPAGE");



inline function onMODPAGEControl(component, value)
{
		MODSTO3.showControl(1-value); 
	MODS4TO7.showControl(value);
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
};

Content.getComponent("modsyncmode").setControlCallback(onmodsyncmodeControl);


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
 