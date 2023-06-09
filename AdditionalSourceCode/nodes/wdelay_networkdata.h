namespace project
{

struct wdelay_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "wdelay";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "6698.nT6K8CJwCQ..buH.5bGYUvBjRGwMbQ72VK9u9SvBCAhn1WAxyQTZjH3TxkVRRl6h..DP.TUUE5BWyND+cHV.0EfQADfOSYWyNVWajgx5R.eeMkh1TRDtxXnz6kt0ZXYSr4ETFDNSgjYYUsZ+P+eU0mt5yEAEHPxLurz7.oMkl3vIgy4ZWvYg02uZzeO0kOyOWkchEMolWvcoIhlnrrG.UWes7gQYK0GLxNKNWqsYQUVYddPShxJjPvlWgzgEXzd8sPG1s1LyvLQWAfZjLEgi1J2Ue3pqA9vDGclYb3bkDQgllQ0HfZSOTQYfyDEbssANHfZkLk3fADTC6ZtYiGH7IhpC1jEPPsVTVjEkv6Ds1LKRBtJsqHOlTcplvbR.0jvPyjCGqJnjMA4JpCNVSYQTdjrn.kLXZlph37QxQf8ZlMUMQ4vzjSZb1DUGLJP.0ZXSfZK10LaVEcEsAIVgvQScTfZRSLrnNefPKDMYtlblhx3XowM.nVHYQa74xJSSzEP.0lRVU.BpoYzLpyBTii0D10LCsOQTSIRbQ.0r.iIPMQtrHIaVgD2.jM0fC9bYQFlmHHC1nwqhmKIphyTESgWAqiCBJ8+b.fuz4S1lGadswMIlQGnHhlnOjlyKx7X4wGabQHMmarLxjDDAPhx5BIHhpphjPDslzrjoKzTxTkTqgUgDSx7Wex3SLKBR358fFcdcH8oifD7vFF.gIkDMFgi3Fn1.mliFZ.BSezIcDKMh.wBxJ3L9jwGb+iInQFnzwArMtlRSTbHMwbFnMwDMQc7XxwhRC0TJ.PulgVp3VGyJTkxG7YWA3Mt6tLEP.uTYeRdkKlnyhDM6fAJSkah2UzjJxR8cV9xsgCHNG4xSET3jlRRyOphvjFBhLyNVTyQ3L0UR5ANWEnjTDEXcbfV1UTFGcrrxvIAkLOz3..Dkeh5SNXn0jlTeDwIBtKWyoIjqqCecUfXVM0gj0z0bC2DuNUQWNKPF.pgyGLOr5TMyb.vYABnt09P0YJixCEbXjQUcbUfflDhlrIR3n05DQcMGQC2EIKJ3pzZriRkmJ3B+tzKFL8F.oCkO4xYhP9aYjiu2tc66tUOlu7vNZfmCeZCgJTpv3xwLuHu9aesUEJ2O5x8a+yDYnaQ5aTpud8dan70r9hum4e9U92WAhd6vGyxHT+mYtxEYvfNJqEbT9k+ngyziGlWWrYDLmiRTxTdNouR98NSyMP9L7swXm44JP7gumG+8y7ZGAj3Lw.vjLcvliLM0LuxbIhFKpO7fekLsIAdrwBmDcphtvBnPAVf10RCDAbEM4LkgFcSX1hG69UD3t3ZMPjvfphOYSWQTVa3vvR3tdDxNrRCxkDU4oZ5RkrMSgvwBtvPPHr4ucFd4whxpBIpoPzH.pHMY.CC2DVbwERxpxIwi28ocD5RYCiD3AgSf7Se6xunyV3HKix9UEFkBPBe8dMynl135IngFx.cXd6iDKINSZvEwaiE3gCGEPLLqqJbRDnp1QnBg5C9XX2xn1sL9wVkZT8dgpxtBUViwXTFiw3+T+88SYs6XT6m1a2Ru69sqBia+hayQ4F0uY8au23B22x59vnb48IkRYKkRoCaHb0UJWIbc2a2k86IYVxuqOdgOdeOl4kiej8n6sxvs6t8t6tiqL19u9B6liQle9Y+4me2ct831NT4WJiPoLBit6t6Rukq6Q2c2e1c2kROJU2a28GT9TUeVU8w77yuuN+rqN+r5Okn276t7c2aukO+71MKg+yOK4me94meVe94meN17y+kmeVeLO+LD932k8oOnyt2a2TfPQG5s7s75npNdKeN368QHleW3Gl2i.7CiaBE9g.Vw3l.mvuK6akXgQf5bV1vSoFh..P.f.HwTVAABNvvQBHQTQTVyCLJDggFKDP.w.ASHTX.A.CDfP.A..ND.A...HPCB.h.HPPvnHiAxZ9PFrF1jl8lJYw9ncraY2Y.xT91X5vO3DPDqkx3YBHff87vDzoE8drBFQBPAAy9SKujha.OQiWpbPNrpXlDxCx2393mf8RJUYFKIQmTcDhN.9HWF1rkw6HeXm+MDblLnQInf3eCYpN3sBySVbJ5X2QvMoQnXEHdBuIZ6DK8m8pRd54p9rEsgz+7oOhp.cYfeGAJAWnK4ybYXSZC66n.r4LuSbXRWJ3N7uj.CaeTHmzx3kCHffcmwB5NE8drIiv.fBBlGSJGN4Z.rdoEe.7JbfpKAAL9k1uCd+AKqhqYrGY0B0HWZMmOW.qneQs.zboKPhzaRlFIfMDmLDU0yWDl4xxsH.D0y2LYplDfOgWEc2r0P6kJw0wR+yRxAzIXL+9Pm9nW.qLRrZKQxnkyZxcl35BIsJJp6phoQWBxk7z76C6QsHPEFuN.c24ug06LA1Ovy8QOUJvgUK1jJOVeg6ieh8jJMyrO52WeLQNLuHGCaZS3WDf+YWKIiIBZTFHI92.lphdpx9kE2hVBMHtJOCUqAvS3UQUOr0P6kJw0wPG+sXI6fj0RFAPuu+2i8HtgtNMh5FgNVF.fBcfbmFEbk6bcvRfntScGoMxCCTtazGSmNTwRlvxu82K5+fs8TaKbI1SW5ueHViUHZ9fHjIKMuA7e37QPUs+BvJquevWdTkqPxmvqhNFK6OCuRtzgnPr6xAmD.E+GPKwMjmim+y9YFKg2PQKBEZ2zyvXBrVRe.sy8I1xAAGxKTwA.wyEXF7QRFSMp6wLGtwB.IsB6hjJN3U1vvj6zyP1z34hN+eYhHOPtVaJKkRlHGOjjihq4DJ3Ltvkji+0HQgzvFFxnjAxT7Fl35DalpCcMzJfXJx2tUTIqTN0Oz.4TYmN+Dc8.7Dd6h850E4I89X3JIVzgDn0Zrq0jCLx+K.AXF.h97dD.zVjGRRjSO8.enX4n45YXYLOjmHjTQJm3LQQMjSXTMrv+H8.6SUVaAxgIJQVy+3d.2oJqFebouHatbn7ejcN83E0TL2xN9nYM0ug4ilp2v9PQ+xwKpRKJ1wAE7HcB.dAfPa7j8N5IETCeUA2IR8qZwi73u02aDMlgwkx3xjJA0.sOu3YcRHX5kNJN6C2nyX825W36nC+f1.hEmJF00tuekjIVc6mAtcREePg7PJ9SzKLdDn3GVpyI9UedlsItFXMWhuVhUbMWRboE5hYtK.kJCMJRcYNbVGf3F9N5jpMQCmJE4oqelogfX3jxgEPlG7jl6aITRgMhEX7m+Eqskvqy4vVH79azl2sf0io79KDE7egf7dewxLdO74Ch2lA7.+zNg2BVC7lGKiaTz7QDbfvAWs8cCWAhfApZpi+o4LYhYqyh7WnId.z+Ckzdl7VC9+.SGQBBSgf5WwqH0NQLk.2+TzUXcY3lrf6JJ6LRDRGEpQgSaIwvOJEfS+AuFNEr01HkhWAyzWfrlb4ZvgnrrrQXVM7GLCNKWJUcxgTZjKhzTLveRJKOrgDHkdAOOf6MKw4eEF8T2nRwp.7b+TEkMtgCOb7KRH+G.i4pJtFLDfBqHn6i+Gu.PBr79PN2orUmdF6mIfJCLHQnDOBtZHAx5244CiGZgAPu+8DyMkWjQ7Gk5UDSuENnZ5FDqnJhKUfnmrjJPIIhXDUxw.Rexz+I3HliQHP.us7c2gCGRqXtZLMELaKNMiHr71G9+6bHAxI7ZpLZiGLL4939+YrDWSVGE+rfE1m4+XMM0e8ORr7tG6VBEvx0AF2kIJNxac.+gO3Ihp3DTJUCDiGc8.KQggYxMg1eYQxdcfIIOJa8Mq3lmrfNxYidbvAsXa66eAE1UNJLOKld0A7DsSL4OIaJPXhzhHxvjnQEijnmEB98GShwpHE4ow8DjmzUJ799wC6r8dlks.Jf65UaT6jSHICfJPlCWXT5cc2bLiUmIr2pDfmjNu2Sebo0ZQ8WD0YaYDIGzLvi76n+63u4A9z95jNRnJLnHwT7op+dnDJ1RkQcwFruAoHpSjcb0lc16kqTvPX5F.rYeUzwwvwXNsABcujaisw30O5DJYuhLEdFUY6l6ZvyUiFVhnJG7pUerC6we3nVHlh5yjFx3AcvMpU4QESCFhlGMLfzZu.j.8gBSLYPlfzS1AsIivzgPqDo8cUiFrtLjrr0B2XDffszNj9hLblf5iYBQXK9bIMUrLxzrqy97NHTKpPUxASG0QTINtRmxI.a242QM.EimogSbOZw4GVJhHESvzqz85dSQMnK9c7jlzggBfWdrtOgciPfym3kK0.rhE1aaDmt+.RANhUWZj6fuCi1gCDGLxj5o8ZCLJbfty9Uk2A03cPHyyI0BiMRKdXpcMNRsHjcNKNpRUAgk5+9TRpov2I1wJHqNnvepTXvG3C9LRDPRtpD9MJPSrmzugf.W+BIU9Sa3Fmx.42KpvewRb3DSjARF0U.B1SV6yFA8p4ixNr3pG01AiLHYjbCnl8.CA4Ai.PSxdP0BRIKqp8MnqHgrzNElLInFwJnw7.mJziS4bzdDGm6pnWaMZ8VvOu9avPULCrcu.cE7Aj7J7kH43Xcf+XAruZW6nYgA91fwR4Kvvg3DUbUKqNTdSfc8ZHgdzogIyGrtJHcojxTBvPvCTiaottfgIMT9n+wKF2FG7YnV6HlBgn62z3Kpqb0f0JKcmVV1XX6532Z+.g0Rv6b3to23fFSS1M1kKzl4jHvYusOFmHdYDslaoBuRPUvAgOdXFIzN3E0qA+v8ay6A7Cq3UhrapPirekCIJ49MY.beFDmISw+.L7+1upqJMaJNxtea7iotE5rQlwpFxTPnaftbIuRKTDF4i+xXAfTluBrsaWP1tdeyLR.gDnANCtreyDhKAYQ2l7V.zpDJnhOaZQjBGPj.u9csl+1+qnubXQX2.MMmgshJGJESPY4.6Dyu6CRkEyBULmX1.Cxil89WrtJyJTVnmety0D8eMm4JK6bUawwisRIWxYvAGNgjEHMWG4mbJabe.sjMqDrkOZ9ScAGWLQxEXWQ7dmWDvoEaZGpS7ejg3NwXAQIlz0rl1uH+ynf9zNc1U1SRIBSv2aCpi6LXFRxidZgSNgkwQb1aBacsWFv62l3z4UEk8GMjwXGx4NmWTrA6weLWGRv+gbVfkru6uNnyWnAqyCNiJEkYlrRD7+3J3v41ZI7cXiELLKzlKwnfJusH8s380B3BEQZhA7RjSGzN.MnzUJdaqACw.lHzMN+bXZOi8WPepFy6flnhNd33WnZkeAxekO3mXFRLPLwD2tnSWDna4ZPeUFiIn5JYx6CxBxdel0UXRSvxmdkulejiZNLXBofRUPhDtwbv3onH15g78arPfOq1IV.5BWLGGP6bdYfPxg.DSB7947LLFj223q0lzGIp898pw8.o02OsRVZReAFXtB9BFva76T+JTFWoPiIBgAz5vjG5TXxLES2CRxqTg8u5CiePf67h8XG1U8zYHcbZ9fvmrqOIWfZgB95K3sng1+.jDR3rb0lO11ljV9AG1H5t7cBC+D1NrD7mibFHE1LFUtlb8sg5.cHsoR7fXFmhesUMXrcEMmNRqj3EDjBKaGpzIXYX9rDYeSVxikoVsGL1.9RzF.poxnRMpFGnfBdrgG.xdtxps.Pd+bhmf4YpISKrR+l5bm6YNtURaLdJasU.jsR1XytTo7MBe33JVIQ.lXvP6Qna2QrjDT9Ro7HYHVlykEPkWVnP2CBWkV5Kdju0te31BVHXMatV4WhxfjpbFUdrdQt6QeTOIDQ.RDpyFZzB48wlsbpC44n2NJ0TtO6T3ea2lEvX1XHp.1tb+XkMj9yie7nMnn5axre3UQ8BgEbMteg0CRgbtfJcu4fmcTso1oMv.6Cd5X7Cj82lVWc.L6lvebsz7UpDJTlKx8KhcGM66cNsI8kXxJkGX8+2QbcQGITDQ.MQHR9AQXpDxUDlSFeFuS6Ujpc.32ELjIDMM+4h1VSL9NZxtzafEPD8W58HLSdmlp.ULCkbq9IxfpVGGM5Dc85jRZhzPbP5Oh4KunJu8NNbqle5cGG9CWLug4NhPfGeunFyli69RLppwD.4oO.Sp.fopiTCPVHvAPTlrWNVGJT376D.GAfO.DMh.UTUgXPS3QdBSRkRgShPaDJOBkLhHSBWULyLalYVhgpVOSEtdaJcm47lhlYiTbiPgJLElx7CQQCu7jISlPYhr3fTFdg2FfRBABAKC1Y6c5dDQbDQT2p1ToRDjJR2qRTWLgDgdvMB2LoQC0HBgqVRn5e4+JLEl5A+1vkUkHz3accWtKKskkZmoj5P2yuJBuHhHhHTu+++Z5QWb2c4O8oGt814rlyZNqmVSxwhDGIiVyZoc14+K+gqI8kOdf+nWOZW+Ft2v8FtMrzaTJ8Fc8deZ3v++CegKbdN3+78kj6M6a12rSrSxQgyssw95k68y+++Re9N477vWhtvdaQxIMmzaRGkljijiibDoGcfbLffMgpvQ29Ax3T3.PD.fLkOR..D....BD.H3a.H3eMBv.PiBjU8C.IZTvh3YbUadLqviAvFUII67VHlh8mII7J43UBZiEk7PWX5LWaa2.ht378.gTJ+QxDNjf5Omjle+f8fQvHh9cGeNgDvo6P7ohfUcm3bjzzz.5LyLk4fBxSBIP2udL1ViJ3IK5Du5BVCErWStlHMd.QrLZUIODq178dLnSozWwI7xw3UBZiEkDQWX5zxs5a3GzCLZwREhe6RD+OKVZDbcDh6Nni3Dvu6DeLAAn4NnCHOokAm+uPliCbTjryUy+6CrNcpfjYL4nWvdIEr+mHLoZNfl38nupZNNiyumGZYpK81bBuN175BswMkLQW3cnypsgGedXjVZKllvajqcmnv+agEGw4hPbtyeDLA7vchGWH.ItSeNjkzz.5r2j4bPI4QhIno2O.KUyJHYGob10XuQAVuINSrlOfRrLZopDGw176oEMmpZuEkvKmDccg13VIUzEVG0oZ2v2mGHRZV.ZjVFUNbQoe+DKmcLfDX1GVoOR4XAKI.HO42WKASqG.HcfEWGAyqG.ncf0qA8bT.grkIuFJTOJjQZ6tGe0ZnBDzMJBWNw0mBrrImIjlOfHtNrp3G0cS9H5hfsTSUoX.lvqFGrDzJk34ZlrZf5fJDzR9UzEmaN6cVSYEARiutmMjHw65grr.HO4OeMPDDo2OcXYH.oCr7RChbiHkTmk6.ZGXgmlBpF.duE45.mEtqbzF23E6QOLyrH4iVKnA8szYrcSVIi19RdAgLwzXA.w9fU8+vrchUPZj+mbzhEJkDY3Dd0byRPqThqKQlqpF79RHRLBicF1eDT+Ih48iXaHykP9HFUAhf1XZjROdH2o1dT.itLtacOfKMR0MBS2YA41YIncyav++lHswgKH2ghxJ2Zt+dy5mKyyiTwQvPKMb0ad1AyRLxvHjVfHSXZrvhDmA4sCV06E2dYMoQCVzvVpopTX.S3UiCrjhQFTqjMHW5U5sUpAfu6ziNwwYjFG4jcN712YmXMQRq3bE6lHMjIyIUgNKHWOKPQFo6EAydX.wCL7DCNhQPGRKK2.pGX.ixjReR+W.4396BbblIA.H+6F2Fu01ueg8zqRlWIIvvnMYFuMicoInLZeLxWPrIMZL.HtOHUuOHajcJFoNEEZpmpxvGNgWMOXYn0JwwkLakZP.lgNZoMyLv6QUuiIfWOlsNaKPhMUPWyTozXAX8..hT93kAhEjHJk550AjOvvGO3HFUTJoUNDP+.qmI6nLH0l+kXCdKdq7FZRb6s9o6Uu9cNlQqJBe1z1Pfe50j4nF0hJyTdnRZx3+aXvfOUuXM+kazYqZDMkrul3lJq+QR3MYeuxPqUB7mPHej5sjdcPUZKjipoAp+jMNRyhmQJOJZgQJb7LV0ZHcoZ.foTiCHP01jALX2LC1S+nQPkSU0CRoTlRo+xKiok2VbLx1CZ2AJ.DC.s.vEwwAFfbvAl.GhF.rj+2KK+5jVcRmN8Qm2l91Mtrrj+mk9rurjjTR.o5pZPOlXA7ipyq+fQyREPjXlBUqkSJd95UdEr3HzJ0DZwzrtSG4qXPH0WM8iwFXCr921zMSqHQTPBqAsIS+3oRk8Pk1+pYT7ZXhCQzXPtXMzgw38otd6hpkBwafRDgf4XQIxCSX1iiDE+n.CNSdtGUYakpxsgorCPVX4N7CDTXKpGHrETS08ZVNc1pRPBKVb2cIdA.H7fFdRj.FR6DVBP.P.vZXlaFfvM3ConNz4hxPmmQxUEZbUenhR3Uiwq8pGIN+PcLEriRCD0wUvX3lZJA8A4dLcSumggIr273JQ7nU7.vPkmzAPSLy3uiDhvCunpPgaZ3Vd7EYbCZpUD2m+Pd0FJKcL8AFaFAFCt.wHUci.AH7Pen1Tf6lKnBoOP.kdSVSBt1mDftxEPBSCnRPm28B4q.AMi8fwTa5OjZP4Vv43.Dt0qEfDLMUKX0UiTXpDUdD7ePNHBNgT4ApqW3C.Dkv5eGp37nieAZRZGtQ5k..BDsf2NNrBJNU.lJp919QylFMnl22Dzpbnd1G5nmzwionO+GhYbbMeQqZdjL0HriX9vvfmRSn3bFzFoJgfgJ1502Bm.FhUTiw.80+TiDcXVjijxFE.vReD0f.Z8fHLNvP8yWPS8PPUvkFCVh3GG4EzA.knZTKdh9WcgdQd+Wg+6AT7lFAJBTbR7Es+PHhLC+SHVMdZjnUWlEC.t58v1Era5GebhQokkFKal.liYVsaeUI0av2eEZi3QBnhdAadQ3E34Y8+htCgVVKeNdHGgv+4hxxXBamzYjPyAA8WsT8WBh.4I3ihLezOIz24PB9Z.TyAGo7wyf5XtwgWfUPXpItSjpBRIjTi0H7XiTBdfZddwZOEvEzNHq6RSrHPZZV2TLp8SGOd0Hev.T0GGUj5X3pngQwHzLtZInym9K5wl5ivJUDqvcV0Vz+DEH0BgSc2shMPCTTXjWWF0cmJ1DcXTCJpFTs0jaRzobnZyS1SfNo5ovE0dT8pTPFEUvp8EUnnlOUcQAapLEUFE+JS8aNgzkPIrD.";
	}
};
}

