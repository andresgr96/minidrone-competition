#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_types.h"
#include "flightControlSystem_private.h"
#include "mwmathutil.h"
#include <string.h>
#include "traceLine_Cky3vk4l.h"
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
#define bb45nl1j55 ((uint8_T)2U)
#define cajjf103hj ((uint8_T)4U)
#define gjmge4et23 ((uint8_T)1U)
#define ivt1zgxfxg ((uint8_T)4U)
#define kqr31kfslj ((uint8_T)1U)
#define mm1llsicgl ((uint8_T)3U)
#define myeot34c2w ((uint8_T)2U)
#define p1yolbxqcn ((uint8_T)0U)
#define pxcbyhihm3 ((uint8_T)3U)
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
206 ] = { { "pjles00mjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "hpijc0phcq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e3kwjfmtyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gnaa0kdq4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "clwgr5jdek" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hb5mq1jp4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ibbiqytpnr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kgkmz2ehxp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lq5gtrqmfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "i0nykibtoa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fpqg1jdlo0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gabr0rnvjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dyc32xehtl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gvrocgqiar" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "chqb5yk4na" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ohupmhckxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "indibvooxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lwnnlvnhdo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hxh5tgi533" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fj00x4sgwu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nqkihlj0vf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ckpmcwhwmu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l5zi4xqiqo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "je33m1dqwd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "imbf3wrgri" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "orji2pbk05" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "abzv3zworu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2thaieuby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nybory5x2z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oby15q5y4g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dhaumv5oxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nlzlprwh35" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ps2hd2ktn0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jm1sywurry" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "grsgxiu05c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gux1we1f0x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cfn0s3jrfx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f3ujivsrsw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hw3h0zldnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ezsua5bijx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "omkirkweac" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lrsxga1mux" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "edl35owv4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jig1nknlld" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "npn1dfesfs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iffergcei1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bsr3dujuk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "crxyn1tssm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lwj4qypsny" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bpvdgm2xq5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hrtts4l5bc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mqmoncitu3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "k5baggiqtb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ei3m5g1hta" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hn4i3fu15a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lbu5phzg3y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mtaqz0ggi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mfdtth4fkl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cn2vepzj0w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dfqhc4tws4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ph1mky0ofs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "femqyyfyjs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nu4qaxumex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dmp1xsadgu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "eo4bbte2ey" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h5liyesltnn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2rcqsbpxyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2f5l50guo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "m0l5se3ogg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o5hyd2bjrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pyvd4pdf3i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ha1ipjbq54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4qzdbbxmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dw0zngvhyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o0d2t1xos2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oplbkbi520" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eyt3piuhqz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kegjp2lgms" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nwvibpjmp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lsjhvu4egy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bxsrqc204k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ic5jb3movn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "n4xf3lkvmk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cyp5v4ller" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mr51bswvyz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "otjykwnhb3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Control System" } , { "o3myonyzve" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cbxjbqi34b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kwdvu5ctzj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ng2z3yysbc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e0j2slboh1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "geavflab1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lc0erw2cz2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "flqbd5kc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ifzbhw4mrw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Enabled Subsystem" } , { "o1pgdacg0u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cxgwlvxv4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ofaogkyrt4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "alfdzl2fz1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gcledvfwzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flsbajpzfi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "aummrq21x4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dq3x4qvypw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "phrpuocqmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "MeasurementUpdate" } , { "lfexhnspuh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nbew0lql35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o10422rka0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ns1oanlnmc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "i5cf5wjr13" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pmrewofspm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gabbhpxdh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cj0oeh3eko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jfkq2sjtgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "SqrtUsedFcn" } , { "itmfjpgv1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dychmi5jvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "okzguhbnst" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gjrgypdhn2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nsvs5ni5i5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b5nnaqep53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ghadbep3bb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Geofencing error" } ,
{ "flightControlSystem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f51itwtzkqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void
* ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } ,
{ "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , {
"int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
0.0 , 1.0 , 4.0 , 3.0 , 3.0 , 0.0 , { - 1.0 , - 0.8660254037844386 , -
0.8660254037844386 , 0.0 , 0.0 , 0.8660254037844386 , 0.8660254037844386 ,
0.0 , - 0.5 , 0.5 , - 1.0 , 1.0 , - 0.5 , 0.5 } , 0.0 , 1.0 , 0.0 , 0.0 , 0.0
, { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , { 0.00012F , 9.72E-5F } , { 0.006F
, 0.00486F } , 0.1F , 0.0F , 0.0F , 0.0F , 0.0F , - 0.5F , - 0.34906584F , -
0.02F , { 70.0F , 70.0F } , 0.7F , 0.2F , 4.0F , { 0.003F , 0.00243F } , 0.5F
, 0.34906584F , 0.02F , 10.0F , 10.0F , 6.0F , 6.0F , 0.01F , 0.01F , 6.867F
, 12.753F , - 0.4F , 0.0F , 0.0F , 80.0F , 80.0F , 0.6F , 0.5F , 0.6F , 0.5F
, 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F , 4294967295U , 4294967295U ,
4294967295U , 1U , 800U , 65535U , 100U , 0.0 , 0.0 , 0.0 , 0.0 , {
3.7568380197512489E-6 , 1.1270514059253748E-5 , 1.1270514059253748E-5 ,
3.7568380197512489E-6 } , { 1.0 , - 2.9371707284498907 , 2.8762997234793319 ,
- 0.939098940325283 } , 0.0 , 0.0 , 1.0 , 0.0 , 0.5 , 600.0 , { 1.0 , 0.0 ,
0.005 , 1.0 } , { 0.0 , 0.005 } , { 1.0 , 0.0 } , { 0.0026241420641872266 ,
0.0069776736071494585 , 0.0069776736071494594 , 0.037607692935053325 } , {
0.026590304322229696 , 0.069776736071494483 } , { 0.026241420641872265 ,
0.0697767360714946 } , 0.0 , { 0.002694858992582106 , 0.0071657120718247548 ,
0.0071657120718247548 , 0.038107692935053367 } , { 0.0 , 1.0 } , 0.0 , 0.0 ,
0.0005 , 0.1 , { - 0.046 , 0.0 } , { 0.0 , 0.0 , 9.81 } , {
1097.3834951572255 , - 30.388465402591859 , - 30.388465402591855 ,
7.2223686232128914 } , { 0.0011870943291829544 , - 3.2868164179443428E-5 } ,
{ 0.0011869299883620552 , - 3.2868164179443354E-5 } , { 1097.3834951572255 ,
- 30.388465402591859 , - 30.388465402591855 , 7.2223686232128914 } , {
0.0011870943291829544 , - 3.2868164179443428E-5 } , { 0.0011869299883620552 ,
- 3.2868164179443354E-5 } , 0.0 , { 0.0 , 0.0 , - 9.81 } , {
1.3281632400274306 , 0.0 , - 0.43210920795542979 , 0.0 , 0.0 ,
1.3281632400274306 , 0.0 , - 0.43210920795542979 , - 0.43210920795542984 ,
0.0 , 6.14734986237778 , 0.0 , 0.0 , - 0.43210920795542984 , 0.0 ,
6.14734986237778 } , { 0.066516189303360354 , 5.23402355848703E-19 , -
0.021605460397771867 , - 4.8628553107267881E-19 , 4.3622439914025307E-18 ,
0.066516189303360354 , - 4.5659075919712689E-17 , - 0.021605460397771864 } ,
{ 0.066408162001371535 , 0.0 , - 0.021605460397771489 , 0.0 , 0.0 ,
0.066408162001371535 , 0.0 , - 0.021605460397771489 } , 0.45F , 0.8F , 0.5F ,
{ - 1.0F , 1.0F } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F , 0.005F ,
0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F ,
0.005F , 0.0F , 2.0F , - 2.0F , 0.24F , - 0.61803F , 1.20204329F , -
1.20204329F , 0.005F , { 1.0F , 1.0F } , { 8.95774746F , - 6.95774698F } ,
0.0F , 0.005F , 0.005F , 0.52359879F , - 0.52359879F , 0.004F , 0.005F , 0.0F
, 0.0012F , 0.002F , - 1530.72681F , 500.0F , 10.0F , { 1.0F , - 1.0F , 1.0F
, - 1.0F } , 1.0F , 1.0F , 0.0F , 0.0F , { 0.25F , 0.25F , 0.25F , 0.25F ,
103.573624F , - 103.573624F , 103.573624F , - 103.573624F , - 5.66592F , -
5.66592F , 5.66592F , 5.66592F , - 5.66592F , 5.66592F , 5.66592F , -
5.66592F } , 0.0F , 0.0F , 0.0F , { 1.0F , 0.0F , - 0.005F , 1.0F } , {
0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F , 0.0F } , { 1.0F ,
0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , - 30.4245777F , 7.22336864F }
, { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F
, 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F , 0.0F } , 0.0F , 2.0F , {
1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F ,
1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , { 0.005F , 0.0F , 0.0F , 0.0F
, 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F ,
0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 1.42263806F , 0.0F , -
0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , - 0.462845951F , -
0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , - 0.462845951F , 0.0F ,
6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.09F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F } , { 20.0F ,
0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , 0U , 0U , 0U , 1U ,
0U , 1U , 0U , 1U , 0U , 0U , 1U , 0U , false , false , false , false , true
, 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1U , 0U , { 0.0F } , { 0.0F } , {
0.0F } , { 0.0F } , { 0U } , { 0U } , { 0U } , { 99U } , { 1U } } } ;
lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ;
cspyln32yuv f51itwtzkqf ; void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5
* localP ) { * hfpztkhwej = localP -> P_0 ; } void jfkq2sjtgw ( const
real32_T duqg5o24fi [ 4 ] , boolean_T pfxu5bb25d ) { real32_T iuxdsatvzo [ 4
] ; int32_T i ; real32_T iuxdsatvzo_tmp ; if ( pfxu5bb25d ) { for ( i = 0 ; i
< 2 ; i ++ ) { iuxdsatvzo_tmp = duqg5o24fi [ i + 2 ] ; iuxdsatvzo [ i ] =
iuxdsatvzo_tmp * duqg5o24fi [ 2 ] + duqg5o24fi [ i ] * duqg5o24fi [ 0 ] ;
iuxdsatvzo [ i + 2 ] = iuxdsatvzo_tmp * duqg5o24fi [ 3 ] + duqg5o24fi [ i ] *
duqg5o24fi [ 1 ] ; } } else { for ( i = 0 ; i < 2 ; i ++ ) { iuxdsatvzo [ i ]
= duqg5o24fi [ i ] ; iuxdsatvzo [ i + 2 ] = duqg5o24fi [ i + 2 ] ; } } } void
gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd * localP ) { localB ->
bomzmgvf4n [ 0 ] = localP -> P_0 ; localB -> bomzmgvf4n [ 1 ] = localP -> P_0
; } void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd
* localP ) { localB -> bomzmgvf4n [ 0 ] = localP -> P_0 ; localB ->
bomzmgvf4n [ 1 ] = localP -> P_0 ; localDW -> jhr0womnye = false ; } void
phrpuocqmv ( ipf5ube4r0 * const accn4cnket , boolean_T hjrswm4ob0 , const
real32_T ndqlqfbq0n [ 2 ] , real32_T pp4ryk1bnn , const real32_T crftt4mdlv [
2 ] , const real32_T pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T
k3tun14l4o , orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd * localP
) { real32_T aohxlltyk5 ; real32_T tmp ; if ( hjrswm4ob0 ) { if ( ! localDW
-> jhr0womnye ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart (
accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; } localDW -> jhr0womnye = true ; } tmp = crftt4mdlv [ 0 ] ;
aohxlltyk5 = crftt4mdlv [ 1 ] ; tmp *= pc1pu0u41d [ 0 ] ; tmp += aohxlltyk5 *
pc1pu0u41d [ 1 ] ; aohxlltyk5 = pp4ryk1bnn - ( kemszrfmdj * k3tun14l4o + tmp
) ; localB -> bomzmgvf4n [ 0 ] = ndqlqfbq0n [ 0 ] * aohxlltyk5 ; localB ->
bomzmgvf4n [ 1 ] = ndqlqfbq0n [ 1 ] * aohxlltyk5 ; srUpdateBC ( localDW ->
mkkaskumzr ) ; } else if ( localDW -> jhr0womnye ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
alfdzl2fz1 ( localB , localDW , localP ) ; } } void e0j2slboh1 ( dyc32xehtl *
localB , fpqg1jdlo0 * localP ) { localB -> jc2u5ap2bv [ 0 ] = localP -> P_0 ;
localB -> jc2u5ap2bv [ 1 ] = localP -> P_0 ; } void ng2z3yysbc ( dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { localB -> jc2u5ap2bv
[ 0 ] = localP -> P_0 ; localB -> jc2u5ap2bv [ 1 ] = localP -> P_0 ; localDW
-> njk4w5jozv = false ; } void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket ,
boolean_T ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T
fppyei0jac [ 2 ] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] ,
dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { real32_T
mjzsyo5ls5 ; real32_T tmp ; if ( ny1m4yhfkt ) { if ( ! localDW -> njk4w5jozv
) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> njk4w5jozv = true ; } tmp = fppyei0jac [ 0 ] ; mjzsyo5ls5 =
fppyei0jac [ 1 ] ; tmp *= fn1cyjs1o0 [ 0 ] ; tmp += mjzsyo5ls5 * fn1cyjs1o0 [
1 ] ; mjzsyo5ls5 = fjag4trd4p - tmp ; tmp = izmwj1ddpc [ 0 ] * mjzsyo5ls5 ;
mjzsyo5ls5 *= izmwj1ddpc [ 1 ] ; localB -> jc2u5ap2bv [ 0 ] = tmp ; localB ->
jc2u5ap2bv [ 1 ] = mjzsyo5ls5 ; srUpdateBC ( localDW -> ley0an2uip ) ; } else
if ( localDW -> njk4w5jozv ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; ng2z3yysbc ( localB , localDW , localP ) ; } }
void mr51bswvyz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu * localDW ) { if
( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && (
( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Control System/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "State Estimator:1" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "a3e2ed89-a44e-4d89-be1b-b2eba294d939" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } } void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] =
localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP -> P_102 ; localDW ->
dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ; localDW ->
de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_107 ; localDW
-> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ] = localP
-> P_107 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_109 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_112
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_199 ; localDW -> ncgo1wegzg = localP -> P_117 ;
localDW -> mirtkskmtr = localP -> P_120 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_123 ; } localDW -> pjgu33zeph =
localP -> P_200 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_127 ; } localDW -> gaxgdudnvc =
localP -> P_208 ; localDW -> bsetqjfri4 = localP -> P_132 ; localDW ->
fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] = localP -> P_9 ; localDW ->
gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW -> peklmaellz [ 0 ] = localP ->
P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus
[ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ;
localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> meognsjf1t [ 1 ] =
localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_129 ; localDW ->
peklmaellz [ 1 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_142 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_149 ; localDW -> dxm3w2i52x = localP ->
P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ; localB -> oa5ytsmaiv =
localP -> P_225 ; localDW -> lvqzer0fpz = p1yolbxqcn ; localDW -> be5jkfqe3t
= p1yolbxqcn ; localDW -> nhnlpyyc10 = 0U ; localDW -> l4tifptbm5 = 0U ;
localDW -> ceueb3e4so = p1yolbxqcn ; localDW -> ewjj1agcxb = 0.0 ; localDW ->
lsitkrgmgv = 0.0 ; localB -> nrvdpfsfxa = 0.0 ; localB -> egtp5trhzg = 0.0 ;
localB -> fzfp2ftkhm = 0.0 ; localB -> a33lpeqllh [ 0 ] = localP -> P_53 ;
localB -> myx153u3em [ 0 ] = localP -> P_54 ; localB -> a33lpeqllh [ 1 ] =
localP -> P_53 ; localB -> myx153u3em [ 1 ] = localP -> P_54 ; gcledvfwzt ( &
localB -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; e0j2slboh1 ( & localB ->
ifzbhw4mrws , & localP -> ifzbhw4mrws ) ; gcledvfwzt ( & localB -> bm3dpymkhz
, & localP -> bm3dpymkhz ) ; e0j2slboh1 ( & localB -> ipbtas1tys , & localP
-> ipbtas1tys ) ; localB -> dzof3xbsea = localP -> P_96 ; localB ->
adokisptgo [ 0 ] = localP -> P_97 ; localB -> h4vd5izemq [ 0 ] = localP ->
P_98 ; localB -> adokisptgo [ 1 ] = localP -> P_97 ; localB -> h4vd5izemq [ 1
] = localP -> P_98 ; localB -> adokisptgo [ 2 ] = localP -> P_97 ; localB ->
h4vd5izemq [ 2 ] = localP -> P_98 ; localB -> adokisptgo [ 3 ] = localP ->
P_97 ; localB -> h4vd5izemq [ 3 ] = localP -> P_98 ; } void bxsrqc204k (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T
i ; localDW -> b3fmbw5stg [ 0 ] = localP -> P_102 ; localDW -> b3fmbw5stg [ 1
] = localP -> P_102 ; localDW -> dq5lalhp1e = 2 ; localDW -> mi4mocbazh =
localP -> P_55 ; localDW -> de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] =
localP -> P_107 ; localDW -> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 1 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 1 ] = localP ->
P_59 ; localDW -> aq2aymvaio [ 2 ] = localP -> P_107 ; localDW -> ddv3ztj2wp
[ 2 ] = localP -> P_59 ; localDW -> dzwopklw3c = localP -> P_109 ; localDW ->
bbkjtf4kuy = 0 ; for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ]
= localP -> P_112 ; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 =
true ; localDW -> l3lcputuyl = localP -> P_199 ; localDW -> ncgo1wegzg =
localP -> P_117 ; localDW -> mirtkskmtr = localP -> P_120 ; for ( i = 0 ; i <
5 ; i ++ ) { localDW -> jduomia1pb [ i ] = localP -> P_123 ; } localDW ->
pjgu33zeph = localP -> P_200 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i
< 10 ; i ++ ) { localDW -> dqfv1m130o [ i ] = localP -> P_127 ; } localDW ->
gaxgdudnvc = localP -> P_208 ; localDW -> bsetqjfri4 = localP -> P_132 ;
localDW -> fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] = localP -> P_9 ;
localDW -> gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW -> peklmaellz [ 0 ] =
localP -> P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW ->
gixvkpnpus [ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0 [ 0 ] = localP ->
P_12 ; localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> meognsjf1t [
1 ] = localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_129 ; localDW
-> peklmaellz [ 1 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 1 ] = localP
-> P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_142 ; localDW ->
ow5xb5ovt0 [ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP ->
P_10 ; localDW -> c4kiksmhh2 = localP -> P_149 ; localDW -> dxm3w2i52x =
localP -> P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ; localDW ->
lvqzer0fpz = p1yolbxqcn ; localDW -> be5jkfqe3t = p1yolbxqcn ; localDW ->
nhnlpyyc10 = 0U ; localDW -> l4tifptbm5 = 0U ; localDW -> ceueb3e4so =
p1yolbxqcn ; localDW -> ewjj1agcxb = 0.0 ; localDW -> lsitkrgmgv = 0.0 ;
localB -> nrvdpfsfxa = 0.0 ; localB -> egtp5trhzg = 0.0 ; localB ->
fzfp2ftkhm = 0.0 ; } void kegjp2lgms ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { if ( localDW -> g4zcogq4xi ) { localB ->
a33lpeqllh [ 0 ] = localP -> P_53 ; localB -> a33lpeqllh [ 1 ] = localP ->
P_53 ; localDW -> g4zcogq4xi = false ; } if ( localDW -> iftedegxuv ) {
localB -> myx153u3em [ 0 ] = localP -> P_54 ; localB -> myx153u3em [ 1 ] =
localP -> P_54 ; localDW -> iftedegxuv = false ; } if ( localDW -> kh1khihcrt
) { localB -> adokisptgo [ 0 ] = localP -> P_97 ; localB -> adokisptgo [ 1 ]
= localP -> P_97 ; localB -> adokisptgo [ 2 ] = localP -> P_97 ; localB ->
adokisptgo [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt = false ; } if (
localDW -> cqi2pi21ow ) { localB -> h4vd5izemq [ 0 ] = localP -> P_98 ;
localB -> h4vd5izemq [ 1 ] = localP -> P_98 ; localB -> h4vd5izemq [ 2 ] =
localP -> P_98 ; localB -> h4vd5izemq [ 3 ] = localP -> P_98 ; localDW ->
cqi2pi21ow = false ; } if ( localDW -> ifzbhw4mrws . njk4w5jozv ) {
ng2z3yysbc ( & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws , & localP ->
ifzbhw4mrws ) ; } if ( localDW -> ipbtas1tys . njk4w5jozv ) { ng2z3yysbc ( &
localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys ) ; }
if ( localDW -> phrpuocqmvu . jhr0womnye ) { alfdzl2fz1 ( & localB ->
phrpuocqmvu , & localDW -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; } if (
localDW -> bm3dpymkhz . jhr0womnye ) { alfdzl2fz1 ( & localB -> bm3dpymkhz ,
& localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; } } void otjykwnhb3 (
ipf5ube4r0 * const accn4cnket , const SensorsBus * fp0u5nlpgw , real_T
ay1xsyaztb , real_T nfqd2uxnr0 , eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP , ph1mky0ofs * localZCE ) { int_T tid = 0 ; uint32_T
ivnkv1flcv ; uint32_T bib1wyq24m ; uint32_T knh04wlghv ; uint32_T dnlsahlifj
; uint32_T kuln240v3q ; uint16_T drjad5hp0z ; uint16_T bgjnlzeaxl ; boolean_T
ihwj5oflkc ; boolean_T kpsjbxclns ; boolean_T dyul3la2fn ; boolean_T
oaihmoohg4 ; boolean_T jeja4oomvo ; boolean_T kwlvygq3wn ; boolean_T
abptz22p2c ; boolean_T of23gkr0xi ; int8_T tmp ; int8_T tmp_p ; boolean_T
dz45vpjsk1 ; boolean_T f3ymh20nap ; boolean_T jgia1z0iwd ; boolean_T
o1nbu3au10 ; if ( localP -> P_215 && ( localDW -> dq5lalhp1e <= 0 ) ) {
localDW -> b3fmbw5stg [ 0 ] = localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] =
localP -> P_102 ; } localB -> oru2xh2cyl_idx_0 = localDW -> b3fmbw5stg [ 0 ]
; localB -> oru2xh2cyl_idx_1 = localDW -> b3fmbw5stg [ 1 ] ; localB ->
b4lfjlgxec = ( real_T ) localP -> P_103 * fp0u5nlpgw -> HALSensors .
HAL_ultrasound_SI . altitude ; localB -> hd11alvebq_llw0u2ae0v = localB ->
b4lfjlgxec ; localB -> p1k24wzycz = ( localDW -> mi4mocbazh > localP -> P_5 )
; localDW -> de4yc1bkky = ( localB -> p1k24wzycz || localDW -> de4yc1bkky ) ;
if ( localDW -> de4yc1bkky ) { localDW -> mtonzezz2z [ 0 ] = localB ->
lqqrqnfg0k [ 0 ] ; localDW -> mtonzezz2z [ 1 ] = localB -> lqqrqnfg0k [ 1 ] ;
} localB -> htv1xfy1hr_idx_0 = localDW -> mtonzezz2z [ 0 ] ; localB ->
htv1xfy1hr_idx_1 = localDW -> mtonzezz2z [ 1 ] ; localDW -> orkq4iljgu = ( (
( ( fp0u5nlpgw -> HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw ->
SensorCalibration [ 6 ] ) * localP -> P_104 - localDW -> aq2aymvaio [ 0 ] *
localP -> P_106 [ 1 ] ) - localDW -> aq2aymvaio [ 1 ] * localP -> P_106 [ 2 ]
) - localDW -> aq2aymvaio [ 2 ] * localP -> P_106 [ 3 ] ) / localP -> P_106 [
0 ] ; localB -> c0idrrnomy_bjvjhhzy4i = ( ( localP -> P_105 [ 0 ] * localDW
-> orkq4iljgu + localDW -> aq2aymvaio [ 0 ] * localP -> P_105 [ 1 ] ) +
localDW -> aq2aymvaio [ 1 ] * localP -> P_105 [ 2 ] ) + localDW -> aq2aymvaio
[ 2 ] * localP -> P_105 [ 3 ] ; localDW -> f2ynnmexgv = ( ( ( localB ->
b4lfjlgxec - localDW -> ddv3ztj2wp [ 0 ] * localP -> P_58 [ 1 ] ) - localDW
-> ddv3ztj2wp [ 1 ] * localP -> P_58 [ 2 ] ) - localDW -> ddv3ztj2wp [ 2 ] *
localP -> P_58 [ 3 ] ) / localP -> P_58 [ 0 ] ; if ( localB -> b4lfjlgxec > -
rtP_Sensors . altSensorMin ) { localB -> oxza4umofr_jwzvbuczlb = -
rtP_Sensors . altSensorMin ; } else if ( localB -> b4lfjlgxec < localP ->
P_56 ) { localB -> oxza4umofr_jwzvbuczlb = localP -> P_56 ; } else { localB
-> oxza4umofr_jwzvbuczlb = localB -> b4lfjlgxec ; } localB -> aoneafkd51 = (
( muDoubleScalarAbs ( localDW -> mi4mocbazh - localB -> oxza4umofr_jwzvbuczlb
) <= localP -> P_4 ) && ( localB -> b4lfjlgxec < - rtP_Sensors . altSensorMin
) && ( ( ! ( muDoubleScalarAbs ( localB -> c0idrrnomy_bjvjhhzy4i - localDW ->
mi4mocbazh ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_57 [ 0 ] * localDW -> f2ynnmexgv + localDW -> ddv3ztj2wp [ 0 ] * localP
-> P_57 [ 1 ] ) + localDW -> ddv3ztj2wp [ 1 ] * localP -> P_57 [ 2 ] ) +
localDW -> ddv3ztj2wp [ 2 ] * localP -> P_57 [ 3 ] ) - localDW -> mi4mocbazh
) >= localP -> P_3 ) ) ) ) ; dz45vpjsk1 = localB -> aoneafkd51 ; ihwj5oflkc =
localB -> aoneafkd51 ; if ( ihwj5oflkc ) { if ( ! localDW -> iftedegxuv ) {
if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> iftedegxuv = true ; } localB -> oxza4umofr_jwzvbuczlb = localB ->
hd11alvebq_llw0u2ae0v - ( localP -> P_67 [ 0 ] * localB -> htv1xfy1hr_idx_0 +
localP -> P_67 [ 1 ] * localB -> htv1xfy1hr_idx_1 ) ; localB -> myx153u3em [
0 ] = localB -> jhtkvlotcj [ 0 ] * localB -> oxza4umofr_jwzvbuczlb ; localB
-> myx153u3em [ 1 ] = localB -> jhtkvlotcj [ 1 ] * localB ->
oxza4umofr_jwzvbuczlb ; srUpdateBC ( localDW -> mgysgsd2g4 ) ; } else if (
localDW -> iftedegxuv ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> myx153u3em [ 0 ] = localP -> P_54 ;
localB -> myx153u3em [ 1 ] = localP -> P_54 ; localDW -> iftedegxuv = false ;
} localB -> nnthqeo0xb [ 0 ] = localB -> myx153u3em [ 0 ] + localB ->
htv1xfy1hr_idx_0 ; localB -> nnthqeo0xb [ 1 ] = localB -> myx153u3em [ 1 ] +
localB -> htv1xfy1hr_idx_1 ; localB -> h3hwnlathw_lnjdk5wtww = ( real32_T )
localB -> nnthqeo0xb [ 0 ] ; localB -> ljo1dpaub4_hv2ho1zopz = localDW ->
dzwopklw3c ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) {
localB -> bwhquruhg4 [ localB -> i ] = fp0u5nlpgw -> SensorCalibration [
localB -> i ] + localP -> P_110 [ localB -> i ] ; } localB ->
f4dbdpv42b_idx_1 = localB -> bwhquruhg4 [ 0 ] ; localB ->
jhtkvlotcj_bnlywzniup = localB -> bwhquruhg4 [ 1 ] ; localB ->
lan2dv1qbd_idx_0 = localB -> bwhquruhg4 [ 2 ] ; localB -> acc1 = localB ->
bwhquruhg4 [ 3 ] ; localB -> eb5vjpyuav_dapv3jlyq5 = localB -> bwhquruhg4 [ 4
] ; localB -> eq5jssgbid_ezqlmfzvpq = localB -> bwhquruhg4 [ 5 ] ; localB ->
bwhquruhg4 [ 0 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . x - localB ->
f4dbdpv42b_idx_1 ; localB -> bwhquruhg4 [ 1 ] = fp0u5nlpgw -> HALSensors .
HAL_acc_SI . y - localB -> jhtkvlotcj_bnlywzniup ; localB -> bwhquruhg4 [ 2 ]
= fp0u5nlpgw -> HALSensors . HAL_acc_SI . z - localB -> lan2dv1qbd_idx_0 ;
localB -> bwhquruhg4 [ 3 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . x -
localB -> acc1 ; localB -> bwhquruhg4 [ 4 ] = fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . y - localB -> eb5vjpyuav_dapv3jlyq5 ; localB -> bwhquruhg4 [ 5
] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z - localB ->
eq5jssgbid_ezqlmfzvpq ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i
++ ) { localB -> bwhquruhg4 [ localB -> i ] *= localP -> P_111 [ localB -> i
] ; } localB -> acc1 = localB -> bwhquruhg4 [ 0 ] * localP -> P_113 [ 0 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB -> i =
0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 += localDW
-> d4fp3a2mpz [ localB -> i ] * localP -> P_113 [ localB -> cff ] ; localB ->
cff ++ ; localB -> i ++ ; } localB -> p2nu5irp4m_nz4o0shxby [ 0 ] = localB ->
acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB -> bwhquruhg4 [ 1 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP
-> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 +=
localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP -> P_113 [ localB -> cff ]
; localB -> cff ++ ; localB -> i ++ ; } localB -> p2nu5irp4m_nz4o0shxby [ 1 ]
= localB -> acc1 ; localB -> acc1 = localP -> P_113 [ 0 ] * localB ->
bwhquruhg4 [ 2 ] ; localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ;
while ( localB -> i < 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB
-> i + 10 ] * localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB
-> i ++ ; } localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) {
localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 10 ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
p2nu5irp4m_nz4o0shxby [ 2 ] = localB -> acc1 ; localB -> f4dbdpv42b_idx_1 =
localP -> P_114 * localB -> p2nu5irp4m_nz4o0shxby [ 0 ] ; if ( localB ->
f4dbdpv42b_idx_1 > 1.0F ) { localB -> f4dbdpv42b_idx_1 = 1.0F ; } else if (
localB -> f4dbdpv42b_idx_1 < - 1.0F ) { localB -> f4dbdpv42b_idx_1 = - 1.0F ;
} localB -> df5jwd0dve = muSingleScalarAsin ( localB -> f4dbdpv42b_idx_1 ) ;
localB -> pzfs30csun_m3yhjduhi1 = localB -> df5jwd0dve ; if ( localDW ->
jd3dqtmo2p ) { localDW -> fl0vv44tbs [ 0 ] = localB -> fqjnqqkpgy [ 0 ] ;
localDW -> fl0vv44tbs [ 1 ] = localB -> fqjnqqkpgy [ 1 ] ; } localB ->
b5mq1a52pd_bjbgfqrolh [ 0 ] = localDW -> fl0vv44tbs [ 0 ] ; localB ->
b5mq1a52pd_bjbgfqrolh [ 1 ] = localDW -> fl0vv44tbs [ 1 ] ; localB ->
f4dbdpv42b_idx_1 = muSingleScalarFloor ( localP -> P_187 ) ; if ( ( localB ->
p2nu5irp4m_nz4o0shxby [ 0 ] < 0.0F ) && ( localP -> P_187 > localB ->
f4dbdpv42b_idx_1 ) ) { localB -> jhtkvlotcj_bnlywzniup = -
muSingleScalarPower ( - localB -> p2nu5irp4m_nz4o0shxby [ 0 ] , localP ->
P_187 ) ; } else { localB -> jhtkvlotcj_bnlywzniup = muSingleScalarPower (
localB -> p2nu5irp4m_nz4o0shxby [ 0 ] , localP -> P_187 ) ; } if ( ( localB
-> p2nu5irp4m_nz4o0shxby [ 1 ] < 0.0F ) && ( localP -> P_187 > localB ->
f4dbdpv42b_idx_1 ) ) { localB -> lan2dv1qbd_idx_0 = - muSingleScalarPower ( -
localB -> p2nu5irp4m_nz4o0shxby [ 1 ] , localP -> P_187 ) ; } else { localB
-> lan2dv1qbd_idx_0 = muSingleScalarPower ( localB -> p2nu5irp4m_nz4o0shxby [
1 ] , localP -> P_187 ) ; } if ( ( localB -> acc1 < 0.0F ) && ( localP ->
P_187 > localB -> f4dbdpv42b_idx_1 ) ) { localB -> f4dbdpv42b_idx_1 = -
muSingleScalarPower ( - localB -> acc1 , localP -> P_187 ) ; } else { localB
-> f4dbdpv42b_idx_1 = muSingleScalarPower ( localB -> acc1 , localP -> P_187
) ; } localB -> jhtkvlotcj_bnlywzniup = muSingleScalarSqrt ( ( localB ->
jhtkvlotcj_bnlywzniup + localB -> lan2dv1qbd_idx_0 ) + localB ->
f4dbdpv42b_idx_1 ) ; localB -> iimupityvq = ( int16_T ) ( ( localB ->
jhtkvlotcj_bnlywzniup > localP -> P_30 ) && ( localB -> jhtkvlotcj_bnlywzniup
< localP -> P_31 ) ) ; o1nbu3au10 = ( localB -> iimupityvq != 0 ) ;
kpsjbxclns = ( localB -> iimupityvq != 0 ) ; ifzbhw4mrw ( accn4cnket ,
kpsjbxclns , localB -> hwxrjq0it0 , localP -> P_166 , localB ->
pzfs30csun_m3yhjduhi1 , localB -> b5mq1a52pd_bjbgfqrolh , & localB ->
ifzbhw4mrws , & localDW -> ifzbhw4mrws , & localP -> ifzbhw4mrws ) ; localB
-> mrrvozc1qc_guugdwf2m3 [ 0 ] = localB -> ifzbhw4mrws . jc2u5ap2bv [ 0 ] +
localB -> b5mq1a52pd_bjbgfqrolh [ 0 ] ; localB -> mrrvozc1qc_guugdwf2m3 [ 1 ]
= localB -> ifzbhw4mrws . jc2u5ap2bv [ 1 ] + localB -> b5mq1a52pd_bjbgfqrolh
[ 1 ] ; localB -> epnbjpnxkg = muSingleScalarAtan ( localB ->
p2nu5irp4m_nz4o0shxby [ 1 ] / localB -> acc1 ) ; localB ->
isx1jookfr_oyypvi4boh = localB -> epnbjpnxkg ; if ( localDW -> f1jy25gy04 ) {
localDW -> as5a0ikbk1 [ 0 ] = localB -> oaihmoohg4 [ 0 ] ; localDW ->
as5a0ikbk1 [ 1 ] = localB -> oaihmoohg4 [ 1 ] ; } localB ->
gfg0sju4bm_owjr1h1vqy [ 0 ] = localDW -> as5a0ikbk1 [ 0 ] ; localB ->
gfg0sju4bm_owjr1h1vqy [ 1 ] = localDW -> as5a0ikbk1 [ 1 ] ; f3ymh20nap = (
localB -> iimupityvq != 0 ) ; dyul3la2fn = ( localB -> iimupityvq != 0 ) ;
ifzbhw4mrw ( accn4cnket , dyul3la2fn , localB -> j4qe4nfjsv , localP -> P_177
, localB -> isx1jookfr_oyypvi4boh , localB -> gfg0sju4bm_owjr1h1vqy , &
localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys ) ;
localB -> jhtkvlotcj_bnlywzniup = localB -> mrrvozc1qc_guugdwf2m3 [ 0 ] ;
localB -> bzklm5kboi_idx_2 = localB -> ipbtas1tys . jc2u5ap2bv [ 0 ] + localB
-> gfg0sju4bm_owjr1h1vqy [ 0 ] ; ivnkv1flcv = localDW -> l3lcputuyl ; if (
ivnkv1flcv < localP -> P_50 ) { localB -> lan2dv1qbd_idx_0 = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] ; localB -> eb5vjpyuav_dapv3jlyq5 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] ; } else { localB ->
eb5vjpyuav_dapv3jlyq5 = localP -> P_99 * localB -> h3hwnlathw_lnjdk5wtww ;
localB -> lan2dv1qbd_idx_0 = fp0u5nlpgw -> VisionSensors . opticalFlow_data [
0 ] * localB -> eb5vjpyuav_dapv3jlyq5 * localP -> P_100 ; localB ->
eb5vjpyuav_dapv3jlyq5 = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ]
* localB -> eb5vjpyuav_dapv3jlyq5 * localP -> P_100 ; } localB ->
eq5jssgbid_ezqlmfzvpq = muSingleScalarAbs ( localB -> h3hwnlathw_lnjdk5wtww )
; localDW -> b1nmhkw4zo = ( localB -> bwhquruhg4 [ 3 ] - localP -> P_116 [ 1
] * localDW -> ncgo1wegzg ) / localP -> P_116 [ 0 ] ; localB -> dosvknpiqk =
localP -> P_115 [ 0 ] * localDW -> b1nmhkw4zo + localP -> P_115 [ 1 ] *
localDW -> ncgo1wegzg ; localDW -> n0mydijbcx = ( localB -> bwhquruhg4 [ 4 ]
- localP -> P_119 [ 1 ] * localDW -> mirtkskmtr ) / localP -> P_119 [ 0 ] ;
localB -> li2d3qqqn4 = localP -> P_118 [ 0 ] * localDW -> n0mydijbcx + localP
-> P_118 [ 1 ] * localDW -> mirtkskmtr ; localDW -> iwg03owvar = localB ->
bwhquruhg4 [ 5 ] ; localB -> denIdx = 1 ; for ( localB -> i = 0 ; localB -> i
< 5 ; localB -> i ++ ) { localDW -> iwg03owvar -= localP -> P_122 [ localB ->
denIdx ] * localDW -> jduomia1pb [ localB -> i ] ; localB -> denIdx ++ ; }
localDW -> iwg03owvar /= localP -> P_122 [ 0 ] ; localB -> cqw0qrp4eu_idx_1 =
localP -> P_121 [ 0 ] * localDW -> iwg03owvar ; localB -> denIdx = 1 ; for (
localB -> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
cqw0qrp4eu_idx_1 += localP -> P_121 [ localB -> denIdx ] * localDW ->
jduomia1pb [ localB -> i ] ; localB -> denIdx ++ ; } bib1wyq24m = localDW ->
pjgu33zeph ; jgia1z0iwd = ( bib1wyq24m == localP -> P_49 ) ; if ( ( (
localZCE -> b1rw3rggh2 == POS_ZCSIG ) != ( int32_T ) jgia1z0iwd ) && (
localZCE -> b1rw3rggh2 != UNINITIALIZED_ZCSIG ) ) { localB -> dzof3xbsea =
fp0u5nlpgw -> HALSensors . HAL_gyro_SI . temperature ; localDW -> a1oodzfxvv
= 4 ; } localZCE -> b1rw3rggh2 = jgia1z0iwd ; if ( localP -> P_224 == 1 ) {
localB -> oxza4umofr_jwzvbuczlb = ( fp0u5nlpgw -> HALSensors . HAL_gyro_SI .
temperature - localB -> dzof3xbsea ) * localP -> P_95 ; } else { localB ->
oxza4umofr_jwzvbuczlb = localP -> P_86 ; } localB -> prfrp52vqr = localB ->
cqw0qrp4eu_idx_1 - ( real32_T ) localB -> oxza4umofr_jwzvbuczlb ; localB ->
kgl3ocgllz_idx_0 = localB -> dosvknpiqk - ( localB -> ipbtas1tys . jc2u5ap2bv
[ 1 ] + localB -> gfg0sju4bm_owjr1h1vqy [ 1 ] ) ; localB -> kgl3ocgllz_idx_1
= localB -> li2d3qqqn4 - localB -> mrrvozc1qc_guugdwf2m3 [ 1 ] ; localB ->
kgl3ocgllz_idx_2 = localB -> prfrp52vqr - localP -> P_186 ; localB ->
a5i4fgo1s2 [ 0 ] = localB -> eq5jssgbid_ezqlmfzvpq * localB ->
kgl3ocgllz_idx_1 * localP -> P_124 + localB -> lan2dv1qbd_idx_0 ; localB ->
a5i4fgo1s2 [ 1 ] = localB -> eq5jssgbid_ezqlmfzvpq * localB ->
kgl3ocgllz_idx_0 + localB -> eb5vjpyuav_dapv3jlyq5 ; localB ->
mrrvozc1qc_guugdwf2m3 [ 0 ] = localB -> a5i4fgo1s2 [ 0 ] ; localB ->
mrrvozc1qc_guugdwf2m3 [ 1 ] = localB -> a5i4fgo1s2 [ 1 ] ; if ( localDW ->
gdn4qfzvsk ) { localDW -> od5c00niot [ 0 ] = localB -> j1jumdl5wm [ 0 ] ;
localDW -> od5c00niot [ 1 ] = localB -> j1jumdl5wm [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> j1jumdl5wm [ 2 ] ; localDW -> od5c00niot [ 3 ] =
localB -> j1jumdl5wm [ 3 ] ; } localB -> oy1omazh2e_fqdqrf4qbc [ 0 ] =
localDW -> od5c00niot [ 0 ] ; localB -> oy1omazh2e_fqdqrf4qbc [ 1 ] = localDW
-> od5c00niot [ 1 ] ; localB -> oy1omazh2e_fqdqrf4qbc [ 2 ] = localDW ->
od5c00niot [ 2 ] ; localB -> oy1omazh2e_fqdqrf4qbc [ 3 ] = localDW ->
od5c00niot [ 3 ] ; localB -> bjps1hfvua_ldqodwenvz [ 0 ] = localB ->
dosvknpiqk ; localB -> bjps1hfvua_ldqodwenvz [ 1 ] = localB -> li2d3qqqn4 ;
for ( localB -> cff = 0 ; localB -> cff < 2 ; localB -> cff ++ ) { localB ->
memOffset = localB -> cff * 5 ; localB -> f4dbdpv42b_idx_1 = localB ->
bjps1hfvua_ldqodwenvz [ localB -> cff ] ; localB -> denIdx = 1 ; for ( localB
-> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB -> f4dbdpv42b_idx_1 -=
localDW -> dqfv1m130o [ localB -> memOffset + localB -> i ] * localP -> P_126
[ localB -> denIdx ] ; localB -> denIdx ++ ; } localB -> f4dbdpv42b_idx_1 /=
localP -> P_126 [ 0 ] ; localDW -> mf2pp40f5v [ localB -> cff ] = localB ->
f4dbdpv42b_idx_1 ; localB -> cqw0qrp4eu_idx_1 = localP -> P_125 [ 0 ] *
localB -> f4dbdpv42b_idx_1 ; localB -> denIdx = 1 ; for ( localB -> i = 0 ;
localB -> i < 5 ; localB -> i ++ ) { localB -> cqw0qrp4eu_idx_1 += localDW ->
dqfv1m130o [ localB -> memOffset + localB -> i ] * localP -> P_125 [ localB
-> denIdx ] ; localB -> denIdx ++ ; } localB -> lgxyarf22c [ localB -> cff ]
= localB -> cqw0qrp4eu_idx_1 * localP -> P_128 ; } localB ->
lqeik1h102_bsqwvugooi [ 0 ] = localDW -> meognsjf1t [ 0 ] ; localB ->
lqeik1h102_bsqwvugooi [ 1 ] = localDW -> meognsjf1t [ 1 ] ; localB ->
ipa11olwgb_nuebgmauvi [ 0 ] = localB -> lgxyarf22c [ 0 ] - localB ->
lqeik1h102_bsqwvugooi [ 0 ] ; localB -> ipa11olwgb_nuebgmauvi [ 1 ] = localB
-> lgxyarf22c [ 1 ] - localB -> lqeik1h102_bsqwvugooi [ 1 ] ; localB ->
eq5jssgbid_ezqlmfzvpq = muSingleScalarAbs ( localB -> dosvknpiqk ) ; localB
-> cqw0qrp4eu_idx_1 = muSingleScalarAbs ( localB -> li2d3qqqn4 ) ; localB ->
drrbtvcsxs = ( ( ( ( muSingleScalarAbs ( localB -> jhtkvlotcj_bnlywzniup ) <=
localP -> P_37 ) && ( muSingleScalarAbs ( localB -> bzklm5kboi_idx_2 ) <=
localP -> P_39 ) && ( localB -> eq5jssgbid_ezqlmfzvpq <= localP -> P_41 ) &&
( localB -> cqw0qrp4eu_idx_1 <= localP -> P_42 ) && ( muSingleScalarAbs (
localB -> ipa11olwgb_nuebgmauvi [ 0 ] ) <= localP -> P_35 ) && (
muSingleScalarAbs ( localB -> ipa11olwgb_nuebgmauvi [ 1 ] ) <= localP -> P_36
) ) || ( ( localB -> eq5jssgbid_ezqlmfzvpq <= localP -> P_38 ) && ( localB ->
cqw0qrp4eu_idx_1 <= localP -> P_40 ) ) ) && ( muSingleScalarAbs ( localB ->
lan2dv1qbd_idx_0 - localDW -> gcgpru4rcb [ 0 ] ) <= localP -> P_43 ) && (
muSingleScalarAbs ( localB -> eb5vjpyuav_dapv3jlyq5 - localDW -> gcgpru4rcb [
1 ] ) <= localP -> P_44 ) && ( localB -> h3hwnlathw_lnjdk5wtww <= localP ->
P_45 ) ) ; jgia1z0iwd = localB -> drrbtvcsxs ; oaihmoohg4 = localB ->
drrbtvcsxs ; if ( oaihmoohg4 ) { if ( ! localDW -> cqi2pi21ow ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> cqi2pi21ow = true ; } localB -> eq5jssgbid_ezqlmfzvpq = localB ->
oy1omazh2e_fqdqrf4qbc [ 1 ] ; localB -> cqw0qrp4eu_idx_1 = localB ->
oy1omazh2e_fqdqrf4qbc [ 0 ] ; localB -> cqw0qrp4eu_idx_2 = localB ->
oy1omazh2e_fqdqrf4qbc [ 2 ] ; localB -> ljddwhaot1_idx_2 = localB ->
oy1omazh2e_fqdqrf4qbc [ 3 ] ; for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> olsfagmvoi_dhamdvybc1 [ localB -> i ] = localB
-> mrrvozc1qc_guugdwf2m3 [ localB -> i ] - ( ( ( localP -> P_190 [ localB ->
i + 2 ] * localB -> eq5jssgbid_ezqlmfzvpq + localP -> P_190 [ localB -> i ] *
localB -> cqw0qrp4eu_idx_1 ) + localP -> P_190 [ localB -> i + 4 ] * localB
-> cqw0qrp4eu_idx_2 ) + localP -> P_190 [ localB -> i + 6 ] * localB ->
ljddwhaot1_idx_2 ) ; } localB -> eq5jssgbid_ezqlmfzvpq = localB ->
olsfagmvoi_dhamdvybc1 [ 1 ] ; localB -> cqw0qrp4eu_idx_1 = localB ->
olsfagmvoi_dhamdvybc1 [ 0 ] ; for ( localB -> i = 0 ; localB -> i < 4 ;
localB -> i ++ ) { localB -> h4vd5izemq [ localB -> i ] = localB ->
o340jloaui [ localB -> i + 4 ] * localB -> eq5jssgbid_ezqlmfzvpq + localB ->
o340jloaui [ localB -> i ] * localB -> cqw0qrp4eu_idx_1 ; } srUpdateBC (
localDW -> klyrn0mwhb ) ; } else if ( localDW -> cqi2pi21ow ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> h4vd5izemq [ 0 ] = localP -> P_98 ; localB -> h4vd5izemq [ 1 ] =
localP -> P_98 ; localB -> h4vd5izemq [ 2 ] = localP -> P_98 ; localB ->
h4vd5izemq [ 3 ] = localP -> P_98 ; localDW -> cqi2pi21ow = false ; } localB
-> gfpexfdgco [ 0 ] = localB -> h4vd5izemq [ 0 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 0 ] ; localB -> gfpexfdgco [ 1 ] = localB ->
h4vd5izemq [ 1 ] + localB -> oy1omazh2e_fqdqrf4qbc [ 1 ] ; localB ->
gfpexfdgco [ 2 ] = localB -> h4vd5izemq [ 2 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 2 ] ; localB -> gfpexfdgco [ 3 ] = localB ->
h4vd5izemq [ 3 ] + localB -> oy1omazh2e_fqdqrf4qbc [ 3 ] ;
muSingleScalarSinCos ( localB -> ljo1dpaub4_hv2ho1zopz , & localB ->
ljddwhaot1_idx_0 , & localB -> eq5jssgbid_ezqlmfzvpq ) ; muSingleScalarSinCos
( localB -> jhtkvlotcj_bnlywzniup , & localB -> ljddwhaot1_idx_1 , & localB
-> cqw0qrp4eu_idx_1 ) ; muSingleScalarSinCos ( localB -> bzklm5kboi_idx_2 , &
localB -> ljddwhaot1_idx_2 , & localB -> cqw0qrp4eu_idx_2 ) ; localB ->
jjbahtdunb_tmp_ju13rw2h0m = localB -> eq5jssgbid_ezqlmfzvpq * localB ->
cqw0qrp4eu_idx_1 ; localB -> jjbahtdunb_cxarnvbvui [ 0 ] = localB ->
jjbahtdunb_tmp_ju13rw2h0m ; localB -> jjbahtdunb_tmp = localB ->
ljddwhaot1_idx_1 * localB -> ljddwhaot1_idx_2 ; localB ->
jjbahtdunb_tmp_jz50ptvnrg = localB -> jjbahtdunb_tmp * localB ->
eq5jssgbid_ezqlmfzvpq - localB -> ljddwhaot1_idx_0 * localB ->
cqw0qrp4eu_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 1 ] = localB ->
jjbahtdunb_tmp_jz50ptvnrg ; localB -> jjbahtdunb_tmp_al00mdgrv4 = localB ->
ljddwhaot1_idx_1 * localB -> cqw0qrp4eu_idx_2 ; localB ->
jjbahtdunb_tmp_o4f35lbcvx = localB -> jjbahtdunb_tmp_al00mdgrv4 * localB ->
eq5jssgbid_ezqlmfzvpq + localB -> ljddwhaot1_idx_0 * localB ->
ljddwhaot1_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 2 ] = localB ->
jjbahtdunb_tmp_o4f35lbcvx ; localB -> jjbahtdunb_tmp_nyxm0bsxsn = localB ->
ljddwhaot1_idx_0 * localB -> cqw0qrp4eu_idx_1 ; localB ->
jjbahtdunb_cxarnvbvui [ 3 ] = localB -> jjbahtdunb_tmp_nyxm0bsxsn ; localB ->
jjbahtdunb_tmp = localB -> jjbahtdunb_tmp * localB -> ljddwhaot1_idx_0 +
localB -> eq5jssgbid_ezqlmfzvpq * localB -> cqw0qrp4eu_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 4 ] = localB -> jjbahtdunb_tmp ; localB ->
jjbahtdunb_tmp_al00mdgrv4 = localB -> jjbahtdunb_tmp_al00mdgrv4 * localB ->
ljddwhaot1_idx_0 - localB -> eq5jssgbid_ezqlmfzvpq * localB ->
ljddwhaot1_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 5 ] = localB ->
jjbahtdunb_tmp_al00mdgrv4 ; localB -> jjbahtdunb_cxarnvbvui [ 6 ] = - localB
-> ljddwhaot1_idx_1 ; localB -> eq5jssgbid_ezqlmfzvpq = localB ->
cqw0qrp4eu_idx_1 * localB -> ljddwhaot1_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 7 ] = localB -> eq5jssgbid_ezqlmfzvpq ; localB ->
cqw0qrp4eu_idx_1 *= localB -> cqw0qrp4eu_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 8 ] = localB -> cqw0qrp4eu_idx_1 ; localB ->
oxza4umofr_jwzvbuczlb = localDW -> peklmaellz [ 0 ] ; localB ->
cpqxwlj3q2_idx_1 = localDW -> peklmaellz [ 1 ] ; localB ->
afp3dcs1aw_dhmrxtyqop = localB -> nnthqeo0xb [ 1 ] ; localB -> unnamed_idx_2
= localB -> nnthqeo0xb [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> f4dbdpv42b_idx_1 = localB ->
jjbahtdunb_cxarnvbvui [ localB -> i + 6 ] ; localB -> b3li3qnms4_tmp = localB
-> jjbahtdunb_cxarnvbvui [ localB -> i + 3 ] * localB -> cpqxwlj3q2_idx_1 +
localB -> jjbahtdunb_cxarnvbvui [ localB -> i ] * localB ->
oxza4umofr_jwzvbuczlb ; localB -> b3li3qnms4_pbm3vprmfu [ localB -> i ] =
localB -> f4dbdpv42b_idx_1 * localB -> afp3dcs1aw_dhmrxtyqop + localB ->
b3li3qnms4_tmp ; localB -> jjbahtdunb_cv5hdgrwft [ localB -> i ] = localB ->
f4dbdpv42b_idx_1 * localB -> unnamed_idx_2 + localB -> b3li3qnms4_tmp ; }
localB -> cqw0qrp4eu_idx_2 = ( real32_T ) localB -> jjbahtdunb_cv5hdgrwft [ 2
] ; localB -> evstouefyu_kkiq3xxxve [ 0 ] = localB -> oru2xh2cyl_idx_0 ;
localB -> evstouefyu_kkiq3xxxve [ 1 ] = localB -> oru2xh2cyl_idx_1 ; localB
-> evstouefyu_kkiq3xxxve [ 2 ] = localB -> h3hwnlathw_lnjdk5wtww ; localB ->
evstouefyu_kkiq3xxxve [ 3 ] = localB -> ljo1dpaub4_hv2ho1zopz ; localB ->
evstouefyu_kkiq3xxxve [ 4 ] = localB -> jhtkvlotcj_bnlywzniup ; localB ->
evstouefyu_kkiq3xxxve [ 5 ] = localB -> bzklm5kboi_idx_2 ; localB ->
evstouefyu_kkiq3xxxve [ 6 ] = localB -> gfpexfdgco [ 0 ] ; localB ->
evstouefyu_kkiq3xxxve [ 7 ] = localB -> gfpexfdgco [ 1 ] ; localB ->
evstouefyu_kkiq3xxxve [ 8 ] = ( real32_T ) localB -> b3li3qnms4_pbm3vprmfu [
2 ] ; localB -> evstouefyu_kkiq3xxxve [ 9 ] = localB -> kgl3ocgllz_idx_0 ;
localB -> evstouefyu_kkiq3xxxve [ 10 ] = localB -> kgl3ocgllz_idx_1 ; localB
-> evstouefyu_kkiq3xxxve [ 11 ] = localB -> kgl3ocgllz_idx_2 ; { if ( tid ==
0 ) { if ( localDW -> puq03cpvbg . AQHandles && ssGetLogOutput ( accn4cnket
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> puq03cpvbg . AQHandles ,
rtmGetTaskTime ( accn4cnket , 0 ) , ( char * ) & localB ->
evstouefyu_kkiq3xxxve [ 0 ] + 0 ) ; } } } drjad5hp0z = localDW -> gaxgdudnvc
; localB -> aagcy0d5ye = ( drjad5hp0z < localP -> P_52 ) ; bgjnlzeaxl = (
uint16_T ) ( ( uint32_T ) drjad5hp0z + localP -> P_209 ) ; if ( bgjnlzeaxl >
localP -> P_51 ) { localB -> ao41flvyb1 = localP -> P_210 ; } else { localB
-> ao41flvyb1 = bgjnlzeaxl ; } if ( ( ! localB -> aagcy0d5ye ) && ( localDW
-> fpr1qi0oiw == 1 ) ) { localDW -> bsetqjfri4 = localP -> P_132 ; } if (
localDW -> bsetqjfri4 >= localP -> P_133 ) { localDW -> bsetqjfri4 = localP
-> P_133 ; } else if ( localDW -> bsetqjfri4 <= localP -> P_134 ) { localDW
-> bsetqjfri4 = localP -> P_134 ; } if ( localDW -> nhnlpyyc10 < 511U ) {
localDW -> nhnlpyyc10 ++ ; } if ( localDW -> l4tifptbm5 == 0U ) { localDW ->
l4tifptbm5 = 1U ; localDW -> ewjj1agcxb = 0.0006 ; localDW -> lsitkrgmgv =
1.0E-5 ; localDW -> ceueb3e4so = cajjf103hj ; localDW -> nhnlpyyc10 = 0U ; }
else { switch ( localDW -> ceueb3e4so ) { case kqr31kfslj : localDW ->
lvqzer0fpz = p1yolbxqcn ; localDW -> ceueb3e4so = bb45nl1j55 ; localDW ->
be5jkfqe3t = gjmge4et23 ; break ; case bb45nl1j55 : localB -> nrvdpfsfxa +=
localDW -> ewjj1agcxb * muDoubleScalarCos ( ay1xsyaztb ) ; localB ->
egtp5trhzg += localDW -> ewjj1agcxb * muDoubleScalarSin ( ay1xsyaztb ) ;
switch ( localDW -> be5jkfqe3t ) { case gjmge4et23 : if ( nfqd2uxnr0 <= 55.0
) { localDW -> be5jkfqe3t = myeot34c2w ; } else { localDW -> ewjj1agcxb =
0.0005 ; } break ; case myeot34c2w : if ( nfqd2uxnr0 <= 40.0 ) { localDW ->
be5jkfqe3t = mm1llsicgl ; } else if ( nfqd2uxnr0 > 55.0 ) { localDW ->
be5jkfqe3t = gjmge4et23 ; } else { localDW -> ewjj1agcxb = 0.0002 ; } break ;
case mm1llsicgl : if ( nfqd2uxnr0 <= 20.0 ) { localDW -> be5jkfqe3t =
ivt1zgxfxg ; } else if ( nfqd2uxnr0 > 40.0 ) { localDW -> be5jkfqe3t =
myeot34c2w ; } else { localDW -> ewjj1agcxb = 0.0001 ; } break ; default : if
( nfqd2uxnr0 > 20.0 ) { localDW -> be5jkfqe3t = mm1llsicgl ; } else { localDW
-> ewjj1agcxb = 2.0E-5 ; } break ; } break ; case pxcbyhihm3 : break ; case
cajjf103hj : if ( localDW -> nhnlpyyc10 >= 400U ) { localDW -> ceueb3e4so =
bb45nl1j55 ; localDW -> be5jkfqe3t = gjmge4et23 ; } else { localB ->
nrvdpfsfxa = 0.0 ; localB -> egtp5trhzg = 0.0 ; localB -> fzfp2ftkhm = - 1.0
; } break ; default : break ; } } localB -> ljddwhaot1_idx_2 = ( real32_T )
localB -> fzfp2ftkhm - localB -> h3hwnlathw_lnjdk5wtww ; localB -> lgnaoiqsj1
= localP -> P_135 * localB -> ljddwhaot1_idx_2 ; if ( localB -> aagcy0d5ye )
{ localB -> f4dbdpv42b_idx_1 = localP -> P_91 * localP -> P_136 ; } else {
localB -> f4dbdpv42b_idx_1 = ( localP -> P_92 * localB -> ljddwhaot1_idx_2 +
localDW -> bsetqjfri4 ) - localP -> P_93 * ( real32_T ) localB ->
b3li3qnms4_pbm3vprmfu [ 2 ] ; } localB -> ljddwhaot1_idx_2 = localP -> P_136
+ localB -> f4dbdpv42b_idx_1 ; if ( localB -> ljddwhaot1_idx_2 > localP ->
P_137 ) { localB -> ljddwhaot1_idx_2 = localP -> P_137 ; } else if ( localB
-> ljddwhaot1_idx_2 < localP -> P_138 ) { localB -> ljddwhaot1_idx_2 = localP
-> P_138 ; } localB -> asdy1fzhgi_tmp = muSingleScalarSin ( localB ->
ljo1dpaub4_hv2ho1zopz ) ; localB -> asdy1fzhgi_tmp_jzx3amusab =
muSingleScalarCos ( localB -> ljo1dpaub4_hv2ho1zopz ) ; localB ->
ljddwhaot1_idx_0 = ( real32_T ) localB -> nrvdpfsfxa - localB ->
oru2xh2cyl_idx_0 ; localB -> ljddwhaot1_idx_1 = ( real32_T ) localB ->
egtp5trhzg - localB -> oru2xh2cyl_idx_1 ; localDW -> pwlp5beuqs [ 0U ] = 0.0F
; localB -> f4dbdpv42b_idx_1 = ( localB -> asdy1fzhgi_tmp_jzx3amusab * localB
-> ljddwhaot1_idx_0 + localB -> asdy1fzhgi_tmp * localB -> ljddwhaot1_idx_1 )
* localP -> P_17 ; if ( localB -> f4dbdpv42b_idx_1 > localP -> P_21 ) {
localB -> f4dbdpv42b_idx_1 = localP -> P_21 ; } else if ( localB ->
f4dbdpv42b_idx_1 < localP -> P_13 ) { localB -> f4dbdpv42b_idx_1 = localP ->
P_13 ; } localB -> olsfagmvoi_fdinthrxmb = localB -> f4dbdpv42b_idx_1 -
localB -> gfpexfdgco [ 0 ] ; localB -> olsfagmvoi_dhamdvybc1 [ 0 ] = localB
-> olsfagmvoi_fdinthrxmb ; localB -> edgrcb30v2 [ 0 ] = localP -> P_18 *
localB -> olsfagmvoi_fdinthrxmb + localDW -> dsjbzv2lh4 [ 0 ] ; if ( localB
-> edgrcb30v2 [ 0 ] > localP -> P_22 ) { localB -> f4dbdpv42b_idx_1 = localP
-> P_22 ; } else if ( localB -> edgrcb30v2 [ 0 ] < localP -> P_14 ) { localB
-> f4dbdpv42b_idx_1 = localP -> P_14 ; } else { localB -> f4dbdpv42b_idx_1 =
localB -> edgrcb30v2 [ 0 ] ; } localB -> f4dbdpv42b_idx_1 = ( localB ->
f4dbdpv42b_idx_1 - localDW -> gixvkpnpus [ 0 ] * localP -> P_141 [ 1 ] ) /
localP -> P_141 [ 0 ] ; localDW -> pwlp5beuqs [ 0 ] = localB ->
f4dbdpv42b_idx_1 ; localB -> f4dbdpv42b_idx_0 = localP -> P_140 [ 0 ] *
localB -> f4dbdpv42b_idx_1 + localDW -> gixvkpnpus [ 0 ] * localP -> P_140 [
1 ] ; localB -> f4dbdpv42b_idx_1 = ( - localB -> asdy1fzhgi_tmp * localB ->
ljddwhaot1_idx_0 + localB -> asdy1fzhgi_tmp_jzx3amusab * localB ->
ljddwhaot1_idx_1 ) * localP -> P_17 ; if ( localB -> f4dbdpv42b_idx_1 >
localP -> P_21 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_21 ; } else if (
localB -> f4dbdpv42b_idx_1 < localP -> P_13 ) { localB -> f4dbdpv42b_idx_1 =
localP -> P_13 ; } localB -> olsfagmvoi_fdinthrxmb = localB ->
f4dbdpv42b_idx_1 - localB -> gfpexfdgco [ 1 ] ; localB -> edgrcb30v2 [ 1 ] =
localP -> P_18 * localB -> olsfagmvoi_fdinthrxmb + localDW -> dsjbzv2lh4 [ 1
] ; if ( localB -> edgrcb30v2 [ 1 ] > localP -> P_22 ) { localB ->
f4dbdpv42b_idx_1 = localP -> P_22 ; } else if ( localB -> edgrcb30v2 [ 1 ] <
localP -> P_14 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_14 ; } else {
localB -> f4dbdpv42b_idx_1 = localB -> edgrcb30v2 [ 1 ] ; } localB ->
f4dbdpv42b_idx_1 = ( localB -> f4dbdpv42b_idx_1 - localP -> P_141 [ 1 ] *
localDW -> gixvkpnpus [ 1 ] ) / localP -> P_141 [ 0 ] ; localDW -> pwlp5beuqs
[ 1 ] = localB -> f4dbdpv42b_idx_1 ; if ( localP -> P_215 ) { localB ->
f4dbdpv42b_idx_0 *= localP -> P_94 [ 0 ] ; localB -> f4dbdpv42b_idx_1 = (
localP -> P_140 [ 0 ] * localB -> f4dbdpv42b_idx_1 + localP -> P_140 [ 1 ] *
localDW -> gixvkpnpus [ 1 ] ) * localP -> P_94 [ 1 ] ; } else { localB ->
f4dbdpv42b_idx_0 = 0.0F ; localB -> f4dbdpv42b_idx_1 = 0.0F ; } localB ->
f4dbdpv42b_idx_0 = ( localB -> f4dbdpv42b_idx_0 - localB ->
jhtkvlotcj_bnlywzniup ) * localP -> P_19 ; localB -> f4dbdpv42b_idx_1 = (
localB -> f4dbdpv42b_idx_1 - localB -> bzklm5kboi_idx_2 ) * localP -> P_19 ;
localB -> bjps1hfvua_ldqodwenvz [ 0 ] = localB -> f4dbdpv42b_idx_0 - localB
-> kgl3ocgllz_idx_1 ; localB -> bjps1hfvua_ldqodwenvz [ 1 ] = localB ->
f4dbdpv42b_idx_1 - localB -> kgl3ocgllz_idx_0 ; if ( 0.0F - localB ->
ljo1dpaub4_hv2ho1zopz > localP -> P_145 ) { localB -> bzklm5kboi_idx_2 =
localP -> P_145 ; } else if ( 0.0F - localB -> ljo1dpaub4_hv2ho1zopz < localP
-> P_146 ) { localB -> bzklm5kboi_idx_2 = localP -> P_146 ; } else { localB
-> bzklm5kboi_idx_2 = 0.0F - localB -> ljo1dpaub4_hv2ho1zopz ; } localB ->
ljo1dpaub4_hv2ho1zopz = ( localP -> P_147 * localB -> bzklm5kboi_idx_2 +
localDW -> c4kiksmhh2 ) - localP -> P_150 * localB -> kgl3ocgllz_idx_2 ;
localB -> iqmnb11niv = localP -> P_151 * localB -> bzklm5kboi_idx_2 ; localB
-> kgl3ocgllz_idx_2 = ( localP -> P_6 [ 0 ] * localB -> bjps1hfvua_ldqodwenvz
[ 0 ] - localDW -> krs1cvkxzk [ 0 ] ) * localP -> P_16 [ 0 ] ; localB ->
e0ny3yvjoz [ 0 ] = localB -> kgl3ocgllz_idx_2 ; localB -> kgl3ocgllz_idx_2 +=
localP -> P_20 [ 0 ] * localB -> bjps1hfvua_ldqodwenvz [ 0 ] + localDW ->
ow5xb5ovt0 [ 0 ] ; if ( localB -> kgl3ocgllz_idx_2 > localP -> P_23 ) {
localB -> kgl3ocgllz_idx_0 = localB -> kgl3ocgllz_idx_2 - localP -> P_23 ; }
else if ( localB -> kgl3ocgllz_idx_2 >= localP -> P_15 ) { localB ->
kgl3ocgllz_idx_0 = 0.0F ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
kgl3ocgllz_idx_2 - localP -> P_15 ; } localB -> kgl3ocgllz_idx_1 = localP ->
P_7 [ 0 ] * localB -> bjps1hfvua_ldqodwenvz [ 0 ] ; if ( localB ->
kgl3ocgllz_idx_0 > localP -> P_158 ) { tmp = localP -> P_216 ; } else { tmp =
localP -> P_217 ; } if ( localB -> kgl3ocgllz_idx_1 > localP -> P_158 ) {
tmp_p = localP -> P_218 ; } else { tmp_p = localP -> P_219 ; } if ( ( localP
-> P_158 != localB -> kgl3ocgllz_idx_0 ) && ( tmp == tmp_p ) ) { localB ->
kgl3ocgllz_idx_0 = localP -> P_159 ; } else { localB -> kgl3ocgllz_idx_0 =
localB -> kgl3ocgllz_idx_1 ; } localB -> mx5dsshjkn [ 0 ] = localB ->
kgl3ocgllz_idx_0 ; if ( localB -> edgrcb30v2 [ 0 ] > localP -> P_22 ) {
localB -> kgl3ocgllz_idx_0 = localB -> edgrcb30v2 [ 0 ] - localP -> P_22 ; }
else if ( localB -> edgrcb30v2 [ 0 ] >= localP -> P_14 ) { localB ->
kgl3ocgllz_idx_0 = 0.0F ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
edgrcb30v2 [ 0 ] - localP -> P_14 ; } localB -> kgl3ocgllz_idx_1 = localP ->
P_8 * localB -> olsfagmvoi_dhamdvybc1 [ 0 ] ; if ( localB -> kgl3ocgllz_idx_0
> localP -> P_161 ) { tmp = localP -> P_220 ; } else { tmp = localP -> P_221
; } if ( localB -> kgl3ocgllz_idx_1 > localP -> P_161 ) { tmp_p = localP ->
P_222 ; } else { tmp_p = localP -> P_223 ; } if ( ( localP -> P_161 != localB
-> kgl3ocgllz_idx_0 ) && ( tmp == tmp_p ) ) { localB -> kgl3ocgllz_idx_0 =
localP -> P_162 ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
kgl3ocgllz_idx_1 ; } localB -> edgrcb30v2 [ 0 ] = localB -> kgl3ocgllz_idx_0
; if ( localB -> kgl3ocgllz_idx_2 > localP -> P_23 ) { localB ->
bzklm5kboi_idx_2 = localP -> P_23 ; } else if ( localB -> kgl3ocgllz_idx_2 <
localP -> P_15 ) { localB -> bzklm5kboi_idx_2 = localP -> P_15 ; } else {
localB -> bzklm5kboi_idx_2 = localB -> kgl3ocgllz_idx_2 ; } localB ->
kgl3ocgllz_idx_2 = ( localP -> P_6 [ 1 ] * localB -> bjps1hfvua_ldqodwenvz [
1 ] - localDW -> krs1cvkxzk [ 1 ] ) * localP -> P_16 [ 1 ] ; localB ->
e0ny3yvjoz [ 1 ] = localB -> kgl3ocgllz_idx_2 ; localB -> kgl3ocgllz_idx_2 +=
localP -> P_20 [ 1 ] * localB -> bjps1hfvua_ldqodwenvz [ 1 ] + localDW ->
ow5xb5ovt0 [ 1 ] ; if ( localB -> kgl3ocgllz_idx_2 > localP -> P_23 ) {
localB -> kgl3ocgllz_idx_0 = localB -> kgl3ocgllz_idx_2 - localP -> P_23 ; }
else if ( localB -> kgl3ocgllz_idx_2 >= localP -> P_15 ) { localB ->
kgl3ocgllz_idx_0 = 0.0F ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
kgl3ocgllz_idx_2 - localP -> P_15 ; } localB -> kgl3ocgllz_idx_1 = localP ->
P_7 [ 1 ] * localB -> bjps1hfvua_ldqodwenvz [ 1 ] ; if ( localB ->
kgl3ocgllz_idx_0 > localP -> P_158 ) { tmp = localP -> P_216 ; } else { tmp =
localP -> P_217 ; } if ( localB -> kgl3ocgllz_idx_1 > localP -> P_158 ) {
tmp_p = localP -> P_218 ; } else { tmp_p = localP -> P_219 ; } if ( ( localP
-> P_158 != localB -> kgl3ocgllz_idx_0 ) && ( tmp == tmp_p ) ) { localB ->
kgl3ocgllz_idx_0 = localP -> P_159 ; } else { localB -> kgl3ocgllz_idx_0 =
localB -> kgl3ocgllz_idx_1 ; } localB -> mx5dsshjkn [ 1 ] = localB ->
kgl3ocgllz_idx_0 ; if ( localB -> edgrcb30v2 [ 1 ] > localP -> P_22 ) {
localB -> kgl3ocgllz_idx_0 = localB -> edgrcb30v2 [ 1 ] - localP -> P_22 ; }
else if ( localB -> edgrcb30v2 [ 1 ] >= localP -> P_14 ) { localB ->
kgl3ocgllz_idx_0 = 0.0F ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
edgrcb30v2 [ 1 ] - localP -> P_14 ; } localB -> kgl3ocgllz_idx_1 = localP ->
P_8 * localB -> olsfagmvoi_fdinthrxmb ; if ( localB -> kgl3ocgllz_idx_0 >
localP -> P_161 ) { tmp = localP -> P_220 ; } else { tmp = localP -> P_221 ;
} if ( localB -> kgl3ocgllz_idx_1 > localP -> P_161 ) { tmp_p = localP ->
P_222 ; } else { tmp_p = localP -> P_223 ; } if ( ( localP -> P_161 != localB
-> kgl3ocgllz_idx_0 ) && ( tmp == tmp_p ) ) { localB -> kgl3ocgllz_idx_0 =
localP -> P_162 ; } else { localB -> kgl3ocgllz_idx_0 = localB ->
kgl3ocgllz_idx_1 ; } localB -> edgrcb30v2 [ 1 ] = localB -> kgl3ocgllz_idx_0
; if ( localB -> kgl3ocgllz_idx_2 > localP -> P_23 ) { localB ->
kgl3ocgllz_idx_2 = localP -> P_23 ; } else if ( localB -> kgl3ocgllz_idx_2 <
localP -> P_15 ) { localB -> kgl3ocgllz_idx_2 = localP -> P_15 ; } for (
localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { localB ->
aunmppqr2q_g2mlkqadfk [ localB -> i ] = ( ( localB -> evofcbwaww [ localB ->
i + 4 ] * localB -> ljo1dpaub4_hv2ho1zopz + localB -> evofcbwaww [ localB ->
i ] * localB -> ljddwhaot1_idx_2 ) + localB -> evofcbwaww [ localB -> i + 8 ]
* localB -> bzklm5kboi_idx_2 ) + localB -> evofcbwaww [ localB -> i + 12 ] *
localB -> kgl3ocgllz_idx_2 ; } localB -> f4dbdpv42b_idx_1 = localP -> P_152 *
localB -> aunmppqr2q_g2mlkqadfk [ 0 ] ; if ( localB -> f4dbdpv42b_idx_1 >
localP -> P_153 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_153 ; } else if
( localB -> f4dbdpv42b_idx_1 < localP -> P_154 ) { localB -> f4dbdpv42b_idx_1
= localP -> P_154 ; } localB -> nxb3iaivdo [ 0 ] = localP -> P_155 [ 0 ] *
localB -> f4dbdpv42b_idx_1 ; localB -> f4dbdpv42b_idx_1 = localP -> P_152 *
localB -> aunmppqr2q_g2mlkqadfk [ 1 ] ; if ( localB -> f4dbdpv42b_idx_1 >
localP -> P_153 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_153 ; } else if
( localB -> f4dbdpv42b_idx_1 < localP -> P_154 ) { localB -> f4dbdpv42b_idx_1
= localP -> P_154 ; } localB -> nxb3iaivdo [ 1 ] = localP -> P_155 [ 1 ] *
localB -> f4dbdpv42b_idx_1 ; localB -> f4dbdpv42b_idx_1 = localP -> P_152 *
localB -> aunmppqr2q_g2mlkqadfk [ 2 ] ; if ( localB -> f4dbdpv42b_idx_1 >
localP -> P_153 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_153 ; } else if
( localB -> f4dbdpv42b_idx_1 < localP -> P_154 ) { localB -> f4dbdpv42b_idx_1
= localP -> P_154 ; } localB -> nxb3iaivdo [ 2 ] = localP -> P_155 [ 2 ] *
localB -> f4dbdpv42b_idx_1 ; localB -> f4dbdpv42b_idx_1 = localP -> P_152 *
localB -> aunmppqr2q_g2mlkqadfk [ 3 ] ; if ( localB -> f4dbdpv42b_idx_1 >
localP -> P_153 ) { localB -> f4dbdpv42b_idx_1 = localP -> P_153 ; } else if
( localB -> f4dbdpv42b_idx_1 < localP -> P_154 ) { localB -> f4dbdpv42b_idx_1
= localP -> P_154 ; } localB -> nxb3iaivdo [ 3 ] = localP -> P_155 [ 3 ] *
localB -> f4dbdpv42b_idx_1 ; knh04wlghv = localDW -> dxm3w2i52x ; if (
knh04wlghv > localP -> P_64 ) { localB -> c0idrrnomy_bjvjhhzy4i = localB ->
h3hwnlathw_lnjdk5wtww - localB -> c0idrrnomy_bjvjhhzy4i ; localB ->
oxza4umofr_jwzvbuczlb = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ]
; localB -> cpqxwlj3q2_idx_1 = fp0u5nlpgw -> VisionSensors . opticalFlow_data
[ 2 ] ; } else { localB -> c0idrrnomy_bjvjhhzy4i = localP -> P_163 ; localB
-> oxza4umofr_jwzvbuczlb = localP -> P_62 ; localB -> cpqxwlj3q2_idx_1 =
localP -> P_62 ; } localB -> layxwnmr5z = ( real_T ) ( localB ->
cpqxwlj3q2_idx_1 == localP -> P_1 ) * localDW -> bw2ribqmwm + ( real_T ) (
localB -> oxza4umofr_jwzvbuczlb == localP -> P_1 ) ; dnlsahlifj = knh04wlghv
+ localP -> P_202 ; if ( dnlsahlifj > localP -> P_46 ) { localB -> kxhfudfh35
= localP -> P_203 ; } else { localB -> kxhfudfh35 = dnlsahlifj ; } if ( (
muSingleScalarAbs ( localB -> oru2xh2cyl_idx_0 ) > localP -> P_24 ) || (
muSingleScalarAbs ( localB -> oru2xh2cyl_idx_1 ) > localP -> P_25 ) ) {
ghadbep3bb ( & localB -> oa5ytsmaiv , & localP -> ghadbep3bbv ) ; } else if (
( ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ]
) > localP -> P_28 ) && ( muSingleScalarAbs ( localP -> P_156 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] - localB -> gfpexfdgco [ 0 ] ) >
localP -> P_26 ) ) || ( ( muSingleScalarAbs ( localP -> P_157 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 1 ] - localB -> gfpexfdgco [ 1 ] ) >
localP -> P_27 ) && ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ) > localP -> P_29 ) ) ) { ghadbep3bb ( & localB ->
oa5ytsmaiv , & localP -> acfz1zxm4t ) ; } else if ( localB -> layxwnmr5z >
localP -> P_0 ) { ghadbep3bb ( & localB -> oa5ytsmaiv , & localP ->
clwiujjdqo ) ; } else if ( muSingleScalarAbs ( localB ->
c0idrrnomy_bjvjhhzy4i ) > localP -> P_63 ) { ghadbep3bb ( & localB ->
oa5ytsmaiv , & localP -> jvbbqhrajh ) ; } else { ghadbep3bb ( & localB ->
oa5ytsmaiv , & localP -> ciy1c2o0rv ) ; } if ( localP -> P_211 ) { for (
localB -> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
oxza4umofr_jwzvbuczlb = localB -> iqocmhdfin [ localB -> i + 2 ] ; localB ->
mfeecyi5au_bhxxfovxdy [ localB -> i ] = localB -> oxza4umofr_jwzvbuczlb *
localB -> iqocmhdfin [ 2 ] + localB -> iqocmhdfin [ localB -> i ] * localB ->
iqocmhdfin [ 0 ] ; localB -> mfeecyi5au_bhxxfovxdy [ localB -> i + 2 ] =
localB -> oxza4umofr_jwzvbuczlb * localB -> iqocmhdfin [ 3 ] + localB ->
iqocmhdfin [ localB -> i ] * localB -> iqocmhdfin [ 1 ] ; } } else { for (
localB -> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
mfeecyi5au_bhxxfovxdy [ localB -> i ] = localB -> iqocmhdfin [ localB -> i ]
; localB -> mfeecyi5au_bhxxfovxdy [ localB -> i + 2 ] = localB -> iqocmhdfin
[ localB -> i + 2 ] ; } } localB -> jwixzshd4t_merlcviukg [ 0 ] = localB ->
htv1xfy1hr_idx_0 ; localB -> jwixzshd4t_merlcviukg [ 1 ] = localB ->
htv1xfy1hr_idx_1 ; localB -> htv1xfy1hr_idx_0 = localP -> P_65 [ 0 ] * localB
-> jwixzshd4t_merlcviukg [ 0 ] + localB -> jwixzshd4t_merlcviukg [ 1 ] *
localP -> P_65 [ 2 ] ; localB -> htv1xfy1hr_idx_1 = localB ->
jwixzshd4t_merlcviukg [ 0 ] * localP -> P_65 [ 1 ] + localB ->
jwixzshd4t_merlcviukg [ 1 ] * localP -> P_65 [ 3 ] ; localB ->
oru2xh2cyl_idx_0 = localB -> p2nu5irp4m_nz4o0shxby [ 1 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> p2nu5irp4m_nz4o0shxby [ 0 ] ; for ( localB -> i
= 0 ; localB -> i < 3 ; localB -> i ++ ) { localB -> dvmyecaihr [ localB -> i
] = ( ( localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 1 ] * localB ->
oru2xh2cyl_idx_0 + localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i ] *
localB -> oru2xh2cyl_idx_1 ) + localB -> jjbahtdunb_cxarnvbvui [ 3 * localB
-> i + 2 ] * localB -> acc1 ) + localP -> P_79 [ localB -> i ] ; } localB ->
afp3dcs1aw_dhmrxtyqop = localB -> dvmyecaihr [ 2 ] ; localB ->
oxza4umofr_jwzvbuczlb = localP -> P_66 [ 0 ] * localB -> dvmyecaihr [ 2 ] ;
localB -> cpqxwlj3q2_idx_1 = localP -> P_66 [ 1 ] * localB -> dvmyecaihr [ 2
] ; jeja4oomvo = dz45vpjsk1 ; if ( jeja4oomvo ) { if ( ! localDW ->
g4zcogq4xi ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart (
accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket ->
_mdlRefSfcnS ) ; } localDW -> g4zcogq4xi = true ; } localB ->
hd11alvebq_llw0u2ae0v -= ( localP -> P_67 [ 0 ] * localB ->
jwixzshd4t_merlcviukg [ 0 ] + localP -> P_67 [ 1 ] * localB ->
jwixzshd4t_merlcviukg [ 1 ] ) + localP -> P_71 * localB ->
afp3dcs1aw_dhmrxtyqop ; localB -> a33lpeqllh [ 0 ] = localB -> mzcro4caxu [ 0
] * localB -> hd11alvebq_llw0u2ae0v ; localB -> a33lpeqllh [ 1 ] = localB ->
mzcro4caxu [ 1 ] * localB -> hd11alvebq_llw0u2ae0v ; srUpdateBC ( localDW ->
idn2v5d33m ) ; } else if ( localDW -> g4zcogq4xi ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> a33lpeqllh [ 0 ] = localP -> P_53 ; localB -> a33lpeqllh [ 1 ] =
localP -> P_53 ; localDW -> g4zcogq4xi = false ; } localB -> gzu0wv2p0m [ 0 ]
= ( localB -> oxza4umofr_jwzvbuczlb + localB -> htv1xfy1hr_idx_0 ) + localB
-> a33lpeqllh [ 0 ] ; localB -> gzu0wv2p0m [ 1 ] = ( localB ->
cpqxwlj3q2_idx_1 + localB -> htv1xfy1hr_idx_1 ) + localB -> a33lpeqllh [ 1 ]
; localB -> gw4bhgpoig_ppxrqq0gsf [ 0 ] = localB -> dosvknpiqk ; localB ->
gw4bhgpoig_ppxrqq0gsf [ 1 ] = localB -> li2d3qqqn4 ; localB ->
gw4bhgpoig_ppxrqq0gsf [ 2 ] = localB -> prfrp52vqr ; jfkq2sjtgw ( localB ->
bmrdaxfgpr , localP -> P_212 ) ; localB -> bwrjiempwp_lxo5edjg3c [ 0 ] =
localB -> b5mq1a52pd_bjbgfqrolh [ 0 ] ; localB -> bwrjiempwp_lxo5edjg3c [ 1 ]
= localB -> b5mq1a52pd_bjbgfqrolh [ 1 ] ; localB -> oru2xh2cyl_idx_0 = localP
-> P_164 [ 0 ] * localB -> bwrjiempwp_lxo5edjg3c [ 0 ] + localB ->
bwrjiempwp_lxo5edjg3c [ 1 ] * localP -> P_164 [ 2 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> bwrjiempwp_lxo5edjg3c [ 0 ] * localP -> P_164 [
1 ] + localB -> bwrjiempwp_lxo5edjg3c [ 1 ] * localP -> P_164 [ 3 ] ; localB
-> pt2vn1gkd4_nvsvtgkap4 = localB -> li2d3qqqn4 ; localB -> f4dbdpv42b_idx_0
= localP -> P_165 [ 0 ] * localB -> pt2vn1gkd4_nvsvtgkap4 ; localB ->
f4dbdpv42b_idx_1 = localP -> P_165 [ 1 ] * localB -> pt2vn1gkd4_nvsvtgkap4 ;
kwlvygq3wn = o1nbu3au10 ; phrpuocqmv ( accn4cnket , kwlvygq3wn , localB ->
nuasakb4gb , localB -> pzfs30csun_m3yhjduhi1 , localP -> P_166 , localB ->
bwrjiempwp_lxo5edjg3c , localP -> P_167 , localB -> pt2vn1gkd4_nvsvtgkap4 , &
localB -> phrpuocqmvu , & localDW -> phrpuocqmvu , & localP -> phrpuocqmvu )
; localB -> braptxypg5 [ 0 ] = ( localB -> f4dbdpv42b_idx_0 + localB ->
oru2xh2cyl_idx_0 ) + localB -> phrpuocqmvu . bomzmgvf4n [ 0 ] ; localB ->
braptxypg5 [ 1 ] = ( localB -> f4dbdpv42b_idx_1 + localB -> oru2xh2cyl_idx_1
) + localB -> phrpuocqmvu . bomzmgvf4n [ 1 ] ; jfkq2sjtgw ( localB ->
bsmav2qoqf , localP -> P_213 ) ; localB -> kgcmxzl0fl_dypejvacrn [ 0 ] =
localB -> gfg0sju4bm_owjr1h1vqy [ 0 ] ; localB -> kgcmxzl0fl_dypejvacrn [ 1 ]
= localB -> gfg0sju4bm_owjr1h1vqy [ 1 ] ; localB -> oru2xh2cyl_idx_0 = localP
-> P_175 [ 0 ] * localB -> kgcmxzl0fl_dypejvacrn [ 0 ] + localB ->
kgcmxzl0fl_dypejvacrn [ 1 ] * localP -> P_175 [ 2 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> kgcmxzl0fl_dypejvacrn [ 0 ] * localP -> P_175 [
1 ] + localB -> kgcmxzl0fl_dypejvacrn [ 1 ] * localP -> P_175 [ 3 ] ; localB
-> k1onnu0rr2_icdfyazkhu = localB -> dosvknpiqk ; localB -> f4dbdpv42b_idx_0
= localP -> P_176 [ 0 ] * localB -> k1onnu0rr2_icdfyazkhu ; localB ->
f4dbdpv42b_idx_1 = localP -> P_176 [ 1 ] * localB -> k1onnu0rr2_icdfyazkhu ;
abptz22p2c = f3ymh20nap ; phrpuocqmv ( accn4cnket , abptz22p2c , localB ->
gj4cf0tyj5 , localB -> isx1jookfr_oyypvi4boh , localP -> P_177 , localB ->
kgcmxzl0fl_dypejvacrn , localP -> P_178 , localB -> k1onnu0rr2_icdfyazkhu , &
localB -> bm3dpymkhz , & localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ;
localB -> nuusxhh10t [ 0 ] = ( localB -> f4dbdpv42b_idx_0 + localB ->
oru2xh2cyl_idx_0 ) + localB -> bm3dpymkhz . bomzmgvf4n [ 0 ] ; localB ->
nuusxhh10t [ 1 ] = ( localB -> f4dbdpv42b_idx_1 + localB -> oru2xh2cyl_idx_1
) + localB -> bm3dpymkhz . bomzmgvf4n [ 1 ] ; kuln240v3q = bib1wyq24m +
localP -> P_204 ; if ( kuln240v3q > localP -> P_47 ) { localB -> nwe1q4wth1 =
localP -> P_205 ; } else { localB -> nwe1q4wth1 = kuln240v3q ; }
muSingleScalarSinCos ( localB -> jhtkvlotcj_bnlywzniup , & localB ->
oru2xh2cyl_idx_0 , & localB -> oru2xh2cyl_idx_1 ) ; localB ->
jjbahtdunb_cxarnvbvui [ 0 ] = localB -> jjbahtdunb_tmp_ju13rw2h0m ; localB ->
jjbahtdunb_cxarnvbvui [ 1 ] = localB -> jjbahtdunb_tmp_jz50ptvnrg ; localB ->
jjbahtdunb_cxarnvbvui [ 2 ] = localB -> jjbahtdunb_tmp_o4f35lbcvx ; localB ->
jjbahtdunb_cxarnvbvui [ 3 ] = localB -> jjbahtdunb_tmp_nyxm0bsxsn ; localB ->
jjbahtdunb_cxarnvbvui [ 4 ] = localB -> jjbahtdunb_tmp ; localB ->
jjbahtdunb_cxarnvbvui [ 5 ] = localB -> jjbahtdunb_tmp_al00mdgrv4 ; localB ->
jjbahtdunb_cxarnvbvui [ 6 ] = - localB -> oru2xh2cyl_idx_0 ; localB ->
jjbahtdunb_cxarnvbvui [ 7 ] = localB -> eq5jssgbid_ezqlmfzvpq ; localB ->
jjbahtdunb_cxarnvbvui [ 8 ] = localB -> cqw0qrp4eu_idx_1 ; dz45vpjsk1 = (
localB -> h3hwnlathw_lnjdk5wtww <= localP -> P_32 ) ; o1nbu3au10 = ( ( localB
-> lan2dv1qbd_idx_0 != localP -> P_33 ) || ( localB -> eb5vjpyuav_dapv3jlyq5
!= localP -> P_34 ) ) ; localB -> htv1xfy1hr_idx_0 = localP -> P_87 [ 1 ] ;
localB -> hd11alvebq_llw0u2ae0v = localP -> P_87 [ 0 ] ; localB ->
htv1xfy1hr_idx_1 = localP -> P_87 [ 2 ] ; for ( localB -> i = 0 ; localB -> i
< 3 ; localB -> i ++ ) { localB -> b3li3qnms4_pbm3vprmfu [ localB -> i ] =
localB -> p2nu5irp4m_nz4o0shxby [ localB -> i ] - ( ( localB ->
jjbahtdunb_cxarnvbvui [ localB -> i + 3 ] * localB -> htv1xfy1hr_idx_0 +
localB -> jjbahtdunb_cxarnvbvui [ localB -> i ] * localB ->
hd11alvebq_llw0u2ae0v ) + localB -> jjbahtdunb_cxarnvbvui [ localB -> i + 6 ]
* localB -> htv1xfy1hr_idx_1 ) ; } localB -> mfzcoyf1jm [ 0 ] = ( real32_T )
( localP -> P_61 * localB -> b3li3qnms4_pbm3vprmfu [ 0 ] ) * ( real32_T )
o1nbu3au10 * ( real32_T ) dz45vpjsk1 ; localB -> mfzcoyf1jm [ 1 ] = (
real32_T ) ( localP -> P_61 * localB -> b3li3qnms4_pbm3vprmfu [ 1 ] ) * (
real32_T ) o1nbu3au10 * ( real32_T ) dz45vpjsk1 ; if ( localP -> P_214 ) {
for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { for ( localB ->
cff = 0 ; localB -> cff < 4 ; localB -> cff ++ ) { localB ->
hi5gqbqjyq_mbvzarwird [ localB -> i + ( localB -> cff << 2 ) ] = ( ( localB
-> oezutdojt2 [ localB -> i + 4 ] * localB -> oezutdojt2 [ localB -> cff + 4
] + localB -> oezutdojt2 [ localB -> i ] * localB -> oezutdojt2 [ localB ->
cff ] ) + localB -> oezutdojt2 [ localB -> i + 8 ] * localB -> oezutdojt2 [
localB -> cff + 8 ] ) + localB -> oezutdojt2 [ localB -> i + 12 ] * localB ->
oezutdojt2 [ localB -> cff + 12 ] ; } } } else { for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff = 0 ; localB -> cff
< 4 ; localB -> cff ++ ) { localB -> memOffset = localB -> cff << 2 ; localB
-> hi5gqbqjyq_mbvzarwird [ localB -> i + localB -> memOffset ] = localB ->
oezutdojt2 [ localB -> memOffset + localB -> i ] ; } } } localB ->
gildthu0oy_g1smspu5ke [ 0 ] = localB -> oy1omazh2e_fqdqrf4qbc [ 0 ] ; localB
-> gildthu0oy_g1smspu5ke [ 1 ] = localB -> oy1omazh2e_fqdqrf4qbc [ 1 ] ;
localB -> gildthu0oy_g1smspu5ke [ 2 ] = localB -> oy1omazh2e_fqdqrf4qbc [ 2 ]
; localB -> gildthu0oy_g1smspu5ke [ 3 ] = localB -> oy1omazh2e_fqdqrf4qbc [ 3
] ; localB -> h3hwnlathw_lnjdk5wtww = localB -> gildthu0oy_g1smspu5ke [ 1 ] ;
localB -> ljo1dpaub4_hv2ho1zopz = localB -> gildthu0oy_g1smspu5ke [ 0 ] ;
localB -> f4dbdpv42b_idx_1 = localB -> gildthu0oy_g1smspu5ke [ 2 ] ; localB
-> c0idrrnomy_bjvjhhzy4i = localB -> gildthu0oy_g1smspu5ke [ 3 ] ; for (
localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { localB ->
oy1omazh2e_fqdqrf4qbc [ localB -> i ] = ( ( localP -> P_188 [ localB -> i + 4
] * localB -> h3hwnlathw_lnjdk5wtww + localP -> P_188 [ localB -> i ] *
localB -> ljo1dpaub4_hv2ho1zopz ) + localP -> P_188 [ localB -> i + 8 ] *
localB -> f4dbdpv42b_idx_1 ) + localP -> P_188 [ localB -> i + 12 ] * localB
-> c0idrrnomy_bjvjhhzy4i ; } localB -> oru2xh2cyl_idx_0 = localB ->
mfzcoyf1jm [ 0 ] ; localB -> oru2xh2cyl_idx_1 = localB -> mfzcoyf1jm [ 1 ] ;
localB -> h3hwnlathw_lnjdk5wtww = localB -> mfzcoyf1jm [ 1 ] ; localB ->
ljo1dpaub4_hv2ho1zopz = localB -> mfzcoyf1jm [ 0 ] ; for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { localB -> aunmppqr2q_g2mlkqadfk [ localB
-> i ] = localP -> P_189 [ localB -> i + 4 ] * localB ->
h3hwnlathw_lnjdk5wtww + localP -> P_189 [ localB -> i ] * localB ->
ljo1dpaub4_hv2ho1zopz ; } of23gkr0xi = jgia1z0iwd ; if ( of23gkr0xi ) { if (
! localDW -> kh1khihcrt ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> kh1khihcrt = true ; } localB ->
h3hwnlathw_lnjdk5wtww = localB -> gildthu0oy_g1smspu5ke [ 1 ] ; localB ->
ljo1dpaub4_hv2ho1zopz = localB -> gildthu0oy_g1smspu5ke [ 0 ] ; localB ->
f4dbdpv42b_idx_1 = localB -> gildthu0oy_g1smspu5ke [ 2 ] ; localB ->
c0idrrnomy_bjvjhhzy4i = localB -> gildthu0oy_g1smspu5ke [ 3 ] ; for ( localB
-> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
bjps1hfvua_ldqodwenvz [ localB -> i ] = ( ( localP -> P_190 [ localB -> i + 2
] * localB -> h3hwnlathw_lnjdk5wtww + localP -> P_190 [ localB -> i ] *
localB -> ljo1dpaub4_hv2ho1zopz ) + localP -> P_190 [ localB -> i + 4 ] *
localB -> f4dbdpv42b_idx_1 ) + localP -> P_190 [ localB -> i + 6 ] * localB
-> c0idrrnomy_bjvjhhzy4i ; } localB -> h3hwnlathw_lnjdk5wtww = localB ->
mrrvozc1qc_guugdwf2m3 [ 0 ] - ( ( localP -> P_191 [ 0 ] * localB ->
oru2xh2cyl_idx_0 + localP -> P_191 [ 2 ] * localB -> oru2xh2cyl_idx_1 ) +
localB -> bjps1hfvua_ldqodwenvz [ 0 ] ) ; localB -> oru2xh2cyl_idx_0 = localB
-> mrrvozc1qc_guugdwf2m3 [ 1 ] - ( ( localP -> P_191 [ 1 ] * localB ->
oru2xh2cyl_idx_0 + localP -> P_191 [ 3 ] * localB -> oru2xh2cyl_idx_1 ) +
localB -> bjps1hfvua_ldqodwenvz [ 1 ] ) ; for ( localB -> i = 0 ; localB -> i
< 4 ; localB -> i ++ ) { localB -> adokisptgo [ localB -> i ] = localB ->
bgjnlzeaxl [ localB -> i + 4 ] * localB -> oru2xh2cyl_idx_0 + localB ->
bgjnlzeaxl [ localB -> i ] * localB -> h3hwnlathw_lnjdk5wtww ; } srUpdateBC (
localDW -> mfifybuxty ) ; } else if ( localDW -> kh1khihcrt ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> adokisptgo [ 0 ] = localP -> P_97 ; localB -> adokisptgo [ 1 ] =
localP -> P_97 ; localB -> adokisptgo [ 2 ] = localP -> P_97 ; localB ->
adokisptgo [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt = false ; } localB
-> aqxt5vngpw [ 0 ] = ( localB -> aunmppqr2q_g2mlkqadfk [ 0 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 0 ] ) + localB -> adokisptgo [ 0 ] ; localB ->
aqxt5vngpw [ 1 ] = ( localB -> aunmppqr2q_g2mlkqadfk [ 1 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 1 ] ) + localB -> adokisptgo [ 1 ] ; localB ->
aqxt5vngpw [ 2 ] = ( localB -> aunmppqr2q_g2mlkqadfk [ 2 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 2 ] ) + localB -> adokisptgo [ 2 ] ; localB ->
aqxt5vngpw [ 3 ] = ( localB -> aunmppqr2q_g2mlkqadfk [ 3 ] + localB ->
oy1omazh2e_fqdqrf4qbc [ 3 ] ) + localB -> adokisptgo [ 3 ] ; localB ->
bmogzm3rwx_czkfpwuzm5 = ivnkv1flcv + localP -> P_206 ; if ( localB ->
bmogzm3rwx_czkfpwuzm5 > localP -> P_48 ) { localB -> okh24i0qyo = localP ->
P_207 ; } else { localB -> okh24i0qyo = localB -> bmogzm3rwx_czkfpwuzm5 ; }
muSingleScalarSinCos ( localB -> jhtkvlotcj_bnlywzniup , & localB ->
oru2xh2cyl_idx_0 , & localB -> oru2xh2cyl_idx_1 ) ; localB ->
jjbahtdunb_cxarnvbvui [ 0 ] = localB -> jjbahtdunb_tmp_ju13rw2h0m ; localB ->
jjbahtdunb_cxarnvbvui [ 1 ] = localB -> jjbahtdunb_tmp_jz50ptvnrg ; localB ->
jjbahtdunb_cxarnvbvui [ 2 ] = localB -> jjbahtdunb_tmp_o4f35lbcvx ; localB ->
jjbahtdunb_cxarnvbvui [ 3 ] = localB -> jjbahtdunb_tmp_nyxm0bsxsn ; localB ->
jjbahtdunb_cxarnvbvui [ 4 ] = localB -> jjbahtdunb_tmp ; localB ->
jjbahtdunb_cxarnvbvui [ 5 ] = localB -> jjbahtdunb_tmp_al00mdgrv4 ; localB ->
jjbahtdunb_cxarnvbvui [ 6 ] = - localB -> oru2xh2cyl_idx_0 ; localB ->
jjbahtdunb_cxarnvbvui [ 7 ] = localB -> eq5jssgbid_ezqlmfzvpq ; localB ->
jjbahtdunb_cxarnvbvui [ 8 ] = localB -> cqw0qrp4eu_idx_1 ; localB ->
oru2xh2cyl_idx_0 = localB -> gfpexfdgco [ 0 ] ; localB -> oru2xh2cyl_idx_1 =
localB -> gfpexfdgco [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ; localB
-> i ++ ) { localB -> dq3deiusws [ localB -> i ] = ( localB ->
jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 1 ] * localB -> oru2xh2cyl_idx_1 +
localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i ] * localB ->
oru2xh2cyl_idx_0 ) + localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 2 ]
* localB -> cqw0qrp4eu_idx_2 ; } } void otjykwnhb3TID2 ( eo4bbte2ey * localB
, nu4qaxumex * localP ) { int_T tid = 0 ; real_T jfud24tomz ; real32_T
i5rkleo3m4 [ 4 ] ; real32_T kgl3ocgllz ; real32_T j0lyzs1mve ; real32_T
aj0c5n325l ; int32_T i ; memcpy ( & localB -> evofcbwaww [ 0 ] , & localP ->
P_160 [ 0 ] , sizeof ( real32_T ) << 4U ) ; localB -> mzcro4caxu [ 0 ] =
localP -> P_69 [ 0 ] ; localB -> mzcro4caxu [ 1 ] = localP -> P_69 [ 1 ] ;
localB -> jhtkvlotcj [ 0 ] = localP -> P_70 [ 0 ] ; localB -> jhtkvlotcj [ 1
] = localP -> P_70 [ 1 ] ; jfud24tomz = 0.0 ; localB -> iqocmhdfin [ 0 ] =
localP -> P_68 [ 0 ] ; localB -> iqocmhdfin [ 1 ] = localP -> P_68 [ 1 ] ;
localB -> iqocmhdfin [ 2 ] = localP -> P_68 [ 2 ] ; localB -> iqocmhdfin [ 3
] = localP -> P_68 [ 3 ] ; i5rkleo3m4 [ 0 ] = ( real32_T ) localP -> P_72 [ 0
] ; i5rkleo3m4 [ 1 ] = ( real32_T ) localP -> P_72 [ 1 ] ; i5rkleo3m4 [ 2 ] =
( real32_T ) localP -> P_72 [ 2 ] ; i5rkleo3m4 [ 3 ] = ( real32_T ) localP ->
P_72 [ 3 ] ; localB -> lqqrqnfg0k [ 0 ] = localP -> P_78 [ 0 ] ; localB ->
lqqrqnfg0k [ 1 ] = localP -> P_78 [ 1 ] ; localB -> nuasakb4gb [ 0 ] = (
real32_T ) localP -> P_81 [ 0 ] ; localB -> nuasakb4gb [ 1 ] = ( real32_T )
localP -> P_81 [ 1 ] ; localB -> hwxrjq0it0 [ 0 ] = ( real32_T ) localP ->
P_82 [ 0 ] ; localB -> hwxrjq0it0 [ 1 ] = ( real32_T ) localP -> P_82 [ 1 ] ;
kgl3ocgllz = 0.0F ; localB -> bmrdaxfgpr [ 0 ] = ( real32_T ) localP -> P_80
[ 0 ] ; localB -> bmrdaxfgpr [ 1 ] = ( real32_T ) localP -> P_80 [ 1 ] ;
localB -> bmrdaxfgpr [ 2 ] = ( real32_T ) localP -> P_80 [ 2 ] ; localB ->
bmrdaxfgpr [ 3 ] = ( real32_T ) localP -> P_80 [ 3 ] ; localB -> fqjnqqkpgy [
0 ] = localP -> P_174 [ 0 ] ; localB -> fqjnqqkpgy [ 1 ] = localP -> P_174 [
1 ] ; localB -> gj4cf0tyj5 [ 0 ] = ( real32_T ) localP -> P_84 [ 0 ] ; localB
-> gj4cf0tyj5 [ 1 ] = ( real32_T ) localP -> P_84 [ 1 ] ; localB ->
j4qe4nfjsv [ 0 ] = ( real32_T ) localP -> P_85 [ 0 ] ; localB -> j4qe4nfjsv [
1 ] = ( real32_T ) localP -> P_85 [ 1 ] ; j0lyzs1mve = 0.0F ; localB ->
bsmav2qoqf [ 0 ] = ( real32_T ) localP -> P_83 [ 0 ] ; localB -> bsmav2qoqf [
1 ] = ( real32_T ) localP -> P_83 [ 1 ] ; localB -> bsmav2qoqf [ 2 ] = (
real32_T ) localP -> P_83 [ 2 ] ; localB -> bsmav2qoqf [ 3 ] = ( real32_T )
localP -> P_83 [ 3 ] ; localB -> oaihmoohg4 [ 0 ] = localP -> P_185 [ 0 ] ;
localB -> oaihmoohg4 [ 1 ] = localP -> P_185 [ 1 ] ; for ( i = 0 ; i < 8 ; i
++ ) { localB -> bgjnlzeaxl [ i ] = ( real32_T ) localP -> P_89 [ i ] ; } for
( i = 0 ; i < 8 ; i ++ ) { localB -> o340jloaui [ i ] = ( real32_T ) localP
-> P_90 [ i ] ; } aj0c5n325l = 0.0F ; for ( i = 0 ; i < 16 ; i ++ ) { localB
-> oezutdojt2 [ i ] = ( real32_T ) localP -> P_88 [ i ] ; } memcpy ( & localB
-> lmgrqvqaqk_cl54gopm0x [ 0 ] , & localP -> P_192 [ 0 ] , sizeof ( real32_T
) << 4U ) ; localB -> j1jumdl5wm [ 0 ] = localP -> P_198 [ 0 ] ; localB ->
j1jumdl5wm [ 1 ] = localP -> P_198 [ 1 ] ; localB -> j1jumdl5wm [ 2 ] =
localP -> P_198 [ 2 ] ; localB -> j1jumdl5wm [ 3 ] = localP -> P_198 [ 3 ] ;
} void lsjhvu4egy ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) { int32_T k ; int32_T memOffset ; real32_T gfpexfdgco_p ; localDW ->
dq5lalhp1e = ( int8_T ) localP -> P_215 ; localDW -> mi4mocbazh = localB ->
nnthqeo0xb [ 0 ] ; localDW -> de4yc1bkky = false ; localDW -> b3fmbw5stg [ 0
] += localP -> P_101 * localB -> dq3deiusws [ 0 ] ; localDW -> mtonzezz2z [ 0
] = localB -> gzu0wv2p0m [ 0 ] ; localDW -> aq2aymvaio [ 2 ] = localDW ->
aq2aymvaio [ 1 ] ; localDW -> ddv3ztj2wp [ 2 ] = localDW -> ddv3ztj2wp [ 1 ]
; localDW -> b3fmbw5stg [ 1 ] += localP -> P_101 * localB -> dq3deiusws [ 1 ]
; localDW -> mtonzezz2z [ 1 ] = localB -> gzu0wv2p0m [ 1 ] ; localDW ->
aq2aymvaio [ 1 ] = localDW -> aq2aymvaio [ 0 ] ; localDW -> ddv3ztj2wp [ 1 ]
= localDW -> ddv3ztj2wp [ 0 ] ; localDW -> aq2aymvaio [ 0 ] = localDW ->
orkq4iljgu ; localDW -> ddv3ztj2wp [ 0 ] = localDW -> f2ynnmexgv ; localDW ->
dzwopklw3c += localP -> P_108 * localB -> prfrp52vqr ; localDW -> bbkjtf4kuy
-- ; if ( localDW -> bbkjtf4kuy < 0 ) { localDW -> bbkjtf4kuy = 4 ; } localDW
-> d4fp3a2mpz [ localDW -> bbkjtf4kuy ] = localB -> bwhquruhg4 [ 0 ] ;
localDW -> d4fp3a2mpz [ localDW -> bbkjtf4kuy + 5 ] = localB -> bwhquruhg4 [
1 ] ; localDW -> d4fp3a2mpz [ localDW -> bbkjtf4kuy + 10 ] = localB ->
bwhquruhg4 [ 2 ] ; localDW -> jd3dqtmo2p = false ; localDW -> f1jy25gy04 =
false ; localDW -> fl0vv44tbs [ 0 ] = localB -> braptxypg5 [ 0 ] ; localDW ->
as5a0ikbk1 [ 0 ] = localB -> nuusxhh10t [ 0 ] ; localDW -> fl0vv44tbs [ 1 ] =
localB -> braptxypg5 [ 1 ] ; localDW -> as5a0ikbk1 [ 1 ] = localB ->
nuusxhh10t [ 1 ] ; localDW -> l3lcputuyl = localB -> okh24i0qyo ; localDW ->
ncgo1wegzg = localDW -> b1nmhkw4zo ; localDW -> mirtkskmtr = localDW ->
n0mydijbcx ; localDW -> pjgu33zeph = localB -> nwe1q4wth1 ; localDW ->
gdn4qfzvsk = false ; localDW -> jduomia1pb [ 4 ] = localDW -> jduomia1pb [ 3
] ; localDW -> od5c00niot [ 0 ] = localB -> aqxt5vngpw [ 0 ] ; localDW ->
jduomia1pb [ 3 ] = localDW -> jduomia1pb [ 2 ] ; localDW -> od5c00niot [ 1 ]
= localB -> aqxt5vngpw [ 1 ] ; localDW -> jduomia1pb [ 2 ] = localDW ->
jduomia1pb [ 1 ] ; localDW -> od5c00niot [ 2 ] = localB -> aqxt5vngpw [ 2 ] ;
localDW -> jduomia1pb [ 1 ] = localDW -> jduomia1pb [ 0 ] ; localDW ->
od5c00niot [ 3 ] = localB -> aqxt5vngpw [ 3 ] ; localDW -> jduomia1pb [ 0 ] =
localDW -> iwg03owvar ; for ( k = 0 ; k < 2 ; k ++ ) { memOffset = k * 5 ;
localDW -> dqfv1m130o [ memOffset + 4 ] = localDW -> dqfv1m130o [ memOffset +
3 ] ; localDW -> dqfv1m130o [ memOffset + 3 ] = localDW -> dqfv1m130o [
memOffset + 2 ] ; localDW -> dqfv1m130o [ memOffset + 2 ] = localDW ->
dqfv1m130o [ memOffset + 1 ] ; localDW -> dqfv1m130o [ memOffset + 1 ] =
localDW -> dqfv1m130o [ memOffset ] ; localDW -> dqfv1m130o [ memOffset ] =
localDW -> mf2pp40f5v [ k ] ; localDW -> meognsjf1t [ k ] = localB ->
lgxyarf22c [ k ] ; gfpexfdgco_p = localB -> gfpexfdgco [ k ] ; localDW ->
gcgpru4rcb [ k ] = gfpexfdgco_p ; localDW -> peklmaellz [ k ] = gfpexfdgco_p
; } localDW -> gaxgdudnvc = localB -> ao41flvyb1 ; localDW -> bsetqjfri4 +=
localP -> P_131 * localB -> lgnaoiqsj1 ; if ( localDW -> bsetqjfri4 >= localP
-> P_133 ) { localDW -> bsetqjfri4 = localP -> P_133 ; } else if ( localDW ->
bsetqjfri4 <= localP -> P_134 ) { localDW -> bsetqjfri4 = localP -> P_134 ; }
localDW -> fpr1qi0oiw = ( int8_T ) localB -> aagcy0d5ye ; localDW ->
dsjbzv2lh4 [ 0 ] += localP -> P_139 * localB -> edgrcb30v2 [ 0 ] ; localDW ->
gixvkpnpus [ 0 ] = localDW -> pwlp5beuqs [ 0 ] ; localDW -> ow5xb5ovt0 [ 0 ]
+= localP -> P_143 * localB -> mx5dsshjkn [ 0 ] ; localDW -> krs1cvkxzk [ 0 ]
+= localP -> P_144 * localB -> e0ny3yvjoz [ 0 ] ; localDW -> dsjbzv2lh4 [ 1 ]
+= localP -> P_139 * localB -> edgrcb30v2 [ 1 ] ; localDW -> gixvkpnpus [ 1 ]
= localDW -> pwlp5beuqs [ 1 ] ; localDW -> ow5xb5ovt0 [ 1 ] += localP ->
P_143 * localB -> mx5dsshjkn [ 1 ] ; localDW -> krs1cvkxzk [ 1 ] += localP ->
P_144 * localB -> e0ny3yvjoz [ 1 ] ; localDW -> c4kiksmhh2 += localP -> P_148
* localB -> iqmnb11niv ; localDW -> dxm3w2i52x = localB -> kxhfudfh35 ;
localDW -> bw2ribqmwm = localB -> layxwnmr5z ; } void eyt3piuhqz ( ipf5ube4r0
* const accn4cnket , dmp1xsadgu * localDW ) { if ( ( ssGetSimMode (
accn4cnket -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> puq03cpvbg .
AQHandles ) { sdiTerminateStreaming ( & localDW -> puq03cpvbg . AQHandles ) ;
} } } void dw0zngvhyq ( void ) { ipf5ube4r0 * const accn4cnket = & (
lhjbdsj2rj . rtm ) ; mr51bswvyz ( accn4cnket , & dqykr4eggmg . otjykwnhb3s )
; } void ha1ipjbq54 ( uint8_T * o3vpgniqky ) { int32_T i ; dqykr4eggmg .
mdrqgzmhxm [ 0 ] = b1hr2q0zjh . P_11 ; dqykr4eggmg . btek1dk1x3 = 0 ;
dqykr4eggmg . fdg0ctxzju [ 0 ] = b1hr2q0zjh . P_12 ; dqykr4eggmg . jw22f2in0f
= 0 ; ic5jb3movn ( & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s
, & b1hr2q0zjh . otjykwnhb3s ) ; for ( i = 0 ; i < 50 ; i ++ ) { dqykr4eggmg
. dct2gyhlhn [ i ] = b1hr2q0zjh . P_1 ; } * o3vpgniqky = ksm0js2nhsy .
otjykwnhb3s . oa5ytsmaiv ; } void gwlyno50ln ( void ) { dqykr4eggmg .
mdrqgzmhxm [ 0 ] = b1hr2q0zjh . P_11 ; dqykr4eggmg . btek1dk1x3 = 0 ;
dqykr4eggmg . fdg0ctxzju [ 0 ] = b1hr2q0zjh . P_12 ; dqykr4eggmg . jw22f2in0f
= 0 ; bxsrqc204k ( & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s
, & b1hr2q0zjh . otjykwnhb3s ) ; } void bog0frvixl ( void ) { ipf5ube4r0 *
const accn4cnket = & ( lhjbdsj2rj . rtm ) ; kegjp2lgms ( & ksm0js2nhsy .
otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
dqykr4eggmg . h1isy2vxmu = - 1 ; } void k3yxem35zg ( void ) { dqykr4eggmg .
jjrfotind4 = true ; dqykr4eggmg . l152eirbdu . isInitialized = 1 ;
dqykr4eggmg . h1isy2vxmu = - 1 ; dqykr4eggmg . mmrjfuhf4s = b1hr2q0zjh . P_6
; memcpy ( & dqykr4eggmg . gxr4lx4uyw [ 0 ] , & b1hr2q0zjh . P_7 [ 0 ] , 14U
* sizeof ( real_T ) ) ; dqykr4eggmg . lfoikcitje = b1hr2q0zjh . P_8 ;
dqykr4eggmg . pmpp3mxiwl = b1hr2q0zjh . P_9 ; dqykr4eggmg . pfvcihpfoh =
b1hr2q0zjh . P_10 ; } void flightControlSystemTID0 ( const SensorsBus *
pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky ) { ipf5ube4r0
* const accn4cnket = & ( lhjbdsj2rj . rtm ) ; ksm0js2nhsy .
nhh54h3gzi_pbm3vprmfu = dqykr4eggmg . mdrqgzmhxm [ dqykr4eggmg . btek1dk1x3 ]
; ksm0js2nhsy . mur0cwcqch_cv5hdgrwft = dqykr4eggmg . fdg0ctxzju [
dqykr4eggmg . jw22f2in0f ] ; otjykwnhb3 ( accn4cnket , pxdb2gu5va ,
ksm0js2nhsy . mur0cwcqch_cv5hdgrwft , ksm0js2nhsy . nhh54h3gzi_pbm3vprmfu , &
ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s , & f51itwtzkqf . otjykwnhb3s ) ; ksm0js2nhsy .
doxwhoc5pa_fqdqrf4qbc = ksm0js2nhsy . lzu3pemahn ; pikqq4svts [ 0 ] =
ksm0js2nhsy . otjykwnhb3s . nxb3iaivdo [ 0 ] ; pikqq4svts [ 1 ] = ksm0js2nhsy
. otjykwnhb3s . nxb3iaivdo [ 1 ] ; pikqq4svts [ 2 ] = ksm0js2nhsy .
otjykwnhb3s . nxb3iaivdo [ 2 ] ; pikqq4svts [ 3 ] = ksm0js2nhsy . otjykwnhb3s
. nxb3iaivdo [ 3 ] ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s . oa5ytsmaiv ;
} void flightControlSystemTID1 ( void ) { int32_T turn_direction ; boolean_T
turn_detected ; static const real_T l [ 3 ] = { 255.0 , 105.0 , 180.0 } ;
static const real_T m [ 3 ] = { 0.0 , 255.0 , 0.0 } ; real_T
end_point_1_data_idx_0 ; real_T end_point_1_data_idx_1 ; real_T
end_point_2_data_idx_0 ; real_T end_point_2_data_idx_1 ; memset ( &
ksm0js2nhsy . paaawnbwtb_mbvzarwird [ 0 ] , 0 , 19200U * sizeof ( boolean_T )
) ; ksm0js2nhsy . lzu3pemahn = dqykr4eggmg . pmpp3mxiwl ; ksm0js2nhsy . state
= ksm0js2nhsy . lzu3pemahn ; memcpy ( & ksm0js2nhsy . lineSteps [ 0 ] , &
dqykr4eggmg . gxr4lx4uyw [ 0 ] , 14U * sizeof ( real_T ) ) ; ksm0js2nhsy .
angle = dqykr4eggmg . lfoikcitje ; turn_detected = false ; turn_direction = 0
; end_point_1_data_idx_0 = 0.0 ; end_point_2_data_idx_0 = 0.0 ;
end_point_1_data_idx_1 = 0.0 ; end_point_2_data_idx_1 = 0.0 ; if (
ksm0js2nhsy . lzu3pemahn == 4.0 ) { dqykr4eggmg . pfvcihpfoh = 0.0 ;
ksm0js2nhsy . state = 1.0 ; } memset ( & ksm0js2nhsy . bmnrxe4hib_cl54gopm0x
[ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; memset ( & ksm0js2nhsy .
avtdjqpt2q_kkiq3xxxve [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) ) ; memset ( &
ksm0js2nhsy . eayiqcdmtw_cxarnvbvui [ 0 ] , 0 , 19200U * sizeof ( uint8_T ) )
; ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy . dv1 [ 0 ] = dqykr4eggmg .
gxr4lx4uyw [ 0 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ; ksm0js2nhsy . dv1 [ 1 ] =
dqykr4eggmg . gxr4lx4uyw [ 7 ] ; ksm0js2nhsy . hzxcmg0ioe_bhxxfovxdy =
traceLine_Cky3vk4l ( ksm0js2nhsy . dv , ksm0js2nhsy . dv1 , ksm0js2nhsy .
paaawnbwtb_mbvzarwird , ksm0js2nhsy . bmnrxe4hib_cl54gopm0x , ksm0js2nhsy .
avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy . eayiqcdmtw_cxarnvbvui , l ) ;
ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy . dv1 [ 0 ] = dqykr4eggmg .
gxr4lx4uyw [ 1 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ; ksm0js2nhsy . dv1 [ 1 ] =
dqykr4eggmg . gxr4lx4uyw [ 8 ] ; ksm0js2nhsy . len_left = traceLine_Cky3vk4l
( ksm0js2nhsy . dv , ksm0js2nhsy . dv1 , ksm0js2nhsy . paaawnbwtb_mbvzarwird
, ksm0js2nhsy . bmnrxe4hib_cl54gopm0x , ksm0js2nhsy . avtdjqpt2q_kkiq3xxxve ,
ksm0js2nhsy . eayiqcdmtw_cxarnvbvui , m ) ; ksm0js2nhsy . dv [ 0 ] = 60.0 ;
ksm0js2nhsy . dv1 [ 0 ] = dqykr4eggmg . gxr4lx4uyw [ 2 ] ; ksm0js2nhsy . dv [
1 ] = 80.0 ; ksm0js2nhsy . dv1 [ 1 ] = dqykr4eggmg . gxr4lx4uyw [ 9 ] ;
ksm0js2nhsy . len_right = traceLine_Cky3vk4l ( ksm0js2nhsy . dv , ksm0js2nhsy
. dv1 , ksm0js2nhsy . paaawnbwtb_mbvzarwird , ksm0js2nhsy .
bmnrxe4hib_cl54gopm0x , ksm0js2nhsy . avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy .
eayiqcdmtw_cxarnvbvui , m ) ; ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy .
dv1 [ 0 ] = dqykr4eggmg . gxr4lx4uyw [ 3 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ;
ksm0js2nhsy . dv1 [ 1 ] = dqykr4eggmg . gxr4lx4uyw [ 10 ] ; ksm0js2nhsy .
len_left_or = traceLine_Cky3vk4l ( ksm0js2nhsy . dv , ksm0js2nhsy . dv1 ,
ksm0js2nhsy . paaawnbwtb_mbvzarwird , ksm0js2nhsy . bmnrxe4hib_cl54gopm0x ,
ksm0js2nhsy . avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy . eayiqcdmtw_cxarnvbvui , m
) ; ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy . dv1 [ 0 ] = dqykr4eggmg .
gxr4lx4uyw [ 4 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ; ksm0js2nhsy . dv1 [ 1 ] =
dqykr4eggmg . gxr4lx4uyw [ 11 ] ; ksm0js2nhsy . len_right_or =
traceLine_Cky3vk4l ( ksm0js2nhsy . dv , ksm0js2nhsy . dv1 , ksm0js2nhsy .
paaawnbwtb_mbvzarwird , ksm0js2nhsy . bmnrxe4hib_cl54gopm0x , ksm0js2nhsy .
avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy . eayiqcdmtw_cxarnvbvui , m ) ;
ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy . dv1 [ 0 ] = dqykr4eggmg .
gxr4lx4uyw [ 5 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ; ksm0js2nhsy . dv1 [ 1 ] =
dqykr4eggmg . gxr4lx4uyw [ 12 ] ; traceLine_Cky3vk4l ( ksm0js2nhsy . dv ,
ksm0js2nhsy . dv1 , ksm0js2nhsy . paaawnbwtb_mbvzarwird , ksm0js2nhsy .
bmnrxe4hib_cl54gopm0x , ksm0js2nhsy . avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy .
eayiqcdmtw_cxarnvbvui , m ) ; ksm0js2nhsy . dv [ 0 ] = 60.0 ; ksm0js2nhsy .
dv1 [ 0 ] = dqykr4eggmg . gxr4lx4uyw [ 6 ] ; ksm0js2nhsy . dv [ 1 ] = 80.0 ;
ksm0js2nhsy . dv1 [ 1 ] = dqykr4eggmg . gxr4lx4uyw [ 13 ] ; ksm0js2nhsy .
len_back_right = traceLine_Cky3vk4l ( ksm0js2nhsy . dv , ksm0js2nhsy . dv1 ,
ksm0js2nhsy . paaawnbwtb_mbvzarwird , ksm0js2nhsy . bmnrxe4hib_cl54gopm0x ,
ksm0js2nhsy . avtdjqpt2q_kkiq3xxxve , ksm0js2nhsy . eayiqcdmtw_cxarnvbvui , m
) ; if ( ( ksm0js2nhsy . len_left > 1.35 * ksm0js2nhsy . len_right ) || (
ksm0js2nhsy . len_left_or > 1.35 * ksm0js2nhsy . len_right_or ) ) {
turn_direction = 1 ; } else if ( ( ksm0js2nhsy . len_right > 1.35 *
ksm0js2nhsy . len_left ) || ( ksm0js2nhsy . len_right_or > 1.35 * ksm0js2nhsy
. len_left_or ) ) { turn_direction = 2 ; if ( ksm0js2nhsy .
hzxcmg0ioe_bhxxfovxdy <= 30.0 ) { if ( ( ksm0js2nhsy . len_back_right < 40.0
) && ( ksm0js2nhsy . len_right > ksm0js2nhsy . hzxcmg0ioe_bhxxfovxdy ) ) { if
( ksm0js2nhsy . len_right >= 60.0 ) { end_point_2_data_idx_0 =
muDoubleScalarRound ( ksm0js2nhsy . hzxcmg0ioe_bhxxfovxdy * dqykr4eggmg .
gxr4lx4uyw [ 0 ] + 60.0 ) ; end_point_1_data_idx_0 = muDoubleScalarRound (
ksm0js2nhsy . len_left * dqykr4eggmg . gxr4lx4uyw [ 1 ] + 60.0 ) ;
end_point_2_data_idx_1 = muDoubleScalarRound ( ksm0js2nhsy .
hzxcmg0ioe_bhxxfovxdy * dqykr4eggmg . gxr4lx4uyw [ 7 ] + 80.0 ) ;
end_point_1_data_idx_1 = muDoubleScalarRound ( ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 8 ] + 80.0 ) ; dqykr4eggmg . pfvcihpfoh = 1.0 ;
turn_detected = true ; } else { end_point_1_data_idx_0 = muDoubleScalarRound
( ksm0js2nhsy . hzxcmg0ioe_bhxxfovxdy * dqykr4eggmg . gxr4lx4uyw [ 0 ] + 60.0
) ; end_point_2_data_idx_0 = muDoubleScalarRound ( ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 2 ] + 60.0 ) ; end_point_1_data_idx_1 =
muDoubleScalarRound ( ksm0js2nhsy . hzxcmg0ioe_bhxxfovxdy * dqykr4eggmg .
gxr4lx4uyw [ 7 ] + 80.0 ) ; end_point_2_data_idx_1 = muDoubleScalarRound (
ksm0js2nhsy . len_right * dqykr4eggmg . gxr4lx4uyw [ 9 ] + 80.0 ) ;
turn_detected = true ; } } else { end_point_1_data_idx_0 =
muDoubleScalarRound ( ksm0js2nhsy . len_right * dqykr4eggmg . gxr4lx4uyw [ 2
] + 60.0 ) ; end_point_2_data_idx_0 = muDoubleScalarRound ( ksm0js2nhsy .
len_right_or * dqykr4eggmg . gxr4lx4uyw [ 4 ] + 60.0 ) ;
end_point_1_data_idx_1 = muDoubleScalarRound ( ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 9 ] + 80.0 ) ; end_point_2_data_idx_1 =
muDoubleScalarRound ( ksm0js2nhsy . len_right_or * dqykr4eggmg . gxr4lx4uyw [
11 ] + 80.0 ) ; dqykr4eggmg . pfvcihpfoh = 2.0 ; turn_detected = true ; } } }
if ( turn_detected && ( ksm0js2nhsy . state == 1.0 ) ) { ksm0js2nhsy . angle
= muDoubleScalarAtan2 ( end_point_2_data_idx_1 - end_point_1_data_idx_1 ,
end_point_2_data_idx_0 - end_point_1_data_idx_0 ) ; if ( ksm0js2nhsy . angle
== 0.0 ) { if ( turn_direction == 1 ) { ksm0js2nhsy . angle = -
1.5707963267948966 ; } else if ( turn_direction == 2 ) { ksm0js2nhsy . angle
= 1.5707963267948966 ; } } if ( dqykr4eggmg . pfvcihpfoh == 1.0 ) {
ksm0js2nhsy . angle -= 1.5707963267948966 ; } else if ( dqykr4eggmg .
pfvcihpfoh == 2.0 ) { ksm0js2nhsy . angle += 1.5707963267948966 ; }
ksm0js2nhsy . state = 2.0 ; } if ( ksm0js2nhsy . state == 2.0 ) { ksm0js2nhsy
. len_left = muDoubleScalarSin ( - ksm0js2nhsy . angle ) ; ksm0js2nhsy .
len_right = muDoubleScalarCos ( - ksm0js2nhsy . angle ) ; if ( ksm0js2nhsy .
hzxcmg0ioe_bhxxfovxdy <= 15.0 ) { ksm0js2nhsy . lineSteps [ 0 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 0 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 7 ] ; ksm0js2nhsy . lineSteps [ 1 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 1 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 8 ] ; ksm0js2nhsy . lineSteps [ 2 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 2 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 9 ] ; ksm0js2nhsy . lineSteps [ 3 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 3 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 10 ] ; ksm0js2nhsy . lineSteps [ 4 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 4 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 11 ] ; ksm0js2nhsy . lineSteps [ 5 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 5 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 12 ] ; ksm0js2nhsy . lineSteps [ 6 ] = ksm0js2nhsy
. len_right * dqykr4eggmg . gxr4lx4uyw [ 6 ] + - ksm0js2nhsy . len_left *
dqykr4eggmg . gxr4lx4uyw [ 13 ] ; ksm0js2nhsy . lineSteps [ 7 ] = ksm0js2nhsy
. len_left * dqykr4eggmg . gxr4lx4uyw [ 0 ] + ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 7 ] ; ksm0js2nhsy . lineSteps [ 8 ] = ksm0js2nhsy
. len_left * dqykr4eggmg . gxr4lx4uyw [ 1 ] + ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 8 ] ; ksm0js2nhsy . lineSteps [ 9 ] = ksm0js2nhsy
. len_left * dqykr4eggmg . gxr4lx4uyw [ 2 ] + ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 9 ] ; ksm0js2nhsy . lineSteps [ 10 ] = ksm0js2nhsy
. len_left * dqykr4eggmg . gxr4lx4uyw [ 3 ] + ksm0js2nhsy . len_right *
dqykr4eggmg . gxr4lx4uyw [ 10 ] ; ksm0js2nhsy . lineSteps [ 11 ] =
ksm0js2nhsy . len_left * dqykr4eggmg . gxr4lx4uyw [ 4 ] + ksm0js2nhsy .
len_right * dqykr4eggmg . gxr4lx4uyw [ 11 ] ; ksm0js2nhsy . lineSteps [ 12 ]
= ksm0js2nhsy . len_left * dqykr4eggmg . gxr4lx4uyw [ 5 ] + ksm0js2nhsy .
len_right * dqykr4eggmg . gxr4lx4uyw [ 12 ] ; ksm0js2nhsy . lineSteps [ 13 ]
= ksm0js2nhsy . len_left * dqykr4eggmg . gxr4lx4uyw [ 6 ] + ksm0js2nhsy .
len_right * dqykr4eggmg . gxr4lx4uyw [ 13 ] ; ksm0js2nhsy . state = 3.0 ; } }
ksm0js2nhsy . lzu3pemahn = ksm0js2nhsy . state ; if ( ksm0js2nhsy .
lzu3pemahn >= b1hr2q0zjh . P_5 ) { dqykr4eggmg . mmrjfuhf4s = dqykr4eggmg .
lfoikcitje ; } dqykr4eggmg . lfoikcitje = ksm0js2nhsy . angle ; dqykr4eggmg .
pmpp3mxiwl = ksm0js2nhsy . lzu3pemahn ; memcpy ( & dqykr4eggmg . gxr4lx4uyw [
0 ] , & ksm0js2nhsy . lineSteps [ 0 ] , 14U * sizeof ( real_T ) ) ;
ksm0js2nhsy . bwrqbaz4bt = dqykr4eggmg . pmpp3mxiwl ; dqykr4eggmg .
h1isy2vxmu = - 1 ; if ( ksm0js2nhsy . bwrqbaz4bt == 3.0 ) { dqykr4eggmg .
h1isy2vxmu = 0 ; if ( dqykr4eggmg . dct2gyhlhn [ 0 ] >= b1hr2q0zjh . P_2 ) {
dqykr4eggmg . pmpp3mxiwl = b1hr2q0zjh . P_3 ; } else { dqykr4eggmg .
pmpp3mxiwl = b1hr2q0zjh . P_4 ; } srUpdateBC ( dqykr4eggmg . ccmaqi4v1z ) ; }
dqykr4eggmg . mdrqgzmhxm [ dqykr4eggmg . btek1dk1x3 == 0 ] = ksm0js2nhsy .
hzxcmg0ioe_bhxxfovxdy ; dqykr4eggmg . btek1dk1x3 = ( int8_T ) ( dqykr4eggmg .
btek1dk1x3 == 0 ) ; dqykr4eggmg . fdg0ctxzju [ dqykr4eggmg . jw22f2in0f == 0
] = dqykr4eggmg . mmrjfuhf4s ; dqykr4eggmg . jw22f2in0f = ( int8_T ) (
dqykr4eggmg . jw22f2in0f == 0 ) ; } void flightControlSystemTID2 ( void ) {
otjykwnhb3TID2 ( & ksm0js2nhsy . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ;
} void pyvd4pdf3iTID0 ( void ) { lsjhvu4egy ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID1 ( void ) { int32_T idxDelay ; if ( dqykr4eggmg . h1isy2vxmu ==
0 ) { for ( idxDelay = 0 ; idxDelay < 49 ; idxDelay ++ ) { dqykr4eggmg .
dct2gyhlhn [ ( uint32_T ) idxDelay ] = dqykr4eggmg . dct2gyhlhn [ ( uint32_T
) idxDelay + 1U ] ; } dqykr4eggmg . dct2gyhlhn [ 49 ] = ksm0js2nhsy .
bwrqbaz4bt ; } } void m0l5se3ogg ( void ) { ipf5ube4r0 * const accn4cnket = &
( lhjbdsj2rj . rtm ) ; eyt3piuhqz ( accn4cnket , & dqykr4eggmg . otjykwnhb3s
) ; } void o2f5l50guo ( void ) { ipf5ube4r0 * const accn4cnket = & (
lhjbdsj2rj . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . otjykwnhb3s . P_56 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . bwhquruhg4 [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . evofcbwaww [ i ]
= 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s .
bgjnlzeaxl [ i ] = 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy .
otjykwnhb3s . o340jloaui [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) {
ksm0js2nhsy . otjykwnhb3s . oezutdojt2 [ i ] = 0.0F ; } ksm0js2nhsy .
bwrqbaz4bt = 0.0 ; ksm0js2nhsy . lzu3pemahn = 0.0 ; ksm0js2nhsy . otjykwnhb3s
. b4lfjlgxec = 0.0 ; ksm0js2nhsy . otjykwnhb3s . nnthqeo0xb [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . nnthqeo0xb [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . layxwnmr5z = 0.0 ; ksm0js2nhsy . otjykwnhb3s . dvmyecaihr [ 0 ]
= 0.0 ; ksm0js2nhsy . otjykwnhb3s . dvmyecaihr [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . dvmyecaihr [ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . gzu0wv2p0m
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . gzu0wv2p0m [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . mzcro4caxu [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . mzcro4caxu [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . jhtkvlotcj
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . jhtkvlotcj [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . iqocmhdfin [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . iqocmhdfin [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . iqocmhdfin
[ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . iqocmhdfin [ 3 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . lqqrqnfg0k [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . lqqrqnfg0k [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . myx153u3em
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . myx153u3em [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . a33lpeqllh [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . a33lpeqllh [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . nrvdpfsfxa
= 0.0 ; ksm0js2nhsy . otjykwnhb3s . egtp5trhzg = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . fzfp2ftkhm = 0.0 ; ksm0js2nhsy . otjykwnhb3s . df5jwd0dve =
0.0F ; ksm0js2nhsy . otjykwnhb3s . epnbjpnxkg = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . dosvknpiqk = 0.0F ; ksm0js2nhsy . otjykwnhb3s . li2d3qqqn4 =
0.0F ; ksm0js2nhsy . otjykwnhb3s . prfrp52vqr = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . a5i4fgo1s2 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
a5i4fgo1s2 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . lgxyarf22c [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . lgxyarf22c [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . gfpexfdgco [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gfpexfdgco [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gfpexfdgco [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . gfpexfdgco [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . lgnaoiqsj1 = 0.0F ; ksm0js2nhsy . otjykwnhb3s . e0ny3yvjoz [ 0
] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . e0ny3yvjoz [ 1 ] = 0.0F ; ksm0js2nhsy
. otjykwnhb3s . mx5dsshjkn [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
mx5dsshjkn [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . edgrcb30v2 [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . edgrcb30v2 [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . iqmnb11niv = 0.0F ; ksm0js2nhsy . otjykwnhb3s . nxb3iaivdo [ 0
] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . nxb3iaivdo [ 1 ] = 0.0F ; ksm0js2nhsy
. otjykwnhb3s . nxb3iaivdo [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
nxb3iaivdo [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . braptxypg5 [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . braptxypg5 [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nuusxhh10t [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
nuusxhh10t [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . mfzcoyf1jm [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . mfzcoyf1jm [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . aqxt5vngpw [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
aqxt5vngpw [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . aqxt5vngpw [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . aqxt5vngpw [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . dq3deiusws [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
dq3deiusws [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dq3deiusws [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . nuasakb4gb [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nuasakb4gb [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
hwxrjq0it0 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . hwxrjq0it0 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bmrdaxfgpr [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bmrdaxfgpr [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bmrdaxfgpr [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bmrdaxfgpr [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . fqjnqqkpgy [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . fqjnqqkpgy [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gj4cf0tyj5 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gj4cf0tyj5 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . j4qe4nfjsv [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . j4qe4nfjsv [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bsmav2qoqf [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bsmav2qoqf [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bsmav2qoqf [ 2 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bsmav2qoqf [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
oaihmoohg4 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . oaihmoohg4 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . j1jumdl5wm [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . j1jumdl5wm [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
j1jumdl5wm [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . j1jumdl5wm [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . h4vd5izemq [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . h4vd5izemq [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
h4vd5izemq [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . h4vd5izemq [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . adokisptgo [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . adokisptgo [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
adokisptgo [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . adokisptgo [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . dzof3xbsea = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ipbtas1tys . jc2u5ap2bv [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ipbtas1tys
. jc2u5ap2bv [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz .
bomzmgvf4n [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz . bomzmgvf4n
[ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . jc2u5ap2bv [ 0 ] =
0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . jc2u5ap2bv [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . bomzmgvf4n [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . bomzmgvf4n [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ; {
int32_T i ; for ( i = 0 ; i < 50 ; i ++ ) { dqykr4eggmg . dct2gyhlhn [ i ] =
0.0 ; } } dqykr4eggmg . mdrqgzmhxm [ 0 ] = 0.0 ; dqykr4eggmg . mdrqgzmhxm [ 1
] = 0.0 ; dqykr4eggmg . fdg0ctxzju [ 0 ] = 0.0 ; dqykr4eggmg . fdg0ctxzju [ 1
] = 0.0 ; dqykr4eggmg . mmrjfuhf4s = 0.0 ; { int32_T i ; for ( i = 0 ; i < 14
; i ++ ) { dqykr4eggmg . gxr4lx4uyw [ i ] = 0.0 ; } } dqykr4eggmg .
lfoikcitje = 0.0 ; dqykr4eggmg . pmpp3mxiwl = 0.0 ; dqykr4eggmg . pfvcihpfoh
= 0.0 ; dqykr4eggmg . otjykwnhb3s . mi4mocbazh = 0.0 ; dqykr4eggmg .
otjykwnhb3s . mtonzezz2z [ 0 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . mtonzezz2z
[ 1 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 0 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 1 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp [ 2 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . bw2ribqmwm
= 0.0 ; dqykr4eggmg . otjykwnhb3s . f2ynnmexgv = 0.0 ; dqykr4eggmg .
otjykwnhb3s . ewjj1agcxb = 0.0 ; dqykr4eggmg . otjykwnhb3s . lsitkrgmgv = 0.0
; dqykr4eggmg . otjykwnhb3s . b3fmbw5stg [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
aq2aymvaio [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 2 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . dzwopklw3c = 0.0F ; { int32_T i ; for ( i = 0 ; i < 15 ; i ++ )
{ dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz [ i ] = 0.0F ; } } dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
fl0vv44tbs [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg = 0.0F ; dqykr4eggmg . otjykwnhb3s . mirtkskmtr =
0.0F ; { int32_T i ; for ( i = 0 ; i < 5 ; i ++ ) { dqykr4eggmg . otjykwnhb3s
. jduomia1pb [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . od5c00niot [ 0 ]
= 0.0F ; dqykr4eggmg . otjykwnhb3s . od5c00niot [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . od5c00niot [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
od5c00niot [ 3 ] = 0.0F ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
dqykr4eggmg . otjykwnhb3s . dqfv1m130o [ i ] = 0.0F ; } } dqykr4eggmg .
otjykwnhb3s . meognsjf1t [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
meognsjf1t [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . gcgpru4rcb [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . gcgpru4rcb [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . peklmaellz [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
peklmaellz [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . bsetqjfri4 = 0.0F ;
dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gixvkpnpus [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . gixvkpnpus [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . krs1cvkxzk [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 = 0.0F ; dqykr4eggmg . otjykwnhb3s .
orkq4iljgu = 0.0F ; dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo = 0.0F ;
dqykr4eggmg . otjykwnhb3s . n0mydijbcx = 0.0F ; dqykr4eggmg . otjykwnhb3s .
iwg03owvar = 0.0F ; dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 0 ] = 0.0F ;
dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
pwlp5beuqs [ 1 ] = 0.0F ; flightControlSystem_InitializeDataMapInfo (
accn4cnket , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) &&
( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( accn4cnket -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } f51itwtzkqf . otjykwnhb3s . b1rw3rggh2 =
UNINITIALIZED_ZCSIG ; } void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_flightControlSystem , 206 ) ; * retVal = 1 ; } static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_flightControlSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_flightControlSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg"
, "f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char_T * rtdwDataFieldNames [ 85 ] = { "dqykr4eggmg.dct2gyhlhn" ,
"dqykr4eggmg.mdrqgzmhxm" , "dqykr4eggmg.fdg0ctxzju" ,
"dqykr4eggmg.mmrjfuhf4s" , "dqykr4eggmg.gxr4lx4uyw" ,
"dqykr4eggmg.lfoikcitje" , "dqykr4eggmg.pmpp3mxiwl" ,
"dqykr4eggmg.pfvcihpfoh" , "dqykr4eggmg.l152eirbdu" ,
"dqykr4eggmg.btek1dk1x3" , "dqykr4eggmg.jw22f2in0f" ,
"dqykr4eggmg.h1isy2vxmu" , "dqykr4eggmg.ccmaqi4v1z" ,
"dqykr4eggmg.jjrfotind4" , "dqykr4eggmg.otjykwnhb3s.mi4mocbazh" ,
"dqykr4eggmg.otjykwnhb3s.mtonzezz2z" , "dqykr4eggmg.otjykwnhb3s.ddv3ztj2wp" ,
"dqykr4eggmg.otjykwnhb3s.bw2ribqmwm" , "dqykr4eggmg.otjykwnhb3s.f2ynnmexgv" ,
"dqykr4eggmg.otjykwnhb3s.ewjj1agcxb" , "dqykr4eggmg.otjykwnhb3s.lsitkrgmgv" ,
"dqykr4eggmg.otjykwnhb3s.b3fmbw5stg" , "dqykr4eggmg.otjykwnhb3s.aq2aymvaio" ,
"dqykr4eggmg.otjykwnhb3s.dzwopklw3c" , "dqykr4eggmg.otjykwnhb3s.d4fp3a2mpz" ,
"dqykr4eggmg.otjykwnhb3s.fl0vv44tbs" , "dqykr4eggmg.otjykwnhb3s.as5a0ikbk1" ,
"dqykr4eggmg.otjykwnhb3s.ncgo1wegzg" , "dqykr4eggmg.otjykwnhb3s.mirtkskmtr" ,
"dqykr4eggmg.otjykwnhb3s.jduomia1pb" , "dqykr4eggmg.otjykwnhb3s.od5c00niot" ,
"dqykr4eggmg.otjykwnhb3s.dqfv1m130o" , "dqykr4eggmg.otjykwnhb3s.meognsjf1t" ,
"dqykr4eggmg.otjykwnhb3s.gcgpru4rcb" , "dqykr4eggmg.otjykwnhb3s.peklmaellz" ,
"dqykr4eggmg.otjykwnhb3s.bsetqjfri4" , "dqykr4eggmg.otjykwnhb3s.dsjbzv2lh4" ,
"dqykr4eggmg.otjykwnhb3s.gixvkpnpus" , "dqykr4eggmg.otjykwnhb3s.ow5xb5ovt0" ,
"dqykr4eggmg.otjykwnhb3s.krs1cvkxzk" , "dqykr4eggmg.otjykwnhb3s.c4kiksmhh2" ,
"dqykr4eggmg.otjykwnhb3s.bbkjtf4kuy" , "dqykr4eggmg.otjykwnhb3s.l3lcputuyl" ,
"dqykr4eggmg.otjykwnhb3s.pjgu33zeph" , "dqykr4eggmg.otjykwnhb3s.dxm3w2i52x" ,
"dqykr4eggmg.otjykwnhb3s.orkq4iljgu" , "dqykr4eggmg.otjykwnhb3s.b1nmhkw4zo" ,
"dqykr4eggmg.otjykwnhb3s.n0mydijbcx" , "dqykr4eggmg.otjykwnhb3s.iwg03owvar" ,
"dqykr4eggmg.otjykwnhb3s.mf2pp40f5v" , "dqykr4eggmg.otjykwnhb3s.pwlp5beuqs" ,
"dqykr4eggmg.otjykwnhb3s.gaxgdudnvc" , "dqykr4eggmg.otjykwnhb3s.nhnlpyyc10" ,
"dqykr4eggmg.otjykwnhb3s.dq5lalhp1e" , "dqykr4eggmg.otjykwnhb3s.fpr1qi0oiw" ,
"dqykr4eggmg.otjykwnhb3s.klyrn0mwhb" , "dqykr4eggmg.otjykwnhb3s.mfifybuxty" ,
"dqykr4eggmg.otjykwnhb3s.a1oodzfxvv" , "dqykr4eggmg.otjykwnhb3s.mgysgsd2g4" ,
"dqykr4eggmg.otjykwnhb3s.idn2v5d33m" , "dqykr4eggmg.otjykwnhb3s.l4tifptbm5" ,
"dqykr4eggmg.otjykwnhb3s.ceueb3e4so" , "dqykr4eggmg.otjykwnhb3s.lvqzer0fpz" ,
"dqykr4eggmg.otjykwnhb3s.be5jkfqe3t" , "dqykr4eggmg.otjykwnhb3s.de4yc1bkky" ,
"dqykr4eggmg.otjykwnhb3s.jd3dqtmo2p" , "dqykr4eggmg.otjykwnhb3s.f1jy25gy04" ,
"dqykr4eggmg.otjykwnhb3s.gdn4qfzvsk" , "dqykr4eggmg.otjykwnhb3s.cqi2pi21ow" ,
"dqykr4eggmg.otjykwnhb3s.kh1khihcrt" , "dqykr4eggmg.otjykwnhb3s.iftedegxuv" ,
"dqykr4eggmg.otjykwnhb3s.g4zcogq4xi" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ciy1c2o0rv.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.jvbbqhrajh.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.clwiujjdqo.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.acfz1zxm4t.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.ghadbep3bbv.fau3qf03xm" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 85 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . dct2gyhlhn ) , sizeof ( dqykr4eggmg . dct2gyhlhn ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . mdrqgzmhxm ) , sizeof ( dqykr4eggmg . mdrqgzmhxm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . fdg0ctxzju ) , sizeof ( dqykr4eggmg . fdg0ctxzju ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( dqykr4eggmg . mmrjfuhf4s ) , sizeof ( dqykr4eggmg . mmrjfuhf4s ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . gxr4lx4uyw ) , sizeof ( dqykr4eggmg . gxr4lx4uyw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( dqykr4eggmg . lfoikcitje ) , sizeof ( dqykr4eggmg . lfoikcitje ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . pmpp3mxiwl ) , sizeof ( dqykr4eggmg . pmpp3mxiwl ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( dqykr4eggmg . pfvcihpfoh ) , sizeof ( dqykr4eggmg . pfvcihpfoh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( dqykr4eggmg . btek1dk1x3 ) , sizeof ( dqykr4eggmg . btek1dk1x3 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void
* ) & ( dqykr4eggmg . jw22f2in0f ) , sizeof ( dqykr4eggmg . jw22f2in0f ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( dqykr4eggmg . h1isy2vxmu ) , sizeof ( dqykr4eggmg . h1isy2vxmu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void
* ) & ( dqykr4eggmg . ccmaqi4v1z ) , sizeof ( dqykr4eggmg . ccmaqi4v1z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mi4mocbazh ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mtonzezz2z ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bw2ribqmwm ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ewjj1agcxb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ewjj1agcxb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . lsitkrgmgv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . lsitkrgmgv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
b3fmbw5stg ) , sizeof ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dzwopklw3c ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
fl0vv44tbs ) , sizeof ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ncgo1wegzg ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
jduomia1pb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dqfv1m130o ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gcgpru4rcb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bsetqjfri4 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gixvkpnpus ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk ) , sizeof ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bbkjtf4kuy ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
pjgu33zeph ) , sizeof ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
orkq4iljgu ) , sizeof ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
n0mydijbcx ) , sizeof ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 49 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mf2pp40f5v ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 51 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gaxgdudnvc ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . nhnlpyyc10 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . nhnlpyyc10 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 53 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dq5lalhp1e ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 55 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
klyrn0mwhb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 57 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
a1oodzfxvv ) , sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 59 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
idn2v5d33m ) , sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . l4tifptbm5 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . l4tifptbm5 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 61 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ceueb3e4so ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ceueb3e4so ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . lvqzer0fpz ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . lvqzer0fpz ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 63 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
be5jkfqe3t ) , sizeof ( dqykr4eggmg . otjykwnhb3s . be5jkfqe3t ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 65 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
jd3dqtmo2p ) , sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 67 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gdn4qfzvsk ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 69 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
kh1khihcrt ) , sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 71 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
g4zcogq4xi ) , sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
dct2gyhlhn ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . dct2gyhlhn ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
mdrqgzmhxm ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . mdrqgzmhxm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
fdg0ctxzju ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . fdg0ctxzju ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
mmrjfuhf4s ) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . mmrjfuhf4s ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
gxr4lx4uyw ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . gxr4lx4uyw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
lfoikcitje ) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . lfoikcitje ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
pmpp3mxiwl ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . pmpp3mxiwl ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
pfvcihpfoh ) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg . pfvcihpfoh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l152eirbdu ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
btek1dk1x3 ) , rtdwData , 0 , 9 , sizeof ( dqykr4eggmg . btek1dk1x3 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jw22f2in0f ) , rtdwData , 0 , 10 , sizeof ( dqykr4eggmg . jw22f2in0f ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
h1isy2vxmu ) , rtdwData , 0 , 11 , sizeof ( dqykr4eggmg . h1isy2vxmu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ccmaqi4v1z ) , rtdwData , 0 , 12 , sizeof ( dqykr4eggmg . ccmaqi4v1z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jjrfotind4 ) , rtdwData , 0 , 13 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) , rtdwData , 0 , 14 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) , rtdwData , 0 , 15
, sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) , rtdwData , 0 , 16 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , rtdwData , 0 , 17
, sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) , rtdwData , 0 , 18 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ewjj1agcxb ) , rtdwData , 0 , 19
, sizeof ( dqykr4eggmg . otjykwnhb3s . ewjj1agcxb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . lsitkrgmgv ) , rtdwData , 0 , 20 , sizeof ( dqykr4eggmg .
otjykwnhb3s . lsitkrgmgv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) , rtdwData , 0 , 21
, sizeof ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) , rtdwData , 0 , 22 , sizeof ( dqykr4eggmg .
otjykwnhb3s . aq2aymvaio ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) , rtdwData , 0 , 23
, sizeof ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) , rtdwData , 0 , 24 , sizeof ( dqykr4eggmg .
otjykwnhb3s . d4fp3a2mpz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) , rtdwData , 0 , 25
, sizeof ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) , rtdwData , 0 , 26 , sizeof ( dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) , rtdwData , 0 , 27
, sizeof ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) , rtdwData , 0 , 28 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mirtkskmtr ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) , rtdwData , 0 , 29
, sizeof ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) , rtdwData , 0 , 30 , sizeof ( dqykr4eggmg .
otjykwnhb3s . od5c00niot ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) , rtdwData , 0 , 31
, sizeof ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) , rtdwData , 0 , 32 , sizeof ( dqykr4eggmg .
otjykwnhb3s . meognsjf1t ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) , rtdwData , 0 , 33
, sizeof ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) , rtdwData , 0 , 34 , sizeof ( dqykr4eggmg .
otjykwnhb3s . peklmaellz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) , rtdwData , 0 , 35
, sizeof ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) , rtdwData , 0 , 36 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) , rtdwData , 0 , 37
, sizeof ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) , rtdwData , 0 , 38 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) , rtdwData , 0 , 39
, sizeof ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) , rtdwData , 0 , 40 , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4kiksmhh2 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) , rtdwData , 0 , 41
, sizeof ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) , rtdwData , 0 , 42 , sizeof ( dqykr4eggmg .
otjykwnhb3s . l3lcputuyl ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) , rtdwData , 0 , 43
, sizeof ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) , rtdwData , 0 , 44 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dxm3w2i52x ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) , rtdwData , 0 , 45
, sizeof ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) , rtdwData , 0 , 46 , sizeof ( dqykr4eggmg .
otjykwnhb3s . b1nmhkw4zo ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) , rtdwData , 0 , 47
, sizeof ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) , rtdwData , 0 , 48 , sizeof ( dqykr4eggmg .
otjykwnhb3s . iwg03owvar ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) , rtdwData , 0 , 49
, sizeof ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) , rtdwData , 0 , 50 , sizeof ( dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) , rtdwData , 0 , 51
, sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . nhnlpyyc10 ) , rtdwData , 0 , 52 , sizeof ( dqykr4eggmg .
otjykwnhb3s . nhnlpyyc10 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) , rtdwData , 0 , 53
, sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) , rtdwData , 0 , 54 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) , rtdwData , 0 , 55
, sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) , rtdwData , 0 , 56 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) , rtdwData , 0 , 57
, sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) , rtdwData , 0 , 58 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) , rtdwData , 0 , 59
, sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . l4tifptbm5 ) , rtdwData , 0 , 60 , sizeof ( dqykr4eggmg .
otjykwnhb3s . l4tifptbm5 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ceueb3e4so ) , rtdwData , 0 , 61
, sizeof ( dqykr4eggmg . otjykwnhb3s . ceueb3e4so ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . lvqzer0fpz ) , rtdwData , 0 , 62 , sizeof ( dqykr4eggmg .
otjykwnhb3s . lvqzer0fpz ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . be5jkfqe3t ) , rtdwData , 0 , 63
, sizeof ( dqykr4eggmg . otjykwnhb3s . be5jkfqe3t ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) , rtdwData , 0 , 64 , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) , rtdwData , 0 , 65
, sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) , rtdwData , 0 , 66 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) , rtdwData , 0 , 67
, sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) , rtdwData , 0 , 68 , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) , rtdwData , 0 , 69
, sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) , rtdwData , 0 , 70 , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) , rtdwData , 0 , 71
, sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . ley0an2uip ) , rtdwData , 0 , 72 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , rtdwData , 0 , 73 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , rtdwData , 0 , 74 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , rtdwData , 0 , 75 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , rtdwData , 0 , 76 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , rtdwData , 0 , 77 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , rtdwData , 0 , 78 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , rtdwData , 0 , 79 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , rtdwData , 0 , 80 , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , rtdwData , 0 , 81 , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , rtdwData , 0 , 82 , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , rtdwData , 0 , 83 , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , rtdwData , 0 , 84 , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 490860319U , 2453566181U , 655031545U , 2760038734U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "flightControlSystem" , &
chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 1 ] = { "MATLABSystem" , } ; static const char_T *
blockPath [ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
