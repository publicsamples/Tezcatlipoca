#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace Filter_impl
{
// ==============================| Node & Parameter type declarations |==============================

DECLARE_PARAMETER_RANGE_SKEW(xfader_c0Range, 
                             -100., 
                             0., 
                             5.42227);

using xfader_c0 = parameter::from0To1<core::gain, 
                                      0, 
                                      xfader_c0Range>;

using xfader_c1 = xfader_c0;

using xfader_c2 = xfader_c0;

using xfader_c3 = xfader_c0;

using xfader_multimod = parameter::list<xfader_c0, 
                                        xfader_c1, 
                                        xfader_c2, 
                                        xfader_c3>;

using xfader_t = control::xfader<xfader_multimod, faders::linear>;

template <int NV>
using chain2_t = container::chain<parameter::empty, 
                                  wrap::fix<2, filters::svf<NV>>, 
                                  core::gain>;

template <int NV> using chain5_t = chain2_t<NV>;

template <int NV> using chain4_t = chain2_t<NV>;

template <int NV> using chain3_t = chain2_t<NV>;

template <int NV>
using split_t = container::split<parameter::empty, 
                                 wrap::fix<2, chain2_t<NV>>, 
                                 chain5_t<NV>, 
                                 chain4_t<NV>, 
                                 chain3_t<NV>>;

template <int NV>
using softbypass_switch3_t = container::chain<parameter::empty, 
                                              wrap::fix<2, xfader_t>, 
                                              split_t<NV>>;

namespace Filter_t_parameters
{
// Parameter list for Filter_impl::Filter_t --------------------------------------------------------

template <int NV>
using lpcut = parameter::chain<ranges::Identity, 
                               parameter::plain<filters::svf<NV>, 0>, 
                               parameter::plain<filters::svf<NV>, 0>, 
                               parameter::plain<filters::svf<NV>, 0>, 
                               parameter::plain<filters::svf<NV>, 0>>;

template <int NV>
using res = parameter::chain<ranges::Identity, 
                             parameter::plain<filters::svf<NV>, 1>, 
                             parameter::plain<filters::svf<NV>, 1>, 
                             parameter::plain<filters::svf<NV>, 1>, 
                             parameter::plain<filters::svf<NV>, 1>>;

using mode = parameter::plain<Filter_impl::xfader_t, 0>;
template <int NV>
using Filter_t_plist = parameter::list<lpcut<NV>, 
                                       res<NV>, 
                                       mode>;
}

template <int NV>
using Filter_t_ = container::chain<Filter_t_parameters::Filter_t_plist<NV>, 
                                   wrap::fix<2, softbypass_switch3_t<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public Filter_impl::Filter_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Filter);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(46)
		{
			0x005B, 0x0000, 0x6C00, 0x6370, 0x7475, 0x0000, 0xA000, 0x0041, 
            0x9C40, 0xC246, 0x38C2, 0x1A45, 0x6B6C, 0x003E, 0x0000, 0x5B00, 
            0x0001, 0x0000, 0x6572, 0x0073, 0x999A, 0x3E99, 0x6666, 0x411E, 
            0x1216, 0x40EC, 0x8918, 0x3E87, 0x0000, 0x0000, 0x025B, 0x0000, 
            0x6D00, 0x646F, 0x0065, 0x0000, 0x0000, 0x0000, 0x3F80, 0x4D2B, 
            0x3F24, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& softbypass_switch3 = this->getT(0);            // Filter_impl::softbypass_switch3_t<NV>
		auto& xfader = this->getT(0).getT(0);                // Filter_impl::xfader_t
		auto& split = this->getT(0).getT(1);                 // Filter_impl::split_t<NV>
		auto& chain2 = this->getT(0).getT(1).getT(0);        // Filter_impl::chain2_t<NV>
		auto& svf = this->getT(0).getT(1).getT(0).getT(0);   // filters::svf<NV>
		auto& gain = this->getT(0).getT(1).getT(0).getT(1);  // core::gain
		auto& chain5 = this->getT(0).getT(1).getT(1);        // Filter_impl::chain5_t<NV>
		auto& svf3 = this->getT(0).getT(1).getT(1).getT(0);  // filters::svf<NV>
		auto& gain3 = this->getT(0).getT(1).getT(1).getT(1); // core::gain
		auto& chain4 = this->getT(0).getT(1).getT(2);        // Filter_impl::chain4_t<NV>
		auto& svf2 = this->getT(0).getT(1).getT(2).getT(0);  // filters::svf<NV>
		auto& gain2 = this->getT(0).getT(1).getT(2).getT(1); // core::gain
		auto& chain3 = this->getT(0).getT(1).getT(3);        // Filter_impl::chain3_t<NV>
		auto& svf1 = this->getT(0).getT(1).getT(3).getT(0);  // filters::svf<NV>
		auto& gain1 = this->getT(0).getT(1).getT(3).getT(1); // core::gain
		
		// Parameter Connections -------------------------------------------------------------------
		
		auto& lpcut_p = this->getParameterT(0);
		lpcut_p.connectT(0, svf);  // lpcut -> svf::Frequency
		lpcut_p.connectT(1, svf3); // lpcut -> svf3::Frequency
		lpcut_p.connectT(2, svf2); // lpcut -> svf2::Frequency
		lpcut_p.connectT(3, svf1); // lpcut -> svf1::Frequency
		
		auto& res_p = this->getParameterT(1);
		res_p.connectT(0, svf);  // res -> svf::Q
		res_p.connectT(1, svf3); // res -> svf3::Q
		res_p.connectT(2, svf2); // res -> svf2::Q
		res_p.connectT(3, svf1); // res -> svf1::Q
		
		this->getParameterT(2).connectT(0, xfader); // mode -> xfader::Value
		
		// Modulation Connections ------------------------------------------------------------------
		
		auto& xfader_p = xfader.getWrappedObject().getParameter();
		xfader_p.getParameterT(0).connectT(0, gain);  // xfader -> gain::Gain
		xfader_p.getParameterT(1).connectT(0, gain3); // xfader -> gain3::Gain
		xfader_p.getParameterT(2).connectT(0, gain2); // xfader -> gain2::Gain
		xfader_p.getParameterT(3).connectT(0, gain1); // xfader -> gain1::Gain
		
		// Default Values --------------------------------------------------------------------------
		
		; // xfader::Value is automated
		
		;                           // svf::Frequency is automated
		;                           // svf::Q is automated
		svf.setParameterT(2, 0.);   // filters::svf::Gain
		svf.setParameterT(3, 0.01); // filters::svf::Smoothing
		svf.setParameterT(4, 0.);   // filters::svf::Mode
		svf.setParameterT(5, 1.);   // filters::svf::Enabled
		
		;                           // gain::Gain is automated
		gain.setParameterT(1, 20.); // core::gain::Smoothing
		gain.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                            // svf3::Frequency is automated
		;                            // svf3::Q is automated
		svf3.setParameterT(2, 0.);   // filters::svf::Gain
		svf3.setParameterT(3, 0.01); // filters::svf::Smoothing
		svf3.setParameterT(4, 1.);   // filters::svf::Mode
		svf3.setParameterT(5, 1.);   // filters::svf::Enabled
		
		;                            // gain3::Gain is automated
		gain3.setParameterT(1, 20.); // core::gain::Smoothing
		gain3.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                            // svf2::Frequency is automated
		;                            // svf2::Q is automated
		svf2.setParameterT(2, 0.);   // filters::svf::Gain
		svf2.setParameterT(3, 0.01); // filters::svf::Smoothing
		svf2.setParameterT(4, 2.);   // filters::svf::Mode
		svf2.setParameterT(5, 1.);   // filters::svf::Enabled
		
		;                            // gain2::Gain is automated
		gain2.setParameterT(1, 20.); // core::gain::Smoothing
		gain2.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                            // svf1::Frequency is automated
		;                            // svf1::Q is automated
		svf1.setParameterT(2, 0.);   // filters::svf::Gain
		svf1.setParameterT(3, 0.01); // filters::svf::Smoothing
		svf1.setParameterT(4, 3.);   // filters::svf::Mode
		svf1.setParameterT(5, 1.);   // filters::svf::Enabled
		
		;                            // gain1::Gain is automated
		gain1.setParameterT(1, 20.); // core::gain::Smoothing
		gain1.setParameterT(2, 0.);  // core::gain::ResetValue
		
		this->setParameterT(0, 2956.17);
		this->setParameterT(1, 7.37721);
		this->setParameterT(2, 0.641802);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool hasTail() { return true; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ======================================| Public Definition |======================================

namespace project
{
// polyphonic template declaration

template <int NV>
using Filter = wrap::node<Filter_impl::instance<NV>>;
}


