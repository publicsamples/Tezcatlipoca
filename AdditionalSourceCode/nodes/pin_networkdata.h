namespace project
{

struct pin_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "pin";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "324.nT6K8CFqATcB.XND2LBHMSa.GPKGESTMgdVROIGvgf+4IH.3QO+00.HMIvNHcoiVltB.t.vK.7Z6+ZHcfD27qkNd+PaCJRjYckLwkZoVJiDecSx4K3qwQ0DkL4IwH7VhmqT6mZWIfcYVHLtMS6zr3o.LBn1kAiCNZcHTAPIl0UdRboJRjwRRKmNLfu1tAR4btIVSAwucNn.jHO41K3qaOD+dcDsQm16Lm1snHwGG.AAHJ.IgGFnMRzmZWGQo4Efiei5eZgjwV0leiz.PISbLwRAWpkpuFkEIpLb94n0WKHisplHaxyZ78gsIf.EH5PMdP5.ysy0OXCDhd+SPPZJA+R.VlwwbBJeCAvlEYsyPnVgbszNDkA2THJZCSxBC4Jpi8ER4KRNbzi+X.n8NvgbHKyhOCL2VrT4wFWe6pFgElaQiwFKJ";
	}
};
}

