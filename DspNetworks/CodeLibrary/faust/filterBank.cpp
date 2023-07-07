/* ------------------------------------------------------------
name: "filterBank"
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

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fCheckbox0;
	int fSampleRate;
	float fConst3;
	float fConst5;
	float fConst6;
	float fConst9;
	float fConst11;
	float fConst12;
	float fConst14;
	float fConst15;
	float fConst18;
	float fConst19;
	float fConst21;
	float fConst22;
	float fConst25;
	float fConst26;
	float fConst28;
	float fConst29;
	float fConst32;
	float fConst33;
	float fConst35;
	float fConst36;
	float fConst38;
	float fConst39;
	float fConst40;
	float fConst42;
	float fConst43;
	float fVec0[2];
	float fRec20[2];
	float fConst44;
	float fConst46;
	float fConst47;
	float fRec19[3];
	float fConst48;
	float fRec18[3];
	float fVec1[2];
	float fRec17[2];
	float fConst49;
	float fConst51;
	float fConst52;
	float fRec16[3];
	float fConst53;
	float fRec15[3];
	float fVec2[2];
	float fRec14[2];
	float fConst54;
	float fConst56;
	float fConst57;
	float fRec13[3];
	float fConst58;
	float fRec12[3];
	float fVec3[2];
	float fRec11[2];
	float fConst59;
	float fConst61;
	float fConst62;
	float fRec10[3];
	float fConst63;
	float fRec9[3];
	float fVec4[2];
	float fRec8[2];
	float fConst64;
	float fConst66;
	float fConst67;
	float fRec7[3];
	float fConst68;
	float fRec6[3];
	float fVec5[2];
	float fConst69;
	float fConst70;
	float fConst71;
	float fRec5[2];
	float fConst72;
	float fConst73;
	float fRec4[3];
	float fConst74;
	float fConst75;
	float fRec3[3];
	float fConst78;
	float fConst79;
	float fConst81;
	float fConst82;
	float fRec2[3];
	float fConst85;
	float fConst86;
	float fConst88;
	float fConst89;
	float fRec1[3];
	float fConst92;
	float fConst93;
	float fConst95;
	float fConst96;
	float fRec0[3];
	float fConst97;
	FAUSTFLOAT fVslider0;
	float fConst98;
	float fRec21[2];
	float fConst99;
	float fConst100;
	float fConst101;
	float fConst103;
	float fConst104;
	float fConst106;
	float fConst107;
	float fConst108;
	float fRec31[2];
	float fRec30[3];
	float fRec29[3];
	float fVec6[2];
	float fRec28[2];
	float fConst109;
	float fRec27[3];
	float fConst110;
	float fRec26[3];
	float fVec7[2];
	float fConst111;
	float fConst112;
	float fConst113;
	float fRec25[2];
	float fConst114;
	float fRec24[3];
	float fConst115;
	float fConst116;
	float fRec23[3];
	float fRec22[3];
	FAUSTFLOAT fVslider1;
	float fRec32[2];
	float fConst117;
	float fConst118;
	float fConst119;
	float fConst120;
	float fRec37[2];
	float fRec36[3];
	float fRec35[3];
	float fRec34[3];
	float fRec33[3];
	FAUSTFLOAT fVslider2;
	float fRec38[2];
	float fConst121;
	float fConst122;
	float fConst123;
	float fRec47[2];
	float fRec46[3];
	float fConst124;
	float fRec45[3];
	float fRec44[3];
	float fRec43[3];
	float fRec42[3];
	float fConst125;
	float fConst126;
	float fRec41[3];
	float fConst127;
	float fConst128;
	float fRec40[3];
	float fConst129;
	float fConst130;
	float fRec39[3];
	FAUSTFLOAT fVslider3;
	float fRec48[2];
	float fConst131;
	float fConst132;
	float fConst133;
	float fRec55[2];
	float fRec54[3];
	float fConst134;
	float fRec53[3];
	float fRec52[3];
	float fRec51[3];
	float fRec50[3];
	float fRec49[3];
	FAUSTFLOAT fVslider4;
	float fRec56[2];
	float fConst135;
	float fConst136;
	float fConst137;
	float fRec64[2];
	float fRec63[3];
	float fConst138;
	float fRec62[3];
	float fRec61[3];
	float fRec60[3];
	float fRec59[3];
	float fRec58[3];
	float fRec57[3];
	FAUSTFLOAT fVslider5;
	float fRec65[2];
	float fConst139;
	float fRec76[2];
	float fRec75[3];
	float fConst140;
	float fRec74[3];
	float fRec73[3];
	float fRec72[3];
	float fRec71[3];
	float fRec70[3];
	float fRec69[3];
	float fRec68[3];
	float fConst141;
	float fConst142;
	float fRec67[3];
	float fConst143;
	float fConst144;
	float fRec66[3];
	FAUSTFLOAT fVslider6;
	float fRec77[2];
	float fConst145;
	float fConst146;
	float fConst147;
	float fRec87[2];
	float fRec86[3];
	float fConst148;
	float fRec85[3];
	float fRec84[3];
	float fRec83[3];
	float fRec82[3];
	float fRec81[3];
	float fRec80[3];
	float fRec79[3];
	float fRec78[3];
	FAUSTFLOAT fVslider7;
	float fRec88[2];
	float fConst149;
	float fConst150;
	float fConst151;
	float fConst153;
	float fConst154;
	float fRec94[2];
	float fRec93[3];
	float fRec92[3];
	float fVec8[2];
	float fConst155;
	float fConst156;
	float fConst157;
	float fRec91[2];
	float fConst158;
	float fRec90[3];
	float fConst159;
	float fRec89[3];
	FAUSTFLOAT fVslider8;
	float fRec95[2];
	float fConst160;
	float fRec98[2];
	float fRec97[3];
	float fRec96[3];
	FAUSTFLOAT fVslider9;
	float fRec99[2];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "0.10");
		m->declare("compile_options", "-lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0");
		m->declare("demos.lib/mth_octave_filterbank_demo:author", "Julius O. Smith III");
		m->declare("demos.lib/mth_octave_filterbank_demo:licence", "MIT");
		m->declare("demos.lib/name", "Faust Demos Library");
		m->declare("demos.lib/version", "0.1");
		m->declare("description", "Graphic Equalizer consisting of a filter-bank driving a bank of faders");
		m->declare("filename", "filterBank.dsp");
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass_plus_lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpass_plus_lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/mth_octave_filterbank5:author", "Julius O. Smith III");
		m->declare("filters.lib/mth_octave_filterbank5:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/mth_octave_filterbank5:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/mth_octave_filterbank:author", "Julius O. Smith III");
		m->declare("filters.lib/mth_octave_filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/mth_octave_filterbank:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/mth_octave_filterbank_default:author", "Julius O. Smith III");
		m->declare("filters.lib/mth_octave_filterbank_default:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/mth_octave_filterbank_default:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "0.3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.6");
		m->declare("name", "filterBank");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "0.3");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/version", "0.3");
	}

	virtual int getNumInputs() {
		return 1;
	}
	virtual int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		float fConst1 = std::tan(981.7477f / fConst0);
		float fConst2 = 1.0f / fConst1;
		fConst3 = 1.0f / ((fConst2 + 0.618034f) / fConst1 + 1.0f);
		float fConst4 = mydsp_faustpower2_f(fConst1);
		fConst5 = 1.0f / fConst4;
		fConst6 = 1.0f / ((fConst2 + 1.618034f) / fConst1 + 1.0f);
		float fConst7 = std::tan(1963.4954f / fConst0);
		float fConst8 = 1.0f / fConst7;
		fConst9 = 1.0f / ((fConst8 + 0.618034f) / fConst7 + 1.0f);
		float fConst10 = fConst2 + 1.0f;
		fConst11 = 1.0f / (fConst1 * fConst10);
		fConst12 = 1.0f / ((fConst8 + 1.618034f) / fConst7 + 1.0f);
		float fConst13 = fConst8 + 1.0f;
		fConst14 = 1.0f / fConst13;
		fConst15 = 1.0f - fConst8;
		float fConst16 = std::tan(3926.9907f / fConst0);
		float fConst17 = 1.0f / fConst16;
		fConst18 = 1.0f / ((fConst17 + 0.618034f) / fConst16 + 1.0f);
		fConst19 = 1.0f / ((fConst17 + 1.618034f) / fConst16 + 1.0f);
		float fConst20 = fConst17 + 1.0f;
		fConst21 = 1.0f / fConst20;
		fConst22 = 1.0f - fConst17;
		float fConst23 = std::tan(7853.9814f / fConst0);
		float fConst24 = 1.0f / fConst23;
		fConst25 = 1.0f / ((fConst24 + 0.618034f) / fConst23 + 1.0f);
		fConst26 = 1.0f / ((fConst24 + 1.618034f) / fConst23 + 1.0f);
		float fConst27 = fConst24 + 1.0f;
		fConst28 = 1.0f / fConst27;
		fConst29 = 1.0f - fConst24;
		float fConst30 = std::tan(15707.963f / fConst0);
		float fConst31 = 1.0f / fConst30;
		fConst32 = 1.0f / ((fConst31 + 0.618034f) / fConst30 + 1.0f);
		fConst33 = 1.0f / ((fConst31 + 1.618034f) / fConst30 + 1.0f);
		float fConst34 = fConst31 + 1.0f;
		fConst35 = 1.0f / fConst34;
		fConst36 = 1.0f - fConst31;
		float fConst37 = std::tan(31415.926f / fConst0);
		fConst38 = 1.0f / fConst37;
		fConst39 = 1.0f / ((fConst38 + 0.618034f) / fConst37 + 1.0f);
		fConst40 = 1.0f / ((fConst38 + 1.618034f) / fConst37 + 1.0f);
		float fConst41 = fConst38 + 1.0f;
		fConst42 = 1.0f / fConst41;
		fConst43 = 1.0f - fConst38;
		fConst44 = (fConst38 + -1.618034f) / fConst37 + 1.0f;
		float fConst45 = mydsp_faustpower2_f(fConst37);
		fConst46 = 1.0f / fConst45;
		fConst47 = 2.0f * (1.0f - fConst46);
		fConst48 = (fConst38 + -0.618034f) / fConst37 + 1.0f;
		fConst49 = (fConst31 + -1.618034f) / fConst30 + 1.0f;
		float fConst50 = mydsp_faustpower2_f(fConst30);
		fConst51 = 1.0f / fConst50;
		fConst52 = 2.0f * (1.0f - fConst51);
		fConst53 = (fConst31 + -0.618034f) / fConst30 + 1.0f;
		fConst54 = (fConst24 + -1.618034f) / fConst23 + 1.0f;
		float fConst55 = mydsp_faustpower2_f(fConst23);
		fConst56 = 1.0f / fConst55;
		fConst57 = 2.0f * (1.0f - fConst56);
		fConst58 = (fConst24 + -0.618034f) / fConst23 + 1.0f;
		fConst59 = (fConst17 + -1.618034f) / fConst16 + 1.0f;
		float fConst60 = mydsp_faustpower2_f(fConst16);
		fConst61 = 1.0f / fConst60;
		fConst62 = 2.0f * (1.0f - fConst61);
		fConst63 = (fConst17 + -0.618034f) / fConst16 + 1.0f;
		fConst64 = (fConst8 + -1.618034f) / fConst7 + 1.0f;
		float fConst65 = mydsp_faustpower2_f(fConst7);
		fConst66 = 1.0f / fConst65;
		fConst67 = 2.0f * (1.0f - fConst66);
		fConst68 = (fConst8 + -0.618034f) / fConst7 + 1.0f;
		fConst69 = 0.0f - fConst11;
		fConst70 = 1.0f - fConst2;
		fConst71 = fConst70 / fConst10;
		fConst72 = (fConst2 + -1.618034f) / fConst1 + 1.0f;
		fConst73 = 2.0f * (1.0f - fConst5);
		fConst74 = 0.0f - 2.0f / fConst4;
		fConst75 = (fConst2 + -0.618034f) / fConst1 + 1.0f;
		float fConst76 = std::tan(122.71846f / fConst0);
		float fConst77 = 1.0f / fConst76;
		fConst78 = 1.0f / ((fConst77 + 1.618034f) / fConst76 + 1.0f);
		fConst79 = (fConst77 + -1.618034f) / fConst76 + 1.0f;
		float fConst80 = mydsp_faustpower2_f(fConst76);
		fConst81 = 1.0f / fConst80;
		fConst82 = 2.0f * (1.0f - fConst81);
		float fConst83 = std::tan(245.43692f / fConst0);
		float fConst84 = 1.0f / fConst83;
		fConst85 = 1.0f / ((fConst84 + 1.618034f) / fConst83 + 1.0f);
		fConst86 = (fConst84 + -1.618034f) / fConst83 + 1.0f;
		float fConst87 = mydsp_faustpower2_f(fConst83);
		fConst88 = 1.0f / fConst87;
		fConst89 = 2.0f * (1.0f - fConst88);
		float fConst90 = std::tan(490.87384f / fConst0);
		float fConst91 = 1.0f / fConst90;
		fConst92 = 1.0f / ((fConst91 + 1.618034f) / fConst90 + 1.0f);
		fConst93 = (fConst91 + -1.618034f) / fConst90 + 1.0f;
		float fConst94 = mydsp_faustpower2_f(fConst90);
		fConst95 = 1.0f / fConst94;
		fConst96 = 2.0f * (1.0f - fConst95);
		fConst97 = 44.1f / fConst0;
		fConst98 = 1.0f - fConst97;
		fConst99 = 1.0f / ((fConst84 + 0.618034f) / fConst83 + 1.0f);
		fConst100 = 1.0f / ((fConst84 + 1.618034f) / fConst83 + 1.0f);
		fConst101 = 1.0f / ((fConst91 + 0.618034f) / fConst90 + 1.0f);
		float fConst102 = fConst84 + 1.0f;
		fConst103 = 1.0f / (fConst83 * fConst102);
		fConst104 = 1.0f / ((fConst91 + 1.618034f) / fConst90 + 1.0f);
		float fConst105 = fConst91 + 1.0f;
		fConst106 = 1.0f / fConst105;
		fConst107 = 1.0f - fConst91;
		fConst108 = 1.0f / fConst10;
		fConst109 = (fConst91 + -1.618034f) / fConst90 + 1.0f;
		fConst110 = (fConst91 + -0.618034f) / fConst90 + 1.0f;
		fConst111 = 0.0f - fConst103;
		fConst112 = 1.0f - fConst84;
		fConst113 = fConst112 / fConst102;
		fConst114 = (fConst84 + -1.618034f) / fConst83 + 1.0f;
		fConst115 = 0.0f - 2.0f / fConst87;
		fConst116 = (fConst84 + -0.618034f) / fConst83 + 1.0f;
		fConst117 = 0.0f - 2.0f / fConst94;
		fConst118 = 1.0f / (fConst90 * fConst105);
		fConst119 = 0.0f - fConst118;
		fConst120 = fConst107 / fConst105;
		fConst121 = 1.0f / (fConst23 * fConst27);
		fConst122 = 0.0f - fConst121;
		fConst123 = fConst29 / fConst27;
		fConst124 = 0.0f - 2.0f / fConst55;
		fConst125 = 1.0f / ((fConst2 + 1.618034f) / fConst1 + 1.0f);
		fConst126 = (fConst2 + -1.618034f) / fConst1 + 1.0f;
		fConst127 = 1.0f / ((fConst8 + 1.618034f) / fConst7 + 1.0f);
		fConst128 = (fConst8 + -1.618034f) / fConst7 + 1.0f;
		fConst129 = 1.0f / ((fConst17 + 1.618034f) / fConst16 + 1.0f);
		fConst130 = (fConst17 + -1.618034f) / fConst16 + 1.0f;
		fConst131 = 1.0f / (fConst7 * fConst13);
		fConst132 = 0.0f - fConst131;
		fConst133 = fConst15 / fConst13;
		fConst134 = 0.0f - 2.0f / fConst65;
		fConst135 = 1.0f / (fConst16 * fConst20);
		fConst136 = 0.0f - fConst135;
		fConst137 = fConst22 / fConst20;
		fConst138 = 0.0f - 2.0f / fConst60;
		fConst139 = 0.0f - 1.0f / (fConst37 * fConst41);
		fConst140 = 0.0f - 2.0f / fConst45;
		fConst141 = 1.0f / ((fConst24 + 1.618034f) / fConst23 + 1.0f);
		fConst142 = (fConst24 + -1.618034f) / fConst23 + 1.0f;
		fConst143 = 1.0f / ((fConst31 + 1.618034f) / fConst30 + 1.0f);
		fConst144 = (fConst31 + -1.618034f) / fConst30 + 1.0f;
		fConst145 = 1.0f / (fConst30 * fConst34);
		fConst146 = 0.0f - fConst145;
		fConst147 = fConst36 / fConst34;
		fConst148 = 0.0f - 2.0f / fConst50;
		fConst149 = 1.0f / ((fConst77 + 0.618034f) / fConst76 + 1.0f);
		fConst150 = 1.0f / ((fConst77 + 1.618034f) / fConst76 + 1.0f);
		fConst151 = 0.0f - 2.0f / fConst80;
		float fConst152 = fConst77 + 1.0f;
		fConst153 = 1.0f / (fConst76 * fConst152);
		fConst154 = 1.0f / fConst102;
		fConst155 = 0.0f - fConst153;
		fConst156 = 1.0f - fConst77;
		fConst157 = fConst156 / fConst152;
		fConst158 = (fConst77 + -1.618034f) / fConst76 + 1.0f;
		fConst159 = (fConst77 + -0.618034f) / fConst76 + 1.0f;
		fConst160 = 1.0f / fConst152;
	}
	
	virtual void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(-1e+01f);
		fVslider1 = FAUSTFLOAT(-1e+01f);
		fVslider2 = FAUSTFLOAT(-1e+01f);
		fVslider3 = FAUSTFLOAT(-1e+01f);
		fVslider4 = FAUSTFLOAT(-1e+01f);
		fVslider5 = FAUSTFLOAT(-1e+01f);
		fVslider6 = FAUSTFLOAT(-1e+01f);
		fVslider7 = FAUSTFLOAT(-1e+01f);
		fVslider8 = FAUSTFLOAT(-1e+01f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec20[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec19[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec18[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec17[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 3; l6 = l6 + 1) {
			fRec16[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fRec15[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec14[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 3; l10 = l10 + 1) {
			fRec13[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fRec12[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec11[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 3; l14 = l14 + 1) {
			fRec10[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
			fRec9[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec4[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec8[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
			fRec7[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
			fRec6[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec5[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec5[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 3; l22 = l22 + 1) {
			fRec4[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 3; l23 = l23 + 1) {
			fRec3[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fRec2[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
			fRec1[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 3; l26 = l26 + 1) {
			fRec0[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec21[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec31[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 3; l29 = l29 + 1) {
			fRec30[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 3; l30 = l30 + 1) {
			fRec29[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec6[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec28[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fRec27[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 3; l34 = l34 + 1) {
			fRec26[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fVec7[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec25[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 3; l37 = l37 + 1) {
			fRec24[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 3; l38 = l38 + 1) {
			fRec23[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 3; l39 = l39 + 1) {
			fRec22[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec32[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec37[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 3; l42 = l42 + 1) {
			fRec36[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 3; l43 = l43 + 1) {
			fRec35[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 3; l44 = l44 + 1) {
			fRec34[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 3; l45 = l45 + 1) {
			fRec33[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec38[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec47[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec46[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec45[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec44[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec43[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 3; l52 = l52 + 1) {
			fRec42[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 3; l53 = l53 + 1) {
			fRec41[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 3; l54 = l54 + 1) {
			fRec40[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 3; l55 = l55 + 1) {
			fRec39[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec48[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec55[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 3; l58 = l58 + 1) {
			fRec54[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 3; l59 = l59 + 1) {
			fRec53[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 3; l60 = l60 + 1) {
			fRec52[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fRec51[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec50[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec49[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec56[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec64[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 3; l66 = l66 + 1) {
			fRec63[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 3; l67 = l67 + 1) {
			fRec62[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec61[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 3; l69 = l69 + 1) {
			fRec60[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 3; l70 = l70 + 1) {
			fRec59[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 3; l71 = l71 + 1) {
			fRec58[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 3; l72 = l72 + 1) {
			fRec57[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec65[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec76[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 3; l75 = l75 + 1) {
			fRec75[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 3; l76 = l76 + 1) {
			fRec74[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 3; l77 = l77 + 1) {
			fRec73[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 3; l78 = l78 + 1) {
			fRec72[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 3; l79 = l79 + 1) {
			fRec71[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 3; l80 = l80 + 1) {
			fRec70[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 3; l81 = l81 + 1) {
			fRec69[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 3; l82 = l82 + 1) {
			fRec68[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 3; l83 = l83 + 1) {
			fRec67[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 3; l84 = l84 + 1) {
			fRec66[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec77[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec87[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 3; l87 = l87 + 1) {
			fRec86[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 3; l88 = l88 + 1) {
			fRec85[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 3; l89 = l89 + 1) {
			fRec84[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 3; l90 = l90 + 1) {
			fRec83[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 3; l91 = l91 + 1) {
			fRec82[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 3; l92 = l92 + 1) {
			fRec81[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 3; l93 = l93 + 1) {
			fRec80[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 3; l94 = l94 + 1) {
			fRec79[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 3; l95 = l95 + 1) {
			fRec78[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec88[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec94[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 3; l98 = l98 + 1) {
			fRec93[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 3; l99 = l99 + 1) {
			fRec92[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec8[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec91[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 3; l102 = l102 + 1) {
			fRec90[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 3; l103 = l103 + 1) {
			fRec89[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec95[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec98[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 3; l106 = l106 + 1) {
			fRec97[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 3; l107 = l107 + 1) {
			fRec96[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec99[l108] = 0.0f;
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
		ui_interface->declare(0, "tooltip", "See Faust's filters.lib for documentation and references");
		ui_interface->openVerticalBox("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)");
		ui_interface->declare(0, "0", "");
		ui_interface->openHorizontalBox("0x00");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "tooltip", "When this is checked, the filter-bank has no effect");
		ui_interface->addCheckButton("Bypass", &fCheckbox0);
		ui_interface->closeBox();
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("0x00");
		ui_interface->declare(&fVslider9, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider9, "unit", "dB");
		ui_interface->addVerticalSlider("Band 1", &fVslider9, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider8, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider8, "unit", "dB");
		ui_interface->addVerticalSlider("Band 2", &fVslider8, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider1, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("Band 3", &fVslider1, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider2, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider2, "unit", "dB");
		ui_interface->addVerticalSlider("Band 4", &fVslider2, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider0, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("Band 5", &fVslider0, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider4, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider4, "unit", "dB");
		ui_interface->addVerticalSlider("Band 6", &fVslider4, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider5, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("Band 7", &fVslider5, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider3, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider3, "unit", "dB");
		ui_interface->addVerticalSlider("Band 8", &fVslider3, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider7, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("Band 9", &fVslider7, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider6, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("Band10", &fVslider6, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		int iSlow0 = int(float(fCheckbox0));
		float fSlow1 = fConst97 * float(fVslider0);
		float fSlow2 = fConst97 * float(fVslider1);
		float fSlow3 = fConst97 * float(fVslider2);
		float fSlow4 = fConst97 * float(fVslider3);
		float fSlow5 = fConst97 * float(fVslider4);
		float fSlow6 = fConst97 * float(fVslider5);
		float fSlow7 = fConst97 * float(fVslider6);
		float fSlow8 = fConst97 * float(fVslider7);
		float fSlow9 = fConst97 * float(fVslider8);
		float fSlow10 = fConst97 * float(fVslider9);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			float fTemp1 = ((iSlow0) ? 0.0f : fTemp0);
			fVec0[0] = fTemp1;
			fRec20[0] = 0.0f - fConst42 * (fConst43 * fRec20[1] - (fTemp1 + fVec0[1]));
			fRec19[0] = fRec20[0] - fConst40 * (fConst44 * fRec19[2] + fConst47 * fRec19[1]);
			fRec18[0] = fConst40 * (fRec19[2] + fRec19[0] + 2.0f * fRec19[1]) - fConst39 * (fConst48 * fRec18[2] + fConst47 * fRec18[1]);
			float fTemp2 = fRec18[2] + fRec18[0] + 2.0f * fRec18[1];
			fVec1[0] = fTemp2;
			fRec17[0] = 0.0f - fConst35 * (fConst36 * fRec17[1] - fConst39 * (fTemp2 + fVec1[1]));
			fRec16[0] = fRec17[0] - fConst33 * (fConst49 * fRec16[2] + fConst52 * fRec16[1]);
			fRec15[0] = fConst33 * (fRec16[2] + fRec16[0] + 2.0f * fRec16[1]) - fConst32 * (fConst53 * fRec15[2] + fConst52 * fRec15[1]);
			float fTemp3 = fRec15[2] + fRec15[0] + 2.0f * fRec15[1];
			fVec2[0] = fTemp3;
			fRec14[0] = 0.0f - fConst28 * (fConst29 * fRec14[1] - fConst32 * (fTemp3 + fVec2[1]));
			fRec13[0] = fRec14[0] - fConst26 * (fConst54 * fRec13[2] + fConst57 * fRec13[1]);
			fRec12[0] = fConst26 * (fRec13[2] + fRec13[0] + 2.0f * fRec13[1]) - fConst25 * (fConst58 * fRec12[2] + fConst57 * fRec12[1]);
			float fTemp4 = fRec12[2] + fRec12[0] + 2.0f * fRec12[1];
			fVec3[0] = fTemp4;
			fRec11[0] = 0.0f - fConst21 * (fConst22 * fRec11[1] - fConst25 * (fTemp4 + fVec3[1]));
			fRec10[0] = fRec11[0] - fConst19 * (fConst59 * fRec10[2] + fConst62 * fRec10[1]);
			fRec9[0] = fConst19 * (fRec10[2] + fRec10[0] + 2.0f * fRec10[1]) - fConst18 * (fConst63 * fRec9[2] + fConst62 * fRec9[1]);
			float fTemp5 = fRec9[2] + fRec9[0] + 2.0f * fRec9[1];
			fVec4[0] = fTemp5;
			fRec8[0] = 0.0f - fConst14 * (fConst15 * fRec8[1] - fConst18 * (fTemp5 + fVec4[1]));
			fRec7[0] = fRec8[0] - fConst12 * (fConst64 * fRec7[2] + fConst67 * fRec7[1]);
			fRec6[0] = fConst12 * (fRec7[2] + fRec7[0] + 2.0f * fRec7[1]) - fConst9 * (fConst68 * fRec6[2] + fConst67 * fRec6[1]);
			float fTemp6 = fRec6[2] + fRec6[0] + 2.0f * fRec6[1];
			fVec5[0] = fTemp6;
			fRec5[0] = fConst9 * (fConst11 * fTemp6 + fConst69 * fVec5[1]) - fConst71 * fRec5[1];
			fRec4[0] = fRec5[0] - fConst6 * (fConst72 * fRec4[2] + fConst73 * fRec4[1]);
			fRec3[0] = fConst6 * (fConst5 * fRec4[0] + fConst74 * fRec4[1] + fConst5 * fRec4[2]) - fConst3 * (fConst75 * fRec3[2] + fConst73 * fRec3[1]);
			float fTemp7 = fConst82 * fRec2[1];
			fRec2[0] = fConst3 * (fConst5 * fRec3[0] + fConst74 * fRec3[1] + fConst5 * fRec3[2]) - fConst78 * (fConst79 * fRec2[2] + fTemp7);
			float fTemp8 = fConst89 * fRec1[1];
			fRec1[0] = fRec2[2] + fConst78 * (fTemp7 + fConst79 * fRec2[0]) - fConst85 * (fConst86 * fRec1[2] + fTemp8);
			float fTemp9 = fConst96 * fRec0[1];
			fRec0[0] = fRec1[2] + fConst85 * (fTemp8 + fConst86 * fRec1[0]) - fConst92 * (fConst93 * fRec0[2] + fTemp9);
			fRec21[0] = fSlow1 + fConst98 * fRec21[1];
			fRec31[0] = 0.0f - fConst108 * (fConst70 * fRec31[1] - fConst9 * (fTemp6 + fVec5[1]));
			fRec30[0] = fRec31[0] - fConst6 * (fConst72 * fRec30[2] + fConst73 * fRec30[1]);
			fRec29[0] = fConst6 * (fRec30[2] + fRec30[0] + 2.0f * fRec30[1]) - fConst3 * (fConst75 * fRec29[2] + fConst73 * fRec29[1]);
			float fTemp10 = fRec29[2] + fRec29[0] + 2.0f * fRec29[1];
			fVec6[0] = fTemp10;
			fRec28[0] = 0.0f - fConst106 * (fConst107 * fRec28[1] - fConst3 * (fTemp10 + fVec6[1]));
			fRec27[0] = fRec28[0] - fConst104 * (fConst109 * fRec27[2] + fConst96 * fRec27[1]);
			fRec26[0] = fConst104 * (fRec27[2] + fRec27[0] + 2.0f * fRec27[1]) - fConst101 * (fConst110 * fRec26[2] + fConst96 * fRec26[1]);
			float fTemp11 = fRec26[2] + fRec26[0] + 2.0f * fRec26[1];
			fVec7[0] = fTemp11;
			fRec25[0] = fConst101 * (fConst103 * fTemp11 + fConst111 * fVec7[1]) - fConst113 * fRec25[1];
			fRec24[0] = fRec25[0] - fConst100 * (fConst114 * fRec24[2] + fConst89 * fRec24[1]);
			fRec23[0] = fConst100 * (fConst88 * fRec24[0] + fConst115 * fRec24[1] + fConst88 * fRec24[2]) - fConst99 * (fConst116 * fRec23[2] + fConst89 * fRec23[1]);
			float fTemp12 = fConst82 * fRec22[1];
			fRec22[0] = fConst99 * (fConst88 * fRec23[0] + fConst115 * fRec23[1] + fConst88 * fRec23[2]) - fConst78 * (fConst79 * fRec22[2] + fTemp12);
			fRec32[0] = fSlow2 + fConst98 * fRec32[1];
			fRec37[0] = fConst3 * (fConst118 * fTemp10 + fConst119 * fVec6[1]) - fConst120 * fRec37[1];
			fRec36[0] = fRec37[0] - fConst104 * (fConst109 * fRec36[2] + fConst96 * fRec36[1]);
			fRec35[0] = fConst104 * (fConst117 * fRec36[1] + fConst95 * fRec36[0] + fConst95 * fRec36[2]) - fConst101 * (fConst110 * fRec35[2] + fConst96 * fRec35[1]);
			float fTemp13 = fConst82 * fRec34[1];
			fRec34[0] = fConst101 * (fConst95 * fRec35[0] + fConst117 * fRec35[1] + fConst95 * fRec35[2]) - fConst78 * (fConst79 * fRec34[2] + fTemp13);
			float fTemp14 = fConst89 * fRec33[1];
			fRec33[0] = fRec34[2] + fConst78 * (fTemp13 + fConst79 * fRec34[0]) - fConst85 * (fConst86 * fRec33[2] + fTemp14);
			fRec38[0] = fSlow3 + fConst98 * fRec38[1];
			fRec47[0] = fConst32 * (fConst121 * fTemp3 + fConst122 * fVec2[1]) - fConst123 * fRec47[1];
			fRec46[0] = fRec47[0] - fConst26 * (fConst54 * fRec46[2] + fConst57 * fRec46[1]);
			fRec45[0] = fConst26 * (fConst56 * fRec46[0] + fConst124 * fRec46[1] + fConst56 * fRec46[2]) - fConst25 * (fConst58 * fRec45[2] + fConst57 * fRec45[1]);
			float fTemp15 = fConst82 * fRec44[1];
			fRec44[0] = fConst25 * (fConst56 * fRec45[0] + fConst124 * fRec45[1] + fConst56 * fRec45[2]) - fConst78 * (fConst79 * fRec44[2] + fTemp15);
			float fTemp16 = fConst89 * fRec43[1];
			fRec43[0] = fRec44[2] + fConst78 * (fTemp15 + fConst79 * fRec44[0]) - fConst85 * (fConst86 * fRec43[2] + fTemp16);
			float fTemp17 = fConst96 * fRec42[1];
			fRec42[0] = fRec43[2] + fConst85 * (fTemp16 + fConst86 * fRec43[0]) - fConst92 * (fConst93 * fRec42[2] + fTemp17);
			float fTemp18 = fConst73 * fRec41[1];
			fRec41[0] = fRec42[2] + fConst92 * (fTemp17 + fConst93 * fRec42[0]) - fConst125 * (fConst126 * fRec41[2] + fTemp18);
			float fTemp19 = fConst67 * fRec40[1];
			fRec40[0] = fRec41[2] + fConst125 * (fTemp18 + fConst126 * fRec41[0]) - fConst127 * (fConst128 * fRec40[2] + fTemp19);
			float fTemp20 = fConst62 * fRec39[1];
			fRec39[0] = fRec40[2] + fConst127 * (fTemp19 + fConst128 * fRec40[0]) - fConst129 * (fConst130 * fRec39[2] + fTemp20);
			fRec48[0] = fSlow4 + fConst98 * fRec48[1];
			fRec55[0] = fConst18 * (fConst131 * fTemp5 + fConst132 * fVec4[1]) - fConst133 * fRec55[1];
			fRec54[0] = fRec55[0] - fConst12 * (fConst64 * fRec54[2] + fConst67 * fRec54[1]);
			fRec53[0] = fConst12 * (fConst66 * fRec54[0] + fConst134 * fRec54[1] + fConst66 * fRec54[2]) - fConst9 * (fConst68 * fRec53[2] + fConst67 * fRec53[1]);
			float fTemp21 = fConst82 * fRec52[1];
			fRec52[0] = fConst9 * (fConst66 * fRec53[0] + fConst134 * fRec53[1] + fConst66 * fRec53[2]) - fConst78 * (fConst79 * fRec52[2] + fTemp21);
			float fTemp22 = fConst89 * fRec51[1];
			fRec51[0] = fRec52[2] + fConst78 * (fTemp21 + fConst79 * fRec52[0]) - fConst85 * (fConst86 * fRec51[2] + fTemp22);
			float fTemp23 = fConst96 * fRec50[1];
			fRec50[0] = fRec51[2] + fConst85 * (fTemp22 + fConst86 * fRec51[0]) - fConst92 * (fConst93 * fRec50[2] + fTemp23);
			float fTemp24 = fConst73 * fRec49[1];
			fRec49[0] = fRec50[2] + fConst92 * (fTemp23 + fConst93 * fRec50[0]) - fConst125 * (fConst126 * fRec49[2] + fTemp24);
			fRec56[0] = fSlow5 + fConst98 * fRec56[1];
			fRec64[0] = fConst25 * (fConst135 * fTemp4 + fConst136 * fVec3[1]) - fConst137 * fRec64[1];
			fRec63[0] = fRec64[0] - fConst19 * (fConst59 * fRec63[2] + fConst62 * fRec63[1]);
			fRec62[0] = fConst19 * (fConst61 * fRec63[0] + fConst138 * fRec63[1] + fConst61 * fRec63[2]) - fConst18 * (fConst63 * fRec62[2] + fConst62 * fRec62[1]);
			float fTemp25 = fConst82 * fRec61[1];
			fRec61[0] = fConst18 * (fConst61 * fRec62[0] + fConst138 * fRec62[1] + fConst61 * fRec62[2]) - fConst78 * (fConst79 * fRec61[2] + fTemp25);
			float fTemp26 = fConst89 * fRec60[1];
			fRec60[0] = fRec61[2] + fConst78 * (fTemp25 + fConst79 * fRec61[0]) - fConst85 * (fConst86 * fRec60[2] + fTemp26);
			float fTemp27 = fConst96 * fRec59[1];
			fRec59[0] = fRec60[2] + fConst85 * (fTemp26 + fConst86 * fRec60[0]) - fConst92 * (fConst93 * fRec59[2] + fTemp27);
			float fTemp28 = fConst73 * fRec58[1];
			fRec58[0] = fRec59[2] + fConst92 * (fTemp27 + fConst93 * fRec59[0]) - fConst125 * (fConst126 * fRec58[2] + fTemp28);
			float fTemp29 = fConst67 * fRec57[1];
			fRec57[0] = fRec58[2] + fConst125 * (fTemp28 + fConst126 * fRec58[0]) - fConst127 * (fConst128 * fRec57[2] + fTemp29);
			fRec65[0] = fSlow6 + fConst98 * fRec65[1];
			fRec76[0] = fConst139 * fVec0[1] - fConst42 * (fConst43 * fRec76[1] - fConst38 * fTemp1);
			fRec75[0] = fRec76[0] - fConst40 * (fConst44 * fRec75[2] + fConst47 * fRec75[1]);
			fRec74[0] = fConst40 * (fConst46 * fRec75[0] + fConst140 * fRec75[1] + fConst46 * fRec75[2]) - fConst39 * (fConst48 * fRec74[2] + fConst47 * fRec74[1]);
			float fTemp30 = fConst82 * fRec73[1];
			fRec73[0] = fConst39 * (fConst46 * fRec74[0] + fConst140 * fRec74[1] + fConst46 * fRec74[2]) - fConst78 * (fConst79 * fRec73[2] + fTemp30);
			float fTemp31 = fConst89 * fRec72[1];
			fRec72[0] = fRec73[2] + fConst78 * (fTemp30 + fConst79 * fRec73[0]) - fConst85 * (fConst86 * fRec72[2] + fTemp31);
			float fTemp32 = fConst96 * fRec71[1];
			fRec71[0] = fRec72[2] + fConst85 * (fTemp31 + fConst86 * fRec72[0]) - fConst92 * (fConst93 * fRec71[2] + fTemp32);
			float fTemp33 = fConst73 * fRec70[1];
			fRec70[0] = fRec71[2] + fConst92 * (fTemp32 + fConst93 * fRec71[0]) - fConst125 * (fConst126 * fRec70[2] + fTemp33);
			float fTemp34 = fConst67 * fRec69[1];
			fRec69[0] = fRec70[2] + fConst125 * (fTemp33 + fConst126 * fRec70[0]) - fConst127 * (fConst128 * fRec69[2] + fTemp34);
			float fTemp35 = fConst62 * fRec68[1];
			fRec68[0] = fRec69[2] + fConst127 * (fTemp34 + fConst128 * fRec69[0]) - fConst129 * (fConst130 * fRec68[2] + fTemp35);
			float fTemp36 = fConst57 * fRec67[1];
			fRec67[0] = fRec68[2] + fConst129 * (fTemp35 + fConst130 * fRec68[0]) - fConst141 * (fConst142 * fRec67[2] + fTemp36);
			float fTemp37 = fConst52 * fRec66[1];
			fRec66[0] = fRec67[2] + fConst141 * (fTemp36 + fConst142 * fRec67[0]) - fConst143 * (fConst144 * fRec66[2] + fTemp37);
			fRec77[0] = fSlow7 + fConst98 * fRec77[1];
			fRec87[0] = fConst39 * (fConst145 * fTemp2 + fConst146 * fVec1[1]) - fConst147 * fRec87[1];
			fRec86[0] = fRec87[0] - fConst33 * (fConst49 * fRec86[2] + fConst52 * fRec86[1]);
			fRec85[0] = fConst33 * (fConst51 * fRec86[0] + fConst148 * fRec86[1] + fConst51 * fRec86[2]) - fConst32 * (fConst53 * fRec85[2] + fConst52 * fRec85[1]);
			float fTemp38 = fConst82 * fRec84[1];
			fRec84[0] = fConst32 * (fConst51 * fRec85[0] + fConst148 * fRec85[1] + fConst51 * fRec85[2]) - fConst78 * (fConst79 * fRec84[2] + fTemp38);
			float fTemp39 = fConst89 * fRec83[1];
			fRec83[0] = fRec84[2] + fConst78 * (fTemp38 + fConst79 * fRec84[0]) - fConst85 * (fConst86 * fRec83[2] + fTemp39);
			float fTemp40 = fConst96 * fRec82[1];
			fRec82[0] = fRec83[2] + fConst85 * (fTemp39 + fConst86 * fRec83[0]) - fConst92 * (fConst93 * fRec82[2] + fTemp40);
			float fTemp41 = fConst73 * fRec81[1];
			fRec81[0] = fRec82[2] + fConst92 * (fTemp40 + fConst93 * fRec82[0]) - fConst125 * (fConst126 * fRec81[2] + fTemp41);
			float fTemp42 = fConst67 * fRec80[1];
			fRec80[0] = fRec81[2] + fConst125 * (fTemp41 + fConst126 * fRec81[0]) - fConst127 * (fConst128 * fRec80[2] + fTemp42);
			float fTemp43 = fConst62 * fRec79[1];
			fRec79[0] = fRec80[2] + fConst127 * (fTemp42 + fConst128 * fRec80[0]) - fConst129 * (fConst130 * fRec79[2] + fTemp43);
			float fTemp44 = fConst57 * fRec78[1];
			fRec78[0] = fRec79[2] + fConst129 * (fTemp43 + fConst130 * fRec79[0]) - fConst141 * (fConst142 * fRec78[2] + fTemp44);
			fRec88[0] = fSlow8 + fConst98 * fRec88[1];
			fRec94[0] = 0.0f - fConst154 * (fConst112 * fRec94[1] - fConst101 * (fTemp11 + fVec7[1]));
			fRec93[0] = fRec94[0] - fConst100 * (fConst114 * fRec93[2] + fConst89 * fRec93[1]);
			fRec92[0] = fConst100 * (fRec93[2] + fRec93[0] + 2.0f * fRec93[1]) - fConst99 * (fConst116 * fRec92[2] + fConst89 * fRec92[1]);
			float fTemp45 = fRec92[2] + fRec92[0] + 2.0f * fRec92[1];
			fVec8[0] = fTemp45;
			fRec91[0] = fConst99 * (fConst153 * fTemp45 + fConst155 * fVec8[1]) - fConst157 * fRec91[1];
			fRec90[0] = fRec91[0] - fConst150 * (fConst158 * fRec90[2] + fConst82 * fRec90[1]);
			fRec89[0] = fConst150 * (fConst151 * fRec90[1] + fConst81 * fRec90[0] + fConst81 * fRec90[2]) - fConst149 * (fConst159 * fRec89[2] + fConst82 * fRec89[1]);
			fRec95[0] = fSlow9 + fConst98 * fRec95[1];
			fRec98[0] = 0.0f - fConst160 * (fConst156 * fRec98[1] - fConst99 * (fTemp45 + fVec8[1]));
			fRec97[0] = fRec98[0] - fConst150 * (fConst158 * fRec97[2] + fConst82 * fRec97[1]);
			fRec96[0] = fConst150 * (fRec97[2] + fRec97[0] + 2.0f * fRec97[1]) - fConst149 * (fConst159 * fRec96[2] + fConst82 * fRec96[1]);
			fRec99[0] = fSlow10 + fConst98 * fRec99[1];
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp0 : (fRec0[2] + fConst92 * (fTemp9 + fConst93 * fRec0[0])) * std::pow(1e+01f, 0.05f * fRec21[0]) + (fRec22[2] + fConst78 * (fTemp12 + fConst79 * fRec22[0])) * std::pow(1e+01f, 0.05f * fRec32[0]) + (fRec33[2] + fConst85 * (fTemp14 + fConst86 * fRec33[0])) * std::pow(1e+01f, 0.05f * fRec38[0]) + (fRec39[2] + fConst129 * (fTemp20 + fConst130 * fRec39[0])) * std::pow(1e+01f, 0.05f * fRec48[0]) + (fRec49[2] + fConst125 * (fTemp24 + fConst126 * fRec49[0])) * std::pow(1e+01f, 0.05f * fRec56[0]) + (fRec57[2] + fConst127 * (fTemp29 + fConst128 * fRec57[0])) * std::pow(1e+01f, 0.05f * fRec65[0]) + (fRec66[2] + fConst143 * (fTemp37 + fConst144 * fRec66[0])) * std::pow(1e+01f, 0.05f * fRec77[0]) + (fRec78[2] + fConst141 * (fTemp44 + fConst142 * fRec78[0])) * std::pow(1e+01f, 0.05f * fRec88[0]) + fConst149 * ((fConst81 * fRec89[0] + fConst151 * fRec89[1] + fConst81 * fRec89[2]) * std::pow(1e+01f, 0.05f * fRec95[0]) + (fRec96[2] + fRec96[0] + 2.0f * fRec96[1]) * std::pow(1e+01f, 0.05f * fRec99[0]))));
			fVec0[1] = fVec0[0];
			fRec20[1] = fRec20[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fVec1[1] = fVec1[0];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fVec2[1] = fVec2[0];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fVec3[1] = fVec3[0];
			fRec11[1] = fRec11[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fVec4[1] = fVec4[0];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fVec5[1] = fVec5[0];
			fRec5[1] = fRec5[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
			fRec3[2] = fRec3[1];
			fRec3[1] = fRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec21[1] = fRec21[0];
			fRec31[1] = fRec31[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec29[2] = fRec29[1];
			fRec29[1] = fRec29[0];
			fVec6[1] = fVec6[0];
			fRec28[1] = fRec28[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fVec7[1] = fVec7[0];
			fRec25[1] = fRec25[0];
			fRec24[2] = fRec24[1];
			fRec24[1] = fRec24[0];
			fRec23[2] = fRec23[1];
			fRec23[1] = fRec23[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec32[1] = fRec32[0];
			fRec37[1] = fRec37[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec38[1] = fRec38[0];
			fRec47[1] = fRec47[0];
			fRec46[2] = fRec46[1];
			fRec46[1] = fRec46[0];
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
			fRec44[2] = fRec44[1];
			fRec44[1] = fRec44[0];
			fRec43[2] = fRec43[1];
			fRec43[1] = fRec43[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			fRec40[2] = fRec40[1];
			fRec40[1] = fRec40[0];
			fRec39[2] = fRec39[1];
			fRec39[1] = fRec39[0];
			fRec48[1] = fRec48[0];
			fRec55[1] = fRec55[0];
			fRec54[2] = fRec54[1];
			fRec54[1] = fRec54[0];
			fRec53[2] = fRec53[1];
			fRec53[1] = fRec53[0];
			fRec52[2] = fRec52[1];
			fRec52[1] = fRec52[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec56[1] = fRec56[0];
			fRec64[1] = fRec64[0];
			fRec63[2] = fRec63[1];
			fRec63[1] = fRec63[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fRec61[2] = fRec61[1];
			fRec61[1] = fRec61[0];
			fRec60[2] = fRec60[1];
			fRec60[1] = fRec60[0];
			fRec59[2] = fRec59[1];
			fRec59[1] = fRec59[0];
			fRec58[2] = fRec58[1];
			fRec58[1] = fRec58[0];
			fRec57[2] = fRec57[1];
			fRec57[1] = fRec57[0];
			fRec65[1] = fRec65[0];
			fRec76[1] = fRec76[0];
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			fRec72[2] = fRec72[1];
			fRec72[1] = fRec72[0];
			fRec71[2] = fRec71[1];
			fRec71[1] = fRec71[0];
			fRec70[2] = fRec70[1];
			fRec70[1] = fRec70[0];
			fRec69[2] = fRec69[1];
			fRec69[1] = fRec69[0];
			fRec68[2] = fRec68[1];
			fRec68[1] = fRec68[0];
			fRec67[2] = fRec67[1];
			fRec67[1] = fRec67[0];
			fRec66[2] = fRec66[1];
			fRec66[1] = fRec66[0];
			fRec77[1] = fRec77[0];
			fRec87[1] = fRec87[0];
			fRec86[2] = fRec86[1];
			fRec86[1] = fRec86[0];
			fRec85[2] = fRec85[1];
			fRec85[1] = fRec85[0];
			fRec84[2] = fRec84[1];
			fRec84[1] = fRec84[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
			fRec80[2] = fRec80[1];
			fRec80[1] = fRec80[0];
			fRec79[2] = fRec79[1];
			fRec79[1] = fRec79[0];
			fRec78[2] = fRec78[1];
			fRec78[1] = fRec78[0];
			fRec88[1] = fRec88[0];
			fRec94[1] = fRec94[0];
			fRec93[2] = fRec93[1];
			fRec93[1] = fRec93[0];
			fRec92[2] = fRec92[1];
			fRec92[1] = fRec92[0];
			fVec8[1] = fVec8[0];
			fRec91[1] = fRec91[0];
			fRec90[2] = fRec90[1];
			fRec90[1] = fRec90[0];
			fRec89[2] = fRec89[1];
			fRec89[1] = fRec89[0];
			fRec95[1] = fRec95[0];
			fRec98[1] = fRec98[0];
			fRec97[2] = fRec97[1];
			fRec97[1] = fRec97[0];
			fRec96[2] = fRec96[1];
			fRec96[1] = fRec96[0];
			fRec99[1] = fRec99[0];
		}
	}

};

#endif
