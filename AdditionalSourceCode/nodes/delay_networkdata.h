namespace project
{

struct delay_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "delay";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "4431.nT6K8C5uhG..cnH.ZWGsUzBnNWQOOpW+p1WcqfNzR63GWYW457allwyXERjoTZ4iNLd43xOT0G8YYQ4gkDvbAnU.iDPFGWpOj5L.PaWWUZ12kn4sZZy1TWKEbNsIp.YiWCrDM0rPYDJtUwEYUKrAy6vFZVwEVviARvDTjMgvIFApHXMs1.gDLEBNAC4ZizGFHmnyHTFWfR+XAaz7x2DhrWq89QUERhbZbjcsSTbXnBcjv73ZcQ0A9duHEGX3sXuVpKK1lnvzlLwcNml0hf2KDE1zFEHZ7vPYBCaWHDJihmEd6JhGgxrOLZntxdv43MopqMPP.TCegINX2MNNnFI+nLhjFtWj0jFuHmiOvaRjajq0BinHmV10iGPRPHIJLsIJj1jnXjKEV00DN2EDJoG7p3jpvduHmEiNWKqqIh1texj5v5ZZShBD6kFLn4lw1qJOnj93h5y6AG8YQhD1qpGFFnD4bZRhbrV1c6VIkIwgHWf33fOFhb1qllDVnD3rlj.0QS10ZRZy5pyC.QNPaRbDJ6ZqijEShbW60FQQNnFnFn00jV18AtPRTW6qRjiBLjD4pP1kHa2MB.hRDU7n.NGjRpyCzvvCHlD+9Cs26EiZd7wlmKsmDR1tZ2F7b.1erlXXs5PF5OKTpPme5OmvY28qI9DPjSjaE33XIyv5yPVBHzBknnFlfwXbW7QhHbbtLoq0TFtLRnxXcVeZ+OGhbYfbQcMQ1HQjcGYpxiLPW6l8d8r+q8p5QIFoTZsY5BBITFg3HqXafvDanl5OLH59FHcvn3r6F0z+y4LNQ9vtaZbzhGFILjIqHuFlrHWVqIH7rX.OR2kRYiwqx2UWVKoF7rDcN1xk5ymqMO1.AyZhkrdF4QAxY9N6t4YBjFDZ9GlX2+GqU.0YaBiiL9YJwPmg1lzrt12kJ8yyRDhn2.WHj.Jz2KLoYM0.+f6ua.Oa7IpZpJfcNsKr2isjxt34P2dEKorOSpRhfU3C+ZkXtYfuVIO160SyWdT5XERKVYCYxZeTZ4yhSppR5B6cjIKdUzHzzV1E6J.6L6N67y7+rS8X7iQ9gxoTJ4m6Yko7b1+SYHk5yVVs3c8Rl5+zGFeHbxRHOkL2wt6taO9QmgtWcp2ypS84jixWdgxWX3agxXnu7xiRTGeT92BEqzMCy2th7QOmg618+iQIUNq9jBo0LbMCrgry82dze4G4HleDwl1zXSe4bV6tB7BnNTZFCIDPR2wINys+QW9yHUVy.obsanye6QuVke08HWmfjTNJg9joSd9Re1PORYYkpoV6JrqrKfHcReuaY7g0ZeYRDt+Ola+iSIcloRg0Lvl8983KsD4Hr7OyyXyMc5r28m3OeHApvQvV5tiLsyQIY8Yhy1DEFm2C8DFBGBdBobkgN+czk+LRk0d1tEnm46GEq6EtxrPyVmKEtx9+mccZolB6YXZ7iEZCTG9qeKirrdoeNPcsOLPMF0Avn5G5Ksa1iBcDLP0uYZ6RumR9ofnrCa2g03TJgSHp05CgUS4z+XD19CSlNick9xY2uT1LSYoSgL+PeR+uiTHApzvhrjq0jmKwMsq0dUApSHO4OoxZ+QY78Z.vdVjeM59+0ob1QlcEzwlMZjEwniLbfCTJpnBKvTqXiI1HBbZ3unA+BLNTBXvYCDfQCtHSTGbpfhGdQ28YjpYRwFMbnisD9RIjxPI7aNa3XCDzfKdWjSuFowHkYMvC7FvHSZTAGQniL1zfN1XyDO.CJxnBJdBXR4oj5xZyLGsWZfoc1hih6x59QZS6sMUMQwSuB4l+YMRkc8kfRrkQY2M.etQlpdOWHIpKELMN4YjJo0oFVhpjqu6sFY8I.4FKrbPApERMg.kOGn0Qu4gSadJYthWw6JcydPX9nNoklioTJZDA.P.BHLhcX.fCHZv3gFqlTSoGCBNfHiBBLLPwfEGLTPv..E.PP..CC.LH....Xw..PBQAghQEBU68fCm0WPVxxmkrHMvHjy4jA5zKWJtRHSqw6Poj6g0BtcPqBYbjem4sVb0GydydAMGhZ+mw3S0WKKIf0d5g8i4FS.N02cVJDDUwwUmcURfCkdbMbZx+mwEnmVEhrqSIWus2FLJn5phiLvcjVSIu085OVuaxfQt4ZnyynULBUQ3JiegYcBZ.AOIHNDPEtVK3YVBriA1vLfqSWrmOWj3gJHxTl9l30S1fotIyJkXqMB8BhvDzs6NKAPbqY2HoA6A9I0JVBZCRLsEFwXpRecnRDAJJg2O1Lkzo878GiG7OmoJFdyPXLPsjPx4gRu+LvG80G4XXBXCtcoh4AQDzPwl2zN1HKGhPXtJUEwu0HIoMJDw8vcfDgmRNQj8lOFxCL8CxoiYWh2hTIS2xN3YdM2XrNMdITKlRR5xzvpekyENISRLk62F2qHjXVTiBfDVO27kDXQfMlRJk1moQBD27lsPaBB4kZrXxdBkUBPNM8w6jbPymRNXzQnSMJH2ZVC2kO1UQAnapP80Q+kBNRj1a.FN.EjkAdvAMzHIrum816hH8MAgcwJtf.mt0eZF0xC0izv6NmOTlHrib7oZ5.ftLfBkrwdOCSJVDMFU5FzgzNI5p4Y+nGTMX5yIBr8iwhOFx6o5oqfrPyDDtqXdabo+t5tDVN.ITMplNDB4k++9BQdKupambPIIGaGdLJpC7G6ddFu8CHuUE1mCpg8ky0DcMOHjycecSHa3gpbGMdx+8zERGyflLcr4r0uShxpz1shLZtWTMlGqPA5fSWmUrHuWRQAmgiV7AkVU+JEyr.L6iF4kqiJl0cLJnwn+MXs88kqaP+H2ZJ8KWDkImxKN03mfnCk6n4lTjPnzIvAnpAlXYg7sZzhuHhb6uqy0HVRHjZn4sjSZ9iwVlhnmu0HooVQry9h1KDnAHLc9gPrIAvy5sW0K.ngXLZ9PwhIIxY8suxI.0vnHRyuqQHfsQ3Niyhsi.nBLvBTd4C1.isS76T+B1ihlTYvHR6yerQ8kkD41Q8tq.h4XkAMzsJeHiarH2rEbWvZJNkgHHT9oHcxJFKh52+GVKNft3U9VxY8OCCBTQJrZ7MOFhW7PdHrxiRZfD1juSDHu3AbLNVRiDaXF0HeCbAoW5.dz0yCBanDNl7awFNJf17ANbrSiDiByKDjOlO98Nw.m.8KWMG0HXrOlqhHSTA9WLdlaRvfy7XyCJVkcTIFep.yiH9DulnOLzngWP0EmqYvVKPVyWxY+5bekfCkDZVYw3WgClfTutMNXUn5kPvHJpILn1zcoX4uXBnY1kV91PR3x2pEqc2lgHAvyLdvB3qDE2GFLqfWeIZ6Pp36Ifwt9T7YRzPXan9R8xylhmR76Mwpijhuss2S2j1raN0hJdQfLL+tzsxQPIIpznUbdiS.rnWD8Eiz3N9EhshWjHn2EqAiNSCtzcuspogvydPENshI+JZkEsH.twD7buSEnuhaoEwMxXHUsVLNkD5wM1hnGrK+pbKpkhj831awoQapWUwEqSIC84lbQzAaxeUzE0oHSGtcmVrdJaoiyHNWruHAoC5zJHlQpBoadj4OAW54phJAHUOLytMhbO0XWoRTmk6Pcr6jI0Y4doFyNMWcrXmpwrllUWKzqZLVojTm8vrLM8kdTQnSk7f4CnvyQ.bG.Vsz91bh5.R691HmmKavMGJ0.N0sEbWQqKq+Y6jhM+pLuAGAmWnW0VX1pF4wfv1lkipRJ.mBLHlKgpDSecpcnMUoDyzet7rQc9yA.G8KcNRrLHN29JFzn4LRwfrssOT5ZvAKpI0jMpxl1pVapcrjv4yh3tfWadl90XIbDIqG5KeHpjPZlJkR5Bt32dncR75ieYQxtu0I+pGIAeVu7idjj5st4m9HR74CV3+Y3fe7fG7iZXFEp602xngD4yFar7cEu4G9vK+pARleDEmw.kX03IIiICzz92WwGMxlO7y+qfpsl7Z5ipy10EBRrKvABOc3S2XHwdf049NBBW1XLVrPVpwfjF.lKvM82G218c+vifGlKHpZnO3O4PQjrZtaQLoci1BQgDXmR2o5+1dWz7ArHJXftlfBKvAHaeDjXQTvPzJAMVvCfr7IHxBTfBQTBzKhKBv2FYGXWBf8JEwgJzWiCAKmPCEjnbviDOFXJw2.1RrGLoD8aDPkZekvdc.IR05i8VstVqtyrim3ZqVnKevCC.qcfggBD2ztPRT2jtEpFUXCqWokBa.IPXiPuQYvHxNcg++dxnZ+I.F1upjZklbZxiovuQyHBu6rxYGRJTaPa9HEyfPLqVczVfR6Q95WBPZCkvIh018Alvhoxv8ZKg0Ig+n2VlDGaUdSXmcxk1xsKq23V+5QCO0c.3zHywmRQ.TXi024.TQM.1cxIAr4zkq.3Mf1IfD.4bZ.Iz.hp0MPD.8I.D.xS.n.5UfP.jSfn.hi.Q.jm.PS.8H.IBfXnqfU8BcBLIbztW9XdChWJen4NvIxlpWAdP9v2CYZ5xDc5Db.B+I1vhhBR0Khb9zgrKdYIPXH9s6IxruDTQ6ZJvM18f7ZSjP3..7pQna6AYi.LHM3dfnHzJp28urVu7l4DmRDYMPCr0TR4Iv9B8BdOEz7sMHyzA7CkHxggiCZX1LsNr0B9bMb3SJT2B489GH7D2PI1JCbzqNKdvRBtdi.r94e0usTGHTTUEFZY6mhT+oCgnerz+TWoBIhcFC+UV14deHD.37y4CsKjzAMuHqYFPEOAMb2znSWFrX5ucxTFTeUaHLX4IvCwnp3MRGtVi+Ev1tQdQJ+RRUGb23IHBNQeSuLfQ5UZHr0e5fYW6c3SQJbnRufkOdZ4Nt+.I7oFcwm7c0Dbvqq+uBtAUyhXU+uhoakS6Z8cGtLIZaiigAhZtUQ7QR6sISQBbS10v2hRjnljivEDwSb670brHuPm9IkUEh.kzdUaJrnmDLB2+4Tpal71Zke7pEfY1iumlEUtmRedAAzX1Yhs0QAI6zeBp9zIckcptflwkYvCI.mlDgDmCTLmJZBBaGM3SJ+mymFqUr37CEf64S8S7wKlLjLR5C2YkgI+GVFHl0B6Cv3gRl9htuPlyGEiD3mOUcJhKUqqyFU46xoJDC7SPNZ5aWVeS79CQJIOdfmXIlf+PR5bxo0i5jcaYH+3GEymajqgHmYiAfQyY8I.QHLwp79zSZyjTI3nLAVrCQvi3KE.FE+6pV36PGvUJ9FBe.SDp7VoyHG46jL+pOO8Hh4f+gj0yIWS80ItC4mUKRTzyavhHBnaQFJGS0g4NjW3g5w8pHibA05mdQHBbK5KWbbPRfqh9K.gSRMNI+fLndyV4PfsEm8g.KD54vs33jWsRtitD+jfIECOt1w3aEC9NmVVCL7.yQ4WyfjP4k1kyaEt05S40i8VgXNdXLdYX7mESkzA3vWxaEmaUJWDL8TJwJic3.QW97iebcFlbTFDuywp2KFZT62wAji0n5fvtSCUfOfuPDZrh+i.RZ05KQztrfPUNnm2jYKXnNEjMY9+CFr+ZZlFtIQN4.qJhfDOzTEcH77jRVvWAqBURnp5lSRfgjmVcL7lQ8Mc0CqdJl4skbkbNrb+7m2JSkgBFU0Xw.dpgkDyxQ9HM5P64aXNyW0J++ozBvbnYPVZm9GSpOLM1f.+mO0ia6UPmSFaKZhGqO0J10NxWCSL3YXtR80O2nbyg3BbqO892hDYatN9BdcaaOmZ4cejyBp0osBjpaVssrsr84RnZ2xfC67I17rkfUTnFn2PZxfVainyUqa5LZi8od+uMgrjzeeNbqSmo6MTJKoAv5YnRIO2eFvkANH6L5xvYrswBymldjrb7F8KHdqReXux31cr+.TWr+moZaSt3dSWHvVC+wuBRdke7+IeXXKEJCO4ZPpeIVpqxS9MPCYQsLyLz1VvFXbKFj8vlkiT+yT2m9rGCvfEevaFntEzE7EQa1X47R.8vZVwf0lUjDwEGu2H.q8Q6pv8A";
	}
};
}

