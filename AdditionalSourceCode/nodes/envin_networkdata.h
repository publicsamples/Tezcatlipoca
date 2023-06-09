namespace project
{

struct envin_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "envin";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "580.nT6K8CVIGTcD.XLVPYB.uhd.6AFIkRhnbKR9SftYUXJo5v.wlKb0GSA5+unw2c8XKsESoLD.EA.Q.vOa8uuFu5V1LwXwt1SyWdq0ocbfwbAUeIzux4UyflwbcKcpy6k+..M+WlQzMC4jSns9TvRHFxu4n4ITZzbl5by8iHvEYNzwiTKbhe8Ib9HUyTByeVzon4f+nE9UEQ2hYDqU.kqWJmRtOV0mPNgWOlcYV4A5qDjweZKfGlhgFb06BiTaafG11nCzh9WKm.A7zRniw765Zl2rFdb7JRXkt+Js051iNva8oypEHSTQTQRsGMWylwoDHLI7lMqMElPgYleKz.nYN+EIEa8uHvSQhnlhPUEA8N3lQkvteN5p6aeIZOhvjPL24TiUifmapRhppBh64fzDfgfqbPdRTRSStonnHIHFZHz7lOiE+h7dtJom6kPFAjFnQl6PiLiBBAAQ.g.X.Ap4NtALjE8YZvLYgDZZYTmoCIC.QA7blGYMVIXMGCVvUNg2hS7p73JaWLYIVxZ5XVv4JHmMOg.nGxMX2fIFIqPGzlv76PWSNHwDb2L9W2iVpgNzNBCzlwXmQcP1vCHQvf.dAHnlA1lzHJ3.P4BH2GzLm7pX.MTfC.WPXhJmjP6ZQ0.vgEhWUt4giCsQ3nbwyEm6gId.by.eLvZV953Qfir7ERht4F.sg4.skiOFx7ecvhooYARepwrnsosifGi.Dv1D4tX8kpGB3Tg5DBFIEIDEHfwlACP7Zjwnj6fPxbgcd.sANQAup.";
	}
};
}

