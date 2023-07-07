namespace project
{

struct follow2_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "follow2";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "313.nT6K8CVoAzWB.XFj0LBHqha.mXYpSHfC2bgeEDhPvo8Smgs2eZ1+E.fQNDjlJ46NktB.r..K.LsDn4jmebI5+DqPilcycnZxVrEaQnIzcTwFR9XweOugM.MghXzzgna4aGQikDn6q73VP1uH7DCONh+jrC3v.PR0M2AilrsQyVSQwUtjPBc7joUrgN9gdD4E3WUykx7gWGM6pGCIgt6mZHzarIt39XWwiOZzjsXwyALdX7XvlPyXk+7.Jdlh+UHnsFul7LkU.nnDJRwCrTxVrcgNIGMWDw9aJbjejsFuqlsnukzHf.jQzg1dP5.y34pC1.An29BBJSRfub3g3x7Gqx1PArghbFYHVqPuVdGd5faIDCwvfYgfbErw98P9hmCSrweF.ZYG3LGhntJjBBLb6JL6Rnlcjhb1L.";
	}
};
}

