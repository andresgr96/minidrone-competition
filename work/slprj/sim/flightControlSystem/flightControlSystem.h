#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T bomzmgvf4n [ 2 ] ; } orji2pbk05 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T mkkaskumzr ; boolean_T jhr0womnye ; } imbf3wrgri ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T jc2u5ap2bv [ 2 ] ; } dyc32xehtl ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T ley0an2uip ; boolean_T njk4w5jozv ; } gabr0rnvjj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T hi5gqbqjyq_mbvzarwird [ 16 ] ; real32_T
lmgrqvqaqk_cl54gopm0x [ 16 ] ; real32_T evstouefyu_kkiq3xxxve [ 12 ] ;
real32_T jjbahtdunb_cxarnvbvui [ 9 ] ; real_T mfeecyi5au_bhxxfovxdy [ 4 ] ;
real_T b3li3qnms4_pbm3vprmfu [ 3 ] ; real_T jjbahtdunb_cv5hdgrwft [ 3 ] ;
real32_T oy1omazh2e_fqdqrf4qbc [ 4 ] ; real32_T aunmppqr2q_g2mlkqadfk [ 4 ] ;
real32_T gildthu0oy_g1smspu5ke [ 4 ] ; real_T nnthqeo0xb [ 2 ] ; real_T
gzu0wv2p0m [ 2 ] ; real_T mzcro4caxu [ 2 ] ; real_T jhtkvlotcj [ 2 ] ; real_T
iqocmhdfin [ 4 ] ; real_T lqqrqnfg0k [ 2 ] ; real_T myx153u3em [ 2 ] ; real_T
a33lpeqllh [ 2 ] ; real_T jwixzshd4t_merlcviukg [ 2 ] ; real32_T
p2nu5irp4m_nz4o0shxby [ 3 ] ; real32_T gw4bhgpoig_ppxrqq0gsf [ 3 ] ; real_T
b4lfjlgxec ; real_T layxwnmr5z ; real_T dvmyecaihr [ 3 ] ; real_T nrvdpfsfxa
; real_T egtp5trhzg ; real_T fzfp2ftkhm ; real_T hd11alvebq_llw0u2ae0v ;
real_T oxza4umofr_jwzvbuczlb ; real_T afp3dcs1aw_dhmrxtyqop ; real_T
unnamed_idx_2 ; real_T htv1xfy1hr_idx_0 ; real_T cpqxwlj3q2_idx_1 ; real_T
htv1xfy1hr_idx_1 ; real_T b3li3qnms4_tmp ; real32_T lgxyarf22c [ 2 ] ;
real32_T gfpexfdgco [ 4 ] ; real32_T fqjnqqkpgy [ 2 ] ; real32_T gj4cf0tyj5 [
2 ] ; real32_T j4qe4nfjsv [ 2 ] ; real32_T bsmav2qoqf [ 4 ] ; real32_T
oaihmoohg4 [ 2 ] ; real32_T bgjnlzeaxl [ 8 ] ; real32_T o340jloaui [ 8 ] ;
real32_T oezutdojt2 [ 16 ] ; real32_T j1jumdl5wm [ 4 ] ; real32_T h4vd5izemq
[ 4 ] ; real32_T adokisptgo [ 4 ] ; real32_T mrrvozc1qc_guugdwf2m3 [ 2 ] ;
real32_T bjps1hfvua_ldqodwenvz [ 2 ] ; real32_T olsfagmvoi_dhamdvybc1 [ 2 ] ;
real32_T kgcmxzl0fl_dypejvacrn [ 2 ] ; real32_T bwrjiempwp_lxo5edjg3c [ 2 ] ;
real32_T gfg0sju4bm_owjr1h1vqy [ 2 ] ; real32_T b5mq1a52pd_bjbgfqrolh [ 2 ] ;
real32_T ipa11olwgb_nuebgmauvi [ 2 ] ; real32_T lqeik1h102_bsqwvugooi [ 2 ] ;
real32_T epnbjpnxkg ; real32_T dosvknpiqk ; real32_T li2d3qqqn4 ; real32_T
prfrp52vqr ; real32_T a5i4fgo1s2 [ 2 ] ; real32_T lgnaoiqsj1 ; real32_T
e0ny3yvjoz [ 2 ] ; real32_T mx5dsshjkn [ 2 ] ; real32_T edgrcb30v2 [ 2 ] ;
real32_T iqmnb11niv ; real32_T nxb3iaivdo [ 4 ] ; real32_T braptxypg5 [ 2 ] ;
real32_T nuusxhh10t [ 2 ] ; real32_T mfzcoyf1jm [ 2 ] ; real32_T aqxt5vngpw [
4 ] ; real32_T dq3deiusws [ 3 ] ; real32_T evofcbwaww [ 16 ] ; real32_T
nuasakb4gb [ 2 ] ; real32_T hwxrjq0it0 [ 2 ] ; real32_T bmrdaxfgpr [ 4 ] ;
real32_T dzof3xbsea ; real32_T acc1 ; real32_T h3hwnlathw_lnjdk5wtww ;
real32_T ljo1dpaub4_hv2ho1zopz ; real32_T jhtkvlotcj_bnlywzniup ; real32_T
eb5vjpyuav_dapv3jlyq5 ; real32_T eq5jssgbid_ezqlmfzvpq ; real32_T
c0idrrnomy_bjvjhhzy4i ; real32_T asdy1fzhgi_tmp ; real32_T
asdy1fzhgi_tmp_jzx3amusab ; real32_T olsfagmvoi_fdinthrxmb ; real32_T
kgl3ocgllz_idx_2 ; real32_T ljddwhaot1_idx_0 ; real32_T ljddwhaot1_idx_1 ;
real32_T ljddwhaot1_idx_2 ; real32_T bzklm5kboi_idx_2 ; real32_T
kgl3ocgllz_idx_0 ; real32_T kgl3ocgllz_idx_1 ; real32_T lan2dv1qbd_idx_0 ;
real32_T cqw0qrp4eu_idx_1 ; real32_T cqw0qrp4eu_idx_2 ; real32_T
f4dbdpv42b_idx_0 ; real32_T f4dbdpv42b_idx_1 ; real32_T oru2xh2cyl_idx_0 ;
real32_T oru2xh2cyl_idx_1 ; real32_T jjbahtdunb_tmp ; real32_T
jjbahtdunb_tmp_al00mdgrv4 ; real32_T jjbahtdunb_tmp_ju13rw2h0m ; real32_T
jjbahtdunb_tmp_jz50ptvnrg ; real32_T jjbahtdunb_tmp_o4f35lbcvx ; real32_T
jjbahtdunb_tmp_nyxm0bsxsn ; real32_T k1onnu0rr2_icdfyazkhu ; real32_T
isx1jookfr_oyypvi4boh ; real32_T pt2vn1gkd4_nvsvtgkap4 ; real32_T
pzfs30csun_m3yhjduhi1 ; int32_T cff ; int32_T denIdx ; int32_T memOffset ;
int32_T i ; uint32_T kxhfudfh35 ; uint32_T nwe1q4wth1 ; uint32_T okh24i0qyo ;
real32_T bwhquruhg4 [ 6 ] ; real32_T df5jwd0dve ; uint32_T
bmogzm3rwx_czkfpwuzm5 ; uint16_T ao41flvyb1 ; int16_T iimupityvq ; uint8_T
oa5ytsmaiv ; boolean_T p1k24wzycz ; boolean_T aoneafkd51 ; boolean_T
drrbtvcsxs ; boolean_T aagcy0d5ye ; dyc32xehtl ipbtas1tys ; orji2pbk05
bm3dpymkhz ; dyc32xehtl ifzbhw4mrws ; orji2pbk05 phrpuocqmvu ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mi4mocbazh ; real_T mtonzezz2z [ 2 ] ; real_T
ddv3ztj2wp [ 3 ] ; real_T bw2ribqmwm ; real_T f2ynnmexgv ; real_T ewjj1agcxb
; real_T lsitkrgmgv ; struct { void * AQHandles ; } puq03cpvbg ; real32_T
b3fmbw5stg [ 2 ] ; real32_T aq2aymvaio [ 3 ] ; real32_T dzwopklw3c ; real32_T
d4fp3a2mpz [ 15 ] ; real32_T fl0vv44tbs [ 2 ] ; real32_T as5a0ikbk1 [ 2 ] ;
real32_T ncgo1wegzg ; real32_T mirtkskmtr ; real32_T jduomia1pb [ 5 ] ;
real32_T od5c00niot [ 4 ] ; real32_T dqfv1m130o [ 10 ] ; real32_T meognsjf1t
[ 2 ] ; real32_T gcgpru4rcb [ 2 ] ; real32_T peklmaellz [ 2 ] ; real32_T
bsetqjfri4 ; real32_T dsjbzv2lh4 [ 2 ] ; real32_T gixvkpnpus [ 2 ] ; real32_T
ow5xb5ovt0 [ 2 ] ; real32_T krs1cvkxzk [ 2 ] ; real32_T c4kiksmhh2 ; int32_T
bbkjtf4kuy ; uint32_T l3lcputuyl ; uint32_T pjgu33zeph ; uint32_T dxm3w2i52x
; real32_T orkq4iljgu ; real32_T b1nmhkw4zo ; real32_T n0mydijbcx ; real32_T
iwg03owvar ; real32_T mf2pp40f5v [ 2 ] ; real32_T pwlp5beuqs [ 2 ] ; uint16_T
gaxgdudnvc ; uint16_T nhnlpyyc10 ; int8_T dq5lalhp1e ; int8_T fpr1qi0oiw ;
int8_T klyrn0mwhb ; int8_T mfifybuxty ; int8_T a1oodzfxvv ; int8_T mgysgsd2g4
; int8_T idn2v5d33m ; uint8_T l4tifptbm5 ; uint8_T ceueb3e4so ; uint8_T
lvqzer0fpz ; uint8_T be5jkfqe3t ; boolean_T de4yc1bkky ; boolean_T jd3dqtmo2p
; boolean_T f1jy25gy04 ; boolean_T gdn4qfzvsk ; boolean_T cqi2pi21ow ;
boolean_T kh1khihcrt ; boolean_T iftedegxuv ; boolean_T g4zcogq4xi ;
gabr0rnvjj ipbtas1tys ; imbf3wrgri bm3dpymkhz ; gabr0rnvjj ifzbhw4mrws ;
imbf3wrgri phrpuocqmvu ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc jvbbqhrajh ;
hrtts4l5bc clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc ghadbep3bbv ; }
dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T b3ouxrig41 ; } k5baggiqtb ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState b1rw3rggh2 ; } ph1mky0ofs ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { boolean_T paaawnbwtb_mbvzarwird [ 19200 ] ; uint8_T
bmnrxe4hib_cl54gopm0x [ 19200 ] ; uint8_T avtdjqpt2q_kkiq3xxxve [ 19200 ] ;
uint8_T eayiqcdmtw_cxarnvbvui [ 19200 ] ; real_T lineSteps [ 14 ] ; real_T dv
[ 2 ] ; real_T dv1 [ 2 ] ; real_T bwrqbaz4bt ; real_T lzu3pemahn ; real_T
angle ; real_T state ; real_T len_left ; real_T len_right ; real_T
len_left_or ; real_T len_right_or ; real_T len_back_right ; real_T
hzxcmg0ioe_bhxxfovxdy ; real_T nhh54h3gzi_pbm3vprmfu ; real_T
mur0cwcqch_cv5hdgrwft ; real_T doxwhoc5pa_fqdqrf4qbc ; eo4bbte2ey otjykwnhb3s
; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T dct2gyhlhn [ 50 ] ; real_T mdrqgzmhxm [ 2 ] ; real_T
fdg0ctxzju [ 2 ] ; real_T mmrjfuhf4s ; real_T gxr4lx4uyw [ 14 ] ; real_T
lfoikcitje ; real_T pmpp3mxiwl ; real_T pfvcihpfoh ; bjqsgn0csy l152eirbdu ;
int8_T btek1dk1x3 ; int8_T jw22f2in0f ; int8_T h1isy2vxmu ; int8_T ccmaqi4v1z
; boolean_T jjrfotind4 ; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { k5baggiqtb otjykwnhb3s ; } h5liyesltnn ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ph1mky0ofs otjykwnhb3s ; } cspyln32yuv ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct je33m1dqwd_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct fpqg1jdlo0_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 [ 4 ] ; real_T P_66 [ 2 ] ; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ]
; real_T P_69 [ 2 ] ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 4 ] ;
real_T P_73 [ 2 ] ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 [ 2 ] ; real_T P_79 [ 3 ] ; real_T P_80 [ 4 ] ; real_T P_81 [ 2 ]
; real_T P_82 [ 2 ] ; real_T P_83 [ 4 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 2
] ; real_T P_86 ; real_T P_87 [ 3 ] ; real_T P_88 [ 16 ] ; real_T P_89 [ 8 ]
; real_T P_90 [ 8 ] ; real32_T P_91 ; real32_T P_92 ; real32_T P_93 ;
real32_T P_94 [ 2 ] ; real32_T P_95 ; real32_T P_96 ; real32_T P_97 ;
real32_T P_98 ; real32_T P_99 ; real32_T P_100 ; real32_T P_101 ; real32_T
P_102 ; real32_T P_103 ; real32_T P_104 ; real32_T P_105 [ 4 ] ; real32_T
P_106 [ 4 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T
P_110 [ 6 ] ; real32_T P_111 [ 6 ] ; real32_T P_112 ; real32_T P_113 [ 6 ] ;
real32_T P_114 ; real32_T P_115 [ 2 ] ; real32_T P_116 [ 2 ] ; real32_T P_117
; real32_T P_118 [ 2 ] ; real32_T P_119 [ 2 ] ; real32_T P_120 ; real32_T
P_121 [ 6 ] ; real32_T P_122 [ 6 ] ; real32_T P_123 ; real32_T P_124 ;
real32_T P_125 [ 6 ] ; real32_T P_126 [ 6 ] ; real32_T P_127 ; real32_T P_128
; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ;
real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T
P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 2 ] ; real32_T
P_141 [ 2 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T
P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T P_149 ;
real32_T P_150 ; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T
P_154 ; real32_T P_155 [ 4 ] ; real32_T P_156 ; real32_T P_157 ; real32_T
P_158 ; real32_T P_159 ; real32_T P_160 [ 16 ] ; real32_T P_161 ; real32_T
P_162 ; real32_T P_163 ; real32_T P_164 [ 4 ] ; real32_T P_165 [ 2 ] ;
real32_T P_166 [ 2 ] ; real32_T P_167 ; real32_T P_168 [ 4 ] ; real32_T P_169
[ 4 ] ; real32_T P_170 [ 2 ] ; real32_T P_171 [ 2 ] ; real32_T P_172 [ 4 ] ;
real32_T P_173 ; real32_T P_174 [ 2 ] ; real32_T P_175 [ 4 ] ; real32_T P_176
[ 2 ] ; real32_T P_177 [ 2 ] ; real32_T P_178 ; real32_T P_179 [ 4 ] ;
real32_T P_180 [ 4 ] ; real32_T P_181 [ 2 ] ; real32_T P_182 [ 2 ] ; real32_T
P_183 [ 4 ] ; real32_T P_184 ; real32_T P_185 [ 2 ] ; real32_T P_186 ;
real32_T P_187 ; real32_T P_188 [ 16 ] ; real32_T P_189 [ 8 ] ; real32_T
P_190 [ 8 ] ; real32_T P_191 [ 4 ] ; real32_T P_192 [ 16 ] ; real32_T P_193 [
16 ] ; real32_T P_194 [ 8 ] ; real32_T P_195 [ 8 ] ; real32_T P_196 [ 16 ] ;
real32_T P_197 [ 4 ] ; real32_T P_198 [ 4 ] ; uint32_T P_199 ; uint32_T P_200
; uint32_T P_201 ; uint32_T P_202 ; uint32_T P_203 ; uint32_T P_204 ;
uint32_T P_205 ; uint32_T P_206 ; uint32_T P_207 ; uint16_T P_208 ; uint16_T
P_209 ; uint16_T P_210 ; boolean_T P_211 ; boolean_T P_212 ; boolean_T P_213
; boolean_T P_214 ; boolean_T P_215 ; int8_T P_216 ; int8_T P_217 ; int8_T
P_218 ; int8_T P_219 ; int8_T P_220 ; int8_T P_221 ; int8_T P_222 ; int8_T
P_223 ; uint8_T P_224 ; uint8_T P_225 ; fpqg1jdlo0 ipbtas1tys ; je33m1dqwd
bm3dpymkhz ; fpqg1jdlo0 ifzbhw4mrws ; je33m1dqwd phrpuocqmvu ; bpvdgm2xq5
ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5 clwiujjdqo ; bpvdgm2xq5
acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ;
real_T P_5 ; real_T P_6 ; real_T P_7 [ 14 ] ; real_T P_8 ; real_T P_9 ;
real_T P_10 ; real_T P_11 ; real_T P_12 ; nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 30 ] ; int32_T * vardimsAddress [
30 ] ; RTWLoggingFcnPtr loggingPtrs [ 30 ] ; sysRanDType * systemRan [ 36 ] ;
int_T systemTid [ 36 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void dw0zngvhyq (
void ) ; extern void ha1ipjbq54 ( uint8_T * o3vpgniqky ) ; extern void
gwlyno50ln ( void ) ; extern void m0l5se3ogg ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
flightControlSystemTID0 ( const SensorsBus * pxdb2gu5va , real32_T pikqq4svts
[ 4 ] , uint8_T * o3vpgniqky ) ; extern void flightControlSystemTID1 ( void )
; extern void flightControlSystemTID2 ( void ) ; extern void o2f5l50guo (
void ) ; extern void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] , boolean_T
pfxu5bb25d ) ; extern void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd *
localP ) ; extern void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) ; extern void phrpuocqmv ( ipf5ube4r0 * const
accn4cnket , boolean_T hjrswm4ob0 , const real32_T ndqlqfbq0n [ 2 ] ,
real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] , const real32_T
pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o , orji2pbk05 *
localB , imbf3wrgri * localDW , je33m1dqwd * localP ) ; extern void
e0j2slboh1 ( dyc32xehtl * localB , fpqg1jdlo0 * localP ) ; extern void
ng2z3yysbc ( dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP
) ; extern void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket , boolean_T
ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T fppyei0jac [ 2
] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] , dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) ; extern void
mr51bswvyz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu * localDW ) ; extern
void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) ; extern void bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) ; extern void eyt3piuhqz ( ipf5ube4r0 * const
accn4cnket , dmp1xsadgu * localDW ) ; extern void kegjp2lgms ( eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void
lsjhvu4egy ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) ; extern void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus
* fp0u5nlpgw , real_T ay1xsyaztb , real_T nfqd2uxnr0 , eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE ) ; extern
void otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern nllkaxiwhzw dqykr4eggmg ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern cspyln32yuv f51itwtzkqf ;
#endif
#endif
