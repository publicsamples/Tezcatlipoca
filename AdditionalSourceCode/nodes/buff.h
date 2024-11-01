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

namespace buff_impl
{
// ==============================| Node & Parameter type declarations |==============================

template <int NV>
using ramp_t = wrap::no_data<core::ramp<NV, false>>;
template <int NV>
using tempo_sync1_t = wrap::mod<parameter::plain<ramp_t<NV>, 0>, 
                                control::tempo_sync<NV>>;

template <int NV>
using tempo_sync_t = wrap::mod<parameter::plain<core::fix_delay, 0>, 
                               control::tempo_sync<NV>>;
using repitch1_t_ = container::chain<parameter::empty, 
                                     wrap::fix<1, core::empty>>;

using repitch1_t = wrap::repitch<repitch1_t_, interpolators::dynamic>;

DECLARE_PARAMETER_RANGE_SKEW(pma2_modRange, 
                             -100., 
                             0., 
                             5.42227);

template <int NV>
using pma2_mod = parameter::from0To1<core::gain<NV>, 
                                     0, 
                                     pma2_modRange>;

template <int NV>
using pma2_t = control::pma<NV, pma2_mod<NV>>;

template <int NV> using pma1_mod = pma2_mod<NV>;

template <int NV>
using pma1_t = control::pma<NV, pma1_mod<NV>>;

using stereo_cable = cable::block<2>;
template <int NV>
using pma_t = control::pma<NV, 
                           parameter::plain<routing::receive<stereo_cable>, 0>>;

template <int NV>
using peak_mod = parameter::chain<ranges::Identity, 
                                  parameter::plain<pma2_t<NV>, 0>, 
                                  parameter::plain<pma1_t<NV>, 0>, 
                                  parameter::plain<pma_t<NV>, 0>>;

template <int NV>
using peak_t = wrap::mod<peak_mod<NV>, 
                         wrap::no_data<core::peak>>;

using repitch_t_ = container::chain<parameter::empty, 
                                    wrap::fix<2, core::fix_delay>>;

using repitch_t = wrap::repitch<repitch_t_, interpolators::dynamic>;
template <int NV>
using minmax_t = control::minmax<NV, 
                                 parameter::plain<repitch_t, 0>>;

template <int NV>
using modchain_t_ = container::chain<parameter::empty, 
                                     wrap::fix<1, tempo_sync1_t<NV>>, 
                                     tempo_sync_t<NV>, 
                                     ramp_t<NV>, 
                                     math::pi<NV>, 
                                     math::rect<NV>, 
                                     repitch1_t, 
                                     peak_t<NV>, 
                                     pma_t<NV>, 
                                     pma2_t<NV>, 
                                     pma1_t<NV>, 
                                     minmax_t<NV>>;

template <int NV>
using modchain_t = wrap::control_rate<modchain_t_<NV>>;

using chain_t = container::chain<parameter::empty, 
                                 wrap::fix<2, repitch_t>>;

namespace buff_t_parameters
{
// Parameter list for buff_impl::buff_t ------------------------------------------------------------

DECLARE_PARAMETER_RANGE(FeedbackRange, 
                        5.55112e-17, 
                        1.);

template <int NV>
using Feedback = parameter::from0To1<buff_impl::pma_t<NV>, 
                                     2, 
                                     FeedbackRange>;

template <int NV>
using Post = parameter::from0To1<buff_impl::pma1_t<NV>, 
                                 2, 
                                 FeedbackRange>;

template <int NV>
using Pre = parameter::from0To1<buff_impl::pma2_t<NV>, 
                                2, 
                                FeedbackRange>;

template <int NV>
using TempoSync = parameter::chain<ranges::Identity, 
                                   parameter::plain<buff_impl::tempo_sync_t<NV>, 0>, 
                                   parameter::plain<buff_impl::tempo_sync1_t<NV>, 0>>;

template <int NV>
using FbGate = parameter::plain<buff_impl::pma_t<NV>, 1>;
template <int NV>
using PostGate = parameter::plain<buff_impl::pma1_t<NV>, 1>;
template <int NV>
using PreGate = parameter::plain<buff_impl::pma2_t<NV>, 1>;
template <int NV>
using Multi = parameter::plain<buff_impl::tempo_sync_t<NV>, 
                               1>;
template <int NV>
using Pitch = parameter::plain<buff_impl::minmax_t<NV>, 
                               0>;
template <int NV>
using RampMulti = parameter::plain<buff_impl::tempo_sync1_t<NV>, 
                                   1>;
template <int NV>
using GateLength = parameter::plain<math::pi<NV>, 0>;
template <int NV>
using buff_t_plist = parameter::list<FbGate<NV>, 
                                     PostGate<NV>, 
                                     PreGate<NV>, 
                                     Feedback<NV>, 
                                     Post<NV>, 
                                     Pre<NV>, 
                                     TempoSync<NV>, 
                                     Multi<NV>, 
                                     Pitch<NV>, 
                                     RampMulti<NV>, 
                                     GateLength<NV>>;
}

template <int NV>
using buff_t_ = container::chain<buff_t_parameters::buff_t_plist<NV>, 
                                 wrap::fix<2, modchain_t<NV>>, 
                                 routing::receive<stereo_cable>, 
                                 chain_t, 
                                 core::gain<NV>, 
                                 routing::send<stereo_cable>, 
                                 core::gain<NV>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public buff_impl::buff_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(buff);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(182)
		{
			0x005B, 0x0000, 0x4600, 0x4762, 0x7461, 0x0065, 0x0000, 0xBF80, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x015B, 0x0000, 0x5000, 0x736F, 0x4774, 0x7461, 0x0065, 0x0000, 
            0xBF80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 
            0x0000, 0x025B, 0x0000, 0x5000, 0x6572, 0x6147, 0x6574, 0x0000, 
            0x8000, 0x00BF, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0003, 0x0000, 0x6546, 0x6465, 0x6162, 0x6B63, 
            0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 
            0x003F, 0x0000, 0x5B00, 0x0004, 0x0000, 0x6F50, 0x7473, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0005, 0x0000, 0x7250, 0x0065, 0x0000, 0x0000, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x065B, 0x0000, 0x5400, 0x6D65, 0x6F70, 0x7953, 0x636E, 0x0000, 
            0x0000, 0x0000, 0x9000, 0x0041, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x8000, 0x5B3F, 0x0007, 0x0000, 0x754D, 0x746C, 0x0069, 0x0000, 
            0x3F80, 0x0000, 0x4180, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0x085B, 0x0000, 0x5000, 0x7469, 0x6863, 0x0000, 0x0000, 
            0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 0x0000, 
            0x5B00, 0x0009, 0x0000, 0x6152, 0x706D, 0x754D, 0x746C, 0x0069, 
            0x0000, 0x3F80, 0x0000, 0x4180, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0000, 0x3F80, 0x0A5B, 0x0000, 0x4700, 0x7461, 0x4C65, 0x6E65, 
            0x7467, 0x0068, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0000, 0x3F80, 0x0000, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& modchain = this->getT(0);                  // buff_impl::modchain_t<NV>
		auto& tempo_sync1 = this->getT(0).getT(0);       // buff_impl::tempo_sync1_t<NV>
		auto& tempo_sync = this->getT(0).getT(1);        // buff_impl::tempo_sync_t<NV>
		auto& ramp = this->getT(0).getT(2);              // buff_impl::ramp_t<NV>
		auto& pi = this->getT(0).getT(3);                // math::pi<NV>
		auto& rect = this->getT(0).getT(4);              // math::rect<NV>
		auto& repitch1 = this->getT(0).getT(5);          // buff_impl::repitch1_t
		auto& peak = this->getT(0).getT(6);              // buff_impl::peak_t<NV>
		auto& pma = this->getT(0).getT(7);               // buff_impl::pma_t<NV>
		auto& pma2 = this->getT(0).getT(8);              // buff_impl::pma2_t<NV>
		auto& pma1 = this->getT(0).getT(9);              // buff_impl::pma1_t<NV>
		auto& minmax = this->getT(0).getT(10);           // buff_impl::minmax_t<NV>
		auto& receive = this->getT(1);                   // routing::receive<stereo_cable>
		auto& chain = this->getT(2);                     // buff_impl::chain_t
		auto& repitch = this->getT(2).getT(0);           // buff_impl::repitch_t
		auto& fix_delay = this->getT(2).getT(0).getT(0); // core::fix_delay
		auto& gain1 = this->getT(3);                     // core::gain<NV>
		auto& send = this->getT(4);                      // routing::send<stereo_cable>
		auto& gain = this->getT(5);                      // core::gain<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, pma); // FbGate -> pma::Multiply
		
		this->getParameterT(1).connectT(0, pma1); // PostGate -> pma1::Multiply
		
		this->getParameterT(2).connectT(0, pma2); // PreGate -> pma2::Multiply
		
		this->getParameterT(3).connectT(0, pma); // Feedback -> pma::Add
		
		this->getParameterT(4).connectT(0, pma1); // Post -> pma1::Add
		
		this->getParameterT(5).connectT(0, pma2); // Pre -> pma2::Add
		
		auto& TempoSync_p = this->getParameterT(6);
		TempoSync_p.connectT(0, tempo_sync);  // TempoSync -> tempo_sync::Tempo
		TempoSync_p.connectT(1, tempo_sync1); // TempoSync -> tempo_sync1::Tempo
		
		this->getParameterT(7).connectT(0, tempo_sync); // Multi -> tempo_sync::Multiplier
		
		this->getParameterT(8).connectT(0, minmax); // Pitch -> minmax::Value
		
		this->getParameterT(9).connectT(0, tempo_sync1); // RampMulti -> tempo_sync1::Multiplier
		
		this->getParameterT(10).connectT(0, pi); // GateLength -> pi::Value
		
		// Modulation Connections ------------------------------------------------------------------
		
		tempo_sync1.getParameter().connectT(0, ramp);                  // tempo_sync1 -> ramp::PeriodTime
		tempo_sync.getParameter().connectT(0, fix_delay);              // tempo_sync -> fix_delay::DelayTime
		pma2.getWrappedObject().getParameter().connectT(0, gain1);     // pma2 -> gain1::Gain
		pma1.getWrappedObject().getParameter().connectT(0, gain);      // pma1 -> gain::Gain
		pma.getWrappedObject().getParameter().connectT(0, receive);    // pma -> receive::Feedback
		peak.getParameter().connectT(0, pma2);                         // peak -> pma2::Value
		peak.getParameter().connectT(1, pma1);                         // peak -> pma1::Value
		peak.getParameter().connectT(2, pma);                          // peak -> pma::Value
		minmax.getWrappedObject().getParameter().connectT(0, repitch); // minmax -> repitch::RepitchFactor
		
		// Send Connections ------------------------------------------------------------------------
		
		send.connect(receive);
		
		// Default Values --------------------------------------------------------------------------
		
		;                                   // tempo_sync1::Tempo is automated
		;                                   // tempo_sync1::Multiplier is automated
		tempo_sync1.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync1.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		;                                  // tempo_sync::Tempo is automated
		;                                  // tempo_sync::Multiplier is automated
		tempo_sync.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		;                          // ramp::PeriodTime is automated
		ramp.setParameterT(1, 0.); // core::ramp::LoopStart
		ramp.setParameterT(2, 1.); // core::ramp::Gate
		
		; // pi::Value is automated
		
		rect.setParameterT(0, 0.983547); // math::rect::Value
		
		repitch1.setParameterT(0, 1.); // container::chain::RepitchFactor
		repitch1.setParameterT(1, 0.); // container::chain::Interpolation
		
		; // pma::Value is automated
		; // pma::Multiply is automated
		; // pma::Add is automated
		
		; // pma2::Value is automated
		; // pma2::Multiply is automated
		; // pma2::Add is automated
		
		; // pma1::Value is automated
		; // pma1::Multiply is automated
		; // pma1::Add is automated
		
		;                                 // minmax::Value is automated
		minmax.setParameterT(1, 0.5);     // control::minmax::Minimum
		minmax.setParameterT(2, 2.);      // control::minmax::Maximum
		minmax.setParameterT(3, 0.63093); // control::minmax::Skew
		minmax.setParameterT(4, 0.);      // control::minmax::Step
		minmax.setParameterT(5, 1.);      // control::minmax::Polarity
		
		; // receive::Feedback is automated
		
		;                             // repitch::RepitchFactor is automated
		repitch.setParameterT(1, 0.); // container::chain::Interpolation
		
		;                                 // fix_delay::DelayTime is automated
		fix_delay.setParameterT(1, 512.); // core::fix_delay::FadeTime
		
		;                              // gain1::Gain is automated
		gain1.setParameterT(1, 241.7); // core::gain::Smoothing
		gain1.setParameterT(2, 0.);    // core::gain::ResetValue
		
		;                             // gain::Gain is automated
		gain.setParameterT(1, 249.6); // core::gain::Smoothing
		gain.setParameterT(2, 0.);    // core::gain::ResetValue
		
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
		this->setParameterT(10, 1.);
		this->setExternalData({}, -1);
	}
	~instance() override
	{
		// Cleanup external data references --------------------------------------------------------
		
		this->setExternalData({}, -1);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool isProcessingHiseEvent() { return true; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
	
	void setExternalData(const ExternalData& b, int index)
	{
		// External Data Connections ---------------------------------------------------------------
		
		this->getT(0).getT(2).setExternalData(b, index); // buff_impl::ramp_t<NV>
		this->getT(0).getT(6).setExternalData(b, index); // buff_impl::peak_t<NV>
	}
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
using buff = wrap::node<buff_impl::instance<NV>>;
}


