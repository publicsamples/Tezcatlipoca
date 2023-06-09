Content.makeFrontInterface(780, 585);


// Panels Array //
const var Panels = [];

Panels[0] = Content.getComponent("delay");
Panels[1] = Content.getComponent("Gran");
Panels[2] = Content.getComponent("Filter");
Panels[3] = Content.getComponent("pshift");

const var PanelsB = [];

PanelsB[0] = Content.getComponent("delay1");
PanelsB[1] = Content.getComponent("Gran1");
PanelsB[2] = Content.getComponent("Filter1");
PanelsB[3] = Content.getComponent("pshift1");

const var PanelsC = [];

PanelsC[0] = Content.getComponent("delay2");
PanelsC[1] = Content.getComponent("Gran2");
PanelsC[2] = Content.getComponent("Filter2");
PanelsC[3] = Content.getComponent("pshift2");


const var Slot1 = Synth.getEffect("Slot1");
const var Slot2 = Synth.getEffect("Slot2");
const var Slot3 = Synth.getEffect("Slot3");


// Combo Box //
const var cmbPanel= Content.getComponent("cmbPanel");
const var cmbPanel1= Content.getComponent("cmbPanel1");
const var cmbPanel2= Content.getComponent("cmbPanel2");



inline function oncmbPanelControl(component, value)
{
    for (i = 0; i < Panels.length; i++)
        Panels[i].showControl(value - 1 == i);
        
        Slot1.setAttribute(Slot1.mode, value);
};

Content.getComponent("cmbPanel").setControlCallback(oncmbPanelControl);


inline function oncmbPanel1Control(component, value)
{
    for (i = 0; i < PanelsB.length; i++)
        PanelsB[i].showControl(value - 1 == i);
        
        Slot2.setAttribute(Slot2.mode, value);
};

Content.getComponent("cmbPanel1").setControlCallback(oncmbPanel1Control);


inline function oncmbPanel2Control(component, value)
{
    for (i = 0; i < PanelsC.length; i++)
        PanelsC[i].showControl(value - 1 == i);
        
        Slot3.setAttribute(Slot3.mode, value);
};

Content.getComponent("cmbPanel2").setControlCallback(oncmbPanel2Control);





const var mod1 = Synth.getModulator("mod1");
const var mod2 = Synth.getModulator("mod2");
const var mod3 = Synth.getModulator("mod3");
const var mod4 = Synth.getModulator("mod4");
const var mod5 = Synth.getModulator("mod5");


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

const var stages = Content.getComponent("stages");


inline function onstagesControl(component, value)
{
Slot1.setAttribute(Slot1.stageno, value);
Slot2.setAttribute(Slot2.stageno, value);
Slot3.setAttribute(Slot3.stageno, value);
};

Content.getComponent("stages").setControlCallback(onstagesControl);



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
 