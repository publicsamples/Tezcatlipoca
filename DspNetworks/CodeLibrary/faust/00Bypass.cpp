/* ------------------------------------------------------------
name: "00Bypass"
Code generated with Faust 2.59.6 (https://faust.grame.fr)
Compilation options: -lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
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


class mydsp : public dsp {
	
 private:
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fHslider0;
	float fConst3;
	float fRec23[2];
	float fRec22[2];
	float fRec21[2];
	FAUSTFLOAT fButton0;
	float fVec0[2];
	FAUSTFLOAT fHslider1;
	int iRec24[2];
	float fRec25[2];
	float fRec26[2];
	FAUSTFLOAT fHslider2;
	float fRec28[2];
	int IOTA0;
	float fRec27[4096];
	float fConst4;
	float fConst5;
	FAUSTFLOAT fHslider3;
	float fRec29[2];
	float fVec1[2];
	float fVec2[4096];
	float fConst6;
	float fRec19[2];
	float fRec14[4096];
	float fRec10[2];
	float fRec6[2];
	float fRec2[4096];
	float fRec0[2];
	float fRec52[2];
	float fRec51[2];
	FAUSTFLOAT fButton1;
	float fVec3[2];
	int iRec53[2];
	float fRec54[2];
	float fRec55[2];
	float fRec56[4096];
	float fVec4[2];
	float fVec5[4096];
	float fRec49[2];
	float fRec44[4096];
	float fRec40[2];
	float fRec36[2];
	float fRec32[4096];
	float fRec30[2];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("aanl.lib/name", "Faust Antialiased Nonlinearities");
		m->declare("aanl.lib/version", "0.3");
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "0.10");
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/version", "0.4");
		m->declare("delays.lib/fdelay4:author", "Julius O. Smith III");
		m->declare("delays.lib/fdelayltv:author", "Julius O. Smith III");
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "0.1");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "0.1");
		m->declare("envelopes.lib/author", "GRAME");
		m->declare("envelopes.lib/copyright", "GRAME");
		m->declare("envelopes.lib/license", "LGPL with exception");
		m->declare("envelopes.lib/name", "Faust Envelope Library");
		m->declare("envelopes.lib/version", "0.2");
		m->declare("fds.lib/author", "Riccardo Russo");
		m->declare("fds.lib/name", "Faust Finite Difference Schemes Library");
		m->declare("fds.lib/version", "0.0");
		m->declare("filename", "00Bypass.dsp");
		m->declare("filters.lib/dcblocker:author", "Julius O. Smith III");
		m->declare("filters.lib/dcblocker:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/dcblocker:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/pole:author", "Julius O. Smith III");
		m->declare("filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/pole:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "0.3");
		m->declare("filters.lib/zero:author", "Julius O. Smith III");
		m->declare("filters.lib/zero:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/zero:license", "MIT-style STK-4.3 license");
		m->declare("hoa.lib/author", "Pierre Guillot");
		m->declare("hoa.lib/copyright", "2012-2013 Guillot, Paris, Colafrancesco, CICM labex art H2H, U. Paris 8, 2019 Wargreen, 2022 Bonardi, Goutmann");
		m->declare("hoa.lib/name", "High Order Ambisonics library");
		m->declare("hoa.lib/version", "0.4");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "0.3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.6");
		m->declare("mi.lib/author", "Romain Michon");
		m->declare("mi.lib/copyright", "2018-2020 GRAME / GIPSA-Lab");
		m->declare("mi.lib/name", "Faust mass-interaction physical modelling library");
		m->declare("mi.lib/version", "0.0");
		m->declare("misceffects.lib/name", "Misc Effects Library");
		m->declare("misceffects.lib/version", "2.1");
		m->declare("name", "00Bypass");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "0.4");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/version", "0.4");
		m->declare("phaflangers.lib/name", "Faust Phaser and Flanger Library");
		m->declare("phaflangers.lib/version", "0.1");
		m->declare("physmodels.lib/name", "Faust Physical Models Library");
		m->declare("physmodels.lib/version", "0.1");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("quantizers.lib/name", "Faust Frequency Quantization Library");
		m->declare("quantizers.lib/version", "0.1");
		m->declare("reducemaps.lib/author", "Yann Orlarey (orlarey at grame.fr)");
		m->declare("reducemaps.lib/copyright", "Grame");
		m->declare("reducemaps.lib/license", "LGPL with exception");
		m->declare("reducemaps.lib/name", "Reduce Library");
		m->declare("reducemaps.lib/version", "0.1");
		m->declare("reverbs.lib/name", "Faust Reverb Library");
		m->declare("reverbs.lib/version", "0.2");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "0.2");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.3");
		m->declare("soundfiles.lib/name", "Faust Soundfile Library");
		m->declare("soundfiles.lib/version", "0.7");
		m->declare("spats.lib/name", "Faust Spatialization Library");
		m->declare("spats.lib/version", "0.1");
		m->declare("synths.lib/name", "Faust Synthesizer Library");
		m->declare("synths.lib/version", "0.1");
		m->declare("vaeffects.lib/name", "Faust Virtual Analog Filter Effect Library");
		m->declare("vaeffects.lib/version", "0.2");
		m->declare("wdmodels.lib/name", "Faust Wave Digital Model Library");
		m->declare("wdmodels.lib/version", "0.2.1");
		m->declare("webaudio.lib/author", "GRAME");
		m->declare("webaudio.lib/copyright", "GRAME");
		m->declare("webaudio.lib/license", "LGPL with exception");
		m->declare("webaudio.lib/name", "Faust WebAudio Filters Library");
		m->declare("webaudio.lib/version", "0.1");
	}

	virtual int getNumInputs() {
		return 2;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 2.0f / fConst0;
		fConst2 = 44.1f / fConst0;
		fConst3 = 1.0f - fConst2;
		fConst4 = 0.01764706f * fConst0;
		fConst5 = 0.00022058823f * fConst0;
		fConst6 = 0.00125f * fConst0;
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(2e+03f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.001f);
		fHslider2 = FAUSTFLOAT(0.96f);
		fHslider3 = FAUSTFLOAT(4.0f);
		fButton1 = FAUSTFLOAT(0.0f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec23[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec22[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec21[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			iRec24[l4] = 0;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec25[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec26[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec28[l7] = 0.0f;
		}
		IOTA0 = 0;
		for (int l8 = 0; l8 < 4096; l8 = l8 + 1) {
			fRec27[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec29[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec1[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 4096; l11 = l11 + 1) {
			fVec2[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec19[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 4096; l13 = l13 + 1) {
			fRec14[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec10[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec6[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 4096; l16 = l16 + 1) {
			fRec2[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec0[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec52[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec51[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec3[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			iRec53[l21] = 0;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec54[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec55[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 4096; l24 = l24 + 1) {
			fRec56[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec4[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 4096; l26 = l26 + 1) {
			fVec5[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec49[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 4096; l28 = l28 + 1) {
			fRec44[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec40[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec36[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 4096; l31 = l31 + 1) {
			fRec32[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec30[l32] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("00Bypass");
		ui_interface->declare(&fHslider2, "OWL", "B");
		ui_interface->addHorizontalSlider("gain", &fHslider2, FAUSTFLOAT(0.96f), FAUSTFLOAT(0.5f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider3, "OWL", "A");
		ui_interface->addHorizontalSlider("length", &fHslider3, FAUSTFLOAT(4.0f), FAUSTFLOAT(0.1f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fHslider0, "OWL", "C");
		ui_interface->addHorizontalSlider("lowpass", &fHslider0, FAUSTFLOAT(2e+03f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(1e+04f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fButton0, "OWL", "B1");
		ui_interface->addButton("pluck1", &fButton0);
		ui_interface->declare(&fButton1, "OWL", "B2");
		ui_interface->addButton("pluck2", &fButton1);
		ui_interface->declare(&fHslider1, "OWL", "D");
		ui_interface->addHorizontalSlider("sust", &fHslider1, FAUSTFLOAT(0.001f), FAUSTFLOAT(0.0f), FAUSTFLOAT(0.004f), FAUSTFLOAT(0.0001f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = fConst2 * float(fHslider0);
		float fSlow1 = float(fButton0);
		float fSlow2 = fConst0 * float(fHslider1);
		float fSlow3 = fConst2 * float(fHslider2);
		float fSlow4 = fConst2 * float(fHslider3);
		float fSlow5 = float(fButton1);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec23[0] = fSlow0 + fConst3 * fRec23[1];
			float fTemp0 = 1.0f - fConst1 * fRec23[0];
			fRec22[0] = fConst1 * fRec23[0] * (0.0f - fRec19[1]) + fTemp0 * fRec22[1];
			fRec21[0] = fRec22[0] + 0.995f * fRec21[1] - fRec22[1];
			float fRec18 = fRec21[0];
			fVec0[0] = fSlow1;
			float fTemp1 = fSlow1 - fVec0[1];
			float fTemp2 = std::fabs(fTemp1 * float(fTemp1 > 0.0f));
			int iTemp3 = (fTemp2 >= fRec25[1]) | (float(iRec24[1]) >= fSlow2);
			iRec24[0] = ((iTemp3) ? 0 : iRec24[1] + 1);
			fRec25[0] = ((iTemp3) ? fTemp2 : fRec25[1]);
			float fTemp4 = float(input0[i0]);
			fRec26[0] = fRec0[1];
			fRec28[0] = fSlow3 + fConst3 * fRec28[1];
			fRec27[IOTA0 & 4095] = fRec28[0] * (0.0f - fRec26[1]);
			fRec29[0] = fSlow4 + fConst3 * fRec29[1];
			float fTemp5 = fConst5 * fRec29[0];
			float fTemp6 = fTemp5 + -1.499995f;
			int iTemp7 = int(fTemp6);
			int iTemp8 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp7)))) + 1;
			float fTemp9 = std::floor(fTemp6);
			float fTemp10 = fTemp5 + (-1.0f - fTemp9);
			float fTemp11 = 0.0f - fTemp10;
			float fTemp12 = fTemp5 + (-2.0f - fTemp9);
			float fTemp13 = 0.0f - 0.5f * fTemp12;
			float fTemp14 = fTemp5 + (-3.0f - fTemp9);
			float fTemp15 = 0.0f - 0.33333334f * fTemp14;
			float fTemp16 = fTemp5 + (-4.0f - fTemp9);
			float fTemp17 = 0.0f - 0.25f * fTemp16;
			float fTemp18 = fTemp5 - fTemp9;
			int iTemp19 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp7 + 1)))) + 1;
			float fTemp20 = 0.0f - fTemp12;
			float fTemp21 = 0.0f - 0.5f * fTemp14;
			float fTemp22 = 0.0f - 0.33333334f * fTemp16;
			int iTemp23 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp7 + 2)))) + 1;
			float fTemp24 = 0.0f - fTemp14;
			float fTemp25 = 0.0f - 0.5f * fTemp16;
			float fTemp26 = fTemp10 * fTemp12;
			int iTemp27 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp7 + 3)))) + 1;
			float fTemp28 = 0.0f - fTemp16;
			float fTemp29 = fTemp26 * fTemp14;
			int iTemp30 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp7 + 4)))) + 1;
			fVec1[0] = fRec27[(IOTA0 - iTemp8) & 4095] * fTemp11 * fTemp13 * fTemp15 * fTemp17 + fTemp18 * (fRec27[(IOTA0 - iTemp19) & 4095] * fTemp20 * fTemp21 * fTemp22 + 0.5f * fTemp10 * fRec27[(IOTA0 - iTemp23) & 4095] * fTemp24 * fTemp25 + 0.16666667f * fTemp26 * fRec27[(IOTA0 - iTemp27) & 4095] * fTemp28 + 0.041666668f * fTemp29 * fRec27[(IOTA0 - iTemp30) & 4095]);
			float fTemp31 = fRec25[0] + fTemp4 + fVec1[1];
			fVec2[IOTA0 & 4095] = fTemp31;
			float fTemp32 = fConst6 * fRec29[0];
			float fTemp33 = fTemp32 + -1.499995f;
			int iTemp34 = int(fTemp33);
			int iTemp35 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp34))));
			int iTemp36 = iTemp35 + 2;
			float fTemp37 = std::floor(fTemp33);
			float fTemp38 = fTemp32 + (-1.0f - fTemp37);
			float fTemp39 = 0.0f - fTemp38;
			float fTemp40 = fTemp32 + (-2.0f - fTemp37);
			float fTemp41 = 0.0f - 0.5f * fTemp40;
			float fTemp42 = fTemp32 + (-3.0f - fTemp37);
			float fTemp43 = 0.0f - 0.33333334f * fTemp42;
			float fTemp44 = fTemp32 + (-4.0f - fTemp37);
			float fTemp45 = 0.0f - 0.25f * fTemp44;
			float fTemp46 = fTemp32 - fTemp37;
			int iTemp47 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp34 + 1))));
			int iTemp48 = iTemp47 + 2;
			float fTemp49 = 0.0f - fTemp40;
			float fTemp50 = 0.0f - 0.5f * fTemp42;
			float fTemp51 = 0.0f - 0.33333334f * fTemp44;
			int iTemp52 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp34 + 2))));
			int iTemp53 = iTemp52 + 2;
			float fTemp54 = 0.0f - fTemp42;
			float fTemp55 = 0.0f - 0.5f * fTemp44;
			float fTemp56 = fTemp38 * fTemp40;
			int iTemp57 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp34 + 3))));
			int iTemp58 = iTemp57 + 2;
			float fTemp59 = 0.0f - fTemp44;
			float fTemp60 = fTemp56 * fTemp42;
			int iTemp61 = int(std::min<float>(fConst4, float(std::max<int>(0, iTemp34 + 4))));
			int iTemp62 = iTemp61 + 2;
			fRec19[0] = fVec2[(IOTA0 - iTemp36) & 4095] * fTemp39 * fTemp41 * fTemp43 * fTemp45 + fTemp46 * (fVec2[(IOTA0 - iTemp48) & 4095] * fTemp49 * fTemp50 * fTemp51 + 0.5f * fTemp38 * fVec2[(IOTA0 - iTemp53) & 4095] * fTemp54 * fTemp55 + 0.16666667f * fTemp56 * fVec2[(IOTA0 - iTemp58) & 4095] * fTemp59 + 0.041666668f * fTemp60 * fVec2[(IOTA0 - iTemp62) & 4095]);
			float fRec20 = fVec2[(IOTA0 - 1) & 4095] + fRec10[1];
			fRec14[IOTA0 & 4095] = fRec18;
			float fTemp63 = fTemp39 * fTemp41 * fTemp43 * fTemp45;
			int iTemp64 = iTemp35 + 1;
			float fTemp65 = fTemp49 * fTemp50 * fTemp51;
			int iTemp66 = iTemp47 + 1;
			float fTemp67 = fTemp38 * fTemp54 * fTemp55;
			int iTemp68 = iTemp52 + 1;
			float fTemp69 = fTemp56 * fTemp59;
			int iTemp70 = iTemp57 + 1;
			int iTemp71 = iTemp61 + 1;
			float fRec15 = fTemp63 * fRec14[(IOTA0 - iTemp64) & 4095] + fTemp46 * (fTemp65 * fRec14[(IOTA0 - iTemp66) & 4095] + 0.5f * fTemp67 * fRec14[(IOTA0 - iTemp68) & 4095] + 0.16666667f * fTemp69 * fRec14[(IOTA0 - iTemp70) & 4095] + 0.041666668f * fTemp60 * fRec14[(IOTA0 - iTemp71) & 4095]);
			float fRec16 = fRec19[0];
			float fRec17 = fRec20;
			fRec10[0] = fRec15;
			float fRec11 = fRec10[1];
			float fRec12 = fRec16;
			float fRec13 = fRec17;
			fRec6[0] = fRec11;
			float fRec7 = fRec25[0] + fTemp4 + fRec6[1];
			float fRec8 = fRec12;
			float fRec9 = fRec13;
			fRec2[IOTA0 & 4095] = fRec7;
			float fTemp72 = fTemp11 * fTemp13 * fTemp15 * fTemp17;
			float fTemp73 = fTemp20 * fTemp21 * fTemp22;
			float fTemp74 = fTemp10 * fTemp24 * fTemp25;
			float fTemp75 = fTemp26 * fTemp28;
			float fRec3 = fTemp72 * fRec2[(IOTA0 - iTemp8) & 4095] + fTemp18 * (fTemp73 * fRec2[(IOTA0 - iTemp19) & 4095] + 0.5f * fTemp74 * fRec2[(IOTA0 - iTemp23) & 4095] + 0.16666667f * fTemp75 * fRec2[(IOTA0 - iTemp27) & 4095] + 0.041666668f * fTemp29 * fRec2[(IOTA0 - iTemp30) & 4095]);
			float fRec4 = fRec8;
			float fRec5 = fRec9;
			fRec0[0] = fRec3;
			float fRec1 = fRec5;
			output0[i0] = FAUSTFLOAT(0.5f * fRec1);
			fRec52[0] = fConst1 * fRec23[0] * (0.0f - fRec49[1]) + fTemp0 * fRec52[1];
			fRec51[0] = fRec52[0] + 0.995f * fRec51[1] - fRec52[1];
			float fRec48 = fRec51[0];
			fVec3[0] = fSlow5;
			float fTemp76 = fSlow5 - fVec3[1];
			float fTemp77 = std::fabs(fTemp76 * float(fTemp76 > 0.0f));
			int iTemp78 = (fTemp77 >= fRec54[1]) | (float(iRec53[1]) >= fSlow2);
			iRec53[0] = ((iTemp78) ? 0 : iRec53[1] + 1);
			fRec54[0] = ((iTemp78) ? fTemp77 : fRec54[1]);
			float fTemp79 = float(input1[i0]);
			fRec55[0] = fRec30[1];
			fRec56[IOTA0 & 4095] = fRec28[0] * (0.0f - fRec55[1]);
			fVec4[0] = fTemp72 * fRec56[(IOTA0 - iTemp8) & 4095] + fTemp18 * (fTemp73 * fRec56[(IOTA0 - iTemp19) & 4095] + 0.5f * fTemp74 * fRec56[(IOTA0 - iTemp23) & 4095] + 0.16666667f * fTemp75 * fRec56[(IOTA0 - iTemp27) & 4095] + 0.041666668f * fTemp29 * fRec56[(IOTA0 - iTemp30) & 4095]);
			float fTemp80 = fRec54[0] + fTemp79 + fVec4[1];
			fVec5[IOTA0 & 4095] = fTemp80;
			fRec49[0] = fTemp63 * fVec5[(IOTA0 - iTemp36) & 4095] + fTemp46 * (fTemp65 * fVec5[(IOTA0 - iTemp48) & 4095] + 0.5f * fTemp67 * fVec5[(IOTA0 - iTemp53) & 4095] + 0.16666667f * fTemp69 * fVec5[(IOTA0 - iTemp58) & 4095] + 0.041666668f * fTemp60 * fVec5[(IOTA0 - iTemp62) & 4095]);
			float fRec50 = fVec5[(IOTA0 - 1) & 4095] + fRec40[1];
			fRec44[IOTA0 & 4095] = fRec48;
			float fRec45 = fTemp63 * fRec44[(IOTA0 - iTemp64) & 4095] + fTemp46 * (fTemp65 * fRec44[(IOTA0 - iTemp66) & 4095] + 0.5f * fTemp67 * fRec44[(IOTA0 - iTemp68) & 4095] + 0.16666667f * fTemp69 * fRec44[(IOTA0 - iTemp70) & 4095] + 0.041666668f * fTemp60 * fRec44[(IOTA0 - iTemp71) & 4095]);
			float fRec46 = fRec49[0];
			float fRec47 = fRec50;
			fRec40[0] = fRec45;
			float fRec41 = fRec40[1];
			float fRec42 = fRec46;
			float fRec43 = fRec47;
			fRec36[0] = fRec41;
			float fRec37 = fRec54[0] + fTemp79 + fRec36[1];
			float fRec38 = fRec42;
			float fRec39 = fRec43;
			fRec32[IOTA0 & 4095] = fRec37;
			float fRec33 = fTemp72 * fRec32[(IOTA0 - iTemp8) & 4095] + fTemp18 * (fTemp73 * fRec32[(IOTA0 - iTemp19) & 4095] + 0.5f * fTemp74 * fRec32[(IOTA0 - iTemp23) & 4095] + 0.16666667f * fTemp75 * fRec32[(IOTA0 - iTemp27) & 4095] + 0.041666668f * fTemp29 * fRec32[(IOTA0 - iTemp30) & 4095]);
			float fRec34 = fRec38;
			float fRec35 = fRec39;
			fRec30[0] = fRec33;
			float fRec31 = fRec35;
			output1[i0] = FAUSTFLOAT(0.5f * fRec31);
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fRec21[1] = fRec21[0];
			fVec0[1] = fVec0[0];
			iRec24[1] = iRec24[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec28[1] = fRec28[0];
			IOTA0 = IOTA0 + 1;
			fRec29[1] = fRec29[0];
			fVec1[1] = fVec1[0];
			fRec19[1] = fRec19[0];
			fRec10[1] = fRec10[0];
			fRec6[1] = fRec6[0];
			fRec0[1] = fRec0[0];
			fRec52[1] = fRec52[0];
			fRec51[1] = fRec51[0];
			fVec3[1] = fVec3[0];
			iRec53[1] = iRec53[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fVec4[1] = fVec4[0];
			fRec49[1] = fRec49[0];
			fRec40[1] = fRec40[0];
			fRec36[1] = fRec36[0];
			fRec30[1] = fRec30[0];
		}
	}

};

#endif
