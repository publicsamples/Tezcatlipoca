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

namespace CleanDelay_impl
{
// =========================| Node & Parameter type declarations |=========================

using stereo_cable = cable::block<2>;

using fix8_block_t_ = container::chain<parameter::empty, 
                                       wrap::fix<2, routing::receive<stereo_cable>>, 
                                       core::fix_delay, 
                                       routing::send<stereo_cable>>;

using fix8_block_t = wrap::fix_block<8, fix8_block_t_>;

namespace CleanDelay_t_parameters
{
// Parameter list for CleanDelay_impl::CleanDelay_t ---------------------------------------

using DelayTime = parameter::plain<core::fix_delay, 0>;
using FeedBack = parameter::plain<routing::receive<stereo_cable>, 
                                  0>;
using CleanDelay_t_plist = parameter::list<DelayTime, FeedBack>;
}

using CleanDelay_t_ = container::chain<CleanDelay_t_parameters::CleanDelay_t_plist, 
                                       wrap::fix<2, fix8_block_t>>;

// =============================| Root node initialiser class |=============================

struct instance: public CleanDelay_impl::CleanDelay_t_
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(CleanDelay);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(36)
		{
			0x005B, 0x0000, 0x4400, 0x6C65, 0x7961, 0x6954, 0x656D, 0x0000, 
            0x0000, 0x0000, 0x7A00, 0x0044, 0x8000, 0x9B3F, 0x9A20, 0xCD3E, 
            0xCCCC, 0x5B3D, 0x0001, 0x0000, 0x6546, 0x6465, 0x6142, 0x6B63, 
            0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 
            0x003F, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References ----------------------------------------------------------------
		
		auto& fix8_block = this->getT(0);        // CleanDelay_impl::fix8_block_t
		auto& receive = this->getT(0).getT(0);   // routing::receive<stereo_cable>
		auto& fix_delay = this->getT(0).getT(1); // core::fix_delay
		auto& send = this->getT(0).getT(2);      // routing::send<stereo_cable>
		
		// Parameter Connections ----------------------------------------------------------
		
		this->getParameterT(0).connectT(0, fix_delay); // DelayTime -> fix_delay::DelayTime
		
		this->getParameterT(1).connectT(0, receive); // FeedBack -> receive::Feedback
		
		// Send Connections ---------------------------------------------------------------
		
		send.connect(receive);
		
		// Default Values -----------------------------------------------------------------
		
		; // receive::Feedback is automated
		
		;                                 // fix_delay::DelayTime is automated
		fix_delay.setParameterT(1, 512.); // core::fix_delay::FadeTime
		
		this->setParameterT(0, 1);
		this->setParameterT(1, 1.);
	}
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ==================================| Public Definition |==================================

namespace project
{
using CleanDelay = wrap::node<CleanDelay_impl::instance>;
}


