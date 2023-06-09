/* ------------------------------------------------------------
name: "g"
Code generated with Faust 2.50.6 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -cn _g -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___g_H__
#define  ___g_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _g
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif


class _g final : public ::faust::dsp {
	
 public:
	
	FAUSTFLOAT fHslider0;
	int IOTA0;
	float fVec0[131072];
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fRec0[2];
	FAUSTFLOAT fHslider4;
	float fVec1[131072];
	int fSampleRate;
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("compile_options", "-lang cpp -rui -cn _g -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("filename", "g.dsp");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.5");
		m->declare("misceffects.lib/name", "Misc Effects Library");
		m->declare("misceffects.lib/version", "2.0");
		m->declare("name", "g");
	}

	static constexpr int getStaticNumInputs() {
		return 2;
	}
	static constexpr int getStaticNumOutputs() {
		return 2;
	}
	int getNumInputs() {
		return 2;
	}
	int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
	}
	
	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.5f);
		fHslider1 = FAUSTFLOAT(1e+03f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(1e+01f);
	}
	
	void instanceClear() {
		IOTA0 = 0;
		for (int l0 = 0; l0 < 131072; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 131072; l2 = l2 + 1) {
			fVec1[l2] = 0.0f;
		}
	}
	
	void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	_g* clone() {
		return new _g();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("g");
		ui_interface->declare(&fHslider4, "OWL", "PARAMETER_C");
		ui_interface->declare(&fHslider4, "style", "knob");
		ui_interface->addHorizontalSlider("Crossfade", &fHslider4, FAUSTFLOAT(1e+01f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1e+04f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fHslider0, "OWL", "PARAMETER_D");
		ui_interface->addHorizontalSlider("Dry/Wet", &fHslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider2, "OWL", "PARAMETER_A");
		ui_interface->declare(&fHslider2, "style", "knob");
		ui_interface->addHorizontalSlider("Pitch Shift", &fHslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fHslider3, "OWL", "PARAMETER_E");
		ui_interface->declare(&fHslider3, "style", "knob");
		ui_interface->addHorizontalSlider("Super Pitch", &fHslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider1, "OWL", "PARAMETER_B");
		ui_interface->declare(&fHslider1, "style", "knob");
		ui_interface->addHorizontalSlider("Window", &fHslider1, FAUSTFLOAT(1e+03f), FAUSTFLOAT(5e+01f), FAUSTFLOAT(1.2e+06f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = std::max<float>(0.0f, std::min<float>(1.0f, float(fHslider0)));
		float fSlow1 = 1.0f - fSlow0;
		float fSlow2 = std::max<float>(5e+01f, std::min<float>(1.2e+06f, float(fHslider1)));
		float fSlow3 = std::pow(2.0f, 0.083333336f * (std::max<float>(-12.0f, std::min<float>(12.0f, float(fHslider2))) + std::max<float>(0.0f, std::min<float>(12.0f, float(fHslider3)))));
		float fSlow4 = 1.0f / std::max<float>(1.0f, std::min<float>(1e+04f, float(fHslider4)));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fVec0[IOTA0 & 131071] = fTemp0;
			fRec0[0] = std::fmod(fSlow2 + (fRec0[1] + 1.0f - fSlow3), fSlow2);
			int iTemp1 = int(fRec0[0]);
			int iTemp2 = std::min<int>(65537, std::max<int>(0, iTemp1));
			float fTemp3 = std::floor(fRec0[0]);
			float fTemp4 = 1.0f - fRec0[0];
			float fTemp5 = fTemp3 + fTemp4;
			float fTemp6 = fRec0[0] - fTemp3;
			int iTemp7 = std::min<int>(65537, std::max<int>(0, iTemp1 + 1));
			float fTemp8 = std::min<float>(fSlow4 * fRec0[0], 1.0f);
			float fTemp9 = fSlow2 + fRec0[0];
			int iTemp10 = int(fTemp9);
			int iTemp11 = std::min<int>(65537, std::max<int>(0, iTemp10));
			float fTemp12 = std::floor(fTemp9);
			float fTemp13 = fTemp12 + fTemp4 - fSlow2;
			float fTemp14 = fSlow2 + (fRec0[0] - fTemp12);
			int iTemp15 = std::min<int>(65537, std::max<int>(0, iTemp10 + 1));
			float fTemp16 = 1.0f - fTemp8;
			output0[i0] = FAUSTFLOAT(fSlow1 * fTemp0 + fSlow0 * ((fVec0[(IOTA0 - iTemp2) & 131071] * fTemp5 + fTemp6 * fVec0[(IOTA0 - iTemp7) & 131071]) * fTemp8 + (fVec0[(IOTA0 - iTemp11) & 131071] * fTemp13 + fTemp14 * fVec0[(IOTA0 - iTemp15) & 131071]) * fTemp16));
			float fTemp17 = float(input1[i0]);
			fVec1[IOTA0 & 131071] = fTemp17;
			output1[i0] = FAUSTFLOAT(fSlow1 * fTemp17 + fSlow0 * (fTemp8 * (fVec1[(IOTA0 - iTemp2) & 131071] * fTemp5 + fTemp6 * fVec1[(IOTA0 - iTemp7) & 131071]) + fTemp16 * (fTemp13 * fVec1[(IOTA0 - iTemp11) & 131071] + fTemp14 * fVec1[(IOTA0 - iTemp15) & 131071])));
			IOTA0 = IOTA0 + 1;
			fRec0[1] = fRec0[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "g.dsp"
	#define FAUST_CLASS_NAME "_g"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -cn _g -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 5
	#define FAUST_PASSIVES 0

	FAUST_ADDHORIZONTALSLIDER("Crossfade", fHslider4, 1e+01f, 1.0f, 1e+04f, 1.0f);
	FAUST_ADDHORIZONTALSLIDER("Dry/Wet", fHslider0, 0.5f, 0.0f, 1.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Pitch Shift", fHslider2, 0.0f, -12.0f, 12.0f, 0.1f);
	FAUST_ADDHORIZONTALSLIDER("Super Pitch", fHslider3, 0.0f, 0.0f, 12.0f, 0.01f);
	FAUST_ADDHORIZONTALSLIDER("Window", fHslider1, 1e+03f, 5e+01f, 1.2e+06f, 1.0f);

	#define FAUST_LIST_ACTIVES(p) \
		p(HORIZONTALSLIDER, Crossfade, "Crossfade", fHslider4, 1e+01f, 1.0f, 1e+04f, 1.0f) \
		p(HORIZONTALSLIDER, Dry/Wet, "Dry/Wet", fHslider0, 0.5f, 0.0f, 1.0f, 0.01f) \
		p(HORIZONTALSLIDER, Pitch_Shift, "Pitch Shift", fHslider2, 0.0f, -12.0f, 12.0f, 0.1f) \
		p(HORIZONTALSLIDER, Super_Pitch, "Super Pitch", fHslider3, 0.0f, 0.0f, 12.0f, 0.01f) \
		p(HORIZONTALSLIDER, Window, "Window", fHslider1, 1e+03f, 5e+01f, 1.2e+06f, 1.0f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
