namespace project
{

struct Buff2_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "Buff2";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "137.nT6K8CB8EP..xZzEa.WZa.WyQ0b0toVhJm2tr.kJG1BnpEhghdm9AvZqLImH+uCpL45JjA9D88xDMG20xEVhUWKa2xPBvuzIRCuMKK..ulrKDuJoRJ21drd3CTTTbfBfmfgCdD7tn0U.L.BPBlnOPlnP3I.bqATAj7Xne.3t3osX+VvHy5HKbd.";
	}
};
}

