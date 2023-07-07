const var inputfilter = Content.getComponent("inputfilter");
const var FilterBank = Content.getComponent("FilterBank");
const var inputmode = Content.getComponent("inputmode");
const var Slot1 = Synth.getEffect("Slot1");


inline function oninputmodeControl(component, value)
{
	inputfilter.showControl(1-value); 
	FilterBank.showControl(value);
	Slot1.setAttribute(Slot1.filtermode, value);
};

Content.getComponent("inputmode").setControlCallback(oninputmodeControl);

const var inputfilter1 = Content.getComponent("inputfilter1");
const var FilterBank1 = Content.getComponent("FilterBank1");
const var inputmode1 = Content.getComponent("inputmode1");
const var Slot2 = Synth.getEffect("Slot2");


inline function oninputmode1Control(component, value)
{
	inputfilter1.showControl(1-value); 
	FilterBank1.showControl(value);
	Slot2.setAttribute(Slot2.filtermode, value);
};

Content.getComponent("inputmode1").setControlCallback(oninputmode1Control);

const var inputfilter2 = Content.getComponent("inputfilter2");
const var FilterBank2 = Content.getComponent("FilterBank2");
const var inputmode2 = Content.getComponent("inputmode2");
const var Slot3 = Synth.getEffect("Slot3");


inline function oninputmode2Control(component, value)
{
	inputfilter2.showControl(1-value); 
	FilterBank2.showControl(value);
	Slot3.setAttribute(Slot3.filtermode, value);
};

Content.getComponent("inputmode2").setControlCallback(oninputmode2Control);

const var inputfilter3 = Content.getComponent("inputfilter3");
const var FilterBank3 = Content.getComponent("FilterBank3");
const var inputmode3 = Content.getComponent("inputmode3");
const var Slot4 = Synth.getEffect("Slot4");


inline function oninputmode3Control(component, value)
{
	inputfilter3.showControl(1-value); 
	FilterBank3.showControl(value);
	Slot4.setAttribute(Slot4.filtermode, value);
};

Content.getComponent("inputmode3").setControlCallback(oninputmode3Control);
