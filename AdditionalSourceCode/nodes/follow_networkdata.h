namespace project
{

struct follow_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "follow";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "307.nT6K8ClRAzTB.XGz0PBDKaa.upyrZ18BTAYFMfLEQZpPXNZKninE..fPfC.XlI5Q5GvJ.rB.r..GkCfGSqT173NRSvA+t3IHd0i5QkJv6XlzaqbG3ViYHA.eDHD3a3wNz6j.LjmKNVOwujfuMKZzBM0B2tjBj.+k1EOAAdU5fesRRplMHbGSwD87VGSaW7TEz1zhk7yPyD32olV4Nl0QqywPxEaPV+VM7ihCdGMTE33QiGMLHWf+Mws.mQqY3d5.bszGLslICHBzi.w3AUxUOpLcLIIvmJdauYzmR4qklI9ETuWBe.BHDADHxwiYhT3vrABQu8IHnLk.+vgGlKyOVE8FBfMKxYxPrVges7N7vfaODCsgAYg.tBVz9uIegjMdc9Xc0Vm8DGh3uJjFbnLATxgNJ.";
	}
};
}

