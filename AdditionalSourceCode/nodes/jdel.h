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

namespace jdel_impl
{
// ==============================| Node & Parameter type declarations |==============================

DECLARE_PARAMETER_RANGE_STEP(smoothed_parameter_mod_0Range, 
                             0., 
                             18., 
                             1.);

template <int NV>
using smoothed_parameter_mod_0 = parameter::from0To1<control::tempo_sync<NV>, 
                                                     0, 
                                                     smoothed_parameter_mod_0Range>;

DECLARE_PARAMETER_RANGE_STEP(smoothed_parameter_mod_1Range, 
                             0., 
                             1000., 
                             0.1);

template <int NV>
using smoothed_parameter_mod_1 = parameter::from0To1<control::tempo_sync<NV>, 
                                                     3, 
                                                     smoothed_parameter_mod_1Range>;

DECLARE_PARAMETER_RANGE_SKEW(smoothed_parameter_mod_2Range, 
                             0., 
                             1000., 
                             0.30103);

using smoothed_parameter_mod_2 = parameter::from0To1<core::fix_delay, 
                                                     0, 
                                                     smoothed_parameter_mod_2Range>;

template <int NV>
using smoothed_parameter_mod = parameter::chain<ranges::Identity, 
                                                smoothed_parameter_mod_0<NV>, 
                                                smoothed_parameter_mod_1<NV>, 
                                                smoothed_parameter_mod_2>;

template <int NV>
using smoothed_parameter_t = wrap::mod<smoothed_parameter_mod<NV>, 
                                       control::smoothed_parameter<NV, smoothers::linear_ramp<NV>>>;

template <int NV>
using chain1_t = container::chain<parameter::empty, 
                                  wrap::fix<2, smoothed_parameter_t<NV>>, 
                                  control::tempo_sync<NV>>;
using stereo_cable = cable::block<2>;

using fix8_block_t_ = container::chain<parameter::empty, 
                                       wrap::fix<2, routing::receive<stereo_cable>>, 
                                       core::fix_delay, 
                                       routing::send<stereo_cable>>;

using fix8_block_t = wrap::fix_block<8, fix8_block_t_>;

template <int NV>
using chain2_t = container::chain<parameter::empty, 
                                  wrap::fix<2, chain1_t<NV>>, 
                                  fix8_block_t>;

namespace jdel_t_parameters
{
// Parameter list for jdel_impl::jdel_t ------------------------------------------------------------

template <int NV>
using dtime = parameter::plain<jdel_impl::smoothed_parameter_t<NV>, 
                               0>;
using fade = parameter::plain<core::fix_delay, 1>;
template <int NV>
using dmulti = parameter::plain<control::tempo_sync<NV>, 
                                1>;
template <int NV>
using sync = parameter::plain<control::tempo_sync<NV>, 
                              2>;
template <int NV>
using smooth = parameter::plain<jdel_impl::smoothed_parameter_t<NV>, 
                                1>;
using feedbk = parameter::plain<routing::receive<stereo_cable>, 
                                0>;
template <int NV>
using jdel_t_plist = parameter::list<dtime<NV>, 
                                     fade, 
                                     dmulti<NV>, 
                                     sync<NV>, 
                                     smooth<NV>, 
                                     feedbk>;
}

template <int NV>
using jdel_t_ = container::chain<jdel_t_parameters::jdel_t_plist<NV>, 
                                 wrap::fix<2, chain2_t<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public jdel_impl::jdel_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(jdel);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(94)
		{
			0x005B, 0x0000, 0x6400, 0x6974, 0x656D, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x483F, 0x4275, 0x003E, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x0001, 0x0000, 0x6166, 0x6564, 0x0000, 0x0000, 0x0000, 0x8000, 
            0x0044, 0xFB80, 0x0043, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0002, 
            0x0000, 0x6D64, 0x6C75, 0x6974, 0x0000, 0x8000, 0x003F, 0x8000, 
            0x0041, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0003, 
            0x0000, 0x7973, 0x636E, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0004, 0x0000, 
            0x6D73, 0x6F6F, 0x6874, 0xCD00, 0xCCCC, 0x003D, 0x7A00, 0x0044, 
            0x1D00, 0x0044, 0x8000, 0xCD3F, 0xCCCC, 0x5B3D, 0x0005, 0x0000, 
            0x6566, 0x6465, 0x6B62, 0x0000, 0x0000, 0x0000, 0x8000, 0x603F, 
            0x1D15, 0x003D, 0x8000, 0x003F, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& chain2 = this->getT(0);                             // jdel_impl::chain2_t<NV>
		auto& chain1 = this->getT(0).getT(0);                     // jdel_impl::chain1_t<NV>
		auto& smoothed_parameter = this->getT(0).getT(0).getT(0); // jdel_impl::smoothed_parameter_t<NV>
		auto& tempo_sync2 = this->getT(0).getT(0).getT(1);        // control::tempo_sync<NV>
		auto& fix8_block = this->getT(0).getT(1);                 // jdel_impl::fix8_block_t
		auto& receive2 = this->getT(0).getT(1).getT(0);           // routing::receive<stereo_cable>
		auto& fix_delay1 = this->getT(0).getT(1).getT(1);         // core::fix_delay
		auto& send2 = this->getT(0).getT(1).getT(2);              // routing::send<stereo_cable>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, smoothed_parameter); // dtime -> smoothed_parameter::Value
		
		this->getParameterT(1).connectT(0, fix_delay1); // fade -> fix_delay1::FadeTime
		
		this->getParameterT(2).connectT(0, tempo_sync2); // dmulti -> tempo_sync2::Multiplier
		
		this->getParameterT(3).connectT(0, tempo_sync2); // sync -> tempo_sync2::Enabled
		
		this->getParameterT(4).connectT(0, smoothed_parameter); // smooth -> smoothed_parameter::SmoothingTime
		
		this->getParameterT(5).connectT(0, receive2); // feedbk -> receive2::Feedback
		
		// Modulation Connections ------------------------------------------------------------------
		
		smoothed_parameter.getParameter().connectT(0, tempo_sync2); // smoothed_parameter -> tempo_sync2::Tempo
		smoothed_parameter.getParameter().connectT(1, tempo_sync2); // smoothed_parameter -> tempo_sync2::UnsyncedTime
		smoothed_parameter.getParameter().connectT(2, fix_delay1);  // smoothed_parameter -> fix_delay1::DelayTime
		
		// Send Connections ------------------------------------------------------------------------
		
		send2.connect(receive2);
		
		// Default Values --------------------------------------------------------------------------
		
		;                                        // smoothed_parameter::Value is automated
		;                                        // smoothed_parameter::SmoothingTime is automated
		smoothed_parameter.setParameterT(2, 1.); // control::smoothed_parameter::Enabled
		
		; // tempo_sync2::Tempo is automated
		; // tempo_sync2::Multiplier is automated
		; // tempo_sync2::Enabled is automated
		; // tempo_sync2::UnsyncedTime is automated
		
		; // receive2::Feedback is automated
		
		; // fix_delay1::DelayTime is automated
		; // fix_delay1::FadeTime is automated
		
		this->setParameterT(0, 0.189901);
		this->setParameterT(1, 503.);
		this->setParameterT(2, 1.);
		this->setParameterT(3, 0.);
		this->setParameterT(4, 628.);
		this->setParameterT(5, 0.0383505);
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
using jdel = wrap::node<jdel_impl::instance<NV>>;
}


