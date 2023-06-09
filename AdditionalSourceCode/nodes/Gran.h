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

namespace Gran_impl
{
// ==============================| Node & Parameter type declarations |==============================

template <int NV>
using tempo_sync_t = wrap::mod<parameter::plain<project::granular<NV>, 4>, 
                               control::tempo_sync<NV>>;
DECLARE_PARAMETER_RANGE_STEP(pma_mod_0Range, 
                             0., 
                             18., 
                             1.);

template <int NV>
using pma_mod_0 = parameter::from0To1<tempo_sync_t<NV>, 
                                      0, 
                                      pma_mod_0Range>;

DECLARE_PARAMETER_RANGE_STEP(pma_mod_1Range, 
                             0., 
                             1000., 
                             0.1);

template <int NV>
using pma_mod_1 = parameter::from0To1<tempo_sync_t<NV>, 
                                      3, 
                                      pma_mod_1Range>;

template <int NV>
using pma_mod = parameter::chain<ranges::Identity, 
                                 pma_mod_0<NV>, 
                                 pma_mod_1<NV>>;

template <int NV>
using pma_t = control::pma<NV, pma_mod<NV>>;

template <int NV>
using smoothed_parameter_t = wrap::mod<parameter::plain<project::granular<NV>, 0>, 
                                       control::smoothed_parameter<NV, smoothers::linear_ramp<NV>>>;

template <int NV>
using fix8_block_t_ = container::chain<parameter::empty, 
                                       wrap::fix<2, pma_t<NV>>, 
                                       tempo_sync_t<NV>, 
                                       smoothed_parameter_t<NV>, 
                                       project::granular<NV>>;

template <int NV>
using fix8_block_t = wrap::fix_block<8, fix8_block_t_<NV>>;

namespace Gran_t_parameters
{
// Parameter list for Gran_impl::Gran_t ------------------------------------------------------------

template <int NV>
using grainsize = parameter::plain<Gran_impl::pma_t<NV>, 0>;
template <int NV>
using density = parameter::plain<project::granular<NV>, 2>;
template <int NV>
using feedback = parameter::plain<project::granular<NV>, 1>;
template <int NV>
using gsync = parameter::plain<Gran_impl::tempo_sync_t<NV>, 
                               2>;
template <int NV>
using gmulti = parameter::plain<Gran_impl::tempo_sync_t<NV>, 
                                1>;
template <int NV>
using pos = parameter::plain<Gran_impl::smoothed_parameter_t<NV>, 
                             0>;
template <int NV>
using Smooth = parameter::plain<Gran_impl::smoothed_parameter_t<NV>, 
                                1>;
template <int NV>
using Gran_t_plist = parameter::list<grainsize<NV>, 
                                     density<NV>, 
                                     feedback<NV>, 
                                     gsync<NV>, 
                                     gmulti<NV>, 
                                     pos<NV>, 
                                     Smooth<NV>>;
}

template <int NV>
using Gran_t_ = container::chain<Gran_t_parameters::Gran_t_plist<NV>, 
                                 wrap::fix<2, fix8_block_t<NV>>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public Gran_impl::Gran_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Gran);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(114)
		{
			0x005B, 0x0000, 0x6700, 0x6172, 0x6E69, 0x6973, 0x657A, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x433F, 0x384E, 0x003F, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0001, 0x0000, 0x6564, 0x736E, 0x7469, 0x0079, 
            0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x126F, 0x3A83, 0x025B, 0x0000, 0x6600, 0x6565, 0x6264, 0x6361, 
            0x006B, 0x0000, 0x0000, 0x0000, 0x4000, 0x0000, 0x4000, 0x0000, 
            0x3F80, 0x126F, 0x3A83, 0x035B, 0x0000, 0x6700, 0x7973, 0x636E, 
            0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 
            0x003F, 0x8000, 0x5B3F, 0x0004, 0x0000, 0x6D67, 0x6C75, 0x6974, 
            0x0000, 0x8000, 0x003F, 0x8000, 0x0041, 0x8000, 0x003F, 0x8000, 
            0x003F, 0x8000, 0x5B3F, 0x0005, 0x0000, 0x6F70, 0x0073, 0x0000, 
            0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 
            0x0000, 0x065B, 0x0000, 0x5300, 0x6F6D, 0x746F, 0x0068, 0xCCCD, 
            0x3DCC, 0x0000, 0x447A, 0x0000, 0x42CA, 0x0000, 0x3F80, 0xCCCD, 
            0x3DCC, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& fix8_block = this->getT(0);                 // Gran_impl::fix8_block_t<NV>
		auto& pma = this->getT(0).getT(0);                // Gran_impl::pma_t<NV>
		auto& tempo_sync = this->getT(0).getT(1);         // Gran_impl::tempo_sync_t<NV>
		auto& smoothed_parameter = this->getT(0).getT(2); // Gran_impl::smoothed_parameter_t<NV>
		auto& faust = this->getT(0).getT(3);              // project::granular<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		this->getParameterT(0).connectT(0, pma); // grainsize -> pma::Value
		
		this->getParameterT(1).connectT(0, faust); // density -> faust::population
		
		this->getParameterT(2).connectT(0, faust); // feedback -> faust::feedback
		
		this->getParameterT(3).connectT(0, tempo_sync); // gsync -> tempo_sync::Enabled
		
		this->getParameterT(4).connectT(0, tempo_sync); // gmulti -> tempo_sync::Multiplier
		
		this->getParameterT(5).connectT(0, smoothed_parameter); // pos -> smoothed_parameter::Value
		
		this->getParameterT(6).connectT(0, smoothed_parameter); // Smooth -> smoothed_parameter::SmoothingTime
		
		// Modulation Connections ------------------------------------------------------------------
		
		tempo_sync.getParameter().connectT(0, faust);                  // tempo_sync -> faust::taille
		pma.getWrappedObject().getParameter().connectT(0, tempo_sync); // pma -> tempo_sync::Tempo
		pma.getWrappedObject().getParameter().connectT(1, tempo_sync); // pma -> tempo_sync::UnsyncedTime
		smoothed_parameter.getParameter().connectT(0, faust);          // smoothed_parameter -> faust::decal
		
		// Default Values --------------------------------------------------------------------------
		
		;                         // pma::Value is automated
		pma.setParameterT(1, 1.); // control::pma::Multiply
		pma.setParameterT(2, 0.); // control::pma::Add
		
		; // tempo_sync::Tempo is automated
		; // tempo_sync::Multiplier is automated
		; // tempo_sync::Enabled is automated
		; // tempo_sync::UnsyncedTime is automated
		
		;                                        // smoothed_parameter::Value is automated
		;                                        // smoothed_parameter::SmoothingTime is automated
		smoothed_parameter.setParameterT(2, 1.); // control::smoothed_parameter::Enabled
		
		;                              // faust::decal is automated
		;                              // faust::feedback is automated
		;                              // faust::population is automated
		faust.setParameterT(3, 1.002); // core::faust::speed
		;                              // faust::taille is automated
		
		this->setParameterT(0, 0.719944);
		this->setParameterT(1, 1.);
		this->setParameterT(2, 2.);
		this->setParameterT(3, 1.);
		this->setParameterT(4, 1.);
		this->setParameterT(5, 1.);
		this->setParameterT(6, 101.);
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
using Gran = wrap::node<Gran_impl::instance<NV>>;
}


