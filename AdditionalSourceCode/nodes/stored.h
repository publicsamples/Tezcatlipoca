#pragma once

#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
#include "CleanDelay.h"
// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace stored_impl
{
// ==============================| Node & Parameter type declarations |==============================

using cable_table1_t = wrap::data<control::cable_table<parameter::empty>, 
                                  data::external::table<3>>;
using cable_table2_t = wrap::data<control::cable_table<parameter::empty>, 
                                  data::external::table<4>>;

using modchain3_t_ = container::chain<parameter::empty, 
                                      wrap::fix<1, cable_table1_t>, 
                                      cable_table2_t>;

using modchain3_t = wrap::control_rate<modchain3_t_>;

DECLARE_PARAMETER_RANGE_SKEW(xfader2_c0Range, 
                             -100., 
                             0., 
                             5.42227);

template <int NV>
using xfader2_c0 = parameter::from0To1<core::gain<NV>, 
                                       0, 
                                       xfader2_c0Range>;

template <int NV> using xfader2_c1 = xfader2_c0<NV>;

template <int NV>
using xfader2_multimod = parameter::list<xfader2_c0<NV>, xfader2_c1<NV>>;

template <int NV>
using xfader2_t = control::xfader<xfader2_multimod<NV>, faders::overlap>;

template <int NV>
using chain42_t = container::chain<parameter::empty, 
                                   wrap::fix<2, core::gain<NV>>>;

template <int NV>
using ramp_t = wrap::no_data<core::ramp<NV, false>>;
template <int NV> using ramp3_t = ramp_t<NV>;

template <int NV>
using cable_table5_mod = parameter::chain<ranges::Identity, 
                                          parameter::plain<ramp_t<NV>, 1>, 
                                          parameter::plain<ramp3_t<NV>, 1>>;

struct cable_table5_t_data
{
	span<float, 512> data =
	{
		1.f, 0.998043f, 0.996086f, 0.994129f, 0.992172f, 0.990215f,
		0.988258f, 0.986301f, 0.984344f, 0.982387f, 0.980431f, 0.978474f,
		0.976517f, 0.97456f, 0.972603f, 0.970646f, 0.968689f, 0.966732f,
		0.964775f, 0.962818f, 0.960861f, 0.958904f, 0.956947f, 0.95499f,
		0.953033f, 0.951076f, 0.949119f, 0.947162f, 0.945205f, 0.943249f,
		0.941292f, 0.939335f, 0.937378f, 0.935421f, 0.933464f, 0.931507f,
		0.92955f, 0.927593f, 0.925636f, 0.923679f, 0.921722f, 0.919765f,
		0.917808f, 0.915851f, 0.913894f, 0.911937f, 0.90998f, 0.908023f,
		0.906067f, 0.90411f, 0.902153f, 0.900196f, 0.898239f, 0.896282f,
		0.894325f, 0.892368f, 0.890411f, 0.888454f, 0.886497f, 0.88454f,
		0.882583f, 0.880626f, 0.878669f, 0.876712f, 0.874755f, 0.872798f,
		0.870842f, 0.868885f, 0.866928f, 0.864971f, 0.863014f, 0.861057f,
		0.8591f, 0.857143f, 0.855186f, 0.853229f, 0.851272f, 0.849315f,
		0.847358f, 0.845401f, 0.843444f, 0.841487f, 0.83953f, 0.837573f,
		0.835616f, 0.833659f, 0.831703f, 0.829746f, 0.827789f, 0.825832f,
		0.823875f, 0.821918f, 0.819961f, 0.818004f, 0.816047f, 0.81409f,
		0.812133f, 0.810176f, 0.808219f, 0.806262f, 0.804305f, 0.802348f,
		0.800391f, 0.798434f, 0.796477f, 0.794521f, 0.792564f, 0.790607f,
		0.78865f, 0.786693f, 0.784736f, 0.782779f, 0.780822f, 0.778865f,
		0.776908f, 0.774951f, 0.772994f, 0.771037f, 0.76908f, 0.767123f,
		0.765166f, 0.763209f, 0.761252f, 0.759295f, 0.757339f, 0.755382f,
		0.753425f, 0.751468f, 0.749511f, 0.747554f, 0.745597f, 0.74364f,
		0.741683f, 0.739726f, 0.737769f, 0.735812f, 0.733855f, 0.731898f,
		0.729941f, 0.727984f, 0.726027f, 0.72407f, 0.722113f, 0.720157f,
		0.7182f, 0.716243f, 0.714286f, 0.712329f, 0.710372f, 0.708415f,
		0.706458f, 0.704501f, 0.702544f, 0.700587f, 0.69863f, 0.696673f,
		0.694716f, 0.692759f, 0.690802f, 0.688845f, 0.686888f, 0.684932f,
		0.682975f, 0.681018f, 0.679061f, 0.677104f, 0.675147f, 0.67319f,
		0.671233f, 0.669276f, 0.667319f, 0.665362f, 0.663405f, 0.661448f,
		0.659491f, 0.657534f, 0.655577f, 0.65362f, 0.651663f, 0.649706f,
		0.64775f, 0.645793f, 0.643836f, 0.641879f, 0.639922f, 0.637965f,
		0.636008f, 0.634051f, 0.632094f, 0.630137f, 0.62818f, 0.626223f,
		0.624266f, 0.622309f, 0.620352f, 0.618395f, 0.616438f, 0.614481f,
		0.612524f, 0.610568f, 0.608611f, 0.606654f, 0.604697f, 0.60274f,
		0.600783f, 0.598826f, 0.596869f, 0.594912f, 0.592955f, 0.590998f,
		0.589041f, 0.587084f, 0.585127f, 0.58317f, 0.581213f, 0.579256f,
		0.577299f, 0.575342f, 0.573385f, 0.571429f, 0.569472f, 0.567515f,
		0.565558f, 0.563601f, 0.561644f, 0.559687f, 0.55773f, 0.555773f,
		0.553816f, 0.551859f, 0.549902f, 0.547945f, 0.545988f, 0.544031f,
		0.542074f, 0.540117f, 0.53816f, 0.536204f, 0.534247f, 0.53229f,
		0.530333f, 0.528376f, 0.526419f, 0.524462f, 0.522505f, 0.520548f,
		0.518591f, 0.516634f, 0.514677f, 0.51272f, 0.510763f, 0.508806f,
		0.506849f, 0.504892f, 0.502935f, 0.500978f, 0.499022f, 0.497065f,
		0.495108f, 0.493151f, 0.491194f, 0.489237f, 0.48728f, 0.485323f,
		0.483366f, 0.481409f, 0.479452f, 0.477495f, 0.475538f, 0.473581f,
		0.471624f, 0.469667f, 0.46771f, 0.465753f, 0.463796f, 0.46184f,
		0.459883f, 0.457926f, 0.455969f, 0.454012f, 0.452055f, 0.450098f,
		0.448141f, 0.446184f, 0.444227f, 0.44227f, 0.440313f, 0.438356f,
		0.436399f, 0.434442f, 0.432485f, 0.430528f, 0.428571f, 0.426614f,
		0.424658f, 0.422701f, 0.420744f, 0.418787f, 0.41683f, 0.414873f,
		0.412916f, 0.410959f, 0.409002f, 0.407045f, 0.405088f, 0.403131f,
		0.401174f, 0.399217f, 0.39726f, 0.395303f, 0.393346f, 0.391389f,
		0.389432f, 0.387476f, 0.385519f, 0.383562f, 0.381605f, 0.379648f,
		0.377691f, 0.375734f, 0.373777f, 0.37182f, 0.369863f, 0.367906f,
		0.365949f, 0.363992f, 0.362035f, 0.360078f, 0.358121f, 0.356164f,
		0.354207f, 0.352251f, 0.350294f, 0.348337f, 0.34638f, 0.344423f,
		0.342466f, 0.340509f, 0.338552f, 0.336595f, 0.334638f, 0.332681f,
		0.330724f, 0.328767f, 0.32681f, 0.324853f, 0.322896f, 0.320939f,
		0.318982f, 0.317025f, 0.315068f, 0.313112f, 0.311155f, 0.309198f,
		0.307241f, 0.305284f, 0.303327f, 0.30137f, 0.299413f, 0.297456f,
		0.295499f, 0.293542f, 0.291585f, 0.289628f, 0.287671f, 0.285714f,
		0.283757f, 0.2818f, 0.279843f, 0.277887f, 0.27593f, 0.273973f,
		0.272016f, 0.270059f, 0.268102f, 0.266145f, 0.264188f, 0.262231f,
		0.260274f, 0.258317f, 0.25636f, 0.254403f, 0.252446f, 0.250489f,
		0.248532f, 0.246575f, 0.244618f, 0.242661f, 0.240704f, 0.238748f,
		0.236791f, 0.234834f, 0.232877f, 0.23092f, 0.228963f, 0.227006f,
		0.225049f, 0.223092f, 0.221135f, 0.219178f, 0.217221f, 0.215264f,
		0.213307f, 0.21135f, 0.209393f, 0.207436f, 0.205479f, 0.203523f,
		0.201566f, 0.199609f, 0.197652f, 0.195695f, 0.193738f, 0.191781f,
		0.189824f, 0.187867f, 0.18591f, 0.183953f, 0.181996f, 0.180039f,
		0.178082f, 0.176125f, 0.174168f, 0.172211f, 0.170254f, 0.168297f,
		0.166341f, 0.164384f, 0.162427f, 0.16047f, 0.158513f, 0.156556f,
		0.154599f, 0.152642f, 0.150685f, 0.148728f, 0.146771f, 0.144814f,
		0.142857f, 0.1409f, 0.138943f, 0.136986f, 0.135029f, 0.133072f,
		0.131115f, 0.129158f, 0.127202f, 0.125245f, 0.123288f, 0.121331f,
		0.119374f, 0.117417f, 0.11546f, 0.113503f, 0.111546f, 0.109589f,
		0.107632f, 0.105675f, 0.103718f, 0.101761f, 0.0998043f, 0.0978474f,
		0.0958903f, 0.0939335f, 0.0919765f, 0.0900196f, 0.0880627f, 0.0861056f,
		0.0841488f, 0.0821917f, 0.0802348f, 0.0782779f, 0.0763209f, 0.0743641f,
		0.072407f, 0.0704501f, 0.0684931f, 0.0665362f, 0.0645792f, 0.0626223f,
		0.0606654f, 0.0587084f, 0.0567515f, 0.0547945f, 0.0528376f, 0.0508806f,
		0.0489237f, 0.0469668f, 0.0450097f, 0.0430529f, 0.0410959f, 0.039139f,
		0.037182f, 0.035225f, 0.0332682f, 0.0313111f, 0.0293542f, 0.0273973f,
		0.0254403f, 0.0234835f, 0.0215264f, 0.0195695f, 0.0176125f, 0.0156556f,
		0.0136986f, 0.0117417f, 0.00978482f, 0.00782776f, 0.00587088f, 0.00391382f,
		0.00195694f, 0.f
	};
};

template <int NV>
using cable_table5_t = wrap::data<control::cable_table<cable_table5_mod<NV>>, 
                                  data::embedded::table<cable_table5_t_data>>;

template <int NV>
using tempo_sync8_t = wrap::mod<parameter::plain<ramp_t<NV>, 0>, 
                                control::tempo_sync<NV>>;

template <int NV>
using chain45_t = container::chain<parameter::empty, 
                                   wrap::fix<1, tempo_sync8_t<NV>>, 
                                   ramp_t<NV>>;

template <int NV>
using transport_t = wrap::mod<parameter::plain<ramp3_t<NV>, 2>, 
                              control::transport<NV>>;

template <int NV>
using tempo_sync11_t = wrap::mod<parameter::plain<ramp3_t<NV>, 0>, 
                                 control::tempo_sync<NV>>;

template <int NV>
using chain62_t = container::chain<parameter::empty, 
                                   wrap::fix<1, transport_t<NV>>, 
                                   tempo_sync11_t<NV>, 
                                   ramp3_t<NV>>;
template <int NV>
using branch16_t = container::branch<parameter::empty, 
                                     wrap::fix<1, chain45_t<NV>>, 
                                     chain62_t<NV>>;

template <int NV>
using cable_table_t = wrap::data<control::cable_table<parameter::plain<math::add<NV>, 0>>, 
                                 data::external::table<0>>;
template <int NV>
using peak3_t = wrap::mod<parameter::plain<cable_table_t<NV>, 0>, 
                          wrap::no_data<core::peak>>;

template <int NV>
using chain44_t = container::chain<parameter::empty, 
                                   wrap::fix<1, cable_table5_t<NV>>, 
                                   branch16_t<NV>, 
                                   peak3_t<NV>>;

template <int NV> using xfader_c0 = xfader2_c0<NV>;

template <int NV> using xfader_c1 = xfader2_c0<NV>;

template <int NV> using xfader_c2 = xfader2_c0<NV>;

template <int NV> using xfader_c3 = xfader2_c0<NV>;

template <int NV> using xfader_c4 = xfader2_c0<NV>;

template <int NV> using xfader_c5 = xfader2_c0<NV>;

template <int NV> using xfader_c6 = xfader2_c0<NV>;

template <int NV> using xfader_c7 = xfader2_c0<NV>;

template <int NV>
using xfader_multimod = parameter::list<xfader_c0<NV>, 
                                        xfader_c1<NV>, 
                                        xfader_c2<NV>, 
                                        xfader_c3<NV>, 
                                        xfader_c4<NV>, 
                                        xfader_c5<NV>, 
                                        xfader_c6<NV>, 
                                        xfader_c7<NV>>;

template <int NV>
using xfader_t = control::xfader<xfader_multimod<NV>, faders::switcher>;
template <int NV>
using pma_t = control::pma<NV, 
                           parameter::plain<xfader_t<NV>, 0>>;
template <int NV>
using peak_t = wrap::mod<parameter::plain<pma_t<NV>, 0>, 
                         wrap::no_data<core::peak>>;

template <int NV>
using chain48_t = container::chain<parameter::empty, 
                                   wrap::fix<1, math::clear<NV>>, 
                                   cable_table_t<NV>, 
                                   math::add<NV>, 
                                   peak_t<NV>, 
                                   math::clear<NV>>;

template <int NV>
using modchain_t_ = container::chain<parameter::empty, 
                                     wrap::fix<1, chain44_t<NV>>, 
                                     chain48_t<NV>>;

template <int NV>
using modchain_t = wrap::control_rate<modchain_t_<NV>>;

template <int NV> using ramp2_t = ramp_t<NV>;
template <int NV>
using tempo_sync10_t = wrap::mod<parameter::plain<ramp2_t<NV>, 0>, 
                                 control::tempo_sync<NV>>;

template <int NV>
using chain60_t = container::chain<parameter::empty, 
                                   wrap::fix<1, tempo_sync10_t<NV>>, 
                                   ramp2_t<NV>>;
template <int NV>
using clock_ramp2_t = wrap::no_data<core::clock_ramp<NV, false>>;

template <int NV>
using chain61_t = container::chain<parameter::empty, 
                                   wrap::fix<1, clock_ramp2_t<NV>>>;
template <int NV>
using branch29_t = container::branch<parameter::empty, 
                                     wrap::fix<1, chain60_t<NV>>, 
                                     chain61_t<NV>>;

template <int NV>
using cable_table3_t = wrap::data<control::cable_table<parameter::plain<math::add<NV>, 0>>, 
                                  data::external::table<1>>;

template <int NV>
using cable_pack2_t = wrap::data<control::cable_pack<parameter::plain<math::add<NV>, 0>>, 
                                 data::external::sliderpack<8>>;

template <int NV>
using peak5_mod = parameter::chain<ranges::Identity, 
                                   parameter::plain<cable_table3_t<NV>, 0>, 
                                   parameter::plain<cable_pack2_t<NV>, 0>>;

template <int NV>
using peak5_t = wrap::mod<peak5_mod<NV>, 
                          wrap::no_data<core::peak>>;

template <int NV>
using chain59_t = container::chain<parameter::empty, 
                                   wrap::fix<1, branch29_t<NV>>, 
                                   peak5_t<NV>>;

template <int NV>
using chain50_t = container::chain<parameter::empty, 
                                   wrap::fix<1, cable_table3_t<NV>>, 
                                   math::add<NV>>;

template <int NV>
using chain51_t = container::chain<parameter::empty, 
                                   wrap::fix<1, cable_pack2_t<NV>>, 
                                   math::add<NV>>;
template <int NV>
using branch18_t = container::branch<parameter::empty, 
                                     wrap::fix<1, chain50_t<NV>>, 
                                     chain51_t<NV>>;

template <int NV> using xfader1_c0 = xfader2_c0<NV>;

template <int NV> using xfader1_c1 = xfader2_c0<NV>;

template <int NV> using xfader1_c2 = xfader2_c0<NV>;

template <int NV> using xfader1_c3 = xfader2_c0<NV>;

template <int NV> using xfader1_c4 = xfader2_c0<NV>;

template <int NV> using xfader1_c5 = xfader2_c0<NV>;

template <int NV> using xfader1_c6 = xfader2_c0<NV>;

template <int NV> using xfader1_c7 = xfader2_c0<NV>;

template <int NV>
using xfader1_multimod = parameter::list<xfader1_c0<NV>, 
                                         xfader1_c1<NV>, 
                                         xfader1_c2<NV>, 
                                         xfader1_c3<NV>, 
                                         xfader1_c4<NV>, 
                                         xfader1_c5<NV>, 
                                         xfader1_c6<NV>, 
                                         xfader1_c7<NV>>;

template <int NV>
using xfader1_t = control::xfader<xfader1_multimod<NV>, faders::switcher>;
template <int NV>
using pma5_t = control::pma<NV, 
                            parameter::plain<xfader1_t<NV>, 0>>;
template <int NV>
using peak1_t = wrap::mod<parameter::plain<pma5_t<NV>, 0>, 
                          wrap::no_data<core::peak>>;

template <int NV>
using chain49_t = container::chain<parameter::empty, 
                                   wrap::fix<1, math::clear<NV>>, 
                                   branch18_t<NV>, 
                                   peak1_t<NV>, 
                                   math::clear<NV>, 
                                   math::clear<NV>>;

template <int NV>
using modchain2_t_ = container::chain<parameter::empty, 
                                      wrap::fix<1, chain59_t<NV>>, 
                                      chain49_t<NV>>;

template <int NV>
using modchain2_t = wrap::control_rate<modchain2_t_<NV>>;

template <int NV> using ramp1_t = ramp_t<NV>;
template <int NV>
using tempo_sync9_t = wrap::mod<parameter::plain<ramp1_t<NV>, 0>, 
                                control::tempo_sync<NV>>;

template <int NV>
using chain57_t = container::chain<parameter::empty, 
                                   wrap::fix<1, tempo_sync9_t<NV>>, 
                                   ramp1_t<NV>>;
template <int NV> using clock_ramp1_t = clock_ramp2_t<NV>;

template <int NV>
using chain58_t = container::chain<parameter::empty, 
                                   wrap::fix<1, clock_ramp1_t<NV>>>;
template <int NV>
using branch28_t = container::branch<parameter::empty, 
                                     wrap::fix<1, chain57_t<NV>>, 
                                     chain58_t<NV>>;

template <int NV>
using cable_table4_t = wrap::data<control::cable_table<parameter::plain<math::add<NV>, 0>>, 
                                  data::external::table<2>>;

template <int NV>
using cable_pack3_t = wrap::data<control::cable_pack<parameter::plain<math::add<NV>, 0>>, 
                                 data::external::sliderpack<9>>;

template <int NV>
using peak4_mod = parameter::chain<ranges::Identity, 
                                   parameter::plain<cable_table4_t<NV>, 0>, 
                                   parameter::plain<cable_pack3_t<NV>, 0>>;

template <int NV>
using peak4_t = wrap::mod<peak4_mod<NV>, 
                          wrap::no_data<core::peak>>;

template <int NV>
using chain56_t = container::chain<parameter::empty, 
                                   wrap::fix<1, math::clear<NV>>, 
                                   branch28_t<NV>, 
                                   peak4_t<NV>>;

template <int NV>
using chain53_t = container::chain<parameter::empty, 
                                   wrap::fix<1, cable_table4_t<NV>>, 
                                   math::add<NV>>;

template <int NV>
using chain54_t = container::chain<parameter::empty, 
                                   wrap::fix<1, cable_pack3_t<NV>>, 
                                   math::add<NV>>;
template <int NV>
using branch19_t = container::branch<parameter::empty, 
                                     wrap::fix<1, chain53_t<NV>>, 
                                     chain54_t<NV>>;

template <int NV>
using tempo_sync1_mod = parameter::chain<ranges::Identity, 
                                         parameter::plain<project::RevDel<NV>, 0>, 
                                         parameter::plain<project::klp2<NV>, 0>, 
                                         parameter::plain<project::granular<NV>, 4>, 
                                         parameter::plain<project::CleanDelay, 0>>;

template <int NV>
using tempo_sync1_t = wrap::mod<tempo_sync1_mod<NV>, 
                                control::tempo_sync<NV>>;
DECLARE_PARAMETER_RANGE_STEP(sliderbank_c0_0Range, 
                             0., 
                             18., 
                             1.);

template <int NV>
using sliderbank_c0_0 = parameter::from0To1<tempo_sync1_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

DECLARE_PARAMETER_RANGE_STEP(sliderbank_c0_1Range, 
                             0., 
                             1000., 
                             0.1);

template <int NV>
using sliderbank_c0_1 = parameter::from0To1<tempo_sync1_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c0 = parameter::chain<ranges::Identity, 
                                       sliderbank_c0_0<NV>, 
                                       sliderbank_c0_1<NV>>;

template <int NV> using tempo_sync_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync_t = wrap::mod<tempo_sync_mod<NV>, 
                               control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c1_0 = parameter::from0To1<tempo_sync_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c1_1 = parameter::from0To1<tempo_sync_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c1 = parameter::chain<ranges::Identity, 
                                       sliderbank_c1_0<NV>, 
                                       sliderbank_c1_1<NV>>;

template <int NV> using tempo_sync7_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync7_t = wrap::mod<tempo_sync7_mod<NV>, 
                                control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c2_0 = parameter::from0To1<tempo_sync7_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c2_1 = parameter::from0To1<tempo_sync7_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c2 = parameter::chain<ranges::Identity, 
                                       sliderbank_c2_0<NV>, 
                                       sliderbank_c2_1<NV>>;

template <int NV> using tempo_sync6_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync6_t = wrap::mod<tempo_sync6_mod<NV>, 
                                control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c3_0 = parameter::from0To1<tempo_sync6_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c3_1 = parameter::from0To1<tempo_sync6_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c3 = parameter::chain<ranges::Identity, 
                                       sliderbank_c3_0<NV>, 
                                       sliderbank_c3_1<NV>>;

template <int NV> using tempo_sync5_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync5_t = wrap::mod<tempo_sync5_mod<NV>, 
                                control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c4_0 = parameter::from0To1<tempo_sync5_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c4_1 = parameter::from0To1<tempo_sync5_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c4 = parameter::chain<ranges::Identity, 
                                       sliderbank_c4_0<NV>, 
                                       sliderbank_c4_1<NV>>;

template <int NV> using tempo_sync4_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync4_t = wrap::mod<tempo_sync4_mod<NV>, 
                                control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c5_0 = parameter::from0To1<tempo_sync4_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c5_1 = parameter::from0To1<tempo_sync4_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c5 = parameter::chain<ranges::Identity, 
                                       sliderbank_c5_0<NV>, 
                                       sliderbank_c5_1<NV>>;

template <int NV> using tempo_sync3_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync3_t = wrap::mod<tempo_sync3_mod<NV>, 
                                control::tempo_sync<NV>>;

template <int NV> using tempo_sync2_mod = tempo_sync1_mod<NV>;

template <int NV>
using tempo_sync2_t = wrap::mod<tempo_sync2_mod<NV>, 
                                control::tempo_sync<NV>>;
template <int NV>
using sliderbank_c6_0 = parameter::from0To1<tempo_sync3_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c6_1 = parameter::from0To1<tempo_sync3_t<NV>, 
                                            3, 
                                            sliderbank_c0_1Range>;

template <int NV>
using sliderbank_c6_2 = parameter::from0To1<tempo_sync2_t<NV>, 
                                            0, 
                                            sliderbank_c0_0Range>;

template <int NV>
using sliderbank_c6 = parameter::chain<ranges::Identity, 
                                       sliderbank_c6_0<NV>, 
                                       sliderbank_c6_1<NV>, 
                                       sliderbank_c6_2<NV>>;

template <int NV>
using sliderbank_c7 = parameter::from0To1<tempo_sync2_t<NV>, 
                                          3, 
                                          sliderbank_c0_1Range>;

template <int NV>
using sliderbank_multimod = parameter::list<sliderbank_c0<NV>, 
                                            sliderbank_c1<NV>, 
                                            sliderbank_c2<NV>, 
                                            sliderbank_c3<NV>, 
                                            sliderbank_c4<NV>, 
                                            sliderbank_c5<NV>, 
                                            sliderbank_c6<NV>, 
                                            sliderbank_c7<NV>>;

template <int NV>
using sliderbank_t = wrap::data<control::sliderbank<sliderbank_multimod<NV>>, 
                                data::external::sliderpack<0>>;
template <int NV>
using pma3_t = control::pma<NV, 
                            parameter::plain<sliderbank_t<NV>, 0>>;

template <int NV>
using sliderbank1_multimod = parameter::list<parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>, 
                                             parameter::plain<project::klp<NV>, 1>>;

template <int NV>
using sliderbank1_t = wrap::data<control::sliderbank<sliderbank1_multimod<NV>>, 
                                 data::external::sliderpack<2>>;
template <int NV>
using pma4_t = control::pma<NV, 
                            parameter::plain<sliderbank1_t<NV>, 0>>;

template <int NV>
using peak2_mod = parameter::chain<ranges::Identity, 
                                   parameter::plain<pma3_t<NV>, 0>, 
                                   parameter::plain<pma4_t<NV>, 0>>;

template <int NV>
using peak2_t = wrap::mod<peak2_mod<NV>, 
                          wrap::no_data<core::peak>>;

template <int NV>
using chain52_t = container::chain<parameter::empty, 
                                   wrap::fix<1, math::clear<NV>>, 
                                   branch19_t<NV>, 
                                   peak2_t<NV>, 
                                   math::clear<NV>>;

template <int NV>
using split2_t = container::split<parameter::empty, 
                                  wrap::fix<1, pma_t<NV>>, 
                                  pma5_t<NV>, 
                                  pma4_t<NV>, 
                                  pma3_t<NV>>;

using sliderbank2_multimod = parameter::list<parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty, 
                                             parameter::empty>;

using sliderbank2_t = wrap::data<control::sliderbank<sliderbank2_multimod>, 
                                 data::external::sliderpack<3>>;

DECLARE_PARAMETER_RANGE(sliderbank4_c0Range, 
                        -1., 
                        1.);

template <int NV>
using sliderbank4_c0 = parameter::from0To1<jdsp::jpanner<NV>, 
                                           0, 
                                           sliderbank4_c0Range>;

template <int NV> using sliderbank4_c1 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c2 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c3 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c4 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c5 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c6 = sliderbank4_c0<NV>;

template <int NV> using sliderbank4_c7 = sliderbank4_c0<NV>;

template <int NV>
using sliderbank4_multimod = parameter::list<sliderbank4_c0<NV>, 
                                             sliderbank4_c1<NV>, 
                                             sliderbank4_c2<NV>, 
                                             sliderbank4_c3<NV>, 
                                             sliderbank4_c4<NV>, 
                                             sliderbank4_c5<NV>, 
                                             sliderbank4_c6<NV>, 
                                             sliderbank4_c7<NV>>;

template <int NV>
using sliderbank4_t = wrap::data<control::sliderbank<sliderbank4_multimod<NV>>, 
                                 data::external::sliderpack<4>>;

template <int NV>
using sliderbank5_multimod = parameter::list<parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>, 
                                             parameter::plain<project::granular<NV>, 0>>;

template <int NV>
using sliderbank5_t = wrap::data<control::sliderbank<sliderbank5_multimod<NV>>, 
                                 data::external::sliderpack<5>>;

DECLARE_PARAMETER_RANGE_STEP(sliderbank6_c0Range, 
                             0.125, 
                             4., 
                             0.001);

template <int NV>
using sliderbank6_c0 = parameter::from0To1<project::granular<NV>, 
                                           3, 
                                           sliderbank6_c0Range>;

template <int NV> using sliderbank6_c1 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c2 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c3 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c4 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c5 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c6 = sliderbank6_c0<NV>;

template <int NV> using sliderbank6_c7 = sliderbank6_c0<NV>;

template <int NV>
using sliderbank6_multimod = parameter::list<sliderbank6_c0<NV>, 
                                             sliderbank6_c1<NV>, 
                                             sliderbank6_c2<NV>, 
                                             sliderbank6_c3<NV>, 
                                             sliderbank6_c4<NV>, 
                                             sliderbank6_c5<NV>, 
                                             sliderbank6_c6<NV>, 
                                             sliderbank6_c7<NV>>;

template <int NV>
using sliderbank6_t = wrap::data<control::sliderbank<sliderbank6_multimod<NV>>, 
                                 data::external::sliderpack<6>>;

template <int NV>
using split1_t = container::split<parameter::empty, 
                                  wrap::fix<1, xfader_t<NV>>, 
                                  sliderbank_t<NV>, 
                                  xfader1_t<NV>, 
                                  sliderbank1_t<NV>, 
                                  sliderbank2_t, 
                                  sliderbank4_t<NV>, 
                                  sliderbank5_t<NV>, 
                                  sliderbank6_t<NV>>;

template <int NV>
using modchain1_t_ = container::chain<parameter::empty, 
                                      wrap::fix<1, chain56_t<NV>>, 
                                      chain52_t<NV>, 
                                      split2_t<NV>, 
                                      split1_t<NV>>;

template <int NV>
using modchain1_t = wrap::control_rate<modchain1_t_<NV>>;

template <int NV>
using chain28_t = container::chain<parameter::empty, 
                                   wrap::fix<2, math::clear<NV>>>;

using chain27_t = container::chain<parameter::empty, 
                                   wrap::fix<2, core::empty>>;
template <int NV>
using branch9_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain28_t<NV>>, 
                                    chain27_t>;
template <int NV>
using branch20_t = container::branch<parameter::empty, 
                                     wrap::fix<2, project::CleanDelay>, 
                                     project::RevDel<NV>, 
                                     project::granular<NV>>;

using chain12_t = chain27_t;
template <int NV>
using branch1_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain12_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain11_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch1_t<NV>>, 
                                   project::klp<NV>>;
using stereo_cable = cable::block<2>;

template <int NV>
using chain1_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch9_t<NV>, 
                                  tempo_sync1_t<NV>, 
                                  branch20_t<NV>, 
                                  chain11_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain26_t = chain28_t<NV>;

using chain25_t = chain27_t;
template <int NV>
using branch8_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain26_t<NV>>, 
                                    chain25_t>;
template <int NV> using branch22_t = branch20_t<NV>;

using chain10_t = chain27_t;
template <int NV>
using branch_t = container::branch<parameter::empty, 
                                   wrap::fix<2, chain10_t>, 
                                   project::klp2<NV>>;

template <int NV>
using chain2_t = container::chain<parameter::empty, 
                                  wrap::fix<2, branch_t<NV>>, 
                                  project::klp<NV>>;

template <int NV>
using chain9_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch8_t<NV>, 
                                  tempo_sync_t<NV>, 
                                  branch22_t<NV>, 
                                  chain2_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain40_t = chain28_t<NV>;

using chain39_t = chain27_t;
template <int NV>
using branch15_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain40_t<NV>>, 
                                     chain39_t>;
template <int NV> using branch21_t = branch20_t<NV>;

using chain24_t = chain27_t;
template <int NV>
using branch7_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain24_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain23_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch7_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain8_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch15_t<NV>, 
                                  tempo_sync7_t<NV>, 
                                  branch21_t<NV>, 
                                  chain23_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain38_t = chain28_t<NV>;

using chain37_t = chain27_t;
template <int NV>
using branch14_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain38_t<NV>>, 
                                     chain37_t>;
template <int NV> using branch27_t = branch20_t<NV>;

using chain22_t = chain27_t;
template <int NV>
using branch6_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain22_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain21_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch6_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain7_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch14_t<NV>, 
                                  tempo_sync6_t<NV>, 
                                  branch27_t<NV>, 
                                  chain21_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain36_t = chain28_t<NV>;

using chain35_t = chain27_t;
template <int NV>
using branch13_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain36_t<NV>>, 
                                     chain35_t>;
template <int NV> using branch26_t = branch20_t<NV>;

using chain20_t = chain27_t;
template <int NV>
using branch5_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain20_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain19_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch5_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain6_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch13_t<NV>, 
                                  tempo_sync5_t<NV>, 
                                  branch26_t<NV>, 
                                  chain19_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain34_t = chain28_t<NV>;

using chain33_t = chain27_t;
template <int NV>
using branch12_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain34_t<NV>>, 
                                     chain33_t>;
template <int NV> using branch25_t = branch20_t<NV>;

using chain18_t = chain27_t;
template <int NV>
using branch4_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain18_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain17_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch4_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain5_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch12_t<NV>, 
                                  tempo_sync4_t<NV>, 
                                  branch25_t<NV>, 
                                  chain17_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain32_t = chain28_t<NV>;

using chain31_t = chain27_t;
template <int NV>
using branch11_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain32_t<NV>>, 
                                     chain31_t>;
template <int NV> using branch23_t = branch20_t<NV>;

using chain16_t = chain27_t;
template <int NV>
using branch3_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain16_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain15_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch3_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain4_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch11_t<NV>, 
                                  tempo_sync3_t<NV>, 
                                  branch23_t<NV>, 
                                  chain15_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV> using chain30_t = chain28_t<NV>;

using chain29_t = chain27_t;
template <int NV>
using branch10_t = container::branch<parameter::empty, 
                                     wrap::fix<2, chain30_t<NV>>, 
                                     chain29_t>;
template <int NV> using branch24_t = branch20_t<NV>;

using chain14_t = chain27_t;
template <int NV>
using branch2_t = container::branch<parameter::empty, 
                                    wrap::fix<2, chain14_t>, 
                                    project::klp2<NV>>;

template <int NV>
using chain13_t = container::chain<parameter::empty, 
                                   wrap::fix<2, branch2_t<NV>>, 
                                   project::klp<NV>>;

template <int NV>
using chain3_t = container::chain<parameter::empty, 
                                  wrap::fix<2, core::gain<NV>>, 
                                  branch10_t<NV>, 
                                  tempo_sync2_t<NV>, 
                                  branch24_t<NV>, 
                                  chain13_t<NV>, 
                                  routing::send<stereo_cable>, 
                                  core::gain<NV>, 
                                  jdsp::jpanner<NV>>;

template <int NV>
using split_t = container::split<parameter::empty, 
                                 wrap::fix<2, chain1_t<NV>>, 
                                 chain9_t<NV>, 
                                 chain8_t<NV>, 
                                 chain7_t<NV>, 
                                 chain6_t<NV>, 
                                 chain5_t<NV>, 
                                 chain4_t<NV>, 
                                 chain3_t<NV>>;

template <int NV>
using chain_t = container::chain<parameter::empty, 
                                 wrap::fix<2, modchain_t<NV>>, 
                                 modchain2_t<NV>, 
                                 modchain1_t<NV>, 
                                 split_t<NV>>;

template <int NV>
using fix8_block_t_ = container::chain<parameter::empty, 
                                       wrap::fix<2, chain_t<NV>>>;

template <int NV>
using fix8_block_t = wrap::fix_block<8, fix8_block_t_<NV>>;

template <int NV>
using sb1_t_ = container::chain<parameter::empty, 
                                wrap::fix<2, fix8_block_t<NV>>>;

template <int NV>
using sb1_t = bypass::smoothed<20, sb1_t_<NV>>;
template <int NV>
using switcher_c0 = parameter::bypass<sb1_t<NV>>;

using sb2_t_ = chain27_t;

using sb2_t = bypass::smoothed<20, sb2_t_>;
using switcher_c1 = parameter::bypass<sb2_t>;

template <int NV>
using switcher_multimod = parameter::list<switcher_c0<NV>, switcher_c1>;

template <int NV>
using switcher_t = control::xfader<switcher_multimod<NV>, faders::switcher>;

template <int NV>
using sb_container_t = container::chain<parameter::empty, 
                                        wrap::fix<2, sb1_t<NV>>, 
                                        sb2_t>;

template <int NV>
using softbypass_switch3_t = container::chain<parameter::empty, 
                                              wrap::fix<2, switcher_t<NV>>, 
                                              sb_container_t<NV>>;
using oscilloscope_t = wrap::data<analyse::oscilloscope, 
                                  data::external::displaybuffer<0>>;

template <int NV>
using chain43_t = container::chain<parameter::empty, 
                                   wrap::fix<2, softbypass_switch3_t<NV>>, 
                                   oscilloscope_t, 
                                   core::gain<NV>>;

template <int NV>
using split4_t = container::split<parameter::empty, 
                                  wrap::fix<2, chain42_t<NV>>, 
                                  chain43_t<NV>>;

template <int NV>
using chain41_t = container::chain<parameter::empty, 
                                   wrap::fix<2, xfader2_t<NV>>, 
                                   split4_t<NV>>;

namespace stored_t_parameters
{
// Parameter list for stored_impl::stored_t --------------------------------------------------------

template <int NV>
using sync = parameter::chain<ranges::Identity, 
                              parameter::plain<stored_impl::tempo_sync1_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync7_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync6_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync5_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync4_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync3_t<NV>, 2>, 
                              parameter::plain<stored_impl::tempo_sync2_t<NV>, 2>>;

DECLARE_PARAMETER_RANGE_STEP(dic_InputRange, 
                             1., 
                             32., 
                             1.);
DECLARE_PARAMETER_RANGE_STEP(dic_0Range, 
                             1., 
                             16., 
                             1.);

template <int NV>
using dic_0 = parameter::from0To1<stored_impl::tempo_sync1_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_1 = parameter::from0To1<stored_impl::tempo_sync_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_2 = parameter::from0To1<stored_impl::tempo_sync7_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_3 = parameter::from0To1<stored_impl::tempo_sync6_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_4 = parameter::from0To1<stored_impl::tempo_sync5_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_5 = parameter::from0To1<stored_impl::tempo_sync4_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_6 = parameter::from0To1<stored_impl::tempo_sync3_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic_7 = parameter::from0To1<stored_impl::tempo_sync2_t<NV>, 
                                  1, 
                                  dic_0Range>;

template <int NV>
using dic = parameter::chain<dic_InputRange, 
                             dic_0<NV>, 
                             dic_1<NV>, 
                             dic_2<NV>, 
                             dic_3<NV>, 
                             dic_4<NV>, 
                             dic_5<NV>, 
                             dic_6<NV>, 
                             dic_7<NV>>;

template <int NV>
using res = parameter::chain<ranges::Identity, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>, 
                             parameter::plain<project::klp<NV>, 0>>;

DECLARE_PARAMETER_RANGE_STEP(feed_8Range, 
                             0., 
                             2., 
                             0.001);

template <int NV>
using feed_8 = parameter::from0To1<project::granular<NV>, 
                                   1, 
                                   feed_8Range>;

template <int NV> using feed_9 = feed_8<NV>;

template <int NV> using feed_10 = feed_8<NV>;

template <int NV> using feed_11 = feed_8<NV>;

template <int NV> using feed_12 = feed_8<NV>;

template <int NV> using feed_13 = feed_8<NV>;

template <int NV> using feed_14 = feed_8<NV>;

template <int NV> using feed_15 = feed_8<NV>;

template <int NV>
using feed = parameter::chain<ranges::Identity, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              parameter::plain<project::RevDel<NV>, 1>, 
                              feed_8<NV>, 
                              feed_9<NV>, 
                              feed_10<NV>, 
                              feed_11<NV>, 
                              feed_12<NV>, 
                              feed_13<NV>, 
                              feed_14<NV>, 
                              feed_15<NV>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>, 
                              parameter::plain<project::CleanDelay, 1>>;

DECLARE_PARAMETER_RANGE(CutoffRange, 
                        5.55112e-17, 
                        1.);

template <int NV>
using Cutoff = parameter::from0To1<stored_impl::pma4_t<NV>, 
                                   2, 
                                   CutoffRange>;

DECLARE_PARAMETER_RANGE(Rec_InputRange, 
                        1., 
                        8.);
template <int NV>
using Rec_0 = parameter::from0To1<stored_impl::pma_t<NV>, 
                                  2, 
                                  CutoffRange>;

template <int NV>
using Rec = parameter::chain<Rec_InputRange, 
                             Rec_0<NV>, 
                             parameter::plain<stored_impl::cable_table1_t, 0>>;

DECLARE_PARAMETER_RANGE(Pb_InputRange, 
                        1., 
                        8.);
template <int NV>
using Pb_0 = parameter::from0To1<stored_impl::pma5_t<NV>, 
                                 2, 
                                 CutoffRange>;

template <int NV>
using Pb = parameter::chain<Pb_InputRange, 
                            Pb_0<NV>, 
                            parameter::plain<stored_impl::cable_table2_t, 0>>;

template <int NV>
using RecTempo = parameter::chain<ranges::Identity, 
                                  parameter::plain<stored_impl::tempo_sync8_t<NV>, 0>, 
                                  parameter::plain<stored_impl::tempo_sync11_t<NV>, 0>>;

template <int NV>
using RecDiv = parameter::chain<ranges::Identity, 
                                parameter::plain<stored_impl::tempo_sync8_t<NV>, 1>, 
                                parameter::plain<stored_impl::tempo_sync11_t<NV>, 1>>;

template <int NV>
using PbTempo = parameter::chain<ranges::Identity, 
                                 parameter::plain<stored_impl::tempo_sync10_t<NV>, 0>, 
                                 parameter::plain<stored_impl::clock_ramp2_t<NV>, 0>>;

template <int NV>
using PbDiv = parameter::chain<ranges::Identity, 
                               parameter::plain<stored_impl::tempo_sync10_t<NV>, 1>, 
                               parameter::plain<stored_impl::clock_ramp2_t<NV>, 1>>;

DECLARE_PARAMETER_RANGE(dtime_InputRange, 
                        0., 
                        18.);
template <int NV>
using dtime_0 = parameter::from0To1<stored_impl::pma3_t<NV>, 
                                    2, 
                                    CutoffRange>;

template <int NV>
using dtime = parameter::chain<dtime_InputRange, dtime_0<NV>>;

template <int NV>
using dmode = parameter::chain<ranges::Identity, 
                               parameter::plain<stored_impl::branch20_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch22_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch21_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch27_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch26_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch25_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch23_t<NV>, 0>, 
                               parameter::plain<stored_impl::branch24_t<NV>, 0>>;

template <int NV>
using ExtraTempo = parameter::chain<ranges::Identity, 
                                    parameter::plain<stored_impl::tempo_sync9_t<NV>, 0>, 
                                    parameter::plain<stored_impl::clock_ramp1_t<NV>, 0>>;

template <int NV>
using ExtraDiv = parameter::chain<ranges::Identity, 
                                  parameter::plain<stored_impl::tempo_sync9_t<NV>, 1>, 
                                  parameter::plain<stored_impl::clock_ramp1_t<NV>, 1>>;

template <int NV>
using CutMod = parameter::plain<stored_impl::pma4_t<NV>, 
                                1>;
template <int NV>
using RecMod = parameter::plain<stored_impl::pma_t<NV>, 1>;
template <int NV>
using PbMod = parameter::plain<stored_impl::pma5_t<NV>, 
                               1>;
template <int NV>
using dtimemod = parameter::plain<stored_impl::pma3_t<NV>, 
                                  1>;
template <int NV>
using reset = parameter::plain<stored_impl::switcher_t<NV>, 
                               0>;
template <int NV>
using mix = parameter::plain<stored_impl::xfader2_t<NV>, 
                             0>;
template <int NV>
using RecSyncMode = parameter::plain<stored_impl::branch16_t<NV>, 
                                     0>;
template <int NV>
using PbSyncMode = parameter::plain<stored_impl::branch29_t<NV>, 
                                    0>;
template <int NV>
using PbModType = parameter::plain<stored_impl::branch18_t<NV>, 
                                   0>;
template <int NV>
using ExtraSyncMode = parameter::plain<stored_impl::branch28_t<NV>, 
                                       0>;
template <int NV>
using ExtraModType = parameter::plain<stored_impl::branch19_t<NV>, 
                                      0>;
template <int NV>
using R1 = parameter::plain<stored_impl::branch9_t<NV>, 
                            0>;
template <int NV>
using r2 = parameter::plain<stored_impl::branch8_t<NV>, 
                            0>;
template <int NV>
using r3 = parameter::plain<stored_impl::branch15_t<NV>, 
                            0>;
template <int NV>
using r4 = parameter::plain<stored_impl::branch14_t<NV>, 
                            0>;
template <int NV>
using r5 = parameter::plain<stored_impl::branch13_t<NV>, 
                            0>;
template <int NV>
using r6 = parameter::plain<stored_impl::branch12_t<NV>, 
                            0>;
template <int NV>
using r7 = parameter::plain<stored_impl::branch11_t<NV>, 
                            0>;
template <int NV>
using r8 = parameter::plain<stored_impl::branch10_t<NV>, 
                            0>;
template <int NV>
using rv1 = parameter::plain<stored_impl::branch1_t<NV>, 
                             0>;
template <int NV>
using rv2 = parameter::plain<stored_impl::branch_t<NV>, 
                             0>;
template <int NV>
using rv3 = parameter::plain<stored_impl::branch7_t<NV>, 
                             0>;
template <int NV>
using rv4 = parameter::plain<stored_impl::branch6_t<NV>, 
                             0>;
template <int NV>
using rv5 = parameter::plain<stored_impl::branch5_t<NV>, 
                             0>;
template <int NV>
using rv6 = parameter::plain<stored_impl::branch4_t<NV>, 
                             0>;
template <int NV>
using rv7 = parameter::plain<stored_impl::branch3_t<NV>, 
                             0>;
template <int NV>
using rv8 = parameter::plain<stored_impl::branch2_t<NV>, 
                             0>;
template <int NV>
using RecLoop = parameter::plain<stored_impl::cable_table5_t<NV>, 
                                 0>;
template <int NV>
using stored_t_plist = parameter::list<sync<NV>, 
                                       dic<NV>, 
                                       res<NV>, 
                                       feed<NV>, 
                                       Cutoff<NV>, 
                                       CutMod<NV>, 
                                       Rec<NV>, 
                                       RecMod<NV>, 
                                       Pb<NV>, 
                                       PbMod<NV>, 
                                       RecTempo<NV>, 
                                       RecDiv<NV>, 
                                       PbTempo<NV>, 
                                       PbDiv<NV>, 
                                       dtime<NV>, 
                                       dtimemod<NV>, 
                                       reset<NV>, 
                                       dmode<NV>, 
                                       mix<NV>, 
                                       ExtraTempo<NV>, 
                                       ExtraDiv<NV>, 
                                       RecSyncMode<NV>, 
                                       PbSyncMode<NV>, 
                                       PbModType<NV>, 
                                       ExtraSyncMode<NV>, 
                                       ExtraModType<NV>, 
                                       R1<NV>, 
                                       r2<NV>, 
                                       r3<NV>, 
                                       r4<NV>, 
                                       r5<NV>, 
                                       r6<NV>, 
                                       r7<NV>, 
                                       r8<NV>, 
                                       rv1<NV>, 
                                       rv2<NV>, 
                                       rv3<NV>, 
                                       rv4<NV>, 
                                       rv5<NV>, 
                                       rv6<NV>, 
                                       rv7<NV>, 
                                       rv8<NV>, 
                                       RecLoop<NV>>;
}

template <int NV>
using stored_t_ = container::chain<stored_t_parameters::stored_t_plist<NV>, 
                                   wrap::fix<2, modchain3_t>, 
                                   chain41_t<NV>>;

// =================================| Root node initialiser class |=================================

template <int NV> struct instance: public stored_impl::stored_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 5;
		static const int NumSliderPacks = 10;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 1;
		
		SNEX_METADATA_ID(stored);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(668)
		{
			0x005B, 0x0000, 0x7300, 0x6E79, 0x0063, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x015B, 
            0x0000, 0x6400, 0x6369, 0x0000, 0x8000, 0x003F, 0x0000, 0x0042, 
            0x8000, 0x0041, 0x8000, 0x003F, 0x8000, 0x5B3F, 0x0002, 0x0000, 
            0x6572, 0x0073, 0x0000, 0x3F00, 0x0000, 0x4120, 0x0000, 0x3F00, 
            0x0000, 0x3F80, 0xD70A, 0x3C23, 0x035B, 0x0000, 0x6600, 0x6565, 
            0x0064, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0xD70A, 0x3C23, 0x045B, 0x0000, 0x4300, 0x7475, 0x666F, 
            0x0066, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0x0000, 0x0000, 0x055B, 0x0000, 0x4300, 0x7475, 0x6F4D, 
            0x0064, 0x0000, 0xBF80, 0x0000, 0x3F80, 0x0000, 0x23C0, 0x0000, 
            0x3F80, 0x0000, 0x0000, 0x065B, 0x0000, 0x5200, 0x6365, 0x0000, 
            0x8000, 0x003F, 0x0000, 0x0041, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0007, 0x0000, 0x6552, 0x4D63, 0x646F, 0x0000, 
            0x8000, 0x00BF, 0x8000, 0x003F, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0008, 0x0000, 0x6250, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x7A41, 0x9193, 0x003F, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x0009, 0x0000, 0x6250, 0x6F4D, 0x0064, 0x0000, 0xBF80, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0A5B, 
            0x0000, 0x5200, 0x6365, 0x6554, 0x706D, 0x006F, 0x0000, 0x0000, 
            0x0000, 0x4190, 0x0000, 0x4100, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0B5B, 0x0000, 0x5200, 0x6365, 0x6944, 0x0076, 0x0000, 0x3F80, 
            0x0000, 0x4180, 0x0000, 0x4180, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0C5B, 0x0000, 0x5000, 0x5462, 0x6D65, 0x6F70, 0x0000, 0x0000, 
            0x0000, 0x9000, 0x0041, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 
            0x5B3F, 0x000D, 0x0000, 0x6250, 0x6944, 0x0076, 0x0000, 0x3F80, 
            0x0000, 0x4180, 0x0000, 0x4100, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0E5B, 0x0000, 0x6400, 0x6974, 0x656D, 0x0000, 0x0000, 0x0000, 
            0x9000, 0x3F41, 0x11D6, 0x0041, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x000F, 0x0000, 0x7464, 0x6D69, 0x6D65, 0x646F, 0x0000, 0x8000, 
            0x00BF, 0x8000, 0x003F, 0xC000, 0x0023, 0x8000, 0x003F, 0x0000, 
            0x5B00, 0x0010, 0x0000, 0x6572, 0x6573, 0x0074, 0x0000, 0x0000, 
            0x0000, 0x3F80, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x115B, 0x0000, 0x6400, 0x6F6D, 0x6564, 0x0000, 0x0000, 0x0000, 
            0x0000, 0x0040, 0x0000, 0x0040, 0x8000, 0x003F, 0x8000, 0x5B3F, 
            0x0012, 0x0000, 0x696D, 0x0078, 0x0000, 0x0000, 0x0000, 0x3F80, 
            0x399A, 0x3F1D, 0x0000, 0x3F80, 0x0000, 0x0000, 0x135B, 0x0000, 
            0x4500, 0x7478, 0x6172, 0x6554, 0x706D, 0x006F, 0x0000, 0x0000, 
            0x0000, 0x4190, 0x0000, 0x4160, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x145B, 0x0000, 0x4500, 0x7478, 0x6172, 0x6944, 0x0076, 0x0000, 
            0x3F80, 0x0000, 0x4180, 0x0000, 0x4110, 0x0000, 0x3F80, 0x0000, 
            0x3F80, 0x155B, 0x0000, 0x5200, 0x6365, 0x7953, 0x636E, 0x6F4D, 
            0x6564, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x8000, 0x003F, 
            0x8000, 0x003F, 0x0000, 0x5B00, 0x0016, 0x0000, 0x6250, 0x7953, 
            0x636E, 0x6F4D, 0x6564, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0017, 0x0000, 
            0x6250, 0x6F4D, 0x5464, 0x7079, 0x0065, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 0x185B, 
            0x0000, 0x4500, 0x7478, 0x6172, 0x7953, 0x636E, 0x6F4D, 0x6564, 
            0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x0000, 0x5B00, 0x0019, 0x0000, 0x7845, 0x7274, 0x4D61, 
            0x646F, 0x7954, 0x6570, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 0x001A, 0x0000, 
            0x3152, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x0000, 0x5B00, 0x001B, 0x0000, 0x3272, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x001C, 0x0000, 0x3372, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x1F00, 0x003E, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x001D, 0x0000, 0x3472, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 0x001E, 0x0000, 
            0x3572, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x0000, 0x5B00, 0x001F, 0x0000, 0x3672, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x0020, 0x0000, 0x3772, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x0021, 0x0000, 0x3872, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0022, 0x0000, 
            0x7672, 0x0031, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 
            0x0000, 0x3F80, 0x0000, 0x0000, 0x235B, 0x0000, 0x7200, 0x3276, 
            0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x0000, 0x5B00, 0x0024, 0x0000, 0x7672, 0x0033, 0x0000, 
            0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 
            0x0000, 0x255B, 0x0000, 0x7200, 0x3476, 0x0000, 0x0000, 0x0000, 
            0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 
            0x0026, 0x0000, 0x7672, 0x0035, 0x0000, 0x0000, 0x0000, 0x3F80, 
            0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 0x275B, 0x0000, 
            0x7200, 0x3676, 0x0000, 0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 
            0x0000, 0x8000, 0x003F, 0x0000, 0x5B00, 0x0028, 0x0000, 0x7672, 
            0x0037, 0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x0000, 0x0000, 
            0x3F80, 0x0000, 0x0000, 0x295B, 0x0000, 0x7200, 0x3876, 0x0000, 
            0x0000, 0x0000, 0x8000, 0x003F, 0x0000, 0x0000, 0x8000, 0x003F, 
            0x0000, 0x5B00, 0x002A, 0x0000, 0x6552, 0x4C63, 0x6F6F, 0x0070, 
            0x0000, 0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 
            0x0000, 0x0000, 0x0000, 0x0000
		};
	};
	
	instance()
	{
		// Node References -------------------------------------------------------------------------
		
		auto& modchain3 = this->getT(0);                                                  // stored_impl::modchain3_t
		auto& cable_table1 = this->getT(0).getT(0);                                       // stored_impl::cable_table1_t
		auto& cable_table2 = this->getT(0).getT(1);                                       // stored_impl::cable_table2_t
		auto& chain41 = this->getT(1);                                                    // stored_impl::chain41_t<NV>
		auto& xfader2 = this->getT(1).getT(0);                                            // stored_impl::xfader2_t<NV>
		auto& split4 = this->getT(1).getT(1);                                             // stored_impl::split4_t<NV>
		auto& chain42 = this->getT(1).getT(1).getT(0);                                    // stored_impl::chain42_t<NV>
		auto& gain2 = this->getT(1).getT(1).getT(0).getT(0);                              // core::gain<NV>
		auto& chain43 = this->getT(1).getT(1).getT(1);                                    // stored_impl::chain43_t<NV>
		auto& softbypass_switch3 = this->getT(1).getT(1).getT(1).getT(0);                 // stored_impl::softbypass_switch3_t<NV>
		auto& switcher = this->getT(1).getT(1).getT(1).getT(0).getT(0);                   // stored_impl::switcher_t<NV>
		auto& sb_container = this->getT(1).getT(1).getT(1).getT(0).getT(1);               // stored_impl::sb_container_t<NV>
		auto& sb1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0);                // stored_impl::sb1_t<NV>
		auto& fix8_block = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).getT(0); // stored_impl::fix8_block_t<NV>
		auto& chain = this->getT(1).getT(1).getT(1).getT(0).                              // stored_impl::chain_t<NV>
                      getT(1).getT(0).getT(0).getT(0);
		auto& modchain = this->getT(1).getT(1).getT(1).getT(0).                      // stored_impl::modchain_t<NV>
                         getT(1).getT(0).getT(0).getT(0).
                         getT(0);
		auto& chain44 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain44_t<NV>
                        getT(0).getT(0).getT(0).getT(0).getT(0);
		auto& cable_table5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::cable_table5_t<NV>
                             getT(0).getT(0).getT(0).getT(0).getT(0).
                             getT(0);
		auto& branch16 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch16_t<NV>
                         getT(0).getT(0).getT(0).getT(0).getT(0).
                         getT(1);
		auto& chain45 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain45_t<NV>
                        getT(0).getT(0).getT(0).getT(0).getT(1).getT(0);
		auto& tempo_sync8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // stored_impl::tempo_sync8_t<NV>
                            getT(0).getT(0).getT(0).getT(0).getT(1).getT(0).
                            getT(0);
		auto& ramp = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).          // stored_impl::ramp_t<NV>
                     getT(0).getT(0).getT(0).getT(0).getT(1).getT(0).
                     getT(1);
		auto& chain62 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain62_t<NV>
                        getT(0).getT(0).getT(0).getT(0).getT(1).getT(1);
		auto& transport = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).     // stored_impl::transport_t<NV>
                          getT(0).getT(0).getT(0).getT(0).getT(1).getT(1).
                          getT(0);
		auto& tempo_sync11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::tempo_sync11_t<NV>
                             getT(0).getT(0).getT(0).getT(0).getT(1).getT(1).
                             getT(1);
		auto& ramp3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).         // stored_impl::ramp3_t<NV>
                      getT(0).getT(0).getT(0).getT(0).getT(1).getT(1).
                      getT(2);
		auto& peak3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::peak3_t<NV>
                      getT(0).getT(0).getT(0).getT(0).getT(0).
                      getT(2);
		auto& chain48 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain48_t<NV>
                        getT(0).getT(0).getT(0).getT(0).getT(1);
		auto& clear8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // math::clear<NV>
                       getT(0).getT(0).getT(0).getT(0).getT(1).
                       getT(0);
		auto& cable_table = this->getT(1).getT(1).getT(1).getT(0).getT(1).           // stored_impl::cable_table_t<NV>
                            getT(0).getT(0).getT(0).getT(0).getT(1).
                            getT(1);
		auto& add = this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // math::add<NV>
                    getT(0).getT(0).getT(0).getT(0).getT(1).
                    getT(2);
		auto& peak = this->getT(1).getT(1).getT(1).getT(0).getT(1).                  // stored_impl::peak_t<NV>
                     getT(0).getT(0).getT(0).getT(0).getT(1).
                     getT(3);
		auto& clear14 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(0).getT(1).
                        getT(4);
		auto& modchain2 = this->getT(1).getT(1).getT(1).getT(0).                     // stored_impl::modchain2_t<NV>
                          getT(1).getT(0).getT(0).getT(0).
                          getT(1);
		auto& chain59 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain59_t<NV>
                        getT(0).getT(0).getT(0).getT(1).getT(0);
		auto& branch29 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch29_t<NV>
                         getT(0).getT(0).getT(0).getT(1).getT(0).
                         getT(0);
		auto& chain60 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain60_t<NV>
                        getT(0).getT(0).getT(1).getT(0).getT(0).getT(0);
		auto& tempo_sync10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::tempo_sync10_t<NV>
                             getT(0).getT(0).getT(1).getT(0).getT(0).getT(0).
                             getT(0);
		auto& ramp2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).         // stored_impl::ramp2_t<NV>
                      getT(0).getT(0).getT(1).getT(0).getT(0).getT(0).
                      getT(1);
		auto& chain61 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain61_t<NV>
                        getT(0).getT(0).getT(1).getT(0).getT(0).getT(1);
		auto& clock_ramp2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // stored_impl::clock_ramp2_t<NV>
                            getT(0).getT(0).getT(1).getT(0).getT(0).getT(1).
                            getT(0);
		auto& peak5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::peak5_t<NV>
                      getT(0).getT(0).getT(0).getT(1).getT(0).
                      getT(1);
		auto& chain49 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain49_t<NV>
                        getT(0).getT(0).getT(0).getT(1).getT(1);
		auto& clear9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // math::clear<NV>
                       getT(0).getT(0).getT(0).getT(1).getT(1).
                       getT(0);
		auto& branch18 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch18_t<NV>
                         getT(0).getT(0).getT(0).getT(1).getT(1).
                         getT(1);
		auto& chain50 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain50_t<NV>
                        getT(0).getT(0).getT(1).getT(1).getT(1).getT(0);
		auto& cable_table3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::cable_table3_t<NV>
                             getT(0).getT(0).getT(1).getT(1).getT(1).getT(0).
                             getT(0);
		auto& add2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).          // math::add<NV>
                     getT(0).getT(0).getT(1).getT(1).getT(1).getT(0).
                     getT(1);
		auto& chain51 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain51_t<NV>
                        getT(0).getT(0).getT(1).getT(1).getT(1).getT(1);
		auto& cable_pack2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // stored_impl::cable_pack2_t<NV>
                            getT(0).getT(0).getT(1).getT(1).getT(1).getT(1).
                            getT(0);
		auto& add3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).          // math::add<NV>
                     getT(0).getT(0).getT(1).getT(1).getT(1).getT(1).
                     getT(1);
		auto& peak1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::peak1_t<NV>
                      getT(0).getT(0).getT(0).getT(1).getT(1).
                      getT(2);
		auto& clear11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(1).getT(1).
                        getT(3);
		auto& clear12 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(1).getT(1).
                        getT(4);
		auto& modchain1 = this->getT(1).getT(1).getT(1).getT(0).                     // stored_impl::modchain1_t<NV>
                          getT(1).getT(0).getT(0).getT(0).
                          getT(2);
		auto& chain56 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain56_t<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(0);
		auto& clear15 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(0).
                        getT(0);
		auto& branch28 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch28_t<NV>
                         getT(0).getT(0).getT(0).getT(2).getT(0).
                         getT(1);
		auto& chain57 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain57_t<NV>
                        getT(0).getT(0).getT(2).getT(0).getT(1).getT(0);
		auto& tempo_sync9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // stored_impl::tempo_sync9_t<NV>
                            getT(0).getT(0).getT(2).getT(0).getT(1).getT(0).
                            getT(0);
		auto& ramp1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).         // stored_impl::ramp1_t<NV>
                      getT(0).getT(0).getT(2).getT(0).getT(1).getT(0).
                      getT(1);
		auto& chain58 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain58_t<NV>
                        getT(0).getT(0).getT(2).getT(0).getT(1).getT(1);
		auto& clock_ramp1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // stored_impl::clock_ramp1_t<NV>
                            getT(0).getT(0).getT(2).getT(0).getT(1).getT(1).
                            getT(0);
		auto& peak4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::peak4_t<NV>
                      getT(0).getT(0).getT(0).getT(2).getT(0).
                      getT(2);
		auto& chain52 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain52_t<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(1);
		auto& clear10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(1).
                        getT(0);
		auto& branch19 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch19_t<NV>
                         getT(0).getT(0).getT(0).getT(2).getT(1).
                         getT(1);
		auto& chain53 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::chain53_t<NV>
                        getT(0).getT(0).getT(2).getT(1).getT(1).getT(0);
		auto& cable_table4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::cable_table4_t<NV>
                             getT(0).getT(0).getT(2).getT(1).getT(1).getT(0).
                             getT(0);
		auto& add4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).         // math::add<NV>
                     getT(0).getT(0).getT(2).getT(1).getT(1).getT(0).
                     getT(1);
		auto& chain54 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain54_t<NV>
                        getT(0).getT(0).getT(2).getT(1).getT(1).getT(1);
		auto& cable_pack3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::cable_pack3_t<NV>
                            getT(0).getT(0).getT(2).getT(1).getT(1).getT(1).
                            getT(0);
		auto& add5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).         // math::add<NV>
                     getT(0).getT(0).getT(2).getT(1).getT(1).getT(1).
                     getT(1);
		auto& peak2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // stored_impl::peak2_t<NV>
                      getT(0).getT(0).getT(0).getT(2).getT(1).
                      getT(2);
		auto& clear13 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // math::clear<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(1).
                        getT(3);
		auto& split2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::split2_t<NV>
                       getT(0).getT(0).getT(0).getT(2).getT(2);
		auto& pma = this->getT(1).getT(1).getT(1).getT(0).getT(1).                  // stored_impl::pma_t<NV>
                    getT(0).getT(0).getT(0).getT(2).getT(2).
                    getT(0);
		auto& pma5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::pma5_t<NV>
                     getT(0).getT(0).getT(0).getT(2).getT(2).
                     getT(1);
		auto& pma4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::pma4_t<NV>
                     getT(0).getT(0).getT(0).getT(2).getT(2).
                     getT(2);
		auto& pma3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // stored_impl::pma3_t<NV>
                     getT(0).getT(0).getT(0).getT(2).getT(2).
                     getT(3);
		auto& split1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::split1_t<NV>
                       getT(0).getT(0).getT(0).getT(2).getT(3);
		auto& xfader = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::xfader_t<NV>
                       getT(0).getT(0).getT(0).getT(2).getT(3).
                       getT(0);
		auto& sliderbank = this->getT(1).getT(1).getT(1).getT(0).getT(1).           // stored_impl::sliderbank_t<NV>
                           getT(0).getT(0).getT(0).getT(2).getT(3).
                           getT(1);
		auto& xfader1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::xfader1_t<NV>
                        getT(0).getT(0).getT(0).getT(2).getT(3).
                        getT(2);
		auto& sliderbank1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::sliderbank1_t<NV>
                            getT(0).getT(0).getT(0).getT(2).getT(3).
                            getT(3);
		auto& sliderbank2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::sliderbank2_t
                            getT(0).getT(0).getT(0).getT(2).getT(3).
                            getT(4);
		auto& sliderbank4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::sliderbank4_t<NV>
                            getT(0).getT(0).getT(0).getT(2).getT(3).
                            getT(5);
		auto& sliderbank5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::sliderbank5_t<NV>
                            getT(0).getT(0).getT(0).getT(2).getT(3).
                            getT(6);
		auto& sliderbank6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::sliderbank6_t<NV>
                            getT(0).getT(0).getT(0).getT(2).getT(3).
                            getT(7);
		auto& split = this->getT(1).getT(1).getT(1).getT(0).                        // stored_impl::split_t<NV>
                      getT(1).getT(0).getT(0).getT(0).
                      getT(3);
		auto& chain1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain1_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(0);
		auto& gain = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // core::gain<NV>
                     getT(0).getT(0).getT(0).getT(3).getT(0).
                     getT(0);
		auto& branch9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch9_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(0).
                        getT(1);
		auto& chain28 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain28_t<NV>
                        getT(0).getT(0).getT(3).getT(0).getT(1).getT(0);
		auto& clear1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(0).getT(1).getT(0).
                       getT(0);
		auto& chain27 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain27_t
                        getT(0).getT(0).getT(3).getT(0).getT(1).getT(1);
		auto& tempo_sync1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync1_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(0).
                            getT(2);
		auto& branch20 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch20_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(0).
                         getT(3);
		auto& CleanDelay = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // project::CleanDelay
                           getT(0).getT(0).getT(3).getT(0).getT(3).getT(0);
		auto& faust = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).        // project::RevDel<NV>
                      getT(0).getT(0).getT(3).getT(0).getT(3).getT(1);
		auto& faust25 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(0).getT(3).getT(2);
		auto& chain11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain11_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(0).
                        getT(4);
		auto& branch1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch1_t<NV>
                        getT(0).getT(0).getT(3).getT(0).getT(4).getT(0);
		auto& chain12 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain12_t
                        getT(0).getT(0).getT(3).getT(0).getT(4).getT(0).
                        getT(0);
		auto& faust10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(0).getT(4).getT(0).
                        getT(1);
		auto& faust11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(0).getT(4).getT(1);
		auto& send = this->getT(1).getT(1).getT(1).getT(0).getT(1).                 // routing::send<stereo_cable>
                     getT(0).getT(0).getT(0).getT(3).getT(0).
                     getT(5);
		auto& gain1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(0).
                      getT(6);
		auto& jpanner1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(0).
                         getT(7);
		auto& chain9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain9_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(1);
		auto& gain16 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(1).
                       getT(0);
		auto& branch8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::branch8_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(1).
                        getT(1);
		auto& chain26 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain26_t<NV>
                        getT(0).getT(0).getT(3).getT(1).getT(1).getT(0);
		auto& clear = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).        // math::clear<NV>
                      getT(0).getT(0).getT(3).getT(1).getT(1).getT(0).
                      getT(0);
		auto& chain25 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain25_t
                        getT(0).getT(0).getT(3).getT(1).getT(1).getT(1);
		auto& tempo_sync = this->getT(1).getT(1).getT(1).getT(0).getT(1).           // stored_impl::tempo_sync_t<NV>
                           getT(0).getT(0).getT(0).getT(3).getT(1).
                           getT(2);
		auto& branch22 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch22_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(1).
                         getT(3);
		auto& CleanDelay1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(1).getT(3).getT(0);
		auto& faust8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(1).getT(3).getT(1);
		auto& faust28 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(1).getT(3).getT(2);
		auto& chain2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain2_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(1).
                       getT(4);
		auto& branch = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // stored_impl::branch_t<NV>
                       getT(0).getT(0).getT(3).getT(1).getT(4).getT(0);
		auto& chain10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain10_t
                        getT(0).getT(0).getT(3).getT(1).getT(4).getT(0).
                        getT(0);
		auto& faust9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::klp2<NV>
                       getT(0).getT(0).getT(3).getT(1).getT(4).getT(0).
                       getT(1);
		auto& faust1 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::klp<NV>
                       getT(0).getT(0).getT(3).getT(1).getT(4).getT(1);
		auto& send8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(1).
                      getT(5);
		auto& gain17 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(1).
                       getT(6);
		auto& jpanner = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // jdsp::jpanner<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(1).
                        getT(7);
		auto& chain8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain8_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(2);
		auto& gain14 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(2).
                       getT(0);
		auto& branch15 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch15_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(2).
                         getT(1);
		auto& chain40 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain40_t<NV>
                        getT(0).getT(0).getT(3).getT(2).getT(1).getT(0);
		auto& clear7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(2).getT(1).getT(0).
                       getT(0);
		auto& chain39 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain39_t
                        getT(0).getT(0).getT(3).getT(2).getT(1).getT(1);
		auto& tempo_sync7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync7_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(2).
                            getT(2);
		auto& branch21 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch21_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(2).
                         getT(3);
		auto& CleanDelay2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(2).getT(3).getT(0);
		auto& faust7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(2).getT(3).getT(1);
		auto& faust26 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(2).getT(3).getT(2);
		auto& chain23 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain23_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(2).
                        getT(4);
		auto& branch7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch7_t<NV>
                        getT(0).getT(0).getT(3).getT(2).getT(4).getT(0);
		auto& chain24 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain24_t
                        getT(0).getT(0).getT(3).getT(2).getT(4).getT(0).
                        getT(0);
		auto& faust22 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(2).getT(4).getT(0).
                        getT(1);
		auto& faust23 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(2).getT(4).getT(1);
		auto& send7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(2).
                      getT(5);
		auto& gain15 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(2).
                       getT(6);
		auto& jpanner7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(2).
                         getT(7);
		auto& chain7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain7_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(3);
		auto& gain12 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(3).
                       getT(0);
		auto& branch14 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch14_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(3).
                         getT(1);
		auto& chain38 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain38_t<NV>
                        getT(0).getT(0).getT(3).getT(3).getT(1).getT(0);
		auto& clear6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(3).getT(1).getT(0).
                       getT(0);
		auto& chain37 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain37_t
                        getT(0).getT(0).getT(3).getT(3).getT(1).getT(1);
		auto& tempo_sync6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync6_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(3).
                            getT(2);
		auto& branch27 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch27_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(3).
                         getT(3);
		auto& CleanDelay3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(3).getT(3).getT(0);
		auto& faust6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(3).getT(3).getT(1);
		auto& faust33 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(3).getT(3).getT(2);
		auto& chain21 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain21_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(3).
                        getT(4);
		auto& branch6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch6_t<NV>
                        getT(0).getT(0).getT(3).getT(3).getT(4).getT(0);
		auto& chain22 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain22_t
                        getT(0).getT(0).getT(3).getT(3).getT(4).getT(0).
                        getT(0);
		auto& faust20 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(3).getT(4).getT(0).
                        getT(1);
		auto& faust21 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(3).getT(4).getT(1);
		auto& send6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(3).
                      getT(5);
		auto& gain13 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(3).
                       getT(6);
		auto& jpanner6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(3).
                         getT(7);
		auto& chain6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain6_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(4);
		auto& gain10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(4).
                       getT(0);
		auto& branch13 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch13_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(4).
                         getT(1);
		auto& chain36 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain36_t<NV>
                        getT(0).getT(0).getT(3).getT(4).getT(1).getT(0);
		auto& clear5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(4).getT(1).getT(0).
                       getT(0);
		auto& chain35 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain35_t
                        getT(0).getT(0).getT(3).getT(4).getT(1).getT(1);
		auto& tempo_sync5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync5_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(4).
                            getT(2);
		auto& branch26 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch26_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(4).
                         getT(3);
		auto& CleanDelay4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(4).getT(3).getT(0);
		auto& faust5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(4).getT(3).getT(1);
		auto& faust32 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(4).getT(3).getT(2);
		auto& chain19 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain19_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(4).
                        getT(4);
		auto& branch5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch5_t<NV>
                        getT(0).getT(0).getT(3).getT(4).getT(4).getT(0);
		auto& chain20 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain20_t
                        getT(0).getT(0).getT(3).getT(4).getT(4).getT(0).
                        getT(0);
		auto& faust18 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(4).getT(4).getT(0).
                        getT(1);
		auto& faust19 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(4).getT(4).getT(1);
		auto& send5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(4).
                      getT(5);
		auto& gain11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // core::gain<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(4).
                       getT(6);
		auto& jpanner5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(4).
                         getT(7);
		auto& chain5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain5_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(5);
		auto& gain8 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(5).
                      getT(0);
		auto& branch12 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch12_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(5).
                         getT(1);
		auto& chain34 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain34_t<NV>
                        getT(0).getT(0).getT(3).getT(5).getT(1).getT(0);
		auto& clear4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(5).getT(1).getT(0).
                       getT(0);
		auto& chain33 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain33_t
                        getT(0).getT(0).getT(3).getT(5).getT(1).getT(1);
		auto& tempo_sync4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync4_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(5).
                            getT(2);
		auto& branch25 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch25_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(5).
                         getT(3);
		auto& CleanDelay5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(5).getT(3).getT(0);
		auto& faust4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(5).getT(3).getT(1);
		auto& faust31 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(5).getT(3).getT(2);
		auto& chain17 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain17_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(5).
                        getT(4);
		auto& branch4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch4_t<NV>
                        getT(0).getT(0).getT(3).getT(5).getT(4).getT(0);
		auto& chain18 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain18_t
                        getT(0).getT(0).getT(3).getT(5).getT(4).getT(0).
                        getT(0);
		auto& faust16 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(5).getT(4).getT(0).
                        getT(1);
		auto& faust17 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(5).getT(4).getT(1);
		auto& send4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(5).
                      getT(5);
		auto& gain9 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(5).
                      getT(6);
		auto& jpanner4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(5).
                         getT(7);
		auto& chain4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain4_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(6);
		auto& gain6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(6).
                      getT(0);
		auto& branch11 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch11_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(6).
                         getT(1);
		auto& chain32 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain32_t<NV>
                        getT(0).getT(0).getT(3).getT(6).getT(1).getT(0);
		auto& clear3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(6).getT(1).getT(0).
                       getT(0);
		auto& chain31 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain31_t
                        getT(0).getT(0).getT(3).getT(6).getT(1).getT(1);
		auto& tempo_sync3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync3_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(6).
                            getT(2);
		auto& branch23 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch23_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(6).
                         getT(3);
		auto& CleanDelay6 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(6).getT(3).getT(0);
		auto& faust3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(6).getT(3).getT(1);
		auto& faust29 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(6).getT(3).getT(2);
		auto& chain15 = this->getT(1).getT(1).getT(1).getT(0).getT(1).              // stored_impl::chain15_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(6).
                        getT(4);
		auto& branch3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::branch3_t<NV>
                        getT(0).getT(0).getT(3).getT(6).getT(4).getT(0);
		auto& chain16 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain16_t
                        getT(0).getT(0).getT(3).getT(6).getT(4).getT(0).
                        getT(0);
		auto& faust14 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(6).getT(4).getT(0).
                        getT(1);
		auto& faust15 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(6).getT(4).getT(1);
		auto& send3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(6).
                      getT(5);
		auto& gain7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(6).
                      getT(6);
		auto& jpanner2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(6).
                         getT(7);
		auto& chain3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).               // stored_impl::chain3_t<NV>
                       getT(0).getT(0).getT(0).getT(3).getT(7);
		auto& gain4 = this->getT(1).getT(1).getT(1).getT(0).getT(1).                // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(7).
                      getT(0);
		auto& branch10 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch10_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(7).
                         getT(1);
		auto& chain30 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain30_t<NV>
                        getT(0).getT(0).getT(3).getT(7).getT(1).getT(0);
		auto& clear2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).       // math::clear<NV>
                       getT(0).getT(0).getT(3).getT(7).getT(1).getT(0).
                       getT(0);
		auto& chain29 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).      // stored_impl::chain29_t
                        getT(0).getT(0).getT(3).getT(7).getT(1).getT(1);
		auto& tempo_sync2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::tempo_sync2_t<NV>
                            getT(0).getT(0).getT(0).getT(3).getT(7).
                            getT(2);
		auto& branch24 = this->getT(1).getT(1).getT(1).getT(0).getT(1).             // stored_impl::branch24_t<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(7).
                         getT(3);
		auto& CleanDelay7 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::CleanDelay
                            getT(0).getT(0).getT(3).getT(7).getT(3).getT(0);
		auto& faust2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).   // project::RevDel<NV>
                       getT(0).getT(0).getT(3).getT(7).getT(3).getT(1);
		auto& faust30 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::granular<NV>
                        getT(0).getT(0).getT(3).getT(7).getT(3).getT(2);
		auto& chain13 = this->getT(1).getT(1).getT(1).getT(0).getT(1).          // stored_impl::chain13_t<NV>
                        getT(0).getT(0).getT(0).getT(3).getT(7).
                        getT(4);
		auto& branch2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::branch2_t<NV>
                        getT(0).getT(0).getT(3).getT(7).getT(4).getT(0);
		auto& chain14 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // stored_impl::chain14_t
                        getT(0).getT(0).getT(3).getT(7).getT(4).getT(0).
                        getT(0);
		auto& faust12 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::klp2<NV>
                        getT(0).getT(0).getT(3).getT(7).getT(4).getT(0).
                        getT(1);
		auto& faust13 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).  // project::klp<NV>
                        getT(0).getT(0).getT(3).getT(7).getT(4).getT(1);
		auto& send2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).       // routing::send<stereo_cable>
                      getT(0).getT(0).getT(0).getT(3).getT(7).
                      getT(5);
		auto& gain5 = this->getT(1).getT(1).getT(1).getT(0).getT(1).       // core::gain<NV>
                      getT(0).getT(0).getT(0).getT(3).getT(7).
                      getT(6);
		auto& jpanner3 = this->getT(1).getT(1).getT(1).getT(0).getT(1).    // jdsp::jpanner<NV>
                         getT(0).getT(0).getT(0).getT(3).getT(7).
                         getT(7);
		auto& sb2 = this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(1); // stored_impl::sb2_t
		auto& oscilloscope = this->getT(1).getT(1).getT(1).getT(1);        // stored_impl::oscilloscope_t
		auto& gain3 = this->getT(1).getT(1).getT(1).getT(2);               // core::gain<NV>
		
		// Parameter Connections -------------------------------------------------------------------
		
		auto& sync_p = this->getParameterT(0);
		sync_p.connectT(0, tempo_sync1); // sync -> tempo_sync1::Enabled
		sync_p.connectT(1, tempo_sync7); // sync -> tempo_sync7::Enabled
		sync_p.connectT(2, tempo_sync6); // sync -> tempo_sync6::Enabled
		sync_p.connectT(3, tempo_sync5); // sync -> tempo_sync5::Enabled
		sync_p.connectT(4, tempo_sync4); // sync -> tempo_sync4::Enabled
		sync_p.connectT(5, tempo_sync3); // sync -> tempo_sync3::Enabled
		sync_p.connectT(6, tempo_sync2); // sync -> tempo_sync2::Enabled
		
		auto& dic_p = this->getParameterT(1);
		dic_p.connectT(0, tempo_sync1); // dic -> tempo_sync1::Multiplier
		dic_p.connectT(1, tempo_sync);  // dic -> tempo_sync::Multiplier
		dic_p.connectT(2, tempo_sync7); // dic -> tempo_sync7::Multiplier
		dic_p.connectT(3, tempo_sync6); // dic -> tempo_sync6::Multiplier
		dic_p.connectT(4, tempo_sync5); // dic -> tempo_sync5::Multiplier
		dic_p.connectT(5, tempo_sync4); // dic -> tempo_sync4::Multiplier
		dic_p.connectT(6, tempo_sync3); // dic -> tempo_sync3::Multiplier
		dic_p.connectT(7, tempo_sync2); // dic -> tempo_sync2::Multiplier
		
		auto& res_p = this->getParameterT(2);
		res_p.connectT(0, faust11); // res -> faust11::Q
		res_p.connectT(1, faust1);  // res -> faust1::Q
		res_p.connectT(2, faust23); // res -> faust23::Q
		res_p.connectT(3, faust21); // res -> faust21::Q
		res_p.connectT(4, faust19); // res -> faust19::Q
		res_p.connectT(5, faust17); // res -> faust17::Q
		res_p.connectT(6, faust15); // res -> faust15::Q
		res_p.connectT(7, faust13); // res -> faust13::Q
		
		auto& feed_p = this->getParameterT(3);
		feed_p.connectT(0, faust);        // feed -> faust::feedback
		feed_p.connectT(1, faust8);       // feed -> faust8::feedback
		feed_p.connectT(2, faust7);       // feed -> faust7::feedback
		feed_p.connectT(3, faust6);       // feed -> faust6::feedback
		feed_p.connectT(4, faust5);       // feed -> faust5::feedback
		feed_p.connectT(5, faust4);       // feed -> faust4::feedback
		feed_p.connectT(6, faust3);       // feed -> faust3::feedback
		feed_p.connectT(7, faust2);       // feed -> faust2::feedback
		feed_p.connectT(8, faust25);      // feed -> faust25::feedback
		feed_p.connectT(9, faust28);      // feed -> faust28::feedback
		feed_p.connectT(10, faust26);     // feed -> faust26::feedback
		feed_p.connectT(11, faust33);     // feed -> faust33::feedback
		feed_p.connectT(12, faust32);     // feed -> faust32::feedback
		feed_p.connectT(13, faust31);     // feed -> faust31::feedback
		feed_p.connectT(14, faust29);     // feed -> faust29::feedback
		feed_p.connectT(15, faust30);     // feed -> faust30::feedback
		feed_p.connectT(16, CleanDelay);  // feed -> CleanDelay::FeedBack
		feed_p.connectT(17, CleanDelay1); // feed -> CleanDelay1::FeedBack
		feed_p.connectT(18, CleanDelay2); // feed -> CleanDelay2::FeedBack
		feed_p.connectT(19, CleanDelay3); // feed -> CleanDelay3::FeedBack
		feed_p.connectT(20, CleanDelay4); // feed -> CleanDelay4::FeedBack
		feed_p.connectT(21, CleanDelay5); // feed -> CleanDelay5::FeedBack
		feed_p.connectT(22, CleanDelay6); // feed -> CleanDelay6::FeedBack
		feed_p.connectT(23, CleanDelay7); // feed -> CleanDelay7::FeedBack
		
		this->getParameterT(4).connectT(0, pma4); // Cutoff -> pma4::Add
		
		this->getParameterT(5).connectT(0, pma4); // CutMod -> pma4::Multiply
		
		auto& Rec_p = this->getParameterT(6);
		Rec_p.connectT(0, pma);          // Rec -> pma::Add
		Rec_p.connectT(1, cable_table1); // Rec -> cable_table1::Value
		
		this->getParameterT(7).connectT(0, pma); // RecMod -> pma::Multiply
		
		auto& Pb_p = this->getParameterT(8);
		Pb_p.connectT(0, pma5);         // Pb -> pma5::Add
		Pb_p.connectT(1, cable_table2); // Pb -> cable_table2::Value
		
		this->getParameterT(9).connectT(0, pma5); // PbMod -> pma5::Multiply
		
		auto& RecTempo_p = this->getParameterT(10);
		RecTempo_p.connectT(0, tempo_sync8);  // RecTempo -> tempo_sync8::Tempo
		RecTempo_p.connectT(1, tempo_sync11); // RecTempo -> tempo_sync11::Tempo
		
		auto& RecDiv_p = this->getParameterT(11);
		RecDiv_p.connectT(0, tempo_sync8);  // RecDiv -> tempo_sync8::Multiplier
		RecDiv_p.connectT(1, tempo_sync11); // RecDiv -> tempo_sync11::Multiplier
		
		auto& PbTempo_p = this->getParameterT(12);
		PbTempo_p.connectT(0, tempo_sync10); // PbTempo -> tempo_sync10::Tempo
		PbTempo_p.connectT(1, clock_ramp2);  // PbTempo -> clock_ramp2::Tempo
		
		auto& PbDiv_p = this->getParameterT(13);
		PbDiv_p.connectT(0, tempo_sync10); // PbDiv -> tempo_sync10::Multiplier
		PbDiv_p.connectT(1, clock_ramp2);  // PbDiv -> clock_ramp2::Multiplier
		
		this->getParameterT(14).connectT(0, pma3); // dtime -> pma3::Add
		
		this->getParameterT(15).connectT(0, pma3); // dtimemod -> pma3::Multiply
		
		this->getParameterT(16).connectT(0, switcher); // reset -> switcher::Value
		
		auto& dmode_p = this->getParameterT(17);
		dmode_p.connectT(0, branch20); // dmode -> branch20::Index
		dmode_p.connectT(1, branch22); // dmode -> branch22::Index
		dmode_p.connectT(2, branch21); // dmode -> branch21::Index
		dmode_p.connectT(3, branch27); // dmode -> branch27::Index
		dmode_p.connectT(4, branch26); // dmode -> branch26::Index
		dmode_p.connectT(5, branch25); // dmode -> branch25::Index
		dmode_p.connectT(6, branch23); // dmode -> branch23::Index
		dmode_p.connectT(7, branch24); // dmode -> branch24::Index
		
		this->getParameterT(18).connectT(0, xfader2); // mix -> xfader2::Value
		
		auto& ExtraTempo_p = this->getParameterT(19);
		ExtraTempo_p.connectT(0, tempo_sync9); // ExtraTempo -> tempo_sync9::Tempo
		ExtraTempo_p.connectT(1, clock_ramp1); // ExtraTempo -> clock_ramp1::Tempo
		
		auto& ExtraDiv_p = this->getParameterT(20);
		ExtraDiv_p.connectT(0, tempo_sync9); // ExtraDiv -> tempo_sync9::Multiplier
		ExtraDiv_p.connectT(1, clock_ramp1); // ExtraDiv -> clock_ramp1::Multiplier
		
		this->getParameterT(21).connectT(0, branch16); // RecSyncMode -> branch16::Index
		
		this->getParameterT(22).connectT(0, branch29); // PbSyncMode -> branch29::Index
		
		this->getParameterT(23).connectT(0, branch18); // PbModType -> branch18::Index
		
		this->getParameterT(24).connectT(0, branch28); // ExtraSyncMode -> branch28::Index
		
		this->getParameterT(25).connectT(0, branch19); // ExtraModType -> branch19::Index
		
		this->getParameterT(26).connectT(0, branch9); // R1 -> branch9::Index
		
		this->getParameterT(27).connectT(0, branch8); // r2 -> branch8::Index
		
		this->getParameterT(28).connectT(0, branch15); // r3 -> branch15::Index
		
		this->getParameterT(29).connectT(0, branch14); // r4 -> branch14::Index
		
		this->getParameterT(30).connectT(0, branch13); // r5 -> branch13::Index
		
		this->getParameterT(31).connectT(0, branch12); // r6 -> branch12::Index
		
		this->getParameterT(32).connectT(0, branch11); // r7 -> branch11::Index
		
		this->getParameterT(33).connectT(0, branch10); // r8 -> branch10::Index
		
		this->getParameterT(34).connectT(0, branch1); // rv1 -> branch1::Index
		
		this->getParameterT(35).connectT(0, branch); // rv2 -> branch::Index
		
		this->getParameterT(36).connectT(0, branch7); // rv3 -> branch7::Index
		
		this->getParameterT(37).connectT(0, branch6); // rv4 -> branch6::Index
		
		this->getParameterT(38).connectT(0, branch5); // rv5 -> branch5::Index
		
		this->getParameterT(39).connectT(0, branch4); // rv6 -> branch4::Index
		
		this->getParameterT(40).connectT(0, branch3); // rv7 -> branch3::Index
		
		this->getParameterT(41).connectT(0, branch2); // rv8 -> branch2::Index
		
		this->getParameterT(42).connectT(0, cable_table5); // RecLoop -> cable_table5::Value
		
		// Modulation Connections ------------------------------------------------------------------
		
		auto& xfader2_p = xfader2.getWrappedObject().getParameter();
		xfader2_p.getParameterT(0).connectT(0, gain2);                     // xfader2 -> gain2::Gain
		xfader2_p.getParameterT(1).connectT(0, gain3);                     // xfader2 -> gain3::Gain
		cable_table5.getWrappedObject().getParameter().connectT(0, ramp);  // cable_table5 -> ramp::LoopStart
		cable_table5.getWrappedObject().getParameter().connectT(1, ramp3); // cable_table5 -> ramp3::LoopStart
		tempo_sync8.getParameter().connectT(0, ramp);                      // tempo_sync8 -> ramp::PeriodTime
		transport.getParameter().connectT(0, ramp3);                       // transport -> ramp3::Gate
		tempo_sync11.getParameter().connectT(0, ramp3);                    // tempo_sync11 -> ramp3::PeriodTime
		cable_table.getWrappedObject().getParameter().connectT(0, add);    // cable_table -> add::Value
		peak3.getParameter().connectT(0, cable_table);                     // peak3 -> cable_table::Value
		auto& xfader_p = xfader.getWrappedObject().getParameter();
		xfader_p.getParameterT(0).connectT(0, gain);                      // xfader -> gain::Gain
		xfader_p.getParameterT(1).connectT(0, gain16);                    // xfader -> gain16::Gain
		xfader_p.getParameterT(2).connectT(0, gain14);                    // xfader -> gain14::Gain
		xfader_p.getParameterT(3).connectT(0, gain12);                    // xfader -> gain12::Gain
		xfader_p.getParameterT(4).connectT(0, gain10);                    // xfader -> gain10::Gain
		xfader_p.getParameterT(5).connectT(0, gain8);                     // xfader -> gain8::Gain
		xfader_p.getParameterT(6).connectT(0, gain6);                     // xfader -> gain6::Gain
		xfader_p.getParameterT(7).connectT(0, gain4);                     // xfader -> gain4::Gain
		pma.getWrappedObject().getParameter().connectT(0, xfader);        // pma -> xfader::Value
		peak.getParameter().connectT(0, pma);                             // peak -> pma::Value
		tempo_sync10.getParameter().connectT(0, ramp2);                   // tempo_sync10 -> ramp2::PeriodTime
		cable_table3.getWrappedObject().getParameter().connectT(0, add2); // cable_table3 -> add2::Value
		cable_pack2.getWrappedObject().getParameter().connectT(0, add3);  // cable_pack2 -> add3::Value
		peak5.getParameter().connectT(0, cable_table3);                   // peak5 -> cable_table3::Value
		peak5.getParameter().connectT(1, cable_pack2);                    // peak5 -> cable_pack2::Value
		auto& xfader1_p = xfader1.getWrappedObject().getParameter();
		xfader1_p.getParameterT(0).connectT(0, gain1);                    // xfader1 -> gain1::Gain
		xfader1_p.getParameterT(1).connectT(0, gain17);                   // xfader1 -> gain17::Gain
		xfader1_p.getParameterT(2).connectT(0, gain15);                   // xfader1 -> gain15::Gain
		xfader1_p.getParameterT(3).connectT(0, gain13);                   // xfader1 -> gain13::Gain
		xfader1_p.getParameterT(4).connectT(0, gain11);                   // xfader1 -> gain11::Gain
		xfader1_p.getParameterT(5).connectT(0, gain9);                    // xfader1 -> gain9::Gain
		xfader1_p.getParameterT(6).connectT(0, gain7);                    // xfader1 -> gain7::Gain
		xfader1_p.getParameterT(7).connectT(0, gain5);                    // xfader1 -> gain5::Gain
		pma5.getWrappedObject().getParameter().connectT(0, xfader1);      // pma5 -> xfader1::Value
		peak1.getParameter().connectT(0, pma5);                           // peak1 -> pma5::Value
		tempo_sync9.getParameter().connectT(0, ramp1);                    // tempo_sync9 -> ramp1::PeriodTime
		cable_table4.getWrappedObject().getParameter().connectT(0, add4); // cable_table4 -> add4::Value
		cable_pack3.getWrappedObject().getParameter().connectT(0, add5);  // cable_pack3 -> add5::Value
		peak4.getParameter().connectT(0, cable_table4);                   // peak4 -> cable_table4::Value
		peak4.getParameter().connectT(1, cable_pack3);                    // peak4 -> cable_pack3::Value
		tempo_sync1.getParameter().connectT(0, faust);                    // tempo_sync1 -> faust::delayms
		tempo_sync1.getParameter().connectT(1, faust10);                  // tempo_sync1 -> faust10::Log2Delay
		tempo_sync1.getParameter().connectT(2, faust25);                  // tempo_sync1 -> faust25::taille
		tempo_sync1.getParameter().connectT(3, CleanDelay);               // tempo_sync1 -> CleanDelay::DelayTime
		tempo_sync.getParameter().connectT(0, faust8);                    // tempo_sync -> faust8::delayms
		tempo_sync.getParameter().connectT(1, faust9);                    // tempo_sync -> faust9::Log2Delay
		tempo_sync.getParameter().connectT(2, faust28);                   // tempo_sync -> faust28::taille
		tempo_sync.getParameter().connectT(3, CleanDelay1);               // tempo_sync -> CleanDelay1::DelayTime
		tempo_sync7.getParameter().connectT(0, faust7);                   // tempo_sync7 -> faust7::delayms
		tempo_sync7.getParameter().connectT(1, faust22);                  // tempo_sync7 -> faust22::Log2Delay
		tempo_sync7.getParameter().connectT(2, faust26);                  // tempo_sync7 -> faust26::taille
		tempo_sync7.getParameter().connectT(3, CleanDelay2);              // tempo_sync7 -> CleanDelay2::DelayTime
		tempo_sync6.getParameter().connectT(0, faust6);                   // tempo_sync6 -> faust6::delayms
		tempo_sync6.getParameter().connectT(1, faust20);                  // tempo_sync6 -> faust20::Log2Delay
		tempo_sync6.getParameter().connectT(2, faust33);                  // tempo_sync6 -> faust33::taille
		tempo_sync6.getParameter().connectT(3, CleanDelay3);              // tempo_sync6 -> CleanDelay3::DelayTime
		tempo_sync5.getParameter().connectT(0, faust5);                   // tempo_sync5 -> faust5::delayms
		tempo_sync5.getParameter().connectT(1, faust18);                  // tempo_sync5 -> faust18::Log2Delay
		tempo_sync5.getParameter().connectT(2, faust32);                  // tempo_sync5 -> faust32::taille
		tempo_sync5.getParameter().connectT(3, CleanDelay4);              // tempo_sync5 -> CleanDelay4::DelayTime
		tempo_sync4.getParameter().connectT(0, faust4);                   // tempo_sync4 -> faust4::delayms
		tempo_sync4.getParameter().connectT(1, faust16);                  // tempo_sync4 -> faust16::Log2Delay
		tempo_sync4.getParameter().connectT(2, faust31);                  // tempo_sync4 -> faust31::taille
		tempo_sync4.getParameter().connectT(3, CleanDelay5);              // tempo_sync4 -> CleanDelay5::DelayTime
		tempo_sync3.getParameter().connectT(0, faust3);                   // tempo_sync3 -> faust3::delayms
		tempo_sync3.getParameter().connectT(1, faust14);                  // tempo_sync3 -> faust14::Log2Delay
		tempo_sync3.getParameter().connectT(2, faust29);                  // tempo_sync3 -> faust29::taille
		tempo_sync3.getParameter().connectT(3, CleanDelay6);              // tempo_sync3 -> CleanDelay6::DelayTime
		tempo_sync2.getParameter().connectT(0, faust2);                   // tempo_sync2 -> faust2::delayms
		tempo_sync2.getParameter().connectT(1, faust12);                  // tempo_sync2 -> faust12::Log2Delay
		tempo_sync2.getParameter().connectT(2, faust30);                  // tempo_sync2 -> faust30::taille
		tempo_sync2.getParameter().connectT(3, CleanDelay7);              // tempo_sync2 -> CleanDelay7::DelayTime
		auto& sliderbank_p = sliderbank.getWrappedObject().getParameter();
		sliderbank_p.getParameterT(0).connectT(0, tempo_sync1);         // sliderbank -> tempo_sync1::Tempo
		sliderbank_p.getParameterT(0).connectT(1, tempo_sync1);         // sliderbank -> tempo_sync1::UnsyncedTime
		sliderbank_p.getParameterT(1).connectT(0, tempo_sync);          // sliderbank -> tempo_sync::Tempo
		sliderbank_p.getParameterT(1).connectT(1, tempo_sync);          // sliderbank -> tempo_sync::UnsyncedTime
		sliderbank_p.getParameterT(2).connectT(0, tempo_sync7);         // sliderbank -> tempo_sync7::Tempo
		sliderbank_p.getParameterT(2).connectT(1, tempo_sync7);         // sliderbank -> tempo_sync7::UnsyncedTime
		sliderbank_p.getParameterT(3).connectT(0, tempo_sync6);         // sliderbank -> tempo_sync6::Tempo
		sliderbank_p.getParameterT(3).connectT(1, tempo_sync6);         // sliderbank -> tempo_sync6::UnsyncedTime
		sliderbank_p.getParameterT(4).connectT(0, tempo_sync5);         // sliderbank -> tempo_sync5::Tempo
		sliderbank_p.getParameterT(4).connectT(1, tempo_sync5);         // sliderbank -> tempo_sync5::UnsyncedTime
		sliderbank_p.getParameterT(5).connectT(0, tempo_sync4);         // sliderbank -> tempo_sync4::Tempo
		sliderbank_p.getParameterT(5).connectT(1, tempo_sync4);         // sliderbank -> tempo_sync4::UnsyncedTime
		sliderbank_p.getParameterT(6).connectT(0, tempo_sync3);         // sliderbank -> tempo_sync3::Tempo
		sliderbank_p.getParameterT(6).connectT(1, tempo_sync3);         // sliderbank -> tempo_sync3::UnsyncedTime
		sliderbank_p.getParameterT(6).connectT(2, tempo_sync2);         // sliderbank -> tempo_sync2::Tempo
		sliderbank_p.getParameterT(7).connectT(0, tempo_sync2);         // sliderbank -> tempo_sync2::UnsyncedTime
		pma3.getWrappedObject().getParameter().connectT(0, sliderbank); // pma3 -> sliderbank::Value
		auto& sliderbank1_p = sliderbank1.getWrappedObject().getParameter();
		sliderbank1_p.getParameterT(0).connectT(0, faust11);             // sliderbank1 -> faust11::freq
		sliderbank1_p.getParameterT(1).connectT(0, faust1);              // sliderbank1 -> faust1::freq
		sliderbank1_p.getParameterT(2).connectT(0, faust23);             // sliderbank1 -> faust23::freq
		sliderbank1_p.getParameterT(3).connectT(0, faust21);             // sliderbank1 -> faust21::freq
		sliderbank1_p.getParameterT(4).connectT(0, faust19);             // sliderbank1 -> faust19::freq
		sliderbank1_p.getParameterT(5).connectT(0, faust17);             // sliderbank1 -> faust17::freq
		sliderbank1_p.getParameterT(6).connectT(0, faust15);             // sliderbank1 -> faust15::freq
		sliderbank1_p.getParameterT(7).connectT(0, faust13);             // sliderbank1 -> faust13::freq
		pma4.getWrappedObject().getParameter().connectT(0, sliderbank1); // pma4 -> sliderbank1::Value
		peak2.getParameter().connectT(0, pma3);                          // peak2 -> pma3::Value
		peak2.getParameter().connectT(1, pma4);                          // peak2 -> pma4::Value
		auto& sliderbank2_p = sliderbank2.getWrappedObject().getParameter();
		auto& sliderbank4_p = sliderbank4.getWrappedObject().getParameter();
		sliderbank4_p.getParameterT(0).connectT(0, jpanner1); // sliderbank4 -> jpanner1::Pan
		sliderbank4_p.getParameterT(1).connectT(0, jpanner);  // sliderbank4 -> jpanner::Pan
		sliderbank4_p.getParameterT(2).connectT(0, jpanner7); // sliderbank4 -> jpanner7::Pan
		sliderbank4_p.getParameterT(3).connectT(0, jpanner6); // sliderbank4 -> jpanner6::Pan
		sliderbank4_p.getParameterT(4).connectT(0, jpanner5); // sliderbank4 -> jpanner5::Pan
		sliderbank4_p.getParameterT(5).connectT(0, jpanner4); // sliderbank4 -> jpanner4::Pan
		sliderbank4_p.getParameterT(6).connectT(0, jpanner2); // sliderbank4 -> jpanner2::Pan
		sliderbank4_p.getParameterT(7).connectT(0, jpanner3); // sliderbank4 -> jpanner3::Pan
		auto& sliderbank5_p = sliderbank5.getWrappedObject().getParameter();
		sliderbank5_p.getParameterT(0).connectT(0, faust25); // sliderbank5 -> faust25::decal
		sliderbank5_p.getParameterT(1).connectT(0, faust28); // sliderbank5 -> faust28::decal
		sliderbank5_p.getParameterT(2).connectT(0, faust26); // sliderbank5 -> faust26::decal
		sliderbank5_p.getParameterT(3).connectT(0, faust33); // sliderbank5 -> faust33::decal
		sliderbank5_p.getParameterT(4).connectT(0, faust32); // sliderbank5 -> faust32::decal
		sliderbank5_p.getParameterT(5).connectT(0, faust31); // sliderbank5 -> faust31::decal
		sliderbank5_p.getParameterT(6).connectT(0, faust29); // sliderbank5 -> faust29::decal
		sliderbank5_p.getParameterT(7).connectT(0, faust30); // sliderbank5 -> faust30::decal
		auto& sliderbank6_p = sliderbank6.getWrappedObject().getParameter();
		sliderbank6_p.getParameterT(0).connectT(0, faust25); // sliderbank6 -> faust25::speed
		sliderbank6_p.getParameterT(1).connectT(0, faust28); // sliderbank6 -> faust28::speed
		sliderbank6_p.getParameterT(2).connectT(0, faust26); // sliderbank6 -> faust26::speed
		sliderbank6_p.getParameterT(3).connectT(0, faust33); // sliderbank6 -> faust33::speed
		sliderbank6_p.getParameterT(4).connectT(0, faust32); // sliderbank6 -> faust32::speed
		sliderbank6_p.getParameterT(5).connectT(0, faust31); // sliderbank6 -> faust31::speed
		sliderbank6_p.getParameterT(6).connectT(0, faust29); // sliderbank6 -> faust29::speed
		sliderbank6_p.getParameterT(7).connectT(0, faust30); // sliderbank6 -> faust30::speed
		auto& switcher_p = switcher.getWrappedObject().getParameter();
		switcher_p.getParameterT(0).connectT(0, sb1); // switcher -> sb1::Bypassed
		switcher_p.getParameterT(1).connectT(0, sb2); // switcher -> sb2::Bypassed
		
		// Send Connections ------------------------------------------------------------------------
		
		// Default Values --------------------------------------------------------------------------
		
		; // cable_table1::Value is automated
		
		; // cable_table2::Value is automated
		
		; // xfader2::Value is automated
		
		;                            // gain2::Gain is automated
		gain2.setParameterT(1, 20.); // core::gain::Smoothing
		gain2.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // switcher::Value is automated
		
		; // cable_table5::Value is automated
		
		; // branch16::Index is automated
		
		;                                   // tempo_sync8::Tempo is automated
		;                                   // tempo_sync8::Multiplier is automated
		tempo_sync8.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync8.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		;                          // ramp::PeriodTime is automated
		;                          // ramp::LoopStart is automated
		ramp.setParameterT(2, 1.); // core::ramp::Gate
		
		;                                    // tempo_sync11::Tempo is automated
		;                                    // tempo_sync11::Multiplier is automated
		tempo_sync11.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync11.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		; // ramp3::PeriodTime is automated
		; // ramp3::LoopStart is automated
		; // ramp3::Gate is automated
		
		clear8.setParameterT(0, 0.); // math::clear::Value
		
		; // cable_table::Value is automated
		
		; // add::Value is automated
		
		clear14.setParameterT(0, 0.); // math::clear::Value
		
		; // branch29::Index is automated
		
		;                                    // tempo_sync10::Tempo is automated
		;                                    // tempo_sync10::Multiplier is automated
		tempo_sync10.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync10.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		;                           // ramp2::PeriodTime is automated
		ramp2.setParameterT(1, 0.); // core::ramp::LoopStart
		ramp2.setParameterT(2, 1.); // core::ramp::Gate
		
		;                                 // clock_ramp2::Tempo is automated
		;                                 // clock_ramp2::Multiplier is automated
		clock_ramp2.setParameterT(2, 1.); // core::clock_ramp::AddToSignal
		clock_ramp2.setParameterT(3, 1.); // core::clock_ramp::UpdateMode
		clock_ramp2.setParameterT(4, 0.); // core::clock_ramp::Inactive
		
		clear9.setParameterT(0, 0.); // math::clear::Value
		
		; // branch18::Index is automated
		
		; // cable_table3::Value is automated
		
		; // add2::Value is automated
		
		; // cable_pack2::Value is automated
		
		; // add3::Value is automated
		
		clear11.setParameterT(0, 0.); // math::clear::Value
		
		clear12.setParameterT(0, 0.); // math::clear::Value
		
		clear15.setParameterT(0, 0.); // math::clear::Value
		
		; // branch28::Index is automated
		
		;                                   // tempo_sync9::Tempo is automated
		;                                   // tempo_sync9::Multiplier is automated
		tempo_sync9.setParameterT(2, 1.);   // control::tempo_sync::Enabled
		tempo_sync9.setParameterT(3, 200.); // control::tempo_sync::UnsyncedTime
		
		;                           // ramp1::PeriodTime is automated
		ramp1.setParameterT(1, 0.); // core::ramp::LoopStart
		ramp1.setParameterT(2, 1.); // core::ramp::Gate
		
		;                                 // clock_ramp1::Tempo is automated
		;                                 // clock_ramp1::Multiplier is automated
		clock_ramp1.setParameterT(2, 1.); // core::clock_ramp::AddToSignal
		clock_ramp1.setParameterT(3, 1.); // core::clock_ramp::UpdateMode
		clock_ramp1.setParameterT(4, 0.); // core::clock_ramp::Inactive
		
		clear10.setParameterT(0, 0.); // math::clear::Value
		
		; // branch19::Index is automated
		
		; // cable_table4::Value is automated
		
		; // add4::Value is automated
		
		; // cable_pack3::Value is automated
		
		; // add5::Value is automated
		
		clear13.setParameterT(0, 0.); // math::clear::Value
		
		; // pma::Value is automated
		; // pma::Multiply is automated
		; // pma::Add is automated
		
		; // pma5::Value is automated
		; // pma5::Multiply is automated
		; // pma5::Add is automated
		
		; // pma4::Value is automated
		; // pma4::Multiply is automated
		; // pma4::Add is automated
		
		; // pma3::Value is automated
		; // pma3::Multiply is automated
		; // pma3::Add is automated
		
		; // xfader::Value is automated
		
		; // sliderbank::Value is automated
		
		; // xfader1::Value is automated
		
		; // sliderbank1::Value is automated
		
		sliderbank2.setParameterT(0, 1.); // control::sliderbank::Value
		
		sliderbank4.setParameterT(0, 1.); // control::sliderbank::Value
		
		sliderbank5.setParameterT(0, 1.); // control::sliderbank::Value
		
		sliderbank6.setParameterT(0, 1.); // control::sliderbank::Value
		
		;                           // gain::Gain is automated
		gain.setParameterT(1, 20.); // core::gain::Smoothing
		gain.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch9::Index is automated
		
		clear1.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync1::Tempo is automated
		; // tempo_sync1::Multiplier is automated
		; // tempo_sync1::Enabled is automated
		; // tempo_sync1::UnsyncedTime is automated
		
		; // branch20::Index is automated
		
		; // CleanDelay::DelayTime is automated
		; // CleanDelay::FeedBack is automated
		
		; // faust::delayms is automated
		; // faust::feedback is automated
		
		;                             // faust25::decal is automated
		;                             // faust25::feedback is automated
		faust25.setParameterT(2, 1.); // core::faust::population
		;                             // faust25::speed is automated
		;                             // faust25::taille is automated
		
		; // branch1::Index is automated
		
		; // faust10::Log2Delay is automated
		
		; // faust11::Q is automated
		; // faust11::freq is automated
		
		;                            // gain1::Gain is automated
		gain1.setParameterT(1, 20.); // core::gain::Smoothing
		gain1.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner1::Pan is automated
		jpanner1.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                             // gain16::Gain is automated
		gain16.setParameterT(1, 20.); // core::gain::Smoothing
		gain16.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch8::Index is automated
		
		clear.setParameterT(0, 0.); // math::clear::Value
		
		;                                // tempo_sync::Tempo is automated
		;                                // tempo_sync::Multiplier is automated
		tempo_sync.setParameterT(2, 1.); // control::tempo_sync::Enabled
		;                                // tempo_sync::UnsyncedTime is automated
		
		; // branch22::Index is automated
		
		; // CleanDelay1::DelayTime is automated
		; // CleanDelay1::FeedBack is automated
		
		; // faust8::delayms is automated
		; // faust8::feedback is automated
		
		;                             // faust28::decal is automated
		;                             // faust28::feedback is automated
		faust28.setParameterT(2, 1.); // core::faust::population
		;                             // faust28::speed is automated
		;                             // faust28::taille is automated
		
		; // branch::Index is automated
		
		; // faust9::Log2Delay is automated
		
		; // faust1::Q is automated
		; // faust1::freq is automated
		
		;                             // gain17::Gain is automated
		gain17.setParameterT(1, 20.); // core::gain::Smoothing
		gain17.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                             // jpanner::Pan is automated
		jpanner.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                             // gain14::Gain is automated
		gain14.setParameterT(1, 20.); // core::gain::Smoothing
		gain14.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch15::Index is automated
		
		clear7.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync7::Tempo is automated
		; // tempo_sync7::Multiplier is automated
		; // tempo_sync7::Enabled is automated
		; // tempo_sync7::UnsyncedTime is automated
		
		; // branch21::Index is automated
		
		; // CleanDelay2::DelayTime is automated
		; // CleanDelay2::FeedBack is automated
		
		; // faust7::delayms is automated
		; // faust7::feedback is automated
		
		;                                // faust26::decal is automated
		;                                // faust26::feedback is automated
		faust26.setParameterT(2, 0.976); // core::faust::population
		;                                // faust26::speed is automated
		;                                // faust26::taille is automated
		
		; // branch7::Index is automated
		
		; // faust22::Log2Delay is automated
		
		; // faust23::Q is automated
		; // faust23::freq is automated
		
		;                             // gain15::Gain is automated
		gain15.setParameterT(1, 20.); // core::gain::Smoothing
		gain15.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner7::Pan is automated
		jpanner7.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                             // gain12::Gain is automated
		gain12.setParameterT(1, 20.); // core::gain::Smoothing
		gain12.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch14::Index is automated
		
		clear6.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync6::Tempo is automated
		; // tempo_sync6::Multiplier is automated
		; // tempo_sync6::Enabled is automated
		; // tempo_sync6::UnsyncedTime is automated
		
		; // branch27::Index is automated
		
		; // CleanDelay3::DelayTime is automated
		; // CleanDelay3::FeedBack is automated
		
		; // faust6::delayms is automated
		; // faust6::feedback is automated
		
		;                             // faust33::decal is automated
		;                             // faust33::feedback is automated
		faust33.setParameterT(2, 1.); // core::faust::population
		;                             // faust33::speed is automated
		;                             // faust33::taille is automated
		
		; // branch6::Index is automated
		
		; // faust20::Log2Delay is automated
		
		; // faust21::Q is automated
		; // faust21::freq is automated
		
		;                             // gain13::Gain is automated
		gain13.setParameterT(1, 20.); // core::gain::Smoothing
		gain13.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner6::Pan is automated
		jpanner6.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                             // gain10::Gain is automated
		gain10.setParameterT(1, 20.); // core::gain::Smoothing
		gain10.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch13::Index is automated
		
		clear5.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync5::Tempo is automated
		; // tempo_sync5::Multiplier is automated
		; // tempo_sync5::Enabled is automated
		; // tempo_sync5::UnsyncedTime is automated
		
		; // branch26::Index is automated
		
		; // CleanDelay4::DelayTime is automated
		; // CleanDelay4::FeedBack is automated
		
		; // faust5::delayms is automated
		; // faust5::feedback is automated
		
		;                             // faust32::decal is automated
		;                             // faust32::feedback is automated
		faust32.setParameterT(2, 1.); // core::faust::population
		;                             // faust32::speed is automated
		;                             // faust32::taille is automated
		
		; // branch5::Index is automated
		
		; // faust18::Log2Delay is automated
		
		; // faust19::Q is automated
		; // faust19::freq is automated
		
		;                             // gain11::Gain is automated
		gain11.setParameterT(1, 20.); // core::gain::Smoothing
		gain11.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner5::Pan is automated
		jpanner5.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                            // gain8::Gain is automated
		gain8.setParameterT(1, 20.); // core::gain::Smoothing
		gain8.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch12::Index is automated
		
		clear4.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync4::Tempo is automated
		; // tempo_sync4::Multiplier is automated
		; // tempo_sync4::Enabled is automated
		; // tempo_sync4::UnsyncedTime is automated
		
		; // branch25::Index is automated
		
		; // CleanDelay5::DelayTime is automated
		; // CleanDelay5::FeedBack is automated
		
		; // faust4::delayms is automated
		; // faust4::feedback is automated
		
		;                             // faust31::decal is automated
		;                             // faust31::feedback is automated
		faust31.setParameterT(2, 1.); // core::faust::population
		;                             // faust31::speed is automated
		;                             // faust31::taille is automated
		
		; // branch4::Index is automated
		
		; // faust16::Log2Delay is automated
		
		; // faust17::Q is automated
		; // faust17::freq is automated
		
		;                            // gain9::Gain is automated
		gain9.setParameterT(1, 20.); // core::gain::Smoothing
		gain9.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner4::Pan is automated
		jpanner4.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                             // gain6::Gain is automated
		gain6.setParameterT(1, 23.9); // core::gain::Smoothing
		gain6.setParameterT(2, 0.);   // core::gain::ResetValue
		
		; // branch11::Index is automated
		
		clear3.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync3::Tempo is automated
		; // tempo_sync3::Multiplier is automated
		; // tempo_sync3::Enabled is automated
		; // tempo_sync3::UnsyncedTime is automated
		
		; // branch23::Index is automated
		
		; // CleanDelay6::DelayTime is automated
		; // CleanDelay6::FeedBack is automated
		
		; // faust3::delayms is automated
		; // faust3::feedback is automated
		
		;                             // faust29::decal is automated
		;                             // faust29::feedback is automated
		faust29.setParameterT(2, 1.); // core::faust::population
		;                             // faust29::speed is automated
		;                             // faust29::taille is automated
		
		; // branch3::Index is automated
		
		; // faust14::Log2Delay is automated
		
		; // faust15::Q is automated
		; // faust15::freq is automated
		
		;                            // gain7::Gain is automated
		gain7.setParameterT(1, 20.); // core::gain::Smoothing
		gain7.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner2::Pan is automated
		jpanner2.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                            // gain4::Gain is automated
		gain4.setParameterT(1, 20.); // core::gain::Smoothing
		gain4.setParameterT(2, 0.);  // core::gain::ResetValue
		
		; // branch10::Index is automated
		
		clear2.setParameterT(0, 0.); // math::clear::Value
		
		; // tempo_sync2::Tempo is automated
		; // tempo_sync2::Multiplier is automated
		; // tempo_sync2::Enabled is automated
		; // tempo_sync2::UnsyncedTime is automated
		
		; // branch24::Index is automated
		
		; // CleanDelay7::DelayTime is automated
		; // CleanDelay7::FeedBack is automated
		
		; // faust2::delayms is automated
		; // faust2::feedback is automated
		
		;                             // faust30::decal is automated
		;                             // faust30::feedback is automated
		faust30.setParameterT(2, 1.); // core::faust::population
		;                             // faust30::speed is automated
		;                             // faust30::taille is automated
		
		; // branch2::Index is automated
		
		; // faust12::Log2Delay is automated
		
		; // faust13::Q is automated
		; // faust13::freq is automated
		
		;                            // gain5::Gain is automated
		gain5.setParameterT(1, 20.); // core::gain::Smoothing
		gain5.setParameterT(2, 0.);  // core::gain::ResetValue
		
		;                              // jpanner3::Pan is automated
		jpanner3.setParameterT(1, 1.); // jdsp::jpanner::Rule
		
		;                            // gain3::Gain is automated
		gain3.setParameterT(1, 20.); // core::gain::Smoothing
		gain3.setParameterT(2, 0.);  // core::gain::ResetValue
		
		this->setParameterT(0, 1.);
		this->setParameterT(1, 16.);
		this->setParameterT(2, 0.5);
		this->setParameterT(3, 1);
		this->setParameterT(4, 1.);
		this->setParameterT(5, 2.08167e-17);
		this->setParameterT(6, 1.);
		this->setParameterT(7, 1.);
		this->setParameterT(8, 1.13731);
		this->setParameterT(9, 1.);
		this->setParameterT(10, 8.);
		this->setParameterT(11, 16.);
		this->setParameterT(12, 0.);
		this->setParameterT(13, 8.);
		this->setParameterT(14, 9.11481);
		this->setParameterT(15, 2.08167e-17);
		this->setParameterT(16, 0.);
		this->setParameterT(17, 2.);
		this->setParameterT(18, 0.61416);
		this->setParameterT(19, 14.);
		this->setParameterT(20, 9.);
		this->setParameterT(21, 1.);
		this->setParameterT(22, 0.);
		this->setParameterT(23, 0.);
		this->setParameterT(24, 0.);
		this->setParameterT(25, 0.);
		this->setParameterT(26, 0.);
		this->setParameterT(27, 0.);
		this->setParameterT(28, 0.155273);
		this->setParameterT(29, 0.);
		this->setParameterT(30, 0.);
		this->setParameterT(31, 0.);
		this->setParameterT(32, 0.);
		this->setParameterT(33, 0.);
		this->setParameterT(34, 0.);
		this->setParameterT(35, 0.);
		this->setParameterT(36, 0.);
		this->setParameterT(37, 0.);
		this->setParameterT(38, 0.);
		this->setParameterT(39, 0.);
		this->setParameterT(40, 0.);
		this->setParameterT(41, 0.);
		this->setParameterT(42, 1.);
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
		
		this->getT(0).getT(0).setExternalData(b, index);                 // stored_impl::cable_table1_t
		this->getT(0).getT(1).setExternalData(b, index);                 // stored_impl::cable_table2_t
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::cable_table5_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(0).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::ramp_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(1).getT(0).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::ramp3_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(1).getT(1).
        getT(2).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak3_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(0).
        getT(2).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::cable_table_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(1).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak_t<NV>
        getT(0).getT(0).getT(0).getT(0).getT(1).
        getT(3).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::ramp2_t<NV>
        getT(0).getT(0).getT(1).getT(0).getT(0).getT(0).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::clock_ramp2_t<NV>
        getT(0).getT(0).getT(1).getT(0).getT(0).getT(1).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak5_t<NV>
        getT(0).getT(0).getT(0).getT(1).getT(0).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::cable_table3_t<NV>
        getT(0).getT(0).getT(1).getT(1).getT(1).getT(0).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::cable_pack2_t<NV>
        getT(0).getT(0).getT(1).getT(1).getT(1).getT(1).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak1_t<NV>
        getT(0).getT(0).getT(0).getT(1).getT(1).
        getT(2).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::ramp1_t<NV>
        getT(0).getT(0).getT(2).getT(0).getT(1).getT(0).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::clock_ramp1_t<NV>
        getT(0).getT(0).getT(2).getT(0).getT(1).getT(1).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak4_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(0).
        getT(2).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::cable_table4_t<NV>
        getT(0).getT(0).getT(2).getT(1).getT(1).getT(0).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).getT(0).           // stored_impl::cable_pack3_t<NV>
        getT(0).getT(0).getT(2).getT(1).getT(1).getT(1).
        getT(0).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::peak2_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(1).
        getT(2).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(1).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank1_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(3).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank2_t
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(4).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank4_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(5).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank5_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(6).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(0).getT(1).                   // stored_impl::sliderbank6_t<NV>
        getT(0).getT(0).getT(0).getT(2).getT(3).
        getT(7).setExternalData(b, index);
		this->getT(1).getT(1).getT(1).getT(1).setExternalData(b, index); // stored_impl::oscilloscope_t
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
using stored = wrap::node<stored_impl::instance<NV>>;
}


