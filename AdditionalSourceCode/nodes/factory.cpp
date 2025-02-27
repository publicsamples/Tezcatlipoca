/** Autogenerated Main.cpp. */

// =============================| Include only the DSP files  |=============================

#include <AppConfig.h>
#include <hi_dsp_library/hi_dsp_library.h>
#include <hi_faust/hi_faust.h>
#include "includes.h"
// =======================| Now we can add the rest of the codebase |=======================

#include <JuceHeader.h>

#if !JUCE_WINDOWS
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
#endif

// ===================================| Project Factory |===================================

namespace project
{

struct Factory: public scriptnode::dll::StaticLibraryHostFactory
{
	Factory()
	{
		TempoSyncer::initTempoData();
		// Node registrations -------------------------------------------------------------
		
		registerPolyNode<project::RevDel<1>, wrap::illegal_poly<project::RevDel<1>>>();
		registerPolyNode<project::klp2<1>, wrap::illegal_poly<project::klp2<1>>>();
		registerPolyNode<project::klp<1>, wrap::illegal_poly<project::klp<1>>>();
		registerPolyNode<project::granular<1>, wrap::illegal_poly<project::granular<1>>>();
		registerPolyNode<project::g<1>, wrap::illegal_poly<project::g<1>>>();
		registerNode<project::CleanDelay>();
		registerPolyNode<project::stored<1>, wrap::illegal_poly<project::stored<1>>>();
	}
};
}

scriptnode::dll::FactoryBase* scriptnode::DspNetwork::createStaticFactory()
{
	return new project::Factory();
}

#if !JUCE_WINDOWS
#pragma clang diagnostic pop
#endif


