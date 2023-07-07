namespace project
{

struct replace4_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "replace4";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "3356.nT6K8CVXqUIZ.npW.GAKPBYEM7owbKVC7xswVhWgD5+99ybWaiQDLEEQ9uZ6ZVDZo+CspwUPoIJPPxvFArP.MDfGOXWsGL3tnuabElxUIFiQJLG28aEFCSWqL3l.CRVev5HeUc2tKQpPQHpCBHDFA2DnE11wQ4m7R7Qzvllrv49Pcg2TYa3rLQxCejrtYb3pyvEAmOvxPk0RrsU4clENJdGvZttaMS2MID6FNGjEdCGTq4XbRfZgbmrz.Bpgoub3j8fOVpKLLF1sEiPtTWU4KZsaFkUCNJMa0kyA0lzP5ZYku.Ze6nsXvJi2Vpro7FOj4p6fxtIS0wcIBAlxUNKt1uwTWXNHd3AnVCKBTywz28sxpsb.R1il1y8.Ta5hgYu97flGoL5qE1tsxRt..07rsb7Qm2R1Lj.0tSYJ.A0dYdYdNJPMqLFSe0PKdkrTWWsyBTCCMh.07PmAYeoPNJ+CF4OYEBe0Yz+P+hYuT2K3gjcusH9pOnbRmOXT9NJShdPOViT5i9+GyHcC3AwDWFLIbk05yjS.PPOOpRmxH7cGLYY8o6un3yeOZChHfZMOrrO3hFTW3pbYikY43n7dmDJZTarVPvUI9T+8OzmzWA5Xg8ry4JM9iFE87+8juW+ZMhVoXgY0gTuRcZbBo+CJq9LplIJ5idej6O3.jUZMB+eJiunn+y7.45gl2qx6l3ltSS2MUPHiLTXNcbfV6QYkz.lFtKPcLw2bV7MsllMbSZsuJiBeva88JqkyGcFEqeTmkoxWnuSVNg..80YA5QZiAAqiMaNYLGAh3UlS3TdD3gTlZSGOGGERlnxAZrIOVGEIzewWMFeesBgtnzoO3T9UIkJovHYUNi9E9Mb3lPR6CKHYh7L1nBrc1ClCtVU7QnBUfYwzUUr04qqLMNPBSccYQEezV8F7DpvCIrtBL8EKCU31.VFY7TlEcbidSIUlkyEC2DTDitSku+UJzg+GgBLmEWjI9IqK19hcuvmMlCmkeFcuJieMNeQU24UYU3JS7IdkPrUV3JGD6s1t0bkyS3UYFeRZ0e+Y.HnlKetCB8EewwPURFqub3tHiVJ8m0OSGK7NKqcFX6WuDEQhvC60B0oR2ivXjbJoQQ1pJaDnQznrRgSIkURyzjkBEJSkqsWJIxWTDIEPWaoxW3Ms6D9exYLBqyLyVFusWHP0yeNDQQ0JkNmRYLBg+2bJwGbFgfjonxbbRrAYh+b7NqZ6oAwDcLZINsgxF6NMkqfSV1MZ6F6Jmo5XgorRXtJQQ5iViQXtnLCL.wn2zEQ6C7jD9D9wJ8Qce.blvu9rUPiJ+wkVD.LwSf+umGc9.fHHBmQSA.cLWT7RLkTXrBw3NvigxZ0AioYfcAShSnuH+QeeVmX1X7Pxp2NMy2tRXMHRqyXLBozO9QzGjpkOc9pAnsyjvfYmcYgw3WIb9CWBZgfql79uyTZbT9WJ+Zs.RXjjR+Jk5+hUGii.u91oCVuiP9gN6BrLMerRWLbTnxRvMoVm3NAIfOT9woS8IUdIYtWYp6GVWOFUqPojFLXjnJ9HMFZFRD.B..EIBFB..CjkFFm0x0ifHQwRw.gPBvvwx.f..Dfg.X.A..v.L.fgYfhphFfT5CSSXEBBNuJgxuMD0EamCLFhrOzHUJBOv7iXsEmHTa4EwZCdQP6gajzZbhnVJ+HPSrpL4IZhMKXo08JQJgnyX9Ey1Ekdbg0aldPai7qGPMLav6r9RzFsc.GltO7pK+6r9AlZYkSTO3WuLNsA10AcqzHkrkqg+kj9F1g.vfR7eZQUwbMCJNJ4YOjzq7zuohTBFgPoungGFmoNfBn5DEhDzO0GsbxfHUenuBoMTdDJA4XgufPxchSSnFAheC7fj.dfLclVn8DDAXuJdoEtsPaDqAn9RCwYvk5.JMbZiNhLajxZBrouonSpTCvIxVaqdpkAo5oZ0lC3CJiYJFO3SvYmolTpk5BYfpAFNm2TEtDZ0shnE+hZBt.BnWorRwnCt22BOadEkbFL4IJXiZPXYmNnOuwgKJ67M8btH7qRHKDvUanEcv.jMajpguy9lkLgvwg4NAejwZ3t31oVf5VTkLXVOgsZkLAww0US.KkiTpDSaRa4je+Vo3SAhktDAXQDiMRGMrpMWxFU7C1QbWV+DYRiIPq5PXkjFejpoES.0b6KoaVRGI4srHcTc1nv7+GzEt+VpExdYcjkwSE6LbzNBy45dVy0t2ExHJGJ9MDsaKLVAvA3DEiBZ6ZOhWVjlxL2DNoAM+xoadWRzc.k9a9bkbFry3ziaI8wRjvLSqTucVgGxfuSlNarpU8cbw8tnNyLY++DeuMdbJibaLkd6wiLVPWdr9a8nP.3qvCoAd8oZW78qrLxRdtF3uRpeb8CU69HwiUKpZNeHbDi5HusM+bCs0oKUZXJPTACwbG2p4RaswbJVQLAYbPMLNooxzgP2jXjJ1qVQhEeeclhAErZvAv.qPT0M4qfEVCMQEDf8bA7z.vcl938okTO8LQ22DrmtcvQHk4h+TvwTronoufwoFGynkZdvrJ78F1giar23+e16QxBF0PpsLTHeNZIdfwZCRf.AGL3apGvYl.QQNppZHQV5.NuuFBAPC2ALPdTxXBRHGJEKWQ3.fvNv2mBxao75GlX7Ly7bs8.Dqiw1HsXDyDVbmwMD0RJiLY5zxn.7l0tKJJKXhgcIvh4n3olWvDHOo3MiEdpPxAiQmgMSnslDAC1ubTw5RxWp67gjRzLZEwIdiUidVqKKntYfMEB5hUSTMQPR86Z5CRb6Ynx3AYENkgsFgudbsbBVd7IsXzV81xEZLqrwsHsiijNpN5SwqUGXPE0uN7rS5tsbpthKXcegH4ufh8vzLTbphWfBI8ecvDza7KcyT5wkobjaB8EJixsIHzV9R+QiiTiYvZEs.BRXmLVICTXHoFsglOQYjgzWtP4Cc70k+I.qiHIBj91Qoazyh7tfbScb3Ao8f2shVD8I22veYOH.FBSAAfeQHVHPGDYRyTmi.Kv7KLGdpF2iWQFYLwWF6FXj.eW2AqPGTrDJAMWvnYUx6n3LfjySVbrnpVBp0BCH+2ZJ.J8h74iB58Nim8qqLXbqxqm1SpYfJPDYa19IWpxR6bPABrBBJSExFe1zHtf8YHh6A2N+qfYw9KtLFFiiIXYo6g687lT2rkxh7EDjC0z39Gy9bclEwwklQTjxH87zHgA5bhs7vmIvahSTeYNdPl+VJvy5PfDAAus+mxoVnK.mSFZ6hKCkc7l.NHR1cQZcTre+hNVb91WTMLCslZAhn3jAhH7oOmQvigKbltub2XEEnPHtFdS0kCKqC9dYknccWtZOCbQAg+eMVs+HYA7fUwKUkyX3BwovjkpAbjLyhT+vXV8CV2N2pEakls7KvIKFSUVkPVd5oB+44kxw+tpBEfpKEszIlDl1XkktCAuBZCUFP5u0IutZXqLSGEwX+X7V1joCz8CnJNfCLfsfTCyKACjQPDbcYyMYvamR+bfnP6dAFnQHR+CFX87dED1Pk0QnDBLDRPHA.UCHmnEg6n3.fPmVFap.iH0BOxJ5h0iLZa05M6cvR68YfGVVALR5cD59t.Wu8CPFk1HD9DEBlAynJXjMKIbdBI356begnkI58fvbCkqFFj2FsjBW+b.6OCpYpcqi211e8oAA5akefa+pz5RFS4TnG5dj1wgcvwA5mLDcI54GPtxxBM7.ybs0gjYn7LdS3KpWwM3Zxx6.bbqiizCt+JaR30FKSi4dSJ4lT2GexsM7gcthlhTUFhHOKG+qa48EQMhyAEbpmR6Cp5TrvGXVPzMPpVe7RGqN4GC79KaH8Y7Cnn.jqOc9AFPYXH2lb5sqLedoHNE+SddcfOtNlRr2dcwUpJoehoEC5tciCjjKXrWye1r0nqvse6ojFPfo4ePhXHPbDI4veKTrq5Opd2jcTgjoaBTDuA3ziv9qyW5mRtkxc3+mtRrRIPC7GqbCoG7Qx8Tj.ar6ccy6F1+9r4TCltmzcsd5RbebFzdMn9Czu4DhPIva3Li5ZgqjYHwUiVDhwL5Po3mxxn6bsqPB1FrXxgtW4RqUI5qZoUhGRRh1aDAuccSa.T8GBZcgE.DhMQz9ozGQha7kzYCXHwMxp0RqQNGW2.RORFHMy2Xq1IMUWPf4vHGpjiXdGWfaeD.0J3eiVKbhPnbt2IxjBl.lQD6+BBMuKI54HBIrHxFWSIffN8DSGOwfHPJBZ3dezWgZ6RBlavx6N20r.HkGTyqZZocT71nhBw8.B9AuqR+q+XNAw0yVHDgRPf7HfDtZ4nSAgMTPmHASOvtAxMXgDHGGPcI8iUuD88RXz9AoyDohI.r79OOSluasrWLDdeeqMUFN8NziqPBrYWhyy8UizUeId6KDZuDmHBHD1DRDlG2t4KoVhAEgmKGn4pbYeQmug3hEjBjg9YU1.Ck1OkFJBfConml+KgjhzWhD3hP8VHl1Dd5a79G7yMxPyH1tRRqb9IjyuW57VmXpaO";
	}
};
}

