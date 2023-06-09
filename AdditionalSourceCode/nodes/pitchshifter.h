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

namespace pitchshifter_impl
{
// =============================| Node & Parameter type declarations |=============================

template <int NV>
using tempo_sync_t = wrap::mod<parameter::plain<project::g<NV>, 4>, 
                               control::tempo_sync<NV>>;
using stereo_cable = cable::block<2>;

template <int NV>
using minmax_t = control::minmax<NV, 
                                 parameter::plain<project::g<NV>, 2>>;

namespace pitchshifter_t_parameters
{
// Parameter list for pitchshifter_impl::pitchshifter_t -------------------------------------------

template <int NV>
using xfda = parameter::plain<project::g<NV>, 0>;
template <int NV>
using shift = parameter::plain<pitchshifter_impl::minmax_t<NV>, 
                               0>;
template <int NV>
using pich = parameter::plain<project::g<NV>, 3>;
template <int NV>
using Window = parameter::plain<pitchshifter_impl::tempo_sync_t<NV>, 
                                0>;
template <int NV>
using windowdiv = parameter::plain<pitchshifter_impl::tempo_sync_t<NV>, 
                                   1>;
using Feedback = parameter::plain<routing::receive<stereo_cable>, 
                                  0>;
template <int NV>
using step = parameter::plain<pitchshifter_impl::minmax_t<NV>, 
                              4>;
template <int NV>
using pitchshifter_t_plist = parameter::list<xfda<NV>, 
                                             shift<NV>, 
                                             pich<NV>, 
                                             Window<NV>, 
                                             windowdiv<NV>, 
                                             Feedback, 
                                             step<NV>>;
}

template <int NV>
using pitchshifter_t_ = container::chain<pitchshifter_t_parameters::pitchshifter_t_plist<NV>, 
                                         wrap::fix<2, control::pma<NV, parameter::empty>>, 
                                         tempo_sync_t<NV>, 
                                         routing::receive<stereo_cable>, 
                                         minmax_t<NV>, 
                                         project::g<NV>, 
                                         routing::send<stereo_cable>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public pitchshifter_impl::pitchshifter_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(pitchshifter);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(112)
		{
			0x005B, 0x0000, 0x7800, 0x6466, 0x0061, 0x0000, 0x3F80, 0x4000, 
            0x461C, 0xA800, 0x45AE, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x015B, 
            0x0000, 0x7300, 0x6968, 0x7466, 0x0000, 0x0000, 0x0000, 0x8000, 
            0xDD3F, 0x1924, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0002, 
            0x0000, 0x6970, 0x6863, 0x0000, 0x0000, 0x0000, 0x4000, 0x0041, 
            0x4000, 0x0041, 0x8000, 0x0A3F, 0x23D7, 0x5B3C, 0x0003, 0x0000, 
            0x6957, 0x646E, 0x776F, 0x0000, 0x0000, 0x0000, 0x9000, 0x0041, 
            0x9000, 0x0041, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0004, 0x0000, 
            0x6977, 0x646E, 0x776F, 0x6964, 0x0076, 0x0000, 0x3F80, 0x0000, 
            0x4180, 0x0000, 0x4110, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x055B, 
            0x0000, 0x4600, 0x6565, 0x6264, 0x6361, 0x006B, 0x0000, 0x0000, 
            0x0000, 0x3F80, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x065B, 0x0000, 0x7300, 0x6574, 0x0070, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References ------------------------------------------------------------------------
		
		auto& pma = this->getT(0);        // control::pma<NV, parameter::empty>
		auto& tempo_sync = this->getT(1); // pitchshifter_impl::tempo_sync_t<NV>
		auto& receive = this->getT(2);    // routing::receive<stereo_cable>
		auto& minmax = this->getT(3);     // pitchshifter_impl::minmax_t<NV>
		auto& faust = this->getT(4);      // project::g<NV>
		auto& send = this->getT(5);       // routing::send<stereo_cable>
		
		// Parameter Connections ------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, faust); // xfda -> faust::Crossfade
		
		this->getParameterT(1).connectT(0, minmax); // shift -> minmax::Value
		
		this->getParameterT(2).connectT(0, faust); // pich -> faust::SuperPitch
		
		this->getParameterT(3).connectT(0, tempo_sync); // Window -> tempo_sync::Tempo
		
		this->getParameterT(4).connectT(0, tempo_sync); // windowdiv -> tempo_sync::Multiplier
		
		this->getParameterT(5).connectT(0, receive); // Feedback -> receive::Feedback
		
		this->getParameterT(6).connectT(0, minmax); // step -> minmax::Step
		
		// Modulation Connections -----------------------------------------------------------------
		
		tempo_sync.getParameter().connectT(0, faust);                // tempo_sync -> faust::Window
		minmax.getWrappedObject().getParameter().connectT(0, faust); // minmax -> faust::PitchShift
		
		// Send Connections -----------------------------------------------------------------------
		
		send.connect(receive);
		
		// Default Values -------------------------------------------------------------------------
		
		pma.setParameterT(0, 0.);  // control::pma::Value
		pma.setParameterT(1, 1.);  // control::pma::Multiply
		pma.setParameterT(2, -1.); // control::pma::Add
		
		;                                // tempo_sync::Tempo is automated
		;                                // tempo_sync::Multiplier is automated
		tempo_sync.setParameterT(2, 1.); // control::tempo_sync::Enabled
		tempo_sync.setParameterT(3, 0.); // control::tempo_sync::UnsyncedTime
		
		; // receive::Feedback is automated
		
		;                              // minmax::Value is automated
		minmax.setParameterT(1, -16.); // control::minmax::Minimum
		minmax.setParameterT(2, 16.);  // control::minmax::Maximum
		minmax.setParameterT(3, 1.);   // control::minmax::Skew
		;                              // minmax::Step is automated
		minmax.setParameterT(5, 0.);   // control::minmax::Polarity
		
		;                          // faust::Crossfade is automated
		faust.setParameterT(1, 1); // core::faust::DryWet
		;                          // faust::PitchShift is automated
		;                          // faust::SuperPitch is automated
		;                          // faust::Window is automated
		
		this->setParameterT(0, 5589.);
		this->setParameterT(1, 0.598219);
		this->setParameterT(2, 12);
		this->setParameterT(3, 18.);
		this->setParameterT(4, 9.);
		this->setParameterT(5, 0.);
		this->setParameterT(6, 1.);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
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
using pitchshifter = wrap::node<pitchshifter_impl::instance<NV>>;
}


