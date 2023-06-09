/* ------------------------------------------------------------
name: "filterBank"
Code generated with Faust 2.59.6 (https://faust.grame.fr)
Compilation options: -lang cpp -rui -nvi -ct 1 -cn _filterBank -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0
------------------------------------------------------------ */

#ifndef  ___filterBank_H__
#define  ___filterBank_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS _filterBank
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

static float _filterBank_faustpower2_f(float value) {
	return value * value;
}

class _filterBank final : public ::faust::dsp {
	
 public:
	
	FAUSTFLOAT fCheckbox0;
	int fSampleRate;
	float fConst2;
	float fConst3;
	float fConst5;
	float fConst6;
	float fConst8;
	float fVec0[2];
	float fConst9;
	float fConst10;
	float fRec10[2];
	float fConst11;
	float fConst12;
	float fRec9[3];
	float fConst13;
	float fConst14;
	float fRec8[3];
	float fConst17;
	float fConst18;
	float fConst20;
	float fConst21;
	float fRec7[3];
	float fConst24;
	float fConst25;
	float fConst27;
	float fConst28;
	float fRec6[3];
	float fConst31;
	float fConst32;
	float fConst34;
	float fConst35;
	float fRec5[3];
	float fConst38;
	float fConst39;
	float fConst41;
	float fConst42;
	float fRec4[3];
	float fConst45;
	float fConst46;
	float fConst48;
	float fConst49;
	float fRec3[3];
	float fConst52;
	float fConst53;
	float fConst55;
	float fConst56;
	float fRec2[3];
	float fConst59;
	float fConst60;
	float fConst62;
	float fConst63;
	float fRec1[3];
	float fConst66;
	float fConst67;
	float fConst69;
	float fConst70;
	float fRec0[3];
	float fConst71;
	FAUSTFLOAT fVslider0;
	float fConst72;
	float fRec11[2];
	float fConst73;
	float fConst74;
	float fConst76;
	float fRec24[2];
	float fRec23[3];
	float fRec22[3];
	float fVec1[2];
	float fConst77;
	float fConst78;
	float fConst79;
	float fRec21[2];
	float fConst80;
	float fRec20[3];
	float fConst81;
	float fConst82;
	float fRec19[3];
	float fRec18[3];
	float fRec17[3];
	float fRec16[3];
	float fRec15[3];
	float fRec14[3];
	float fRec13[3];
	float fRec12[3];
	FAUSTFLOAT fVslider1;
	float fRec25[2];
	float fConst83;
	float fConst84;
	float fConst86;
	float fConst87;
	float fRec37[2];
	float fRec36[3];
	float fRec35[3];
	float fVec2[2];
	float fConst88;
	float fConst89;
	float fConst90;
	float fRec34[2];
	float fConst91;
	float fRec33[3];
	float fConst92;
	float fConst93;
	float fRec32[3];
	float fRec31[3];
	float fRec30[3];
	float fRec29[3];
	float fRec28[3];
	float fRec27[3];
	float fRec26[3];
	FAUSTFLOAT fVslider2;
	float fRec38[2];
	float fConst94;
	float fConst95;
	float fConst97;
	float fConst98;
	float fRec49[2];
	float fRec48[3];
	float fRec47[3];
	float fVec3[2];
	float fConst99;
	float fConst100;
	float fConst101;
	float fRec46[2];
	float fConst102;
	float fRec45[3];
	float fConst103;
	float fConst104;
	float fRec44[3];
	float fRec43[3];
	float fRec42[3];
	float fRec41[3];
	float fRec40[3];
	float fRec39[3];
	FAUSTFLOAT fVslider3;
	float fRec50[2];
	float fConst105;
	float fConst106;
	float fConst108;
	float fConst109;
	float fRec60[2];
	float fRec59[3];
	float fRec58[3];
	float fVec4[2];
	float fConst110;
	float fConst111;
	float fConst112;
	float fRec57[2];
	float fConst113;
	float fRec56[3];
	float fConst114;
	float fConst115;
	float fRec55[3];
	float fRec54[3];
	float fRec53[3];
	float fRec52[3];
	float fRec51[3];
	FAUSTFLOAT fVslider4;
	float fRec61[2];
	float fConst116;
	float fConst117;
	float fConst119;
	float fConst120;
	float fRec70[2];
	float fRec69[3];
	float fRec68[3];
	float fVec5[2];
	float fConst121;
	float fConst122;
	float fConst123;
	float fRec67[2];
	float fConst124;
	float fRec66[3];
	float fConst125;
	float fConst126;
	float fRec65[3];
	float fRec64[3];
	float fRec63[3];
	float fRec62[3];
	FAUSTFLOAT fVslider5;
	float fRec71[2];
	float fConst127;
	float fConst128;
	float fConst130;
	float fConst131;
	float fRec79[2];
	float fRec78[3];
	float fRec77[3];
	float fVec6[2];
	float fConst132;
	float fConst133;
	float fConst134;
	float fRec76[2];
	float fConst135;
	float fRec75[3];
	float fConst136;
	float fConst137;
	float fRec74[3];
	float fRec73[3];
	float fRec72[3];
	FAUSTFLOAT fVslider6;
	float fRec80[2];
	float fConst138;
	float fConst139;
	float fConst141;
	float fConst142;
	float fRec87[2];
	float fRec86[3];
	float fRec85[3];
	float fVec7[2];
	float fConst143;
	float fConst144;
	float fConst145;
	float fRec84[2];
	float fConst146;
	float fRec83[3];
	float fConst147;
	float fConst148;
	float fRec82[3];
	float fRec81[3];
	FAUSTFLOAT fVslider7;
	float fRec88[2];
	float fConst149;
	float fConst150;
	float fConst152;
	float fConst153;
	float fRec94[2];
	float fRec93[3];
	float fRec92[3];
	float fVec8[2];
	float fConst154;
	float fConst155;
	float fConst156;
	float fRec91[2];
	float fConst157;
	float fRec90[3];
	float fConst158;
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
	float fVec9[2];
	float fRec124[2];
	float fRec123[3];
	float fRec122[3];
	float fVec10[2];
	float fRec121[2];
	float fRec120[3];
	float fRec119[3];
	float fVec11[2];
	float fRec118[2];
	float fRec117[3];
	float fRec116[3];
	float fVec12[2];
	float fRec115[2];
	float fRec114[3];
	float fRec113[3];
	float fVec13[2];
	float fRec112[2];
	float fRec111[3];
	float fRec110[3];
	float fVec14[2];
	float fRec109[2];
	float fRec108[3];
	float fRec107[3];
	float fVec15[2];
	float fRec106[2];
	float fRec105[3];
	float fRec104[3];
	float fVec16[2];
	float fRec103[2];
	float fRec102[3];
	float fRec101[3];
	float fRec100[3];
	float fRec129[2];
	float fRec128[3];
	float fRec127[3];
	float fRec126[3];
	float fRec125[3];
	float fRec135[2];
	float fRec134[3];
	float fRec133[3];
	float fRec132[3];
	float fRec131[3];
	float fRec130[3];
	float fRec142[2];
	float fRec141[3];
	float fRec140[3];
	float fRec139[3];
	float fRec138[3];
	float fRec137[3];
	float fRec136[3];
	float fRec150[2];
	float fRec149[3];
	float fRec148[3];
	float fRec147[3];
	float fRec146[3];
	float fRec145[3];
	float fRec144[3];
	float fRec143[3];
	float fRec159[2];
	float fRec158[3];
	float fRec157[3];
	float fRec156[3];
	float fRec155[3];
	float fRec154[3];
	float fRec153[3];
	float fRec152[3];
	float fRec151[3];
	float fRec169[2];
	float fRec168[3];
	float fRec167[3];
	float fRec166[3];
	float fRec165[3];
	float fRec164[3];
	float fRec163[3];
	float fRec162[3];
	float fRec161[3];
	float fRec160[3];
	float fRec180[2];
	float fRec179[3];
	float fRec178[3];
	float fRec177[3];
	float fRec176[3];
	float fRec175[3];
	float fRec174[3];
	float fRec173[3];
	float fRec172[3];
	float fRec171[3];
	float fRec170[3];
	float fRec186[2];
	float fRec185[3];
	float fRec184[3];
	float fVec17[2];
	float fRec183[2];
	float fRec182[3];
	float fRec181[3];
	float fRec189[2];
	float fRec188[3];
	float fRec187[3];
	
 public:
	_filterBank() {}

	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "0.2");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "0.10");
		m->declare("compile_options", "-lang cpp -rui -nvi -ct 1 -cn _filterBank -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0");
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
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		float fConst1 = std::tan(31415.926f / fConst0);
		fConst2 = 1.0f / fConst1;
		fConst3 = 1.0f / ((fConst2 + 0.618034f) / fConst1 + 1.0f);
		float fConst4 = _filterBank_faustpower2_f(fConst1);
		fConst5 = 1.0f / fConst4;
		fConst6 = 1.0f / ((fConst2 + 1.618034f) / fConst1 + 1.0f);
		float fConst7 = fConst2 + 1.0f;
		fConst8 = 0.0f - 1.0f / (fConst1 * fConst7);
		fConst9 = 1.0f / fConst7;
		fConst10 = 1.0f - fConst2;
		fConst11 = (fConst2 + -1.618034f) / fConst1 + 1.0f;
		fConst12 = 2.0f * (1.0f - fConst5);
		fConst13 = 0.0f - 2.0f / fConst4;
		fConst14 = (fConst2 + -0.618034f) / fConst1 + 1.0f;
		float fConst15 = std::tan(122.71846f / fConst0);
		float fConst16 = 1.0f / fConst15;
		fConst17 = 1.0f / ((fConst16 + 1.618034f) / fConst15 + 1.0f);
		fConst18 = (fConst16 + -1.618034f) / fConst15 + 1.0f;
		float fConst19 = _filterBank_faustpower2_f(fConst15);
		fConst20 = 1.0f / fConst19;
		fConst21 = 2.0f * (1.0f - fConst20);
		float fConst22 = std::tan(245.43692f / fConst0);
		float fConst23 = 1.0f / fConst22;
		fConst24 = 1.0f / ((fConst23 + 1.618034f) / fConst22 + 1.0f);
		fConst25 = (fConst23 + -1.618034f) / fConst22 + 1.0f;
		float fConst26 = _filterBank_faustpower2_f(fConst22);
		fConst27 = 1.0f / fConst26;
		fConst28 = 2.0f * (1.0f - fConst27);
		float fConst29 = std::tan(490.87384f / fConst0);
		float fConst30 = 1.0f / fConst29;
		fConst31 = 1.0f / ((fConst30 + 1.618034f) / fConst29 + 1.0f);
		fConst32 = (fConst30 + -1.618034f) / fConst29 + 1.0f;
		float fConst33 = _filterBank_faustpower2_f(fConst29);
		fConst34 = 1.0f / fConst33;
		fConst35 = 2.0f * (1.0f - fConst34);
		float fConst36 = std::tan(981.7477f / fConst0);
		float fConst37 = 1.0f / fConst36;
		fConst38 = 1.0f / ((fConst37 + 1.618034f) / fConst36 + 1.0f);
		fConst39 = (fConst37 + -1.618034f) / fConst36 + 1.0f;
		float fConst40 = _filterBank_faustpower2_f(fConst36);
		fConst41 = 1.0f / fConst40;
		fConst42 = 2.0f * (1.0f - fConst41);
		float fConst43 = std::tan(1963.4954f / fConst0);
		float fConst44 = 1.0f / fConst43;
		fConst45 = 1.0f / ((fConst44 + 1.618034f) / fConst43 + 1.0f);
		fConst46 = (fConst44 + -1.618034f) / fConst43 + 1.0f;
		float fConst47 = _filterBank_faustpower2_f(fConst43);
		fConst48 = 1.0f / fConst47;
		fConst49 = 2.0f * (1.0f - fConst48);
		float fConst50 = std::tan(3926.9907f / fConst0);
		float fConst51 = 1.0f / fConst50;
		fConst52 = 1.0f / ((fConst51 + 1.618034f) / fConst50 + 1.0f);
		fConst53 = (fConst51 + -1.618034f) / fConst50 + 1.0f;
		float fConst54 = _filterBank_faustpower2_f(fConst50);
		fConst55 = 1.0f / fConst54;
		fConst56 = 2.0f * (1.0f - fConst55);
		float fConst57 = std::tan(7853.9814f / fConst0);
		float fConst58 = 1.0f / fConst57;
		fConst59 = 1.0f / ((fConst58 + 1.618034f) / fConst57 + 1.0f);
		fConst60 = (fConst58 + -1.618034f) / fConst57 + 1.0f;
		float fConst61 = _filterBank_faustpower2_f(fConst57);
		fConst62 = 1.0f / fConst61;
		fConst63 = 2.0f * (1.0f - fConst62);
		float fConst64 = std::tan(15707.963f / fConst0);
		float fConst65 = 1.0f / fConst64;
		fConst66 = 1.0f / ((fConst65 + 1.618034f) / fConst64 + 1.0f);
		fConst67 = (fConst65 + -1.618034f) / fConst64 + 1.0f;
		float fConst68 = _filterBank_faustpower2_f(fConst64);
		fConst69 = 1.0f / fConst68;
		fConst70 = 2.0f * (1.0f - fConst69);
		fConst71 = 44.1f / fConst0;
		fConst72 = 1.0f - fConst71;
		fConst73 = 1.0f / ((fConst65 + 0.618034f) / fConst64 + 1.0f);
		fConst74 = 1.0f / ((fConst65 + 1.618034f) / fConst64 + 1.0f);
		float fConst75 = fConst65 + 1.0f;
		fConst76 = 1.0f / (fConst64 * fConst75);
		fConst77 = 0.0f - fConst76;
		fConst78 = 1.0f - fConst65;
		fConst79 = fConst78 / fConst75;
		fConst80 = (fConst65 + -1.618034f) / fConst64 + 1.0f;
		fConst81 = 0.0f - 2.0f / fConst68;
		fConst82 = (fConst65 + -0.618034f) / fConst64 + 1.0f;
		fConst83 = 1.0f / ((fConst58 + 0.618034f) / fConst57 + 1.0f);
		fConst84 = 1.0f / ((fConst58 + 1.618034f) / fConst57 + 1.0f);
		float fConst85 = fConst58 + 1.0f;
		fConst86 = 1.0f / (fConst57 * fConst85);
		fConst87 = 1.0f / fConst75;
		fConst88 = 0.0f - fConst86;
		fConst89 = 1.0f - fConst58;
		fConst90 = fConst89 / fConst85;
		fConst91 = (fConst58 + -1.618034f) / fConst57 + 1.0f;
		fConst92 = 0.0f - 2.0f / fConst61;
		fConst93 = (fConst58 + -0.618034f) / fConst57 + 1.0f;
		fConst94 = 1.0f / ((fConst51 + 0.618034f) / fConst50 + 1.0f);
		fConst95 = 1.0f / ((fConst51 + 1.618034f) / fConst50 + 1.0f);
		float fConst96 = fConst51 + 1.0f;
		fConst97 = 1.0f / (fConst50 * fConst96);
		fConst98 = 1.0f / fConst85;
		fConst99 = 0.0f - fConst97;
		fConst100 = 1.0f - fConst51;
		fConst101 = fConst100 / fConst96;
		fConst102 = (fConst51 + -1.618034f) / fConst50 + 1.0f;
		fConst103 = 0.0f - 2.0f / fConst54;
		fConst104 = (fConst51 + -0.618034f) / fConst50 + 1.0f;
		fConst105 = 1.0f / ((fConst44 + 0.618034f) / fConst43 + 1.0f);
		fConst106 = 1.0f / ((fConst44 + 1.618034f) / fConst43 + 1.0f);
		float fConst107 = fConst44 + 1.0f;
		fConst108 = 1.0f / (fConst43 * fConst107);
		fConst109 = 1.0f / fConst96;
		fConst110 = 0.0f - fConst108;
		fConst111 = 1.0f - fConst44;
		fConst112 = fConst111 / fConst107;
		fConst113 = (fConst44 + -1.618034f) / fConst43 + 1.0f;
		fConst114 = 0.0f - 2.0f / fConst47;
		fConst115 = (fConst44 + -0.618034f) / fConst43 + 1.0f;
		fConst116 = 1.0f / ((fConst37 + 0.618034f) / fConst36 + 1.0f);
		fConst117 = 1.0f / ((fConst37 + 1.618034f) / fConst36 + 1.0f);
		float fConst118 = fConst37 + 1.0f;
		fConst119 = 1.0f / (fConst36 * fConst118);
		fConst120 = 1.0f / fConst107;
		fConst121 = 0.0f - fConst119;
		fConst122 = 1.0f - fConst37;
		fConst123 = fConst122 / fConst118;
		fConst124 = (fConst37 + -1.618034f) / fConst36 + 1.0f;
		fConst125 = 0.0f - 2.0f / fConst40;
		fConst126 = (fConst37 + -0.618034f) / fConst36 + 1.0f;
		fConst127 = 1.0f / ((fConst30 + 0.618034f) / fConst29 + 1.0f);
		fConst128 = 1.0f / ((fConst30 + 1.618034f) / fConst29 + 1.0f);
		float fConst129 = fConst30 + 1.0f;
		fConst130 = 1.0f / (fConst29 * fConst129);
		fConst131 = 1.0f / fConst118;
		fConst132 = 0.0f - fConst130;
		fConst133 = 1.0f - fConst30;
		fConst134 = fConst133 / fConst129;
		fConst135 = (fConst30 + -1.618034f) / fConst29 + 1.0f;
		fConst136 = 0.0f - 2.0f / fConst33;
		fConst137 = (fConst30 + -0.618034f) / fConst29 + 1.0f;
		fConst138 = 1.0f / ((fConst23 + 0.618034f) / fConst22 + 1.0f);
		fConst139 = 1.0f / ((fConst23 + 1.618034f) / fConst22 + 1.0f);
		float fConst140 = fConst23 + 1.0f;
		fConst141 = 1.0f / (fConst22 * fConst140);
		fConst142 = 1.0f / fConst129;
		fConst143 = 0.0f - fConst141;
		fConst144 = 1.0f - fConst23;
		fConst145 = fConst144 / fConst140;
		fConst146 = (fConst23 + -1.618034f) / fConst22 + 1.0f;
		fConst147 = 0.0f - 2.0f / fConst26;
		fConst148 = (fConst23 + -0.618034f) / fConst22 + 1.0f;
		fConst149 = 1.0f / ((fConst16 + 0.618034f) / fConst15 + 1.0f);
		fConst150 = 1.0f / ((fConst16 + 1.618034f) / fConst15 + 1.0f);
		float fConst151 = fConst16 + 1.0f;
		fConst152 = 1.0f / (fConst15 * fConst151);
		fConst153 = 1.0f / fConst140;
		fConst154 = 0.0f - fConst152;
		fConst155 = 1.0f - fConst16;
		fConst156 = fConst155 / fConst151;
		fConst157 = (fConst16 + -1.618034f) / fConst15 + 1.0f;
		fConst158 = 0.0f - 2.0f / fConst19;
		fConst159 = (fConst16 + -0.618034f) / fConst15 + 1.0f;
		fConst160 = 1.0f / fConst151;
	}
	
	void instanceResetUserInterface() {
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
	
	void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec10[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 3; l2 = l2 + 1) {
			fRec9[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec8[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 3; l4 = l4 + 1) {
			fRec7[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fRec6[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 3; l6 = l6 + 1) {
			fRec5[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fRec4[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fRec3[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 3; l9 = l9 + 1) {
			fRec2[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 3; l10 = l10 + 1) {
			fRec1[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fRec0[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec11[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec24[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 3; l14 = l14 + 1) {
			fRec23[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 3; l15 = l15 + 1) {
			fRec22[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fVec1[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec21[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 3; l18 = l18 + 1) {
			fRec20[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 3; l19 = l19 + 1) {
			fRec19[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 3; l20 = l20 + 1) {
			fRec18[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 3; l21 = l21 + 1) {
			fRec17[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 3; l22 = l22 + 1) {
			fRec16[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 3; l23 = l23 + 1) {
			fRec15[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 3; l24 = l24 + 1) {
			fRec14[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
			fRec13[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 3; l26 = l26 + 1) {
			fRec12[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec25[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec37[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 3; l29 = l29 + 1) {
			fRec36[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 3; l30 = l30 + 1) {
			fRec35[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fVec2[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec34[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fRec33[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 3; l34 = l34 + 1) {
			fRec32[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 3; l35 = l35 + 1) {
			fRec31[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 3; l36 = l36 + 1) {
			fRec30[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 3; l37 = l37 + 1) {
			fRec29[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 3; l38 = l38 + 1) {
			fRec28[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 3; l39 = l39 + 1) {
			fRec27[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 3; l40 = l40 + 1) {
			fRec26[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec38[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec49[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 3; l43 = l43 + 1) {
			fRec48[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 3; l44 = l44 + 1) {
			fRec47[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec3[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec46[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 3; l47 = l47 + 1) {
			fRec45[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 3; l48 = l48 + 1) {
			fRec44[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fRec43[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 3; l50 = l50 + 1) {
			fRec42[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 3; l51 = l51 + 1) {
			fRec41[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 3; l52 = l52 + 1) {
			fRec40[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 3; l53 = l53 + 1) {
			fRec39[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec50[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec60[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 3; l56 = l56 + 1) {
			fRec59[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 3; l57 = l57 + 1) {
			fRec58[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec4[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec57[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 3; l60 = l60 + 1) {
			fRec56[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 3; l61 = l61 + 1) {
			fRec55[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 3; l62 = l62 + 1) {
			fRec54[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fRec53[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 3; l64 = l64 + 1) {
			fRec52[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 3; l65 = l65 + 1) {
			fRec51[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec61[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec70[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 3; l68 = l68 + 1) {
			fRec69[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 3; l69 = l69 + 1) {
			fRec68[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec5[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec67[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 3; l72 = l72 + 1) {
			fRec66[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 3; l73 = l73 + 1) {
			fRec65[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 3; l74 = l74 + 1) {
			fRec64[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 3; l75 = l75 + 1) {
			fRec63[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 3; l76 = l76 + 1) {
			fRec62[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec71[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec79[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 3; l79 = l79 + 1) {
			fRec78[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 3; l80 = l80 + 1) {
			fRec77[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fVec6[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec76[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 3; l83 = l83 + 1) {
			fRec75[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 3; l84 = l84 + 1) {
			fRec74[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 3; l85 = l85 + 1) {
			fRec73[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 3; l86 = l86 + 1) {
			fRec72[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec80[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec87[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 3; l89 = l89 + 1) {
			fRec86[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 3; l90 = l90 + 1) {
			fRec85[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fVec7[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec84[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 3; l93 = l93 + 1) {
			fRec83[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 3; l94 = l94 + 1) {
			fRec82[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 3; l95 = l95 + 1) {
			fRec81[l95] = 0.0f;
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
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec9[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec124[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 3; l111 = l111 + 1) {
			fRec123[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 3; l112 = l112 + 1) {
			fRec122[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fVec10[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec121[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 3; l115 = l115 + 1) {
			fRec120[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 3; l116 = l116 + 1) {
			fRec119[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fVec11[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec118[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 3; l119 = l119 + 1) {
			fRec117[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 3; l120 = l120 + 1) {
			fRec116[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec12[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec115[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 3; l123 = l123 + 1) {
			fRec114[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 3; l124 = l124 + 1) {
			fRec113[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec13[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec112[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 3; l127 = l127 + 1) {
			fRec111[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 3; l128 = l128 + 1) {
			fRec110[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fVec14[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec109[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 3; l131 = l131 + 1) {
			fRec108[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 3; l132 = l132 + 1) {
			fRec107[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fVec15[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec106[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 3; l135 = l135 + 1) {
			fRec105[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 3; l136 = l136 + 1) {
			fRec104[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec16[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec103[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 3; l139 = l139 + 1) {
			fRec102[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 3; l140 = l140 + 1) {
			fRec101[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 3; l141 = l141 + 1) {
			fRec100[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec129[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 3; l143 = l143 + 1) {
			fRec128[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 3; l144 = l144 + 1) {
			fRec127[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 3; l145 = l145 + 1) {
			fRec126[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 3; l146 = l146 + 1) {
			fRec125[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec135[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 3; l148 = l148 + 1) {
			fRec134[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 3; l149 = l149 + 1) {
			fRec133[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 3; l150 = l150 + 1) {
			fRec132[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 3; l151 = l151 + 1) {
			fRec131[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 3; l152 = l152 + 1) {
			fRec130[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec142[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 3; l154 = l154 + 1) {
			fRec141[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 3; l155 = l155 + 1) {
			fRec140[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 3; l156 = l156 + 1) {
			fRec139[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 3; l157 = l157 + 1) {
			fRec138[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 3; l158 = l158 + 1) {
			fRec137[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 3; l159 = l159 + 1) {
			fRec136[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec150[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 3; l161 = l161 + 1) {
			fRec149[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 3; l162 = l162 + 1) {
			fRec148[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec147[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 3; l164 = l164 + 1) {
			fRec146[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 3; l165 = l165 + 1) {
			fRec145[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 3; l166 = l166 + 1) {
			fRec144[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 3; l167 = l167 + 1) {
			fRec143[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec159[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 3; l169 = l169 + 1) {
			fRec158[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 3; l170 = l170 + 1) {
			fRec157[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 3; l171 = l171 + 1) {
			fRec156[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 3; l172 = l172 + 1) {
			fRec155[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 3; l173 = l173 + 1) {
			fRec154[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec153[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 3; l175 = l175 + 1) {
			fRec152[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 3; l176 = l176 + 1) {
			fRec151[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec169[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 3; l178 = l178 + 1) {
			fRec168[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 3; l179 = l179 + 1) {
			fRec167[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 3; l180 = l180 + 1) {
			fRec166[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 3; l181 = l181 + 1) {
			fRec165[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 3; l182 = l182 + 1) {
			fRec164[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 3; l183 = l183 + 1) {
			fRec163[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 3; l184 = l184 + 1) {
			fRec162[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 3; l185 = l185 + 1) {
			fRec161[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 3; l186 = l186 + 1) {
			fRec160[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec180[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 3; l188 = l188 + 1) {
			fRec179[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 3; l189 = l189 + 1) {
			fRec178[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 3; l190 = l190 + 1) {
			fRec177[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 3; l191 = l191 + 1) {
			fRec176[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 3; l192 = l192 + 1) {
			fRec175[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 3; l193 = l193 + 1) {
			fRec174[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec173[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 3; l195 = l195 + 1) {
			fRec172[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 3; l196 = l196 + 1) {
			fRec171[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 3; l197 = l197 + 1) {
			fRec170[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec186[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fRec185[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fRec184[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec17[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec183[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 3; l203 = l203 + 1) {
			fRec182[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 3; l204 = l204 + 1) {
			fRec181[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec189[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 3; l206 = l206 + 1) {
			fRec188[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 3; l207 = l207 + 1) {
			fRec187[l207] = 0.0f;
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
	
	_filterBank* clone() {
		return new _filterBank();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void buildUserInterface(UI* ui_interface) {
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
		ui_interface->declare(&fVslider7, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider7, "unit", "dB");
		ui_interface->addVerticalSlider("Band 3", &fVslider7, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider6, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("Band 4", &fVslider6, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider5, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("Band 5", &fVslider5, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider4, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider4, "unit", "dB");
		ui_interface->addVerticalSlider("Band 6", &fVslider4, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider3, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider3, "unit", "dB");
		ui_interface->addVerticalSlider("Band 7", &fVslider3, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider2, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider2, "unit", "dB");
		ui_interface->addVerticalSlider("Band 8", &fVslider2, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider1, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("Band 9", &fVslider1, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider0, "tooltip", "Bandpass filter         gain in dB");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("Band10", &fVslider0, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-7e+01f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		int iSlow0 = int(float(fCheckbox0));
		float fSlow1 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider0)));
		float fSlow2 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider1)));
		float fSlow3 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider2)));
		float fSlow4 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider3)));
		float fSlow5 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider4)));
		float fSlow6 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider5)));
		float fSlow7 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider6)));
		float fSlow8 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider7)));
		float fSlow9 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider8)));
		float fSlow10 = fConst71 * std::max<float>(-7e+01f, std::min<float>(1e+01f, float(fVslider9)));
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			float fTemp1 = ((iSlow0) ? 0.0f : fTemp0);
			fVec0[0] = fTemp1;
			fRec10[0] = fConst8 * fVec0[1] - fConst9 * (fConst10 * fRec10[1] - fConst2 * fTemp1);
			fRec9[0] = fRec10[0] - fConst6 * (fConst11 * fRec9[2] + fConst12 * fRec9[1]);
			fRec8[0] = fConst6 * (fConst5 * fRec9[0] + fConst13 * fRec9[1] + fConst5 * fRec9[2]) - fConst3 * (fConst14 * fRec8[2] + fConst12 * fRec8[1]);
			float fTemp2 = fConst21 * fRec7[1];
			fRec7[0] = fConst3 * (fConst5 * fRec8[0] + fConst13 * fRec8[1] + fConst5 * fRec8[2]) - fConst17 * (fConst18 * fRec7[2] + fTemp2);
			float fTemp3 = fConst28 * fRec6[1];
			fRec6[0] = fRec7[2] + fConst17 * (fTemp2 + fConst18 * fRec7[0]) - fConst24 * (fConst25 * fRec6[2] + fTemp3);
			float fTemp4 = fConst35 * fRec5[1];
			fRec5[0] = fRec6[2] + fConst24 * (fTemp3 + fConst25 * fRec6[0]) - fConst31 * (fConst32 * fRec5[2] + fTemp4);
			float fTemp5 = fConst42 * fRec4[1];
			fRec4[0] = fRec5[2] + fConst31 * (fTemp4 + fConst32 * fRec5[0]) - fConst38 * (fConst39 * fRec4[2] + fTemp5);
			float fTemp6 = fConst49 * fRec3[1];
			fRec3[0] = fRec4[2] + fConst38 * (fTemp5 + fConst39 * fRec4[0]) - fConst45 * (fConst46 * fRec3[2] + fTemp6);
			float fTemp7 = fConst56 * fRec2[1];
			fRec2[0] = fRec3[2] + fConst45 * (fTemp6 + fConst46 * fRec3[0]) - fConst52 * (fConst53 * fRec2[2] + fTemp7);
			float fTemp8 = fConst63 * fRec1[1];
			fRec1[0] = fRec2[2] + fConst52 * (fTemp7 + fConst53 * fRec2[0]) - fConst59 * (fConst60 * fRec1[2] + fTemp8);
			float fTemp9 = fConst70 * fRec0[1];
			fRec0[0] = fRec1[2] + fConst59 * (fTemp8 + fConst60 * fRec1[0]) - fConst66 * (fConst67 * fRec0[2] + fTemp9);
			fRec11[0] = fSlow1 + fConst72 * fRec11[1];
			float fTemp10 = std::pow(1e+01f, 0.05f * fRec11[0]);
			fRec24[0] = 0.0f - fConst9 * (fConst10 * fRec24[1] - (fTemp1 + fVec0[1]));
			fRec23[0] = fRec24[0] - fConst6 * (fConst11 * fRec23[2] + fConst12 * fRec23[1]);
			fRec22[0] = fConst6 * (fRec23[2] + fRec23[0] + 2.0f * fRec23[1]) - fConst3 * (fConst14 * fRec22[2] + fConst12 * fRec22[1]);
			float fTemp11 = fRec22[2] + fRec22[0] + 2.0f * fRec22[1];
			fVec1[0] = fTemp11;
			fRec21[0] = fConst3 * (fConst76 * fTemp11 + fConst77 * fVec1[1]) - fConst79 * fRec21[1];
			fRec20[0] = fRec21[0] - fConst74 * (fConst80 * fRec20[2] + fConst70 * fRec20[1]);
			fRec19[0] = fConst74 * (fConst69 * fRec20[0] + fConst81 * fRec20[1] + fConst69 * fRec20[2]) - fConst73 * (fConst82 * fRec19[2] + fConst70 * fRec19[1]);
			float fTemp12 = fConst21 * fRec18[1];
			fRec18[0] = fConst73 * (fConst69 * fRec19[0] + fConst81 * fRec19[1] + fConst69 * fRec19[2]) - fConst17 * (fConst18 * fRec18[2] + fTemp12);
			float fTemp13 = fConst28 * fRec17[1];
			fRec17[0] = fRec18[2] + fConst17 * (fTemp12 + fConst18 * fRec18[0]) - fConst24 * (fConst25 * fRec17[2] + fTemp13);
			float fTemp14 = fConst35 * fRec16[1];
			fRec16[0] = fRec17[2] + fConst24 * (fTemp13 + fConst25 * fRec17[0]) - fConst31 * (fConst32 * fRec16[2] + fTemp14);
			float fTemp15 = fConst42 * fRec15[1];
			fRec15[0] = fRec16[2] + fConst31 * (fTemp14 + fConst32 * fRec16[0]) - fConst38 * (fConst39 * fRec15[2] + fTemp15);
			float fTemp16 = fConst49 * fRec14[1];
			fRec14[0] = fRec15[2] + fConst38 * (fTemp15 + fConst39 * fRec15[0]) - fConst45 * (fConst46 * fRec14[2] + fTemp16);
			float fTemp17 = fConst56 * fRec13[1];
			fRec13[0] = fRec14[2] + fConst45 * (fTemp16 + fConst46 * fRec14[0]) - fConst52 * (fConst53 * fRec13[2] + fTemp17);
			float fTemp18 = fConst63 * fRec12[1];
			fRec12[0] = fRec13[2] + fConst52 * (fTemp17 + fConst53 * fRec13[0]) - fConst59 * (fConst60 * fRec12[2] + fTemp18);
			fRec25[0] = fSlow2 + fConst72 * fRec25[1];
			float fTemp19 = std::pow(1e+01f, 0.05f * fRec25[0]);
			fRec37[0] = 0.0f - fConst87 * (fConst78 * fRec37[1] - fConst3 * (fTemp11 + fVec1[1]));
			fRec36[0] = fRec37[0] - fConst74 * (fConst80 * fRec36[2] + fConst70 * fRec36[1]);
			fRec35[0] = fConst74 * (fRec36[2] + fRec36[0] + 2.0f * fRec36[1]) - fConst73 * (fConst82 * fRec35[2] + fConst70 * fRec35[1]);
			float fTemp20 = fRec35[2] + fRec35[0] + 2.0f * fRec35[1];
			fVec2[0] = fTemp20;
			fRec34[0] = fConst73 * (fConst86 * fTemp20 + fConst88 * fVec2[1]) - fConst90 * fRec34[1];
			fRec33[0] = fRec34[0] - fConst84 * (fConst91 * fRec33[2] + fConst63 * fRec33[1]);
			fRec32[0] = fConst84 * (fConst62 * fRec33[0] + fConst92 * fRec33[1] + fConst62 * fRec33[2]) - fConst83 * (fConst93 * fRec32[2] + fConst63 * fRec32[1]);
			float fTemp21 = fConst21 * fRec31[1];
			fRec31[0] = fConst83 * (fConst62 * fRec32[0] + fConst92 * fRec32[1] + fConst62 * fRec32[2]) - fConst17 * (fConst18 * fRec31[2] + fTemp21);
			float fTemp22 = fConst28 * fRec30[1];
			fRec30[0] = fRec31[2] + fConst17 * (fTemp21 + fConst18 * fRec31[0]) - fConst24 * (fConst25 * fRec30[2] + fTemp22);
			float fTemp23 = fConst35 * fRec29[1];
			fRec29[0] = fRec30[2] + fConst24 * (fTemp22 + fConst25 * fRec30[0]) - fConst31 * (fConst32 * fRec29[2] + fTemp23);
			float fTemp24 = fConst42 * fRec28[1];
			fRec28[0] = fRec29[2] + fConst31 * (fTemp23 + fConst32 * fRec29[0]) - fConst38 * (fConst39 * fRec28[2] + fTemp24);
			float fTemp25 = fConst49 * fRec27[1];
			fRec27[0] = fRec28[2] + fConst38 * (fTemp24 + fConst39 * fRec28[0]) - fConst45 * (fConst46 * fRec27[2] + fTemp25);
			float fTemp26 = fConst56 * fRec26[1];
			fRec26[0] = fRec27[2] + fConst45 * (fTemp25 + fConst46 * fRec27[0]) - fConst52 * (fConst53 * fRec26[2] + fTemp26);
			fRec38[0] = fSlow3 + fConst72 * fRec38[1];
			float fTemp27 = std::pow(1e+01f, 0.05f * fRec38[0]);
			fRec49[0] = 0.0f - fConst98 * (fConst89 * fRec49[1] - fConst73 * (fTemp20 + fVec2[1]));
			fRec48[0] = fRec49[0] - fConst84 * (fConst91 * fRec48[2] + fConst63 * fRec48[1]);
			fRec47[0] = fConst84 * (fRec48[2] + fRec48[0] + 2.0f * fRec48[1]) - fConst83 * (fConst93 * fRec47[2] + fConst63 * fRec47[1]);
			float fTemp28 = fRec47[2] + fRec47[0] + 2.0f * fRec47[1];
			fVec3[0] = fTemp28;
			fRec46[0] = fConst83 * (fConst97 * fTemp28 + fConst99 * fVec3[1]) - fConst101 * fRec46[1];
			fRec45[0] = fRec46[0] - fConst95 * (fConst102 * fRec45[2] + fConst56 * fRec45[1]);
			fRec44[0] = fConst95 * (fConst55 * fRec45[0] + fConst103 * fRec45[1] + fConst55 * fRec45[2]) - fConst94 * (fConst104 * fRec44[2] + fConst56 * fRec44[1]);
			float fTemp29 = fConst21 * fRec43[1];
			fRec43[0] = fConst94 * (fConst55 * fRec44[0] + fConst103 * fRec44[1] + fConst55 * fRec44[2]) - fConst17 * (fConst18 * fRec43[2] + fTemp29);
			float fTemp30 = fConst28 * fRec42[1];
			fRec42[0] = fRec43[2] + fConst17 * (fTemp29 + fConst18 * fRec43[0]) - fConst24 * (fConst25 * fRec42[2] + fTemp30);
			float fTemp31 = fConst35 * fRec41[1];
			fRec41[0] = fRec42[2] + fConst24 * (fTemp30 + fConst25 * fRec42[0]) - fConst31 * (fConst32 * fRec41[2] + fTemp31);
			float fTemp32 = fConst42 * fRec40[1];
			fRec40[0] = fRec41[2] + fConst31 * (fTemp31 + fConst32 * fRec41[0]) - fConst38 * (fConst39 * fRec40[2] + fTemp32);
			float fTemp33 = fConst49 * fRec39[1];
			fRec39[0] = fRec40[2] + fConst38 * (fTemp32 + fConst39 * fRec40[0]) - fConst45 * (fConst46 * fRec39[2] + fTemp33);
			fRec50[0] = fSlow4 + fConst72 * fRec50[1];
			float fTemp34 = std::pow(1e+01f, 0.05f * fRec50[0]);
			fRec60[0] = 0.0f - fConst109 * (fConst100 * fRec60[1] - fConst83 * (fTemp28 + fVec3[1]));
			fRec59[0] = fRec60[0] - fConst95 * (fConst102 * fRec59[2] + fConst56 * fRec59[1]);
			fRec58[0] = fConst95 * (fRec59[2] + fRec59[0] + 2.0f * fRec59[1]) - fConst94 * (fConst104 * fRec58[2] + fConst56 * fRec58[1]);
			float fTemp35 = fRec58[2] + fRec58[0] + 2.0f * fRec58[1];
			fVec4[0] = fTemp35;
			fRec57[0] = fConst94 * (fConst108 * fTemp35 + fConst110 * fVec4[1]) - fConst112 * fRec57[1];
			fRec56[0] = fRec57[0] - fConst106 * (fConst113 * fRec56[2] + fConst49 * fRec56[1]);
			fRec55[0] = fConst106 * (fConst48 * fRec56[0] + fConst114 * fRec56[1] + fConst48 * fRec56[2]) - fConst105 * (fConst115 * fRec55[2] + fConst49 * fRec55[1]);
			float fTemp36 = fConst21 * fRec54[1];
			fRec54[0] = fConst105 * (fConst48 * fRec55[0] + fConst114 * fRec55[1] + fConst48 * fRec55[2]) - fConst17 * (fConst18 * fRec54[2] + fTemp36);
			float fTemp37 = fConst28 * fRec53[1];
			fRec53[0] = fRec54[2] + fConst17 * (fTemp36 + fConst18 * fRec54[0]) - fConst24 * (fConst25 * fRec53[2] + fTemp37);
			float fTemp38 = fConst35 * fRec52[1];
			fRec52[0] = fRec53[2] + fConst24 * (fTemp37 + fConst25 * fRec53[0]) - fConst31 * (fConst32 * fRec52[2] + fTemp38);
			float fTemp39 = fConst42 * fRec51[1];
			fRec51[0] = fRec52[2] + fConst31 * (fTemp38 + fConst32 * fRec52[0]) - fConst38 * (fConst39 * fRec51[2] + fTemp39);
			fRec61[0] = fSlow5 + fConst72 * fRec61[1];
			float fTemp40 = std::pow(1e+01f, 0.05f * fRec61[0]);
			fRec70[0] = 0.0f - fConst120 * (fConst111 * fRec70[1] - fConst94 * (fTemp35 + fVec4[1]));
			fRec69[0] = fRec70[0] - fConst106 * (fConst113 * fRec69[2] + fConst49 * fRec69[1]);
			fRec68[0] = fConst106 * (fRec69[2] + fRec69[0] + 2.0f * fRec69[1]) - fConst105 * (fConst115 * fRec68[2] + fConst49 * fRec68[1]);
			float fTemp41 = fRec68[2] + fRec68[0] + 2.0f * fRec68[1];
			fVec5[0] = fTemp41;
			fRec67[0] = fConst105 * (fConst119 * fTemp41 + fConst121 * fVec5[1]) - fConst123 * fRec67[1];
			fRec66[0] = fRec67[0] - fConst117 * (fConst124 * fRec66[2] + fConst42 * fRec66[1]);
			fRec65[0] = fConst117 * (fConst41 * fRec66[0] + fConst125 * fRec66[1] + fConst41 * fRec66[2]) - fConst116 * (fConst126 * fRec65[2] + fConst42 * fRec65[1]);
			float fTemp42 = fConst21 * fRec64[1];
			fRec64[0] = fConst116 * (fConst41 * fRec65[0] + fConst125 * fRec65[1] + fConst41 * fRec65[2]) - fConst17 * (fConst18 * fRec64[2] + fTemp42);
			float fTemp43 = fConst28 * fRec63[1];
			fRec63[0] = fRec64[2] + fConst17 * (fTemp42 + fConst18 * fRec64[0]) - fConst24 * (fConst25 * fRec63[2] + fTemp43);
			float fTemp44 = fConst35 * fRec62[1];
			fRec62[0] = fRec63[2] + fConst24 * (fTemp43 + fConst25 * fRec63[0]) - fConst31 * (fConst32 * fRec62[2] + fTemp44);
			fRec71[0] = fSlow6 + fConst72 * fRec71[1];
			float fTemp45 = std::pow(1e+01f, 0.05f * fRec71[0]);
			fRec79[0] = 0.0f - fConst131 * (fConst122 * fRec79[1] - fConst105 * (fTemp41 + fVec5[1]));
			fRec78[0] = fRec79[0] - fConst117 * (fConst124 * fRec78[2] + fConst42 * fRec78[1]);
			fRec77[0] = fConst117 * (fRec78[2] + fRec78[0] + 2.0f * fRec78[1]) - fConst116 * (fConst126 * fRec77[2] + fConst42 * fRec77[1]);
			float fTemp46 = fRec77[2] + fRec77[0] + 2.0f * fRec77[1];
			fVec6[0] = fTemp46;
			fRec76[0] = fConst116 * (fConst130 * fTemp46 + fConst132 * fVec6[1]) - fConst134 * fRec76[1];
			fRec75[0] = fRec76[0] - fConst128 * (fConst135 * fRec75[2] + fConst35 * fRec75[1]);
			fRec74[0] = fConst128 * (fConst34 * fRec75[0] + fConst136 * fRec75[1] + fConst34 * fRec75[2]) - fConst127 * (fConst137 * fRec74[2] + fConst35 * fRec74[1]);
			float fTemp47 = fConst21 * fRec73[1];
			fRec73[0] = fConst127 * (fConst34 * fRec74[0] + fConst136 * fRec74[1] + fConst34 * fRec74[2]) - fConst17 * (fConst18 * fRec73[2] + fTemp47);
			float fTemp48 = fConst28 * fRec72[1];
			fRec72[0] = fRec73[2] + fConst17 * (fTemp47 + fConst18 * fRec73[0]) - fConst24 * (fConst25 * fRec72[2] + fTemp48);
			fRec80[0] = fSlow7 + fConst72 * fRec80[1];
			float fTemp49 = std::pow(1e+01f, 0.05f * fRec80[0]);
			fRec87[0] = 0.0f - fConst142 * (fConst133 * fRec87[1] - fConst116 * (fTemp46 + fVec6[1]));
			fRec86[0] = fRec87[0] - fConst128 * (fConst135 * fRec86[2] + fConst35 * fRec86[1]);
			fRec85[0] = fConst128 * (fRec86[2] + fRec86[0] + 2.0f * fRec86[1]) - fConst127 * (fConst137 * fRec85[2] + fConst35 * fRec85[1]);
			float fTemp50 = fRec85[2] + fRec85[0] + 2.0f * fRec85[1];
			fVec7[0] = fTemp50;
			fRec84[0] = fConst127 * (fConst141 * fTemp50 + fConst143 * fVec7[1]) - fConst145 * fRec84[1];
			fRec83[0] = fRec84[0] - fConst139 * (fConst146 * fRec83[2] + fConst28 * fRec83[1]);
			fRec82[0] = fConst139 * (fConst27 * fRec83[0] + fConst147 * fRec83[1] + fConst27 * fRec83[2]) - fConst138 * (fConst148 * fRec82[2] + fConst28 * fRec82[1]);
			float fTemp51 = fConst21 * fRec81[1];
			fRec81[0] = fConst138 * (fConst27 * fRec82[0] + fConst147 * fRec82[1] + fConst27 * fRec82[2]) - fConst17 * (fConst18 * fRec81[2] + fTemp51);
			fRec88[0] = fSlow8 + fConst72 * fRec88[1];
			float fTemp52 = std::pow(1e+01f, 0.05f * fRec88[0]);
			fRec94[0] = 0.0f - fConst153 * (fConst144 * fRec94[1] - fConst127 * (fTemp50 + fVec7[1]));
			fRec93[0] = fRec94[0] - fConst139 * (fConst146 * fRec93[2] + fConst28 * fRec93[1]);
			fRec92[0] = fConst139 * (fRec93[2] + fRec93[0] + 2.0f * fRec93[1]) - fConst138 * (fConst148 * fRec92[2] + fConst28 * fRec92[1]);
			float fTemp53 = fRec92[2] + fRec92[0] + 2.0f * fRec92[1];
			fVec8[0] = fTemp53;
			fRec91[0] = fConst138 * (fConst152 * fTemp53 + fConst154 * fVec8[1]) - fConst156 * fRec91[1];
			fRec90[0] = fRec91[0] - fConst150 * (fConst157 * fRec90[2] + fConst21 * fRec90[1]);
			fRec89[0] = fConst150 * (fConst20 * fRec90[0] + fConst158 * fRec90[1] + fConst20 * fRec90[2]) - fConst149 * (fConst159 * fRec89[2] + fConst21 * fRec89[1]);
			fRec95[0] = fSlow9 + fConst72 * fRec95[1];
			float fTemp54 = std::pow(1e+01f, 0.05f * fRec95[0]);
			fRec98[0] = 0.0f - fConst160 * (fConst155 * fRec98[1] - fConst138 * (fTemp53 + fVec8[1]));
			fRec97[0] = fRec98[0] - fConst150 * (fConst157 * fRec97[2] + fConst21 * fRec97[1]);
			fRec96[0] = fConst150 * (fRec97[2] + fRec97[0] + 2.0f * fRec97[1]) - fConst149 * (fConst159 * fRec96[2] + fConst21 * fRec96[1]);
			fRec99[0] = fSlow10 + fConst72 * fRec99[1];
			float fTemp55 = std::pow(1e+01f, 0.05f * fRec99[0]);
			output0[i0] = FAUSTFLOAT(((iSlow0) ? fTemp0 : (fRec0[2] + fConst66 * (fTemp9 + fConst67 * fRec0[0])) * fTemp10 + (fRec12[2] + fConst59 * (fTemp18 + fConst60 * fRec12[0])) * fTemp19 + (fRec26[2] + fConst52 * (fTemp26 + fConst53 * fRec26[0])) * fTemp27 + (fRec39[2] + fConst45 * (fTemp33 + fConst46 * fRec39[0])) * fTemp34 + (fRec51[2] + fConst38 * (fTemp39 + fConst39 * fRec51[0])) * fTemp40 + (fRec62[2] + fConst31 * (fTemp44 + fConst32 * fRec62[0])) * fTemp45 + (fRec72[2] + fConst24 * (fTemp48 + fConst25 * fRec72[0])) * fTemp49 + (fRec81[2] + fConst17 * (fTemp51 + fConst18 * fRec81[0])) * fTemp52 + fConst149 * ((fConst20 * fRec89[0] + fConst158 * fRec89[1] + fConst20 * fRec89[2]) * fTemp54 + (fRec96[2] + fRec96[0] + 2.0f * fRec96[1]) * fTemp55)));
			float fTemp56 = float(input1[i0]);
			float fTemp57 = ((iSlow0) ? 0.0f : fTemp56);
			fVec9[0] = fTemp57;
			fRec124[0] = 0.0f - fConst9 * (fConst10 * fRec124[1] - (fTemp57 + fVec9[1]));
			fRec123[0] = fRec124[0] - fConst6 * (fConst11 * fRec123[2] + fConst12 * fRec123[1]);
			fRec122[0] = fConst6 * (fRec123[2] + fRec123[0] + 2.0f * fRec123[1]) - fConst3 * (fConst14 * fRec122[2] + fConst12 * fRec122[1]);
			float fTemp58 = fRec122[2] + fRec122[0] + 2.0f * fRec122[1];
			fVec10[0] = fTemp58;
			fRec121[0] = 0.0f - fConst87 * (fConst78 * fRec121[1] - fConst3 * (fTemp58 + fVec10[1]));
			fRec120[0] = fRec121[0] - fConst74 * (fConst80 * fRec120[2] + fConst70 * fRec120[1]);
			fRec119[0] = fConst74 * (fRec120[2] + fRec120[0] + 2.0f * fRec120[1]) - fConst73 * (fConst82 * fRec119[2] + fConst70 * fRec119[1]);
			float fTemp59 = fRec119[2] + fRec119[0] + 2.0f * fRec119[1];
			fVec11[0] = fTemp59;
			fRec118[0] = 0.0f - fConst98 * (fConst89 * fRec118[1] - fConst73 * (fTemp59 + fVec11[1]));
			fRec117[0] = fRec118[0] - fConst84 * (fConst91 * fRec117[2] + fConst63 * fRec117[1]);
			fRec116[0] = fConst84 * (fRec117[2] + fRec117[0] + 2.0f * fRec117[1]) - fConst83 * (fConst93 * fRec116[2] + fConst63 * fRec116[1]);
			float fTemp60 = fRec116[2] + fRec116[0] + 2.0f * fRec116[1];
			fVec12[0] = fTemp60;
			fRec115[0] = 0.0f - fConst109 * (fConst100 * fRec115[1] - fConst83 * (fTemp60 + fVec12[1]));
			fRec114[0] = fRec115[0] - fConst95 * (fConst102 * fRec114[2] + fConst56 * fRec114[1]);
			fRec113[0] = fConst95 * (fRec114[2] + fRec114[0] + 2.0f * fRec114[1]) - fConst94 * (fConst104 * fRec113[2] + fConst56 * fRec113[1]);
			float fTemp61 = fRec113[2] + fRec113[0] + 2.0f * fRec113[1];
			fVec13[0] = fTemp61;
			fRec112[0] = 0.0f - fConst120 * (fConst111 * fRec112[1] - fConst94 * (fTemp61 + fVec13[1]));
			fRec111[0] = fRec112[0] - fConst106 * (fConst113 * fRec111[2] + fConst49 * fRec111[1]);
			fRec110[0] = fConst106 * (fRec111[2] + fRec111[0] + 2.0f * fRec111[1]) - fConst105 * (fConst115 * fRec110[2] + fConst49 * fRec110[1]);
			float fTemp62 = fRec110[2] + fRec110[0] + 2.0f * fRec110[1];
			fVec14[0] = fTemp62;
			fRec109[0] = 0.0f - fConst131 * (fConst122 * fRec109[1] - fConst105 * (fTemp62 + fVec14[1]));
			fRec108[0] = fRec109[0] - fConst117 * (fConst124 * fRec108[2] + fConst42 * fRec108[1]);
			fRec107[0] = fConst117 * (fRec108[2] + fRec108[0] + 2.0f * fRec108[1]) - fConst116 * (fConst126 * fRec107[2] + fConst42 * fRec107[1]);
			float fTemp63 = fRec107[2] + fRec107[0] + 2.0f * fRec107[1];
			fVec15[0] = fTemp63;
			fRec106[0] = 0.0f - fConst142 * (fConst133 * fRec106[1] - fConst116 * (fTemp63 + fVec15[1]));
			fRec105[0] = fRec106[0] - fConst128 * (fConst135 * fRec105[2] + fConst35 * fRec105[1]);
			fRec104[0] = fConst128 * (fRec105[2] + fRec105[0] + 2.0f * fRec105[1]) - fConst127 * (fConst137 * fRec104[2] + fConst35 * fRec104[1]);
			float fTemp64 = fRec104[2] + fRec104[0] + 2.0f * fRec104[1];
			fVec16[0] = fTemp64;
			fRec103[0] = fConst127 * (fConst141 * fTemp64 + fConst143 * fVec16[1]) - fConst145 * fRec103[1];
			fRec102[0] = fRec103[0] - fConst139 * (fConst146 * fRec102[2] + fConst28 * fRec102[1]);
			fRec101[0] = fConst139 * (fConst27 * fRec102[0] + fConst147 * fRec102[1] + fConst27 * fRec102[2]) - fConst138 * (fConst148 * fRec101[2] + fConst28 * fRec101[1]);
			float fTemp65 = fConst21 * fRec100[1];
			fRec100[0] = fConst138 * (fConst27 * fRec101[0] + fConst147 * fRec101[1] + fConst27 * fRec101[2]) - fConst17 * (fConst18 * fRec100[2] + fTemp65);
			fRec129[0] = fConst116 * (fConst130 * fTemp63 + fConst132 * fVec15[1]) - fConst134 * fRec129[1];
			fRec128[0] = fRec129[0] - fConst128 * (fConst135 * fRec128[2] + fConst35 * fRec128[1]);
			fRec127[0] = fConst128 * (fConst34 * fRec128[0] + fConst136 * fRec128[1] + fConst34 * fRec128[2]) - fConst127 * (fConst137 * fRec127[2] + fConst35 * fRec127[1]);
			float fTemp66 = fConst21 * fRec126[1];
			fRec126[0] = fConst127 * (fConst34 * fRec127[0] + fConst136 * fRec127[1] + fConst34 * fRec127[2]) - fConst17 * (fConst18 * fRec126[2] + fTemp66);
			float fTemp67 = fConst28 * fRec125[1];
			fRec125[0] = fRec126[2] + fConst17 * (fTemp66 + fConst18 * fRec126[0]) - fConst24 * (fConst25 * fRec125[2] + fTemp67);
			fRec135[0] = fConst105 * (fConst119 * fTemp62 + fConst121 * fVec14[1]) - fConst123 * fRec135[1];
			fRec134[0] = fRec135[0] - fConst117 * (fConst124 * fRec134[2] + fConst42 * fRec134[1]);
			fRec133[0] = fConst117 * (fConst41 * fRec134[0] + fConst125 * fRec134[1] + fConst41 * fRec134[2]) - fConst116 * (fConst126 * fRec133[2] + fConst42 * fRec133[1]);
			float fTemp68 = fConst21 * fRec132[1];
			fRec132[0] = fConst116 * (fConst41 * fRec133[0] + fConst125 * fRec133[1] + fConst41 * fRec133[2]) - fConst17 * (fConst18 * fRec132[2] + fTemp68);
			float fTemp69 = fConst28 * fRec131[1];
			fRec131[0] = fRec132[2] + fConst17 * (fTemp68 + fConst18 * fRec132[0]) - fConst24 * (fConst25 * fRec131[2] + fTemp69);
			float fTemp70 = fConst35 * fRec130[1];
			fRec130[0] = fRec131[2] + fConst24 * (fTemp69 + fConst25 * fRec131[0]) - fConst31 * (fConst32 * fRec130[2] + fTemp70);
			fRec142[0] = fConst94 * (fConst108 * fTemp61 + fConst110 * fVec13[1]) - fConst112 * fRec142[1];
			fRec141[0] = fRec142[0] - fConst106 * (fConst113 * fRec141[2] + fConst49 * fRec141[1]);
			fRec140[0] = fConst106 * (fConst48 * fRec141[0] + fConst114 * fRec141[1] + fConst48 * fRec141[2]) - fConst105 * (fConst115 * fRec140[2] + fConst49 * fRec140[1]);
			float fTemp71 = fConst21 * fRec139[1];
			fRec139[0] = fConst105 * (fConst48 * fRec140[0] + fConst114 * fRec140[1] + fConst48 * fRec140[2]) - fConst17 * (fConst18 * fRec139[2] + fTemp71);
			float fTemp72 = fConst28 * fRec138[1];
			fRec138[0] = fRec139[2] + fConst17 * (fTemp71 + fConst18 * fRec139[0]) - fConst24 * (fConst25 * fRec138[2] + fTemp72);
			float fTemp73 = fConst35 * fRec137[1];
			fRec137[0] = fRec138[2] + fConst24 * (fTemp72 + fConst25 * fRec138[0]) - fConst31 * (fConst32 * fRec137[2] + fTemp73);
			float fTemp74 = fConst42 * fRec136[1];
			fRec136[0] = fRec137[2] + fConst31 * (fTemp73 + fConst32 * fRec137[0]) - fConst38 * (fConst39 * fRec136[2] + fTemp74);
			fRec150[0] = fConst83 * (fConst97 * fTemp60 + fConst99 * fVec12[1]) - fConst101 * fRec150[1];
			fRec149[0] = fRec150[0] - fConst95 * (fConst102 * fRec149[2] + fConst56 * fRec149[1]);
			fRec148[0] = fConst95 * (fConst55 * fRec149[0] + fConst103 * fRec149[1] + fConst55 * fRec149[2]) - fConst94 * (fConst104 * fRec148[2] + fConst56 * fRec148[1]);
			float fTemp75 = fConst21 * fRec147[1];
			fRec147[0] = fConst94 * (fConst55 * fRec148[0] + fConst103 * fRec148[1] + fConst55 * fRec148[2]) - fConst17 * (fConst18 * fRec147[2] + fTemp75);
			float fTemp76 = fConst28 * fRec146[1];
			fRec146[0] = fRec147[2] + fConst17 * (fTemp75 + fConst18 * fRec147[0]) - fConst24 * (fConst25 * fRec146[2] + fTemp76);
			float fTemp77 = fConst35 * fRec145[1];
			fRec145[0] = fRec146[2] + fConst24 * (fTemp76 + fConst25 * fRec146[0]) - fConst31 * (fConst32 * fRec145[2] + fTemp77);
			float fTemp78 = fConst42 * fRec144[1];
			fRec144[0] = fRec145[2] + fConst31 * (fTemp77 + fConst32 * fRec145[0]) - fConst38 * (fConst39 * fRec144[2] + fTemp78);
			float fTemp79 = fConst49 * fRec143[1];
			fRec143[0] = fRec144[2] + fConst38 * (fTemp78 + fConst39 * fRec144[0]) - fConst45 * (fConst46 * fRec143[2] + fTemp79);
			fRec159[0] = fConst73 * (fConst86 * fTemp59 + fConst88 * fVec11[1]) - fConst90 * fRec159[1];
			fRec158[0] = fRec159[0] - fConst84 * (fConst91 * fRec158[2] + fConst63 * fRec158[1]);
			fRec157[0] = fConst84 * (fConst62 * fRec158[0] + fConst92 * fRec158[1] + fConst62 * fRec158[2]) - fConst83 * (fConst93 * fRec157[2] + fConst63 * fRec157[1]);
			float fTemp80 = fConst21 * fRec156[1];
			fRec156[0] = fConst83 * (fConst62 * fRec157[0] + fConst92 * fRec157[1] + fConst62 * fRec157[2]) - fConst17 * (fConst18 * fRec156[2] + fTemp80);
			float fTemp81 = fConst28 * fRec155[1];
			fRec155[0] = fRec156[2] + fConst17 * (fTemp80 + fConst18 * fRec156[0]) - fConst24 * (fConst25 * fRec155[2] + fTemp81);
			float fTemp82 = fConst35 * fRec154[1];
			fRec154[0] = fRec155[2] + fConst24 * (fTemp81 + fConst25 * fRec155[0]) - fConst31 * (fConst32 * fRec154[2] + fTemp82);
			float fTemp83 = fConst42 * fRec153[1];
			fRec153[0] = fRec154[2] + fConst31 * (fTemp82 + fConst32 * fRec154[0]) - fConst38 * (fConst39 * fRec153[2] + fTemp83);
			float fTemp84 = fConst49 * fRec152[1];
			fRec152[0] = fRec153[2] + fConst38 * (fTemp83 + fConst39 * fRec153[0]) - fConst45 * (fConst46 * fRec152[2] + fTemp84);
			float fTemp85 = fConst56 * fRec151[1];
			fRec151[0] = fRec152[2] + fConst45 * (fTemp84 + fConst46 * fRec152[0]) - fConst52 * (fConst53 * fRec151[2] + fTemp85);
			fRec169[0] = fConst3 * (fConst76 * fTemp58 + fConst77 * fVec10[1]) - fConst79 * fRec169[1];
			fRec168[0] = fRec169[0] - fConst74 * (fConst80 * fRec168[2] + fConst70 * fRec168[1]);
			fRec167[0] = fConst74 * (fConst69 * fRec168[0] + fConst81 * fRec168[1] + fConst69 * fRec168[2]) - fConst73 * (fConst82 * fRec167[2] + fConst70 * fRec167[1]);
			float fTemp86 = fConst21 * fRec166[1];
			fRec166[0] = fConst73 * (fConst69 * fRec167[0] + fConst81 * fRec167[1] + fConst69 * fRec167[2]) - fConst17 * (fConst18 * fRec166[2] + fTemp86);
			float fTemp87 = fConst28 * fRec165[1];
			fRec165[0] = fRec166[2] + fConst17 * (fTemp86 + fConst18 * fRec166[0]) - fConst24 * (fConst25 * fRec165[2] + fTemp87);
			float fTemp88 = fConst35 * fRec164[1];
			fRec164[0] = fRec165[2] + fConst24 * (fTemp87 + fConst25 * fRec165[0]) - fConst31 * (fConst32 * fRec164[2] + fTemp88);
			float fTemp89 = fConst42 * fRec163[1];
			fRec163[0] = fRec164[2] + fConst31 * (fTemp88 + fConst32 * fRec164[0]) - fConst38 * (fConst39 * fRec163[2] + fTemp89);
			float fTemp90 = fConst49 * fRec162[1];
			fRec162[0] = fRec163[2] + fConst38 * (fTemp89 + fConst39 * fRec163[0]) - fConst45 * (fConst46 * fRec162[2] + fTemp90);
			float fTemp91 = fConst56 * fRec161[1];
			fRec161[0] = fRec162[2] + fConst45 * (fTemp90 + fConst46 * fRec162[0]) - fConst52 * (fConst53 * fRec161[2] + fTemp91);
			float fTemp92 = fConst63 * fRec160[1];
			fRec160[0] = fRec161[2] + fConst52 * (fTemp91 + fConst53 * fRec161[0]) - fConst59 * (fConst60 * fRec160[2] + fTemp92);
			fRec180[0] = fConst8 * fVec9[1] - fConst9 * (fConst10 * fRec180[1] - fConst2 * fTemp57);
			fRec179[0] = fRec180[0] - fConst6 * (fConst11 * fRec179[2] + fConst12 * fRec179[1]);
			fRec178[0] = fConst6 * (fConst5 * fRec179[0] + fConst13 * fRec179[1] + fConst5 * fRec179[2]) - fConst3 * (fConst14 * fRec178[2] + fConst12 * fRec178[1]);
			float fTemp93 = fConst21 * fRec177[1];
			fRec177[0] = fConst3 * (fConst5 * fRec178[0] + fConst13 * fRec178[1] + fConst5 * fRec178[2]) - fConst17 * (fConst18 * fRec177[2] + fTemp93);
			float fTemp94 = fConst28 * fRec176[1];
			fRec176[0] = fRec177[2] + fConst17 * (fTemp93 + fConst18 * fRec177[0]) - fConst24 * (fConst25 * fRec176[2] + fTemp94);
			float fTemp95 = fConst35 * fRec175[1];
			fRec175[0] = fRec176[2] + fConst24 * (fTemp94 + fConst25 * fRec176[0]) - fConst31 * (fConst32 * fRec175[2] + fTemp95);
			float fTemp96 = fConst42 * fRec174[1];
			fRec174[0] = fRec175[2] + fConst31 * (fTemp95 + fConst32 * fRec175[0]) - fConst38 * (fConst39 * fRec174[2] + fTemp96);
			float fTemp97 = fConst49 * fRec173[1];
			fRec173[0] = fRec174[2] + fConst38 * (fTemp96 + fConst39 * fRec174[0]) - fConst45 * (fConst46 * fRec173[2] + fTemp97);
			float fTemp98 = fConst56 * fRec172[1];
			fRec172[0] = fRec173[2] + fConst45 * (fTemp97 + fConst46 * fRec173[0]) - fConst52 * (fConst53 * fRec172[2] + fTemp98);
			float fTemp99 = fConst63 * fRec171[1];
			fRec171[0] = fRec172[2] + fConst52 * (fTemp98 + fConst53 * fRec172[0]) - fConst59 * (fConst60 * fRec171[2] + fTemp99);
			float fTemp100 = fConst70 * fRec170[1];
			fRec170[0] = fRec171[2] + fConst59 * (fTemp99 + fConst60 * fRec171[0]) - fConst66 * (fConst67 * fRec170[2] + fTemp100);
			fRec186[0] = 0.0f - fConst153 * (fConst144 * fRec186[1] - fConst127 * (fTemp64 + fVec16[1]));
			fRec185[0] = fRec186[0] - fConst139 * (fConst146 * fRec185[2] + fConst28 * fRec185[1]);
			fRec184[0] = fConst139 * (fRec185[2] + fRec185[0] + 2.0f * fRec185[1]) - fConst138 * (fConst148 * fRec184[2] + fConst28 * fRec184[1]);
			float fTemp101 = fRec184[2] + fRec184[0] + 2.0f * fRec184[1];
			fVec17[0] = fTemp101;
			fRec183[0] = fConst138 * (fConst152 * fTemp101 + fConst154 * fVec17[1]) - fConst156 * fRec183[1];
			fRec182[0] = fRec183[0] - fConst150 * (fConst157 * fRec182[2] + fConst21 * fRec182[1]);
			fRec181[0] = fConst150 * (fConst20 * fRec182[0] + fConst158 * fRec182[1] + fConst20 * fRec182[2]) - fConst149 * (fConst159 * fRec181[2] + fConst21 * fRec181[1]);
			fRec189[0] = 0.0f - fConst160 * (fConst155 * fRec189[1] - fConst138 * (fTemp101 + fVec17[1]));
			fRec188[0] = fRec189[0] - fConst150 * (fConst157 * fRec188[2] + fConst21 * fRec188[1]);
			fRec187[0] = fConst150 * (fRec188[2] + fRec188[0] + 2.0f * fRec188[1]) - fConst149 * (fConst159 * fRec187[2] + fConst21 * fRec187[1]);
			output1[i0] = FAUSTFLOAT(((iSlow0) ? fTemp56 : fTemp52 * (fRec100[2] + fConst17 * (fTemp65 + fConst18 * fRec100[0])) + fTemp49 * (fRec125[2] + fConst24 * (fTemp67 + fConst25 * fRec125[0])) + fTemp45 * (fRec130[2] + fConst31 * (fTemp70 + fConst32 * fRec130[0])) + fTemp40 * (fRec136[2] + fConst38 * (fTemp74 + fConst39 * fRec136[0])) + fTemp34 * (fRec143[2] + fConst45 * (fTemp79 + fConst46 * fRec143[0])) + fTemp27 * (fRec151[2] + fConst52 * (fTemp85 + fConst53 * fRec151[0])) + fTemp19 * (fRec160[2] + fConst59 * (fTemp92 + fConst60 * fRec160[0])) + fTemp10 * (fRec170[2] + fConst66 * (fTemp100 + fConst67 * fRec170[0])) + fConst149 * (fTemp54 * (fConst20 * fRec181[0] + fConst158 * fRec181[1] + fConst20 * fRec181[2]) + fTemp55 * (fRec187[2] + fRec187[0] + 2.0f * fRec187[1]))));
			fVec0[1] = fVec0[0];
			fRec10[1] = fRec10[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
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
			fRec11[1] = fRec11[0];
			fRec24[1] = fRec24[0];
			fRec23[2] = fRec23[1];
			fRec23[1] = fRec23[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fVec1[1] = fVec1[0];
			fRec21[1] = fRec21[0];
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec25[1] = fRec25[0];
			fRec37[1] = fRec37[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fVec2[1] = fVec2[0];
			fRec34[1] = fRec34[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fRec31[2] = fRec31[1];
			fRec31[1] = fRec31[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec29[2] = fRec29[1];
			fRec29[1] = fRec29[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec38[1] = fRec38[0];
			fRec49[1] = fRec49[0];
			fRec48[2] = fRec48[1];
			fRec48[1] = fRec48[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fVec3[1] = fVec3[0];
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
			fRec50[1] = fRec50[0];
			fRec60[1] = fRec60[0];
			fRec59[2] = fRec59[1];
			fRec59[1] = fRec59[0];
			fRec58[2] = fRec58[1];
			fRec58[1] = fRec58[0];
			fVec4[1] = fVec4[0];
			fRec57[1] = fRec57[0];
			fRec56[2] = fRec56[1];
			fRec56[1] = fRec56[0];
			fRec55[2] = fRec55[1];
			fRec55[1] = fRec55[0];
			fRec54[2] = fRec54[1];
			fRec54[1] = fRec54[0];
			fRec53[2] = fRec53[1];
			fRec53[1] = fRec53[0];
			fRec52[2] = fRec52[1];
			fRec52[1] = fRec52[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
			fRec61[1] = fRec61[0];
			fRec70[1] = fRec70[0];
			fRec69[2] = fRec69[1];
			fRec69[1] = fRec69[0];
			fRec68[2] = fRec68[1];
			fRec68[1] = fRec68[0];
			fVec5[1] = fVec5[0];
			fRec67[1] = fRec67[0];
			fRec66[2] = fRec66[1];
			fRec66[1] = fRec66[0];
			fRec65[2] = fRec65[1];
			fRec65[1] = fRec65[0];
			fRec64[2] = fRec64[1];
			fRec64[1] = fRec64[0];
			fRec63[2] = fRec63[1];
			fRec63[1] = fRec63[0];
			fRec62[2] = fRec62[1];
			fRec62[1] = fRec62[0];
			fRec71[1] = fRec71[0];
			fRec79[1] = fRec79[0];
			fRec78[2] = fRec78[1];
			fRec78[1] = fRec78[0];
			fRec77[2] = fRec77[1];
			fRec77[1] = fRec77[0];
			fVec6[1] = fVec6[0];
			fRec76[1] = fRec76[0];
			fRec75[2] = fRec75[1];
			fRec75[1] = fRec75[0];
			fRec74[2] = fRec74[1];
			fRec74[1] = fRec74[0];
			fRec73[2] = fRec73[1];
			fRec73[1] = fRec73[0];
			fRec72[2] = fRec72[1];
			fRec72[1] = fRec72[0];
			fRec80[1] = fRec80[0];
			fRec87[1] = fRec87[0];
			fRec86[2] = fRec86[1];
			fRec86[1] = fRec86[0];
			fRec85[2] = fRec85[1];
			fRec85[1] = fRec85[0];
			fVec7[1] = fVec7[0];
			fRec84[1] = fRec84[0];
			fRec83[2] = fRec83[1];
			fRec83[1] = fRec83[0];
			fRec82[2] = fRec82[1];
			fRec82[1] = fRec82[0];
			fRec81[2] = fRec81[1];
			fRec81[1] = fRec81[0];
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
			fVec9[1] = fVec9[0];
			fRec124[1] = fRec124[0];
			fRec123[2] = fRec123[1];
			fRec123[1] = fRec123[0];
			fRec122[2] = fRec122[1];
			fRec122[1] = fRec122[0];
			fVec10[1] = fVec10[0];
			fRec121[1] = fRec121[0];
			fRec120[2] = fRec120[1];
			fRec120[1] = fRec120[0];
			fRec119[2] = fRec119[1];
			fRec119[1] = fRec119[0];
			fVec11[1] = fVec11[0];
			fRec118[1] = fRec118[0];
			fRec117[2] = fRec117[1];
			fRec117[1] = fRec117[0];
			fRec116[2] = fRec116[1];
			fRec116[1] = fRec116[0];
			fVec12[1] = fVec12[0];
			fRec115[1] = fRec115[0];
			fRec114[2] = fRec114[1];
			fRec114[1] = fRec114[0];
			fRec113[2] = fRec113[1];
			fRec113[1] = fRec113[0];
			fVec13[1] = fVec13[0];
			fRec112[1] = fRec112[0];
			fRec111[2] = fRec111[1];
			fRec111[1] = fRec111[0];
			fRec110[2] = fRec110[1];
			fRec110[1] = fRec110[0];
			fVec14[1] = fVec14[0];
			fRec109[1] = fRec109[0];
			fRec108[2] = fRec108[1];
			fRec108[1] = fRec108[0];
			fRec107[2] = fRec107[1];
			fRec107[1] = fRec107[0];
			fVec15[1] = fVec15[0];
			fRec106[1] = fRec106[0];
			fRec105[2] = fRec105[1];
			fRec105[1] = fRec105[0];
			fRec104[2] = fRec104[1];
			fRec104[1] = fRec104[0];
			fVec16[1] = fVec16[0];
			fRec103[1] = fRec103[0];
			fRec102[2] = fRec102[1];
			fRec102[1] = fRec102[0];
			fRec101[2] = fRec101[1];
			fRec101[1] = fRec101[0];
			fRec100[2] = fRec100[1];
			fRec100[1] = fRec100[0];
			fRec129[1] = fRec129[0];
			fRec128[2] = fRec128[1];
			fRec128[1] = fRec128[0];
			fRec127[2] = fRec127[1];
			fRec127[1] = fRec127[0];
			fRec126[2] = fRec126[1];
			fRec126[1] = fRec126[0];
			fRec125[2] = fRec125[1];
			fRec125[1] = fRec125[0];
			fRec135[1] = fRec135[0];
			fRec134[2] = fRec134[1];
			fRec134[1] = fRec134[0];
			fRec133[2] = fRec133[1];
			fRec133[1] = fRec133[0];
			fRec132[2] = fRec132[1];
			fRec132[1] = fRec132[0];
			fRec131[2] = fRec131[1];
			fRec131[1] = fRec131[0];
			fRec130[2] = fRec130[1];
			fRec130[1] = fRec130[0];
			fRec142[1] = fRec142[0];
			fRec141[2] = fRec141[1];
			fRec141[1] = fRec141[0];
			fRec140[2] = fRec140[1];
			fRec140[1] = fRec140[0];
			fRec139[2] = fRec139[1];
			fRec139[1] = fRec139[0];
			fRec138[2] = fRec138[1];
			fRec138[1] = fRec138[0];
			fRec137[2] = fRec137[1];
			fRec137[1] = fRec137[0];
			fRec136[2] = fRec136[1];
			fRec136[1] = fRec136[0];
			fRec150[1] = fRec150[0];
			fRec149[2] = fRec149[1];
			fRec149[1] = fRec149[0];
			fRec148[2] = fRec148[1];
			fRec148[1] = fRec148[0];
			fRec147[2] = fRec147[1];
			fRec147[1] = fRec147[0];
			fRec146[2] = fRec146[1];
			fRec146[1] = fRec146[0];
			fRec145[2] = fRec145[1];
			fRec145[1] = fRec145[0];
			fRec144[2] = fRec144[1];
			fRec144[1] = fRec144[0];
			fRec143[2] = fRec143[1];
			fRec143[1] = fRec143[0];
			fRec159[1] = fRec159[0];
			fRec158[2] = fRec158[1];
			fRec158[1] = fRec158[0];
			fRec157[2] = fRec157[1];
			fRec157[1] = fRec157[0];
			fRec156[2] = fRec156[1];
			fRec156[1] = fRec156[0];
			fRec155[2] = fRec155[1];
			fRec155[1] = fRec155[0];
			fRec154[2] = fRec154[1];
			fRec154[1] = fRec154[0];
			fRec153[2] = fRec153[1];
			fRec153[1] = fRec153[0];
			fRec152[2] = fRec152[1];
			fRec152[1] = fRec152[0];
			fRec151[2] = fRec151[1];
			fRec151[1] = fRec151[0];
			fRec169[1] = fRec169[0];
			fRec168[2] = fRec168[1];
			fRec168[1] = fRec168[0];
			fRec167[2] = fRec167[1];
			fRec167[1] = fRec167[0];
			fRec166[2] = fRec166[1];
			fRec166[1] = fRec166[0];
			fRec165[2] = fRec165[1];
			fRec165[1] = fRec165[0];
			fRec164[2] = fRec164[1];
			fRec164[1] = fRec164[0];
			fRec163[2] = fRec163[1];
			fRec163[1] = fRec163[0];
			fRec162[2] = fRec162[1];
			fRec162[1] = fRec162[0];
			fRec161[2] = fRec161[1];
			fRec161[1] = fRec161[0];
			fRec160[2] = fRec160[1];
			fRec160[1] = fRec160[0];
			fRec180[1] = fRec180[0];
			fRec179[2] = fRec179[1];
			fRec179[1] = fRec179[0];
			fRec178[2] = fRec178[1];
			fRec178[1] = fRec178[0];
			fRec177[2] = fRec177[1];
			fRec177[1] = fRec177[0];
			fRec176[2] = fRec176[1];
			fRec176[1] = fRec176[0];
			fRec175[2] = fRec175[1];
			fRec175[1] = fRec175[0];
			fRec174[2] = fRec174[1];
			fRec174[1] = fRec174[0];
			fRec173[2] = fRec173[1];
			fRec173[1] = fRec173[0];
			fRec172[2] = fRec172[1];
			fRec172[1] = fRec172[0];
			fRec171[2] = fRec171[1];
			fRec171[1] = fRec171[0];
			fRec170[2] = fRec170[1];
			fRec170[1] = fRec170[0];
			fRec186[1] = fRec186[0];
			fRec185[2] = fRec185[1];
			fRec185[1] = fRec185[0];
			fRec184[2] = fRec184[1];
			fRec184[1] = fRec184[0];
			fVec17[1] = fVec17[0];
			fRec183[1] = fRec183[0];
			fRec182[2] = fRec182[1];
			fRec182[1] = fRec182[0];
			fRec181[2] = fRec181[1];
			fRec181[1] = fRec181[0];
			fRec189[1] = fRec189[0];
			fRec188[2] = fRec188[1];
			fRec188[1] = fRec188[0];
			fRec187[2] = fRec187[1];
			fRec187[1] = fRec187[0];
		}
	}

};

#ifdef FAUST_UIMACROS
	
	#define FAUST_FILE_NAME "filterBank.dsp"
	#define FAUST_CLASS_NAME "_filterBank"
	#define FAUST_COMPILATION_OPIONS "-lang cpp -rui -nvi -ct 1 -cn _filterBank -scn ::faust::dsp -es 1 -mcd 16 -uim -single -ftz 0"
	#define FAUST_INPUTS 2
	#define FAUST_OUTPUTS 2
	#define FAUST_ACTIVES 11
	#define FAUST_PASSIVES 0

	FAUST_ADDCHECKBOX("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[0]/Bypass", fCheckbox0);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 1", fVslider9, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 2", fVslider8, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 3", fVslider7, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 4", fVslider6, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 5", fVslider5, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 6", fVslider4, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 7", fVslider3, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 8", fVslider2, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 9", fVslider1, -1e+01f, -7e+01f, 1e+01f, 0.1f);
	FAUST_ADDVERTICALSLIDER("CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band10", fVslider0, -1e+01f, -7e+01f, 1e+01f, 0.1f);

	#define FAUST_LIST_ACTIVES(p) \
		p(CHECKBOX, Bypass, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[0]/Bypass", fCheckbox0, 0.0f, 0.0f, 1.0f, 1.0f) \
		p(VERTICALSLIDER, Band_1, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 1", fVslider9, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_2, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 2", fVslider8, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_3, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 3", fVslider7, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_4, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 4", fVslider6, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_5, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 5", fVslider5, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_6, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 6", fVslider4, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_7, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 7", fVslider3, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_8, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 8", fVslider2, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band_9, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band 9", fVslider1, -1e+01f, -7e+01f, 1e+01f, 0.1f) \
		p(VERTICALSLIDER, Band10, "CONSTANT-Q FILTER BANK (Butterworth dyadic tree)         [tooltip: See Faust's filters.lib for documentation and references]/[1]/Band10", fVslider0, -1e+01f, -7e+01f, 1e+01f, 0.1f) \

	#define FAUST_LIST_PASSIVES(p) \

#endif

#endif
