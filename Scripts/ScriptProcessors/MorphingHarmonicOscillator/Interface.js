Content.makeFrontInterface(600, 300);

const var SliderPack1 = Content.getComponent("SliderPack1");
const var SliderPack2 = Content.getComponent("SliderPack2");
const var SliderPack3 = Content.getComponent("SliderPack3");
const var SliderPack4 = Content.getComponent("SliderPack4");

const var Crossfade = Content.getComponent("Crossfade");

//SliderPack1.setPaintRoutine(function(g){    
//	g.fillAll(Colours.blue);
 //   g.setGradientFill([Colours.white, 0, 20, Colours.orange, 0, 18]);
//    g.drawAlignedText("Click to close", [10, 0, this.getWidth(), this.getHeight()], "left");       
//});

//open panel
inline function onCrossfadeControl(component, value)
{

	{
		SliderPack1.fadeComponent(0, 100);
	}
};

Content.getComponent("Crossfade").setControlCallback(onCrossfadeControl);


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
 