namespace project
{

struct Granulator_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "Granulator";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "54.nT6K8CRKoE..NUFc28lbqAP.BjDQ.D.CEbjbg4VcrEFcuIG.VUlbyk1atAP.GT.Lt.iKv...";
	}
};
}

