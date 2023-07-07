namespace project
{

struct verbsend_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "verbsend";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "525.nT6K8CF+GzAD.XZkFYB.spd.6aSPBbev8UZMubiLMxXi6FFf25DRVsz++VVbFMVhIlESorC.6.PO.vnYq2ZkaaXfwpdp+LSdmzJmflwtxJapzakzAmleKJkt4Gm6n4IMyV+HXq4asT+LN.M2fjEMOQkp49TBrleBJ9ov64lhO2yfJxn19Kk6THm3dH3OZ9wnIiXlMoQyLZta987UHWdCFMy1EM+r0+9WjUYEMTLJ14wECs5GHglzBU6xEvwguYZaV2Aee6CgG.zabMyvtT5EJGxyEMEkllfbOGj+vc9AdxA8hRwnHWDDBiOI3EzAPQHDjsjv1tchYbGNmKFIAAAgv2.7UdgdwrvycmlYK0L2peNoQ1zY25uQqUhbPHIoIIXrhgpQi7bMyRFnAkz4DPnAg.IAACG.fBraFP8tS6L2YpSno0utgMsjU3QZ2v74BwEajnwxpfiX8a.cPl3IXwZ3.woockwiS9mrYB7DNOD81Ri.T03yzrEf+ICI+04dsP+nK+70b0qjMaLDLriA7BXywvS4XpEfagBpYgW2g7AElR6zlFCP82wML.1p6ZngTPr9SreAvlCZPSHmBNv3hrxca.3mZF1wvSIxJHHP8E5Js.S3AuaqFqxgkQAUp4sgPy5PmwXv3gBHMrwgyJe7j1Mr7jEi1vE9.N.3cPjwMnAhMY3fEwcqVDcyccfJGfuJ";
	}
};
}

