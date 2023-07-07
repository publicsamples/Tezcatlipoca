namespace project
{

struct end1_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "end1";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "286.nT6K8CVsATJB.HxSvLBHMha.GXTdlH3bbH4sHvfCCyZ4YAyinZi5ADvDBaALTA3mjwVLcIE4I6ByiaWtLXqFQvPR1hsq2fnPyWG6I7iexL9NF1EZ1TNNR5eKB0t+O1kpV70S+6QQSFGMEzbPiALDrKZ9nd2+XIwaQp+sCD4MrAG6v6jrAnPIcjMwlaBt.jvN5cTzjsIzLpgPdpBgzarDz50dii9CsBnoTjepdeDhUHglcz6nZxVrEaYno+M3qijMh7dWnYBKnn4CuGhX6D.Hf.jQjwR6PLfz9X3JE83IXvykwxZPQl4NVaC9RcGiJmmjKUfx68Cb4KdNrPFug..CcfQCDpKuYrCSvEfoHPCIDdPAFJ.zdOWAfF2sygg2L.";
	}
};
}

