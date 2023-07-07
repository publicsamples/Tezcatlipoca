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

namespace geq_impl
{
// ==================| Node & Parameter type declarations |==================

namespace geq_t_parameters
{
// Parameter list for geq_impl::geq_t --------------------------------------

template <int NV>
using _1 = parameter::plain<project::filterBank<NV>, 
                            1>;
template <int NV>
using _2 = parameter::plain<project::filterBank<NV>, 
                            2>;
template <int NV>
using _3 = parameter::plain<project::filterBank<NV>, 
                            3>;
template <int NV>
using _4 = parameter::plain<project::filterBank<NV>, 
                            4>;
template <int NV>
using _5 = parameter::plain<project::filterBank<NV>, 
                            5>;
template <int NV>
using _6 = parameter::plain<project::filterBank<NV>, 
                            6>;
template <int NV>
using _7 = parameter::plain<project::filterBank<NV>, 
                            7>;
template <int NV>
using _8 = parameter::plain<project::filterBank<NV>, 
                            8>;
template <int NV>
using _9 = parameter::plain<project::filterBank<NV>, 
                            9>;
template <int NV>
using _10 = parameter::plain<project::filterBank<NV>, 
                             10>;
template <int NV>
using geq_t_plist = parameter::list<_1<NV>, 
                                    _2<NV>, 
                                    _3<NV>, 
                                    _4<NV>, 
                                    _5<NV>, 
                                    _6<NV>, 
                                    _7<NV>, 
                                    _8<NV>, 
                                    _9<NV>, 
                                    _10<NV>>;
}

template <int NV>
using geq_t_ = container::chain<geq_t_parameters::geq_t_plist<NV>, 
                                wrap::fix<2, project::filterBank<NV>>>;

// =====================| Root node initialiser class |=====================

template <int NV> struct instance: public geq_impl::geq_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(geq);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(142)
		{
			0x005B, 0x0000, 0x5F00, 0x0031, 0x0000, 0xC28C, 0x0000, 0x4120, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x015B, 0x0000, 
            0x5F00, 0x0032, 0x0000, 0xC28C, 0x0000, 0x4120, 0x0000, 0x3F80, 
            0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x025B, 0x0000, 0x5F00, 0x0033, 
            0x0000, 0xC28C, 0x0000, 0x4120, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0xCCCD, 0x3DCC, 0x035B, 0x0000, 0x5F00, 0x0034, 0x0000, 0xC28C, 
            0x0000, 0x4120, 0x0000, 0x3F80, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 
            0x045B, 0x0000, 0x5F00, 0x0035, 0x0000, 0xC28C, 0x0000, 0x4120, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x055B, 0x0000, 
            0x5F00, 0x0036, 0x0000, 0xC28C, 0x0000, 0x4120, 0x0000, 0x3F80, 
            0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x065B, 0x0000, 0x5F00, 0x0037, 
            0x0000, 0xC28C, 0x0000, 0x4120, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0xCCCD, 0x3DCC, 0x075B, 0x0000, 0x5F00, 0x0038, 0x0000, 0xC28C, 
            0x0000, 0x4120, 0x0000, 0x3F80, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 
            0x085B, 0x0000, 0x5F00, 0x0039, 0x0000, 0xC28C, 0x0000, 0x4120, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0xCCCD, 0x3DCC, 0x095B, 0x0000, 
            0x5F00, 0x3031, 0x0000, 0x8C00, 0x00C2, 0x2000, 0x0041, 0x8000, 
            0x003F, 0x8000, 0xCD3F, 0xCCCC, 0x003D, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------
		
		auto& faust = this->getT(0); // project::filterBank<NV>
		
		// Parameter Connections -------------------------------------------
		
		this->getParameterT(0).connectT(0, faust); // _1 -> faust::Band1
		
		this->getParameterT(1).connectT(0, faust); // _2 -> faust::Band2
		
		this->getParameterT(2).connectT(0, faust); // _3 -> faust::Band3
		
		this->getParameterT(3).connectT(0, faust); // _4 -> faust::Band4
		
		this->getParameterT(4).connectT(0, faust); // _5 -> faust::Band5
		
		this->getParameterT(5).connectT(0, faust); // _6 -> faust::Band6
		
		this->getParameterT(6).connectT(0, faust); // _7 -> faust::Band7
		
		this->getParameterT(7).connectT(0, faust); // _8 -> faust::Band8
		
		this->getParameterT(8).connectT(0, faust); // _9 -> faust::Band9
		
		this->getParameterT(9).connectT(0, faust); // _10 -> faust::Band10
		
		// Default Values --------------------------------------------------
		
		faust.setParameterT(0, 0.); // core::faust::Bypass
		;                           // faust::Band1 is automated
		;                           // faust::Band2 is automated
		;                           // faust::Band3 is automated
		;                           // faust::Band4 is automated
		;                           // faust::Band5 is automated
		;                           // faust::Band6 is automated
		;                           // faust::Band7 is automated
		;                           // faust::Band8 is automated
		;                           // faust::Band9 is automated
		;                           // faust::Band10 is automated
		
		this->setParameterT(0, 1.);
		this->setParameterT(1, 1.);
		this->setParameterT(2, 1.);
		this->setParameterT(3, 1.);
		this->setParameterT(4, 1.);
		this->setParameterT(5, 1.);
		this->setParameterT(6, 1.);
		this->setParameterT(7, 1.);
		this->setParameterT(8, 1.);
		this->setParameterT(9, 1.);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ==========================| Public Definition |==========================

namespace project
{
// polyphonic template declaration

template <int NV>
using geq = wrap::node<geq_impl::instance<NV>>;
}


