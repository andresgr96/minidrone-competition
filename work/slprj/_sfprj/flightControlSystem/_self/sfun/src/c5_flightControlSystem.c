/* Include files */

#include "flightControlSystem_sfun.h"
#include "c5_flightControlSystem.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c5_emlrtMCI = { 28, /* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtMCInfo c5_b_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c5_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c5_d_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtMCInfo c5_e_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c5_emlrtRSI = { 16, /* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 27,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 28,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c5_h_emlrtRSI = { 86,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c5_i_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c5_j_emlrtRSI = { 57,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c5_k_emlrtRSI = { 113,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c5_l_emlrtRSI = { 39,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c5_m_emlrtRSI = { 42,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c5_n_emlrtRSI = { 117,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_o_emlrtRSI = { 133,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_p_emlrtRSI = { 139,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_q_emlrtRSI = { 698,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_r_emlrtRSI = { 699,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_s_emlrtRSI = { 704,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_t_emlrtRSI = { 705,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_u_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_v_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_w_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_x_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_y_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_ab_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_bb_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_cb_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_db_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_eb_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_fb_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_gb_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c5_hb_emlrtRSI = { 754,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_ib_emlrtRSI = { 760,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_jb_emlrtRSI = { 864,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_kb_emlrtRSI = { 80,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c5_lb_emlrtRSI = { 63,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_mb_emlrtRSI = { 199,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_nb_emlrtRSI = { 202,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_ob_emlrtRSI = { 205,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_pb_emlrtRSI = { 217,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_qb_emlrtRSI = { 344,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_rb_emlrtRSI = { 346,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_sb_emlrtRSI = { 350,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_tb_emlrtRSI = { 352,/* lineNo */
  "bwlabel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m"/* pathName */
};

static emlrtRSInfo c5_ub_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c5_vb_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c5_wb_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c5_xb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c5_yb_emlrtRSI = { 168,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_ac_emlrtRSI = { 170,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_bc_emlrtRSI = { 192,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_cc_emlrtRSI = { 195,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_dc_emlrtRSI = { 199,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_ec_emlrtRSI = { 200,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_fc_emlrtRSI = { 201,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_gc_emlrtRSI = { 205,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_hc_emlrtRSI = { 208,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_ic_emlrtRSI = { 211,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRTEInfo c5_emlrtRTEI = { 170,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_b_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c5_c_emlrtRTEI = { 199,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_d_emlrtRTEI = { 183,/* lineNo */
  31,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_e_emlrtRTEI = { 183,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_f_emlrtRTEI = { 200,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_g_emlrtRTEI = { 201,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_h_emlrtRTEI = { 154,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_i_emlrtRTEI = { 195,/* lineNo */
  10,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_j_emlrtRTEI = { 195,/* lineNo */
  18,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_k_emlrtRTEI = { 211,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_l_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c5_m_emlrtRTEI = { 215,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_n_emlrtRTEI = { 216,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_o_emlrtRTEI = { 217,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_p_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c5_q_emlrtRTEI = { 144,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c5_r_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c5_s_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c5_t_emlrtRTEI = { 35,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c5_u_emlrtRTEI = { 729,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_v_emlrtRTEI = { 730,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_w_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c5_x_emlrtRTEI = { 730,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_y_emlrtRTEI = { 21,/* lineNo */
  28,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pName */
};

static emlrtRTEInfo c5_ab_emlrtRTEI = { 242,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_bb_emlrtRTEI = { 243,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRTEInfo c5_cb_emlrtRTEI = { 27,/* lineNo */
  30,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c5_db_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c5_eb_emlrtRTEI = { 148,/* lineNo */
  24,                                  /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c5_fb_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c5_gb_emlrtRTEI = { 37,/* lineNo */
  23,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c5_hb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c5_ib_emlrtRTEI = { 174,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtDCInfo c5_emlrtDCI = { 176,/* lineNo */
  31,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_emlrtBCI = { 1,  /* iFirst */
  7,                                   /* iLast */
  176,                                 /* lineNo */
  31,                                  /* colNo */
  "endpoints",                         /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_b_emlrtDCI = { 179,/* lineNo */
  54,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_b_emlrtBCI = { 1,/* iFirst */
  7,                                   /* iLast */
  179,                                 /* lineNo */
  54,                                  /* colNo */
  "directions",                        /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  37,                                  /* colNo */
  "sorted_points",                     /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_d_emlrtBCI = { 0,/* iFirst */
  MAX_int32_T,                         /* iLast */
  194,                                 /* lineNo */
  35,                                  /* colNo */
  "sorted_points(end,:)",              /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_c_emlrtDCI = { 194,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  35,                                  /* colNo */
  "sorted_points",                     /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c5_jb_emlrtRTEI = { 213,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtBCInfo c5_f_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  46,                                  /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_d_emlrtDCI = { 46,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_g_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  46,                                  /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_e_emlrtDCI = { 46,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_h_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  59,                                  /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_f_emlrtDCI = { 59,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_i_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  59,                                  /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_g_emlrtDCI = { 59,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_j_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  72,                                  /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_h_emlrtDCI = { 72,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_k_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  72,                                  /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_i_emlrtDCI = { 72,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_l_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  47,                                  /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_j_emlrtDCI = { 47,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_m_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  47,                                  /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_k_emlrtDCI = { 47,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_n_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  48,                                  /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_l_emlrtDCI = { 48,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_o_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  48,                                  /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_m_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_p_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  85,                                  /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_n_emlrtDCI = { 85,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_q_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  85,                                  /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_o_emlrtDCI = { 85,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_r_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  60,                                  /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_p_emlrtDCI = { 60,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_s_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  60,                                  /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_q_emlrtDCI = { 60,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_t_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  49,                                  /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_r_emlrtDCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_u_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  49,                                  /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_s_emlrtDCI = { 49,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_v_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  61,                                  /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_t_emlrtDCI = { 61,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_w_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  61,                                  /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_u_emlrtDCI = { 61,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_x_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  98,                                  /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_v_emlrtDCI = { 98,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_y_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  98,                                  /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_w_emlrtDCI = { 98,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ab_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  73,                                  /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_x_emlrtDCI = { 73,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_bb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  73,                                  /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_y_emlrtDCI = { 73,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_cb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  62,                                  /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ab_emlrtDCI = { 62,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_db_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  62,                                  /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_bb_emlrtDCI = { 62,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_eb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  74,                                  /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_cb_emlrtDCI = { 74,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_fb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  74,                                  /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_db_emlrtDCI = { 74,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_gb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  111,                                 /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_eb_emlrtDCI = { 111,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_hb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  111,                                 /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_fb_emlrtDCI = { 111,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ib_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  86,                                  /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_gb_emlrtDCI = { 86,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_jb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  86,                                  /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_hb_emlrtDCI = { 86,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_kb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  75,                                  /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ib_emlrtDCI = { 75,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_lb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  75,                                  /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_jb_emlrtDCI = { 75,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_mb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  87,                                  /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_kb_emlrtDCI = { 87,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_nb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  87,                                  /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_lb_emlrtDCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ob_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  124,                                 /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_mb_emlrtDCI = { 124,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_pb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  124,                                 /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_nb_emlrtDCI = { 124,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_qb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  99,                                  /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ob_emlrtDCI = { 99,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_rb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  99,                                  /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_pb_emlrtDCI = { 99,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_sb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  88,                                  /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_qb_emlrtDCI = { 88,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_tb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  88,                                  /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_rb_emlrtDCI = { 88,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ub_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_sb_emlrtDCI = { 100,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_vb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_tb_emlrtDCI = { 100,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_wb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  137,                                 /* lineNo */
  107,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_ub_emlrtDCI = { 137,/* lineNo */
  107,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_xb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  137,                                 /* lineNo */
  121,                                 /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_vb_emlrtDCI = { 137,/* lineNo */
  121,                                 /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_yb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  112,                                 /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_wb_emlrtDCI = { 112,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ac_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  112,                                 /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_xb_emlrtDCI = { 112,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_bc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  101,                                 /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_yb_emlrtDCI = { 101,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_cc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  101,                                 /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ac_emlrtDCI = { 101,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_dc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  113,                                 /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_bc_emlrtDCI = { 113,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ec_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  113,                                 /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_cc_emlrtDCI = { 113,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_fc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  125,                                 /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_dc_emlrtDCI = { 125,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_gc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  125,                                 /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ec_emlrtDCI = { 125,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_hc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  114,                                 /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_fc_emlrtDCI = { 114,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ic_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  114,                                 /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_gc_emlrtDCI = { 114,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_jc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  126,                                 /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_hc_emlrtDCI = { 126,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_kc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  126,                                 /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_ic_emlrtDCI = { 126,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_lc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  138,                                 /* lineNo */
  19,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_jc_emlrtDCI = { 138,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_mc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  138,                                 /* lineNo */
  33,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_kc_emlrtDCI = { 138,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_nc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  127,                                 /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_lc_emlrtDCI = { 127,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_oc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  127,                                 /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_mc_emlrtDCI = { 127,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_pc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  139,                                 /* lineNo */
  19,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_nc_emlrtDCI = { 139,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_qc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  139,                                 /* lineNo */
  33,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_oc_emlrtDCI = { 139,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_rc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  140,                                 /* lineNo */
  19,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_pc_emlrtDCI = { 140,/* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_sc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  140,                                 /* lineNo */
  33,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_qc_emlrtDCI = { 140,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_tc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  168,                                 /* lineNo */
  18,                                  /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_rc_emlrtDCI = { 168,/* lineNo */
  18,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  175,                                 /* lineNo */
  28,                                  /* colNo */
  "edge_indices",                      /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_sc_emlrtDCI = { 175,/* lineNo */
  28,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c5_tc_emlrtDCI = { 199,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_vc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  199,                                 /* lineNo */
  11,                                  /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_wc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  182,                                 /* lineNo */
  23,                                  /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_uc_emlrtDCI = { 182,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_xc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  182,                                 /* lineNo */
  37,                                  /* colNo */
  "BW",                                /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_vc_emlrtDCI = { 182,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c5_wc_emlrtDCI = { 200,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_yc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  200,                                 /* lineNo */
  11,                                  /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_ad_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  215,                                 /* lineNo */
  9,                                   /* colNo */
  "colormap",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_xc_emlrtDCI = { 215,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_bd_emlrtBCI = { 0,/* iFirst */
  19199,                               /* iLast */
  215,                                 /* lineNo */
  9,                                   /* colNo */
  "R",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_yc_emlrtDCI = { 201,/* lineNo */
  11,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_cd_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  201,                                 /* lineNo */
  11,                                  /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  216,                                 /* lineNo */
  9,                                   /* colNo */
  "colormap",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_ad_emlrtDCI = { 216,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_ed_emlrtBCI = { 0,/* iFirst */
  19199,                               /* iLast */
  216,                                 /* lineNo */
  9,                                   /* colNo */
  "G",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_fd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  9,                                   /* colNo */
  "colormap",                          /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_bd_emlrtDCI = { 217,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_gd_emlrtBCI = { 0,/* iFirst */
  19199,                               /* iLast */
  217,                                 /* lineNo */
  9,                                   /* colNo */
  "B",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_id_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_jd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  754,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_kd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  759,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ld_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_md_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_nd_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  172,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_od_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  367,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_pd_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  370,                                 /* lineNo */
  7,                                   /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_qd_emlrtBCI = { 1,/* iFirst */
  168,                                 /* iLast */
  209,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_rd_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  197,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_sd_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  198,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_td_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  201,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ud_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  199,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_vd_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  336,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_wd_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  204,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_xd_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  202,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_yd_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  205,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ae_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  358,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_be_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  359,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ce_emlrtBCI = { 1,/* iFirst */
  168,                                 /* iLast */
  217,                                 /* lineNo */
  75,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_de_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  365,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ee_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  366,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_fe_emlrtBCI = { 1,/* iFirst */
  168,                                 /* iLast */
  225,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ge_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  218,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_he_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  97,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ie_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  219,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_je_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  106,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ke_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  107,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_le_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  135,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_me_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  136,                                 /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ne_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  124,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_oe_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  111,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_pe_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  129,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_qe_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  125,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_re_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  112,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_se_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  153,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_te_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  140,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ue_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  126,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_ve_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  158,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_we_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  154,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_xe_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  141,                                 /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ye_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  155,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_af_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  117,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_bf_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  122,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_cf_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  118,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_df_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  146,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_ef_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  119,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_ff_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  151,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_gf_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  147,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_hf_emlrtBCI = { 1,/* iFirst */
  9601,                                /* iLast */
  148,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwlabel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\bwlabel.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo c5_kb_emlrtRTEI = { 241,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2723"          /* pName */
};

static emlrtRSInfo c5_jc_emlrtRSI = { 243,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_kc_emlrtRSI = { 242,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2723"          /* pathName */
};

static emlrtRSInfo c5_lc_emlrtRSI = { 35,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c5_mc_emlrtRSI = { 33,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pathName */
};

static char_T c5_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
  '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f', 'R',
  'a', 'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st);
static void initSimStructsc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void initSubchartIOPointersc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_sub2ind(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[7], real_T c5_varargin_2[7],
  int32_T c5_idx[7]);
static boolean_T c5_allinrange(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[7], int32_T c5_hi);
static void c5_eml_find(SFc5_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c5_x[7], int32_T c5_i_data[], int32_T c5_i_size[1]);
static void c5_indexShapeCheck(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void c5_sortrows(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_y, c5_emxArray_real_T *c5_b_y);
static void c5_check_forloop_overflow_error
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c5_sp);
static boolean_T c5_sortLE(SFc5_flightControlSystemInstanceStruct *chartInstance,
  c5_emxArray_real_T *c5_v, int32_T c5_idx1, int32_T c5_idx2);
static void c5_b_sub2ind(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_varargin_1, c5_emxArray_real_T
  *c5_varargin_2, c5_emxArray_int32_T *c5_idx);
static boolean_T c5_b_allinrange(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_real_T *c5_x, int32_T c5_hi);
static void c5_edge(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, boolean_T c5_varargin_1[19200], boolean_T
                    c5_varargout_1[19200]);
static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp);
static void c5_bwlabel(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_varargin_1[19200], real_T c5_b_L[19200],
  real_T *c5_numComponents);
static void c5_rand(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, real_T c5_varargin_1, c5_emxArray_real_T *
                    c5_r);
static void c5_ddaLine(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_x1, real_T c5_y1, real_T c5_x2, real_T
  c5_y2, c5_emxArray_real_T *c5_x, c5_emxArray_real_T *c5_y);
static void c5_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_B_out, const char_T *c5_identifier,
  uint8_T c5_y[19200]);
static void c5_b_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  uint8_T c5_y[19200]);
static real_T c5_c_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_len_back_center, const char_T
  *c5_identifier);
static real_T c5_d_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint32_T c5_e_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_method, const char_T *c5_identifier,
  boolean_T *c5_svPtr);
static uint32_T c5_f_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr);
static void c5_g_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_d_state, const char_T *c5_identifier,
  boolean_T *c5_svPtr, uint32_T c5_y[625]);
static void c5_h_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr, uint32_T c5_y[625]);
static void c5_i_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_d_state, const char_T *c5_identifier,
  boolean_T *c5_svPtr, uint32_T c5_y[2]);
static void c5_j_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr, uint32_T c5_y[2]);
static uint8_T c5_k_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_flightControlSystem, const
  char_T *c5_identifier);
static uint8_T c5_l_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_slStringInitializeDynamicBuffers
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_chart_data_browse_helper(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig);
static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1);
static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1);
static void c5_b_sortrows(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_y);
static void c5_emxEnsureCapacity_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxEnsureCapacity_int32_T(SFc5_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxEnsureCapacity_real_T1(SFc5_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxInit_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxInit_real_T1(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxInit_int32_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxFree_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_real_T **c5_pEmxArray);
static void c5_emxFree_int32_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_int32_T **c5_pEmxArray);
static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c5_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_method_not_empty = false;
  chartInstance->c5_state_not_empty = false;
  chartInstance->c5_b_state_not_empty = false;
  chartInstance->c5_c_state_not_empty = false;
  chartInstance->c5_is_active_c5_flightControlSystem = 0U;
}

static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static const int32_T c5_i_postfixPredicateTree[23] = { 0, -1, 1, -1, -3, 2, -1,
    -3, 3, -1, -3, 4, -1, -3, 5, -1, -3, 6, -1, -3, 7, -1, -3 };

  static const int32_T c5_b_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_c_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_d_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_e_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_f_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_g_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_h_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3,
    4, -3 };

  static const int32_T c5_postfixPredicateTree[9] = { 0, 1, -3, 2, -3, 3, -3, 4,
    -3 };

  static const int32_T c5_i_condTxtEndIdx[8] = { 6045, 6063, 6082, 6103, 6125,
    6150, 6173, 6197 };

  static const int32_T c5_i_condTxtStartIdx[8] = { 6030, 6050, 6068, 6087, 6108,
    6130, 6155, 6178 };

  static const int32_T c5_j_postfixPredicateTree[7] = { 0, 1, -2, 2, -2, 3, -2 };

  static const int32_T c5_b_condTxtEndIdx[5] = { 2212, 2232, 2256, 2280, 2319 };

  static const int32_T c5_b_condTxtStartIdx[5] = { 2196, 2216, 2236, 2260, 2284
  };

  static const int32_T c5_c_condTxtEndIdx[5] = { 2749, 2769, 2793, 2817, 2856 };

  static const int32_T c5_c_condTxtStartIdx[5] = { 2733, 2753, 2773, 2797, 2821
  };

  static const int32_T c5_condTxtEndIdx[5] = { 1672, 1692, 1716, 1740, 1779 };

  static const int32_T c5_condTxtStartIdx[5] = { 1656, 1676, 1696, 1720, 1744 };

  static const int32_T c5_d_condTxtEndIdx[5] = { 3303, 3323, 3347, 3371, 3410 };

  static const int32_T c5_d_condTxtStartIdx[5] = { 3287, 3307, 3327, 3351, 3375
  };

  static const int32_T c5_e_condTxtEndIdx[5] = { 3858, 3878, 3902, 3926, 3965 };

  static const int32_T c5_e_condTxtStartIdx[5] = { 3842, 3862, 3882, 3906, 3930
  };

  static const int32_T c5_f_condTxtEndIdx[5] = { 4424, 4444, 4468, 4492, 4531 };

  static const int32_T c5_f_condTxtStartIdx[5] = { 4408, 4428, 4448, 4472, 4496
  };

  static const int32_T c5_g_condTxtEndIdx[5] = { 4993, 5013, 5037, 5061, 5100 };

  static const int32_T c5_g_condTxtStartIdx[5] = { 4977, 4997, 5017, 5041, 5065
  };

  static const int32_T c5_h_condTxtEndIdx[5] = { 5559, 5579, 5603, 5627, 5666 };

  static const int32_T c5_h_condTxtStartIdx[5] = { 5543, 5563, 5583, 5607, 5631
  };

  static const int32_T c5_j_condTxtEndIdx[4] = { 7428, 7449, 7472, 7495 };

  static const int32_T c5_j_condTxtStartIdx[4] = { 7411, 7432, 7453, 7476 };

  static const uint32_T c5_decisionTxtEndIdx = 0U;
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c5_chart_data_browse_helper);
  chartInstance->c5_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c5_RuntimeVar,
    &chartInstance->c5_IsDebuggerActive,
    &chartInstance->c5_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c5_mlFcnLineNumber, &chartInstance->c5_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    66U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 2U, 0U, 20U, 0U,
                  3U, 0U, 4U, 1U, 52U, 10U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 8933);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, "ddaLine",
                     8935, -1, 9379);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 8728,
    -1, 8758);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 8768,
    -1, 8798);
  covrtEmlSaturationInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 8808,
    -1, 8838);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 1559, 1577, -1,
                    2065, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 1653, 1779,
                    1992, 2053, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 2103, 2119, -1,
                    2599, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 2193, 2319,
                    2528, 2587, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 2638, 2655, -1,
                    3139, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 5U, 2730, 2856,
                    3067, 3127, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 6U, 3188, 3207, -1,
                    3699, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 7U, 3284, 3410,
                    3625, 3687, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 8U, 3741, 3761, -1,
                    4257, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 9U, 3839, 3965,
                    4182, 4245, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 10U, 4301, 4324, -1,
                    4832, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 11U, 4405, 4531,
                    4754, 4820, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 12U, 4874, 4895, -1,
                    5395, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 13U, 4974, 5100,
                    5319, 5383, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 14U, 5438, 5460, -1,
                    5964, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 15U, 5540, 5666,
                    5887, 5952, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 16U, 6026, 6197,
                    6235, 6236, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 17U, 7408, 7495,
                    7589, 7738, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 18U, 7589, 7631, -1,
                    7738, false);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 19U, 7835, 7863, -1,
                    8388, false);
  covrtEmlForInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 1504, 1528,
                     6236);
  covrtEmlForInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 7181, 7202,
                     7773);
  covrtEmlForInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 8646, 8659,
                     8847);
  covrtEmlForInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 9184, 9198,
                     9334);
  covrtEmlWhileInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 7312, 7332,
                       7765);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 1656, 1779,
                      5U, 0U, c5_condTxtStartIdx, c5_condTxtEndIdx, 9U,
                      c5_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 2196, 2319,
                      5U, 5U, c5_b_condTxtStartIdx, c5_b_condTxtEndIdx, 9U,
                      c5_b_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 2733, 2856,
                      5U, 10U, c5_c_condTxtStartIdx, c5_c_condTxtEndIdx, 9U,
                      c5_c_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 3287, 3410,
                      5U, 15U, c5_d_condTxtStartIdx, c5_d_condTxtEndIdx, 9U,
                      c5_d_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 3842, 3965,
                      5U, 20U, c5_e_condTxtStartIdx, c5_e_condTxtEndIdx, 9U,
                      c5_e_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 5U, 4408, 4531,
                      5U, 25U, c5_f_condTxtStartIdx, c5_f_condTxtEndIdx, 9U,
                      c5_f_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 6U, 4977, 5100,
                      5U, 30U, c5_g_condTxtStartIdx, c5_g_condTxtEndIdx, 9U,
                      c5_g_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 7U, 5543, 5666,
                      5U, 35U, c5_h_condTxtStartIdx, c5_h_condTxtEndIdx, 9U,
                      c5_h_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 8U, 6029, 6197,
                      8U, 40U, c5_i_condTxtStartIdx, c5_i_condTxtEndIdx, 23U,
                      c5_i_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 9U, 7411, 7495,
                      4U, 48U, c5_j_condTxtStartIdx, c5_j_condTxtEndIdx, 7U,
                      c5_j_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 1656,
    1672, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 1676,
    1692, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 1696,
    1716, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 1720,
    1740, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 1744,
    1779, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 5U, 2196,
    2212, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 6U, 2216,
    2232, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 7U, 2236,
    2256, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 8U, 2260,
    2280, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 9U, 2284,
    2319, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 10U, 2733,
    2749, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 11U, 2753,
    2769, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 12U, 2773,
    2793, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 13U, 2797,
    2817, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 14U, 2821,
    2856, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 15U, 3287,
    3303, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 16U, 3307,
    3323, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 17U, 3327,
    3347, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 18U, 3351,
    3371, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 19U, 3375,
    3410, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 20U, 3842,
    3858, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 21U, 3862,
    3878, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 22U, 3882,
    3902, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 23U, 3906,
    3926, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 24U, 3930,
    3965, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 25U, 4408,
    4424, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 26U, 4428,
    4444, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 27U, 4448,
    4468, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 28U, 4472,
    4492, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 29U, 4496,
    4531, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 30U, 4977,
    4993, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 31U, 4997,
    5013, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 32U, 5017,
    5037, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 33U, 5041,
    5061, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 34U, 5065,
    5100, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 35U, 5543,
    5559, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 36U, 5563,
    5579, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 37U, 5583,
    5603, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 38U, 5607,
    5627, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 39U, 5631,
    5666, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 40U, 7411,
    7428, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 41U, 7432,
    7449, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 42U, 7453,
    7472, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 43U, 7476,
    7495, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 44U, 7596,
    7631, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 45U, 7838,
    7863, -1, 5U);
}

static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c5_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static real_T c5_directions[14] = { -1.0, -0.86602540378443871,
    -0.86602540378443871, 0.0, 0.0, 0.86602540378443871, 0.86602540378443871,
    0.0, -0.49999999999999994, 0.49999999999999994, -1.0, 1.0,
    -0.49999999999999994, 0.49999999999999994 };

  static real_T c5_step_back_left[2] = { 0.86602540378443871,
    -0.49999999999999994 };

  static real_T c5_step_right[2] = { -0.86602540378443871, 0.49999999999999994 };

  c5_emxArray_int32_T *c5_r;
  c5_emxArray_int32_T *c5_r1;
  c5_emxArray_int32_T *c5_r2;
  c5_emxArray_int32_T *c5_r3;
  c5_emxArray_real_T *c5_b_edge_points;
  c5_emxArray_real_T *c5_b_ndx;
  c5_emxArray_real_T *c5_colormap;
  c5_emxArray_real_T *c5_edge_points;
  c5_emxArray_real_T *c5_x_line;
  c5_emxArray_real_T *c5_y_line;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c5_endpoints[14];
  real_T c5_edge_indices_data[7];
  real_T c5_ndx[7];
  real_T c5_varargin_2[7];
  real_T c5_b_y[2];
  real_T c5_c_y[2];
  real_T c5_d_y[2];
  real_T c5_e_y[2];
  real_T c5_end_point[2];
  real_T c5_new_point[2];
  real_T c5_y[2];
  real_T c5_b_len_back_center;
  real_T c5_b_len_back_left;
  real_T c5_b_len_back_right;
  real_T c5_b_len_center;
  real_T c5_b_len_left;
  real_T c5_b_len_left_or;
  real_T c5_b_len_right;
  real_T c5_b_len_right_or;
  real_T c5_b_num;
  real_T c5_b_num_indices;
  real_T c5_b_x;
  real_T c5_c_i;
  real_T c5_c_num;
  real_T c5_c_x;
  real_T c5_d;
  real_T c5_d1;
  real_T c5_d10;
  real_T c5_d11;
  real_T c5_d12;
  real_T c5_d13;
  real_T c5_d14;
  real_T c5_d15;
  real_T c5_d16;
  real_T c5_d17;
  real_T c5_d18;
  real_T c5_d2;
  real_T c5_d3;
  real_T c5_d4;
  real_T c5_d5;
  real_T c5_d6;
  real_T c5_d7;
  real_T c5_d8;
  real_T c5_d9;
  real_T c5_d_a;
  real_T c5_d_x;
  real_T c5_e_a;
  real_T c5_e_x;
  real_T c5_f_a;
  real_T c5_f_x;
  real_T c5_g_a;
  real_T c5_g_x;
  real_T c5_h_a;
  real_T c5_h_x;
  real_T c5_i_a;
  real_T c5_i_x;
  real_T c5_idx;
  real_T c5_j_a;
  real_T c5_j_x;
  real_T c5_k_a;
  real_T c5_k_x;
  real_T c5_l_a;
  real_T c5_l_x;
  real_T c5_m_a;
  real_T c5_m_x;
  real_T c5_n_a;
  real_T c5_n_x;
  real_T c5_num;
  real_T c5_num_indices;
  real_T c5_o_a;
  real_T c5_o_x;
  real_T c5_p_a;
  real_T c5_p_x;
  real_T c5_q_a;
  real_T c5_q_x;
  real_T c5_r_a;
  real_T c5_r_k;
  real_T c5_r_x;
  real_T c5_x;
  int32_T c5_ii_data[7];
  int32_T c5_iv[7];
  int32_T c5_edge_indices_size[1];
  int32_T c5_ii_size[1];
  int32_T c5_b_end;
  int32_T c5_b_i;
  int32_T c5_b_i1;
  int32_T c5_b_idx;
  int32_T c5_b_k;
  int32_T c5_b_loop_ub;
  int32_T c5_b_partialTrueCount;
  int32_T c5_b_trueCount;
  int32_T c5_c_edge_points;
  int32_T c5_c_end;
  int32_T c5_c_idx;
  int32_T c5_c_k;
  int32_T c5_c_loop_ub;
  int32_T c5_c_partialTrueCount;
  int32_T c5_c_trueCount;
  int32_T c5_d_i;
  int32_T c5_d_k;
  int32_T c5_d_loop_ub;
  int32_T c5_e_i;
  int32_T c5_e_k;
  int32_T c5_e_loop_ub;
  int32_T c5_end;
  int32_T c5_exitg1;
  int32_T c5_f_i;
  int32_T c5_f_k;
  int32_T c5_f_loop_ub;
  int32_T c5_g_i;
  int32_T c5_g_k;
  int32_T c5_g_loop_ub;
  int32_T c5_h_i;
  int32_T c5_h_k;
  int32_T c5_h_loop_ub;
  int32_T c5_i;
  int32_T c5_i10;
  int32_T c5_i100;
  int32_T c5_i101;
  int32_T c5_i102;
  int32_T c5_i103;
  int32_T c5_i104;
  int32_T c5_i105;
  int32_T c5_i106;
  int32_T c5_i107;
  int32_T c5_i108;
  int32_T c5_i109;
  int32_T c5_i11;
  int32_T c5_i110;
  int32_T c5_i111;
  int32_T c5_i112;
  int32_T c5_i113;
  int32_T c5_i114;
  int32_T c5_i115;
  int32_T c5_i116;
  int32_T c5_i117;
  int32_T c5_i118;
  int32_T c5_i119;
  int32_T c5_i12;
  int32_T c5_i120;
  int32_T c5_i121;
  int32_T c5_i122;
  int32_T c5_i123;
  int32_T c5_i124;
  int32_T c5_i125;
  int32_T c5_i126;
  int32_T c5_i127;
  int32_T c5_i128;
  int32_T c5_i129;
  int32_T c5_i13;
  int32_T c5_i130;
  int32_T c5_i131;
  int32_T c5_i132;
  int32_T c5_i133;
  int32_T c5_i134;
  int32_T c5_i135;
  int32_T c5_i136;
  int32_T c5_i137;
  int32_T c5_i138;
  int32_T c5_i139;
  int32_T c5_i14;
  int32_T c5_i140;
  int32_T c5_i141;
  int32_T c5_i142;
  int32_T c5_i143;
  int32_T c5_i144;
  int32_T c5_i145;
  int32_T c5_i146;
  int32_T c5_i147;
  int32_T c5_i148;
  int32_T c5_i149;
  int32_T c5_i15;
  int32_T c5_i150;
  int32_T c5_i151;
  int32_T c5_i152;
  int32_T c5_i153;
  int32_T c5_i154;
  int32_T c5_i155;
  int32_T c5_i156;
  int32_T c5_i157;
  int32_T c5_i158;
  int32_T c5_i159;
  int32_T c5_i16;
  int32_T c5_i160;
  int32_T c5_i161;
  int32_T c5_i162;
  int32_T c5_i163;
  int32_T c5_i164;
  int32_T c5_i165;
  int32_T c5_i166;
  int32_T c5_i167;
  int32_T c5_i168;
  int32_T c5_i169;
  int32_T c5_i17;
  int32_T c5_i170;
  int32_T c5_i171;
  int32_T c5_i172;
  int32_T c5_i173;
  int32_T c5_i174;
  int32_T c5_i175;
  int32_T c5_i176;
  int32_T c5_i177;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i2;
  int32_T c5_i20;
  int32_T c5_i21;
  int32_T c5_i22;
  int32_T c5_i23;
  int32_T c5_i24;
  int32_T c5_i25;
  int32_T c5_i26;
  int32_T c5_i27;
  int32_T c5_i28;
  int32_T c5_i29;
  int32_T c5_i3;
  int32_T c5_i30;
  int32_T c5_i31;
  int32_T c5_i32;
  int32_T c5_i33;
  int32_T c5_i34;
  int32_T c5_i35;
  int32_T c5_i36;
  int32_T c5_i37;
  int32_T c5_i38;
  int32_T c5_i39;
  int32_T c5_i4;
  int32_T c5_i40;
  int32_T c5_i41;
  int32_T c5_i42;
  int32_T c5_i43;
  int32_T c5_i44;
  int32_T c5_i45;
  int32_T c5_i46;
  int32_T c5_i47;
  int32_T c5_i48;
  int32_T c5_i49;
  int32_T c5_i5;
  int32_T c5_i50;
  int32_T c5_i51;
  int32_T c5_i52;
  int32_T c5_i53;
  int32_T c5_i54;
  int32_T c5_i55;
  int32_T c5_i56;
  int32_T c5_i57;
  int32_T c5_i58;
  int32_T c5_i59;
  int32_T c5_i6;
  int32_T c5_i60;
  int32_T c5_i61;
  int32_T c5_i62;
  int32_T c5_i63;
  int32_T c5_i64;
  int32_T c5_i65;
  int32_T c5_i66;
  int32_T c5_i67;
  int32_T c5_i68;
  int32_T c5_i69;
  int32_T c5_i7;
  int32_T c5_i70;
  int32_T c5_i71;
  int32_T c5_i72;
  int32_T c5_i73;
  int32_T c5_i74;
  int32_T c5_i75;
  int32_T c5_i76;
  int32_T c5_i77;
  int32_T c5_i78;
  int32_T c5_i79;
  int32_T c5_i8;
  int32_T c5_i80;
  int32_T c5_i81;
  int32_T c5_i82;
  int32_T c5_i83;
  int32_T c5_i84;
  int32_T c5_i85;
  int32_T c5_i86;
  int32_T c5_i87;
  int32_T c5_i88;
  int32_T c5_i89;
  int32_T c5_i9;
  int32_T c5_i90;
  int32_T c5_i91;
  int32_T c5_i92;
  int32_T c5_i93;
  int32_T c5_i94;
  int32_T c5_i95;
  int32_T c5_i96;
  int32_T c5_i97;
  int32_T c5_i98;
  int32_T c5_i99;
  int32_T c5_i_i;
  int32_T c5_i_k;
  int32_T c5_i_loop_ub;
  int32_T c5_j_i;
  int32_T c5_j_k;
  int32_T c5_j_loop_ub;
  int32_T c5_k;
  int32_T c5_k_k;
  int32_T c5_k_loop_ub;
  int32_T c5_l_k;
  int32_T c5_l_loop_ub;
  int32_T c5_loop_ub;
  int32_T c5_m_k;
  int32_T c5_m_loop_ub;
  int32_T c5_n_k;
  int32_T c5_n_loop_ub;
  int32_T c5_o_k;
  int32_T c5_o_loop_ub;
  int32_T c5_p_k;
  int32_T c5_partialTrueCount;
  int32_T c5_q_k;
  int32_T c5_s_k;
  int32_T c5_t_k;
  int32_T c5_trueCount;
  uint8_T c5_b_B[19200];
  uint8_T c5_b_G[19200];
  uint8_T c5_b_R[19200];
  uint8_T c5_u;
  uint8_T c5_u1;
  uint8_T c5_u2;
  boolean_T c5_edges_canny[19200];
  boolean_T c5_mask[19200];
  boolean_T c5_is_edge[7];
  boolean_T c5_b_covSaturation = false;
  boolean_T c5_c_covSaturation = false;
  boolean_T c5_continue_back_center;
  boolean_T c5_continue_back_left;
  boolean_T c5_continue_back_right;
  boolean_T c5_continue_center;
  boolean_T c5_continue_left;
  boolean_T c5_continue_left_or;
  boolean_T c5_continue_right;
  boolean_T c5_continue_right_or;
  boolean_T c5_continue_trace;
  boolean_T c5_covSaturation = false;
  boolean_T c5_exitg2;
  boolean_T c5_guard1;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c5_i = 0; c5_i < 19200; c5_i++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 3U, (real_T)
                      (*chartInstance->c5_BW)[c5_i]);
  }

  for (c5_b_i1 = 0; c5_b_i1 < 19200; c5_b_i1++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 2U, (real_T)
                      (*chartInstance->c5_B)[c5_b_i1]);
  }

  for (c5_i2 = 0; c5_i2 < 19200; c5_i2++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U, (real_T)
                      (*chartInstance->c5_G)[c5_i2]);
  }

  for (c5_i3 = 0; c5_i3 < 19200; c5_i3++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U, (real_T)
                      (*chartInstance->c5_R)[c5_i3]);
  }

  chartInstance->c5_sfEvent = CALL_EVENT;
  for (c5_i4 = 0; c5_i4 < 19200; c5_i4++) {
    c5_b_R[c5_i4] = (*chartInstance->c5_R)[c5_i4];
  }

  for (c5_i5 = 0; c5_i5 < 19200; c5_i5++) {
    c5_b_G[c5_i5] = (*chartInstance->c5_G)[c5_i5];
  }

  for (c5_i6 = 0; c5_i6 < 19200; c5_i6++) {
    c5_b_B[c5_i6] = (*chartInstance->c5_B)[c5_i6];
  }

  for (c5_i7 = 0; c5_i7 < 19200; c5_i7++) {
    c5_mask[c5_i7] = (*chartInstance->c5_BW)[c5_i7];
  }

  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  c5_continue_center = true;
  c5_continue_left = true;
  c5_continue_right = true;
  c5_continue_left_or = true;
  c5_continue_right_or = true;
  c5_continue_back_center = true;
  c5_continue_back_left = true;
  c5_continue_back_right = true;
  c5_b_len_center = 0.0;
  c5_b_len_left = 0.0;
  c5_b_len_right = 0.0;
  c5_b_len_left_or = 0.0;
  c5_b_len_right_or = 0.0;
  c5_b_len_back_center = 0.0;
  c5_b_len_back_left = 0.0;
  c5_b_len_back_right = 0.0;
  c5_b_i = 0;
  do {
    c5_exitg1 = 0;
    if (c5_b_i < 160) {
      c5_c_i = 1.0 + (real_T)c5_b_i;
      covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 0, 1);
      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 0,
                         c5_continue_center)) {
        c5_d_a = c5_c_i;
        for (c5_i8 = 0; c5_i8 < 2; c5_i8++) {
          c5_new_point[c5_i8] = c5_d_a * (-1.0 + (real_T)c5_i8);
        }

        for (c5_i10 = 0; c5_i10 < 2; c5_i10++) {
          c5_new_point[c5_i10] += 60.0 + 20.0 * (real_T)c5_i10;
        }

        for (c5_k = 0; c5_k < 2; c5_k++) {
          c5_c_k = c5_k;
          c5_x = c5_new_point[c5_c_k];
          c5_b_x = c5_x;
          c5_b_x = muDoubleScalarRound(c5_b_x);
          c5_new_point[c5_c_k] = c5_b_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 0,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 1,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              1U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 2,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 2U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 3,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              3U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_d_emlrtDCI, &c5_st);
          }

          c5_i22 = (int32_T)c5_new_point[0];
          if ((c5_i22 < 1) || (c5_i22 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i22, 1, 120, &c5_f_emlrtBCI, &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_e_emlrtDCI, &c5_st);
          }

          c5_i30 = (int32_T)c5_new_point[1];
          if ((c5_i30 < 1) || (c5_i30 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i30, 1, 160, &c5_g_emlrtBCI, &c5_st);
          }

          c5_d = (real_T)c5_mask[(c5_i22 + 120 * (c5_i30 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 4,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 4U,
                                c5_d, 1.0, -1, 0U, c5_d == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 0, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 1, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_j_emlrtDCI, &c5_st);
            }

            c5_i45 = (int32_T)c5_new_point[0];
            if ((c5_i45 < 1) || (c5_i45 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i45, 1, 120, &c5_l_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_k_emlrtDCI, &c5_st);
            }

            c5_i54 = (int32_T)c5_new_point[1];
            if ((c5_i54 < 1) || (c5_i54 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i54, 1, 160, &c5_m_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i45 + 120 * (c5_i54 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_l_emlrtDCI, &c5_st);
            }

            c5_i65 = (int32_T)c5_new_point[0];
            if ((c5_i65 < 1) || (c5_i65 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i65, 1, 120, &c5_n_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_m_emlrtDCI, &c5_st);
            }

            c5_i76 = (int32_T)c5_new_point[1];
            if ((c5_i76 < 1) || (c5_i76 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i76, 1, 160, &c5_o_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i65 + 120 * (c5_i76 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_r_emlrtDCI, &c5_st);
            }

            c5_i88 = (int32_T)c5_new_point[0];
            if ((c5_i88 < 1) || (c5_i88 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i88, 1, 120, &c5_t_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_s_emlrtDCI, &c5_st);
            }

            c5_i96 = (int32_T)c5_new_point[1];
            if ((c5_i96 < 1) || (c5_i96 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i96, 1, 160, &c5_u_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i88 + 120 * (c5_i96 - 1)) - 1] = 0U;
            c5_b_len_center++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 0, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 1, false);
          c5_continue_center = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 2,
                         c5_continue_left)) {
        c5_e_a = c5_c_i;
        for (c5_i9 = 0; c5_i9 < 2; c5_i9++) {
          c5_new_point[c5_i9] = c5_e_a * (-0.86602540378443871 +
            0.36602540378443876 * (real_T)c5_i9);
        }

        for (c5_i13 = 0; c5_i13 < 2; c5_i13++) {
          c5_new_point[c5_i13] += 60.0 + 20.0 * (real_T)c5_i13;
        }

        for (c5_b_k = 0; c5_b_k < 2; c5_b_k++) {
          c5_e_k = c5_b_k;
          c5_c_x = c5_new_point[c5_e_k];
          c5_d_x = c5_c_x;
          c5_d_x = muDoubleScalarRound(c5_d_x);
          c5_new_point[c5_e_k] = c5_d_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 5,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 5U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 6,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              6U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 7,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 7U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 8,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              8U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_f_emlrtDCI, &c5_st);
          }

          c5_i25 = (int32_T)c5_new_point[0];
          if ((c5_i25 < 1) || (c5_i25 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i25, 1, 120, &c5_h_emlrtBCI, &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_g_emlrtDCI, &c5_st);
          }

          c5_i34 = (int32_T)c5_new_point[1];
          if ((c5_i34 < 1) || (c5_i34 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i34, 1, 160, &c5_i_emlrtBCI, &c5_st);
          }

          c5_d1 = (real_T)c5_mask[(c5_i25 + 120 * (c5_i34 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 9,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 9U,
                                c5_d1, 1.0, -1, 0U, c5_d1 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 1, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 3, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_p_emlrtDCI, &c5_st);
            }

            c5_i48 = (int32_T)c5_new_point[0];
            if ((c5_i48 < 1) || (c5_i48 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i48, 1, 120, &c5_r_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_q_emlrtDCI, &c5_st);
            }

            c5_i58 = (int32_T)c5_new_point[1];
            if ((c5_i58 < 1) || (c5_i58 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i58, 1, 160, &c5_s_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i48 + 120 * (c5_i58 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_t_emlrtDCI, &c5_st);
            }

            c5_i70 = (int32_T)c5_new_point[0];
            if ((c5_i70 < 1) || (c5_i70 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i70, 1, 120, &c5_v_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_u_emlrtDCI, &c5_st);
            }

            c5_i80 = (int32_T)c5_new_point[1];
            if ((c5_i80 < 1) || (c5_i80 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i80, 1, 160, &c5_w_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i70 + 120 * (c5_i80 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_ab_emlrtDCI, &c5_st);
            }

            c5_i92 = (int32_T)c5_new_point[0];
            if ((c5_i92 < 1) || (c5_i92 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i92, 1, 120, &c5_cb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_bb_emlrtDCI, &c5_st);
            }

            c5_i100 = (int32_T)c5_new_point[1];
            if ((c5_i100 < 1) || (c5_i100 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i100, 1, 160, &c5_db_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i92 + 120 * (c5_i100 - 1)) - 1] = 0U;
            c5_b_len_left++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 1, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 3, false);
          c5_continue_left = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 4,
                         c5_continue_right)) {
        c5_g_a = c5_c_i;
        for (c5_i12 = 0; c5_i12 < 2; c5_i12++) {
          c5_new_point[c5_i12] = c5_g_a * c5_step_right[c5_i12];
        }

        for (c5_i15 = 0; c5_i15 < 2; c5_i15++) {
          c5_new_point[c5_i15] += 60.0 + 20.0 * (real_T)c5_i15;
        }

        for (c5_d_k = 0; c5_d_k < 2; c5_d_k++) {
          c5_g_k = c5_d_k;
          c5_e_x = c5_new_point[c5_g_k];
          c5_f_x = c5_e_x;
          c5_f_x = muDoubleScalarRound(c5_f_x);
          c5_new_point[c5_g_k] = c5_f_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 10,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 10U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 11,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              11U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 12,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 12U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 13,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              13U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_h_emlrtDCI, &c5_st);
          }

          c5_i29 = (int32_T)c5_new_point[0];
          if ((c5_i29 < 1) || (c5_i29 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i29, 1, 120, &c5_j_emlrtBCI, &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_i_emlrtDCI, &c5_st);
          }

          c5_i37 = (int32_T)c5_new_point[1];
          if ((c5_i37 < 1) || (c5_i37 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i37, 1, 160, &c5_k_emlrtBCI, &c5_st);
          }

          c5_d2 = (real_T)c5_mask[(c5_i29 + 120 * (c5_i37 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 14,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 14U,
                                c5_d2, 1.0, -1, 0U, c5_d2 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 2, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 5, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_x_emlrtDCI, &c5_st);
            }

            c5_i52 = (int32_T)c5_new_point[0];
            if ((c5_i52 < 1) || (c5_i52 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i52, 1, 120, &c5_ab_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_y_emlrtDCI, &c5_st);
            }

            c5_i61 = (int32_T)c5_new_point[1];
            if ((c5_i61 < 1) || (c5_i61 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i61, 1, 160, &c5_bb_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i52 + 120 * (c5_i61 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_cb_emlrtDCI, &c5_st);
            }

            c5_i74 = (int32_T)c5_new_point[0];
            if ((c5_i74 < 1) || (c5_i74 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i74, 1, 120, &c5_eb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_db_emlrtDCI, &c5_st);
            }

            c5_i84 = (int32_T)c5_new_point[1];
            if ((c5_i84 < 1) || (c5_i84 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i84, 1, 160, &c5_fb_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i74 + 120 * (c5_i84 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_ib_emlrtDCI, &c5_st);
            }

            c5_i95 = (int32_T)c5_new_point[0];
            if ((c5_i95 < 1) || (c5_i95 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i95, 1, 120, &c5_kb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_jb_emlrtDCI, &c5_st);
            }

            c5_i104 = (int32_T)c5_new_point[1];
            if ((c5_i104 < 1) || (c5_i104 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i104, 1, 160, &c5_lb_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i95 + 120 * (c5_i104 - 1)) - 1] = 0U;
            c5_b_len_right++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 2, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 5, false);
          c5_continue_right = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 6,
                         c5_continue_left_or)) {
        c5_h_a = c5_c_i;
        for (c5_i14 = 0; c5_i14 < 2; c5_i14++) {
          c5_new_point[c5_i14] = c5_h_a * (0.0 - (real_T)c5_i14);
        }

        for (c5_i18 = 0; c5_i18 < 2; c5_i18++) {
          c5_new_point[c5_i18] += 60.0 + 20.0 * (real_T)c5_i18;
        }

        for (c5_f_k = 0; c5_f_k < 2; c5_f_k++) {
          c5_i_k = c5_f_k;
          c5_g_x = c5_new_point[c5_i_k];
          c5_h_x = c5_g_x;
          c5_h_x = muDoubleScalarRound(c5_h_x);
          c5_new_point[c5_i_k] = c5_h_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 15,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 15U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 16,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              16U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 17,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 17U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 18,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              18U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_n_emlrtDCI, &c5_st);
          }

          c5_i33 = (int32_T)c5_new_point[0];
          if ((c5_i33 < 1) || (c5_i33 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i33, 1, 120, &c5_p_emlrtBCI, &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_o_emlrtDCI, &c5_st);
          }

          c5_i39 = (int32_T)c5_new_point[1];
          if ((c5_i39 < 1) || (c5_i39 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i39, 1, 160, &c5_q_emlrtBCI, &c5_st);
          }

          c5_d3 = (real_T)c5_mask[(c5_i33 + 120 * (c5_i39 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 19,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 19U,
                                c5_d3, 1.0, -1, 0U, c5_d3 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 3, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 7, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_gb_emlrtDCI, &c5_st);
            }

            c5_i56 = (int32_T)c5_new_point[0];
            if ((c5_i56 < 1) || (c5_i56 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i56, 1, 120, &c5_ib_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_hb_emlrtDCI, &c5_st);
            }

            c5_i64 = (int32_T)c5_new_point[1];
            if ((c5_i64 < 1) || (c5_i64 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i64, 1, 160, &c5_jb_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i56 + 120 * (c5_i64 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_kb_emlrtDCI, &c5_st);
            }

            c5_i78 = (int32_T)c5_new_point[0];
            if ((c5_i78 < 1) || (c5_i78 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i78, 1, 120, &c5_mb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_lb_emlrtDCI, &c5_st);
            }

            c5_i87 = (int32_T)c5_new_point[1];
            if ((c5_i87 < 1) || (c5_i87 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i87, 1, 160, &c5_nb_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i78 + 120 * (c5_i87 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_qb_emlrtDCI, &c5_st);
            }

            c5_i99 = (int32_T)c5_new_point[0];
            if ((c5_i99 < 1) || (c5_i99 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i99, 1, 120, &c5_sb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_rb_emlrtDCI, &c5_st);
            }

            c5_i106 = (int32_T)c5_new_point[1];
            if ((c5_i106 < 1) || (c5_i106 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i106, 1, 160, &c5_tb_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i99 + 120 * (c5_i106 - 1)) - 1] = 0U;
            c5_b_len_left_or++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 3, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 7, false);
          c5_continue_left_or = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 8,
                         c5_continue_right_or)) {
        c5_j_a = c5_c_i;
        for (c5_i17 = 0; c5_i17 < 2; c5_i17++) {
          c5_new_point[c5_i17] = c5_j_a * (real_T)c5_i17;
        }

        for (c5_i21 = 0; c5_i21 < 2; c5_i21++) {
          c5_new_point[c5_i21] += 60.0 + 20.0 * (real_T)c5_i21;
        }

        for (c5_h_k = 0; c5_h_k < 2; c5_h_k++) {
          c5_k_k = c5_h_k;
          c5_i_x = c5_new_point[c5_k_k];
          c5_j_x = c5_i_x;
          c5_j_x = muDoubleScalarRound(c5_j_x);
          c5_new_point[c5_k_k] = c5_j_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 20,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 20U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 21,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              21U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 22,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 22U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 23,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              23U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_v_emlrtDCI, &c5_st);
          }

          c5_i35 = (int32_T)c5_new_point[0];
          if ((c5_i35 < 1) || (c5_i35 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i35, 1, 120, &c5_x_emlrtBCI, &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_w_emlrtDCI, &c5_st);
          }

          c5_i42 = (int32_T)c5_new_point[1];
          if ((c5_i42 < 1) || (c5_i42 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i42, 1, 160, &c5_y_emlrtBCI, &c5_st);
          }

          c5_d4 = (real_T)c5_mask[(c5_i35 + 120 * (c5_i42 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 24,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 24U,
                                c5_d4, 1.0, -1, 0U, c5_d4 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 4, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 9, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_ob_emlrtDCI, &c5_st);
            }

            c5_i59 = (int32_T)c5_new_point[0];
            if ((c5_i59 < 1) || (c5_i59 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i59, 1, 120, &c5_qb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_pb_emlrtDCI, &c5_st);
            }

            c5_i69 = (int32_T)c5_new_point[1];
            if ((c5_i69 < 1) || (c5_i69 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i69, 1, 160, &c5_rb_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i59 + 120 * (c5_i69 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_sb_emlrtDCI, &c5_st);
            }

            c5_i83 = (int32_T)c5_new_point[0];
            if ((c5_i83 < 1) || (c5_i83 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i83, 1, 120, &c5_ub_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_tb_emlrtDCI, &c5_st);
            }

            c5_i91 = (int32_T)c5_new_point[1];
            if ((c5_i91 < 1) || (c5_i91 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i91, 1, 160, &c5_vb_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i83 + 120 * (c5_i91 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_yb_emlrtDCI, &c5_st);
            }

            c5_i103 = (int32_T)c5_new_point[0];
            if ((c5_i103 < 1) || (c5_i103 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i103, 1, 120, &c5_bc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_ac_emlrtDCI, &c5_st);
            }

            c5_i109 = (int32_T)c5_new_point[1];
            if ((c5_i109 < 1) || (c5_i109 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i109, 1, 160, &c5_cc_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i103 + 120 * (c5_i109 - 1)) - 1] = 0U;
            c5_b_len_right_or++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 4, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 9, false);
          c5_continue_right_or = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 10,
                         c5_continue_back_center)) {
        c5_l_a = c5_c_i;
        for (c5_i20 = 0; c5_i20 < 2; c5_i20++) {
          c5_new_point[c5_i20] = c5_l_a * (1.0 - (real_T)c5_i20);
        }

        for (c5_i24 = 0; c5_i24 < 2; c5_i24++) {
          c5_new_point[c5_i24] += 60.0 + 20.0 * (real_T)c5_i24;
        }

        for (c5_j_k = 0; c5_j_k < 2; c5_j_k++) {
          c5_m_k = c5_j_k;
          c5_k_x = c5_new_point[c5_m_k];
          c5_l_x = c5_k_x;
          c5_l_x = muDoubleScalarRound(c5_l_x);
          c5_new_point[c5_m_k] = c5_l_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 25,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 25U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 26,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              26U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 27,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 27U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 28,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              28U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_eb_emlrtDCI, &c5_st);
          }

          c5_i38 = (int32_T)c5_new_point[0];
          if ((c5_i38 < 1) || (c5_i38 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i38, 1, 120, &c5_gb_emlrtBCI,
              &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_fb_emlrtDCI, &c5_st);
          }

          c5_i47 = (int32_T)c5_new_point[1];
          if ((c5_i47 < 1) || (c5_i47 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i47, 1, 160, &c5_hb_emlrtBCI,
              &c5_st);
          }

          c5_d5 = (real_T)c5_mask[(c5_i38 + 120 * (c5_i47 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 29,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 29U,
                                c5_d5, 1.0, -1, 0U, c5_d5 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 5, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 11, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_wb_emlrtDCI, &c5_st);
            }

            c5_i63 = (int32_T)c5_new_point[0];
            if ((c5_i63 < 1) || (c5_i63 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i63, 1, 120, &c5_yb_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_xb_emlrtDCI, &c5_st);
            }

            c5_i73 = (int32_T)c5_new_point[1];
            if ((c5_i73 < 1) || (c5_i73 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i73, 1, 160, &c5_ac_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i63 + 120 * (c5_i73 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_bc_emlrtDCI, &c5_st);
            }

            c5_i85 = (int32_T)c5_new_point[0];
            if ((c5_i85 < 1) || (c5_i85 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i85, 1, 120, &c5_dc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_cc_emlrtDCI, &c5_st);
            }

            c5_i94 = (int32_T)c5_new_point[1];
            if ((c5_i94 < 1) || (c5_i94 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i94, 1, 160, &c5_ec_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i85 + 120 * (c5_i94 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_fc_emlrtDCI, &c5_st);
            }

            c5_i105 = (int32_T)c5_new_point[0];
            if ((c5_i105 < 1) || (c5_i105 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i105, 1, 120, &c5_hc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_gc_emlrtDCI, &c5_st);
            }

            c5_i112 = (int32_T)c5_new_point[1];
            if ((c5_i112 < 1) || (c5_i112 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i112, 1, 160, &c5_ic_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i105 + 120 * (c5_i112 - 1)) - 1] = 0U;
            c5_b_len_back_center++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 5, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 11, false);
          c5_continue_back_center = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 12,
                         c5_continue_back_left)) {
        c5_m_a = c5_c_i;
        for (c5_i23 = 0; c5_i23 < 2; c5_i23++) {
          c5_new_point[c5_i23] = c5_m_a * c5_step_back_left[c5_i23];
        }

        for (c5_i28 = 0; c5_i28 < 2; c5_i28++) {
          c5_new_point[c5_i28] += 60.0 + 20.0 * (real_T)c5_i28;
        }

        for (c5_l_k = 0; c5_l_k < 2; c5_l_k++) {
          c5_o_k = c5_l_k;
          c5_m_x = c5_new_point[c5_o_k];
          c5_n_x = c5_m_x;
          c5_n_x = muDoubleScalarRound(c5_n_x);
          c5_new_point[c5_o_k] = c5_n_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 30,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 30U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 31,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              31U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 32,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 32U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 33,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              33U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_mb_emlrtDCI, &c5_st);
          }

          c5_i41 = (int32_T)c5_new_point[0];
          if ((c5_i41 < 1) || (c5_i41 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i41, 1, 120, &c5_ob_emlrtBCI,
              &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_nb_emlrtDCI, &c5_st);
          }

          c5_i50 = (int32_T)c5_new_point[1];
          if ((c5_i50 < 1) || (c5_i50 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i50, 1, 160, &c5_pb_emlrtBCI,
              &c5_st);
          }

          c5_d6 = (real_T)c5_mask[(c5_i41 + 120 * (c5_i50 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 34,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 34U,
                                c5_d6, 1.0, -1, 0U, c5_d6 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 6, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 13, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_dc_emlrtDCI, &c5_st);
            }

            c5_i67 = (int32_T)c5_new_point[0];
            if ((c5_i67 < 1) || (c5_i67 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i67, 1, 120, &c5_fc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_ec_emlrtDCI, &c5_st);
            }

            c5_i77 = (int32_T)c5_new_point[1];
            if ((c5_i77 < 1) || (c5_i77 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i77, 1, 160, &c5_gc_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i67 + 120 * (c5_i77 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_hc_emlrtDCI, &c5_st);
            }

            c5_i89 = (int32_T)c5_new_point[0];
            if ((c5_i89 < 1) || (c5_i89 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i89, 1, 120, &c5_jc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_ic_emlrtDCI, &c5_st);
            }

            c5_i98 = (int32_T)c5_new_point[1];
            if ((c5_i98 < 1) || (c5_i98 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i98, 1, 160, &c5_kc_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i89 + 120 * (c5_i98 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_lc_emlrtDCI, &c5_st);
            }

            c5_i108 = (int32_T)c5_new_point[0];
            if ((c5_i108 < 1) || (c5_i108 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i108, 1, 120, &c5_nc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_mc_emlrtDCI, &c5_st);
            }

            c5_i113 = (int32_T)c5_new_point[1];
            if ((c5_i113 < 1) || (c5_i113 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i113, 1, 160, &c5_oc_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i108 + 120 * (c5_i113 - 1)) - 1] = 0U;
            c5_b_len_back_left++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 6, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 13, false);
          c5_continue_back_left = false;
        }
      }

      if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 14,
                         c5_continue_back_right)) {
        c5_o_a = c5_c_i;
        for (c5_i27 = 0; c5_i27 < 2; c5_i27++) {
          c5_new_point[c5_i27] = c5_o_a * (0.86602540378443871 +
            -0.36602540378443876 * (real_T)c5_i27);
        }

        for (c5_i32 = 0; c5_i32 < 2; c5_i32++) {
          c5_new_point[c5_i32] += 60.0 + 20.0 * (real_T)c5_i32;
        }

        for (c5_n_k = 0; c5_n_k < 2; c5_n_k++) {
          c5_p_k = c5_n_k;
          c5_o_x = c5_new_point[c5_p_k];
          c5_p_x = c5_o_x;
          c5_p_x = muDoubleScalarRound(c5_p_x);
          c5_new_point[c5_p_k] = c5_p_x;
        }

        c5_guard1 = false;
        if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 35,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 35U,
                              c5_new_point[0], 0.0, -1, 4U, c5_new_point[0] >
                              0.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 36,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              36U, c5_new_point[1], 0.0, -1, 4U, c5_new_point[1] > 0.0)) &&
            covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 37,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c5_covrtInstance, 4U, 0U, 37U,
                              c5_new_point[0], 120.0, -1, 3U, c5_new_point[0] <=
                              120.0)) && covrtEmlCondEval
            (chartInstance->c5_covrtInstance, 4U, 0, 38,
             covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
              38U, c5_new_point[1], 160.0, -1, 3U, c5_new_point[1] <= 160.0))) {
          if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[0])) {
            emlrtIntegerCheckR2012b(c5_new_point[0], &c5_ub_emlrtDCI, &c5_st);
          }

          c5_i44 = (int32_T)c5_new_point[0];
          if ((c5_i44 < 1) || (c5_i44 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c5_i44, 1, 120, &c5_wb_emlrtBCI,
              &c5_st);
          }

          if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
              (c5_new_point[1])) {
            emlrtIntegerCheckR2012b(c5_new_point[1], &c5_vb_emlrtDCI, &c5_st);
          }

          c5_i53 = (int32_T)c5_new_point[1];
          if ((c5_i53 < 1) || (c5_i53 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i53, 1, 160, &c5_xb_emlrtBCI,
              &c5_st);
          }

          c5_d7 = (real_T)c5_mask[(c5_i44 + 120 * (c5_i53 - 1)) - 1];
          if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 39,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c5_covrtInstance, 4U, 0U, 39U,
                                c5_d7, 1.0, -1, 0U, c5_d7 == 1.0))) {
            covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 7, true);
            covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 15, true);
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_jc_emlrtDCI, &c5_st);
            }

            c5_i71 = (int32_T)c5_new_point[0];
            if ((c5_i71 < 1) || (c5_i71 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i71, 1, 120, &c5_lc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_kc_emlrtDCI, &c5_st);
            }

            c5_i82 = (int32_T)c5_new_point[1];
            if ((c5_i82 < 1) || (c5_i82 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i82, 1, 160, &c5_mc_emlrtBCI,
                &c5_st);
            }

            c5_b_R[(c5_i71 + 120 * (c5_i82 - 1)) - 1] = 0U;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_nc_emlrtDCI, &c5_st);
            }

            c5_i93 = (int32_T)c5_new_point[0];
            if ((c5_i93 < 1) || (c5_i93 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i93, 1, 120, &c5_pc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_oc_emlrtDCI, &c5_st);
            }

            c5_i102 = (int32_T)c5_new_point[1];
            if ((c5_i102 < 1) || (c5_i102 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i102, 1, 160, &c5_qc_emlrtBCI,
                &c5_st);
            }

            c5_b_G[(c5_i93 + 120 * (c5_i102 - 1)) - 1] = MAX_uint8_T;
            if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[0])) {
              emlrtIntegerCheckR2012b(c5_new_point[0], &c5_pc_emlrtDCI, &c5_st);
            }

            c5_i110 = (int32_T)c5_new_point[0];
            if ((c5_i110 < 1) || (c5_i110 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c5_i110, 1, 120, &c5_rc_emlrtBCI,
                &c5_st);
            }

            if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
                (c5_new_point[1])) {
              emlrtIntegerCheckR2012b(c5_new_point[1], &c5_qc_emlrtDCI, &c5_st);
            }

            c5_i115 = (int32_T)c5_new_point[1];
            if ((c5_i115 < 1) || (c5_i115 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i115, 1, 160, &c5_sc_emlrtBCI,
                &c5_st);
            }

            c5_b_B[(c5_i110 + 120 * (c5_i115 - 1)) - 1] = 0U;
            c5_b_len_back_right++;
          } else {
            c5_guard1 = true;
          }
        } else {
          c5_guard1 = true;
        }

        if (c5_guard1) {
          covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 7, false);
          covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 15, false);
          c5_continue_back_right = false;
        }
      }

      if ((!covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 40,
                             c5_continue_center)) && (!covrtEmlCondEval
           (chartInstance->c5_covrtInstance, 4U, 0, 41, c5_continue_left)) &&
          (!covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 42,
                             c5_continue_right)) && (!covrtEmlCondEval
           (chartInstance->c5_covrtInstance, 4U, 0, 43, c5_continue_left_or)) &&
          (!covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 44,
                             c5_continue_right_or)) && (!covrtEmlCondEval
           (chartInstance->c5_covrtInstance, 4U, 0, 45, c5_continue_back_center))
          && (!covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 46,
            c5_continue_back_left)) && (!covrtEmlCondEval
           (chartInstance->c5_covrtInstance, 4U, 0, 47, c5_continue_back_right)))
      {
        covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 8, true);
        covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 16, true);
        c5_exitg1 = 1;
      } else {
        covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 8, false);
        covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 16, false);
        c5_b_i++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }
    } else {
      covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 0, 0);
      c5_exitg1 = 1;
    }
  } while (c5_exitg1 == 0);

  c5_emxInit_real_T(chartInstance, &c5_st, &c5_edge_points, 2, &c5_h_emlrtRTEI);
  c5_edge_points->size[0] = 0;
  c5_edge_points->size[1] = 2;
  c5_f_a = c5_b_len_center;
  for (c5_i11 = 0; c5_i11 < 2; c5_i11++) {
    c5_new_point[c5_i11] = c5_f_a * (-1.0 + (real_T)c5_i11);
  }

  c5_i_a = c5_b_len_left;
  for (c5_i16 = 0; c5_i16 < 2; c5_i16++) {
    c5_end_point[c5_i16] = c5_i_a * (-0.86602540378443871 + 0.36602540378443876 *
      (real_T)c5_i16);
  }

  c5_k_a = c5_b_len_right;
  for (c5_i19 = 0; c5_i19 < 2; c5_i19++) {
    c5_y[c5_i19] = c5_k_a * c5_step_right[c5_i19];
  }

  c5_n_a = c5_b_len_left_or;
  for (c5_i26 = 0; c5_i26 < 2; c5_i26++) {
    c5_b_y[c5_i26] = c5_n_a * (0.0 - (real_T)c5_i26);
  }

  c5_p_a = c5_b_len_right_or;
  for (c5_i31 = 0; c5_i31 < 2; c5_i31++) {
    c5_c_y[c5_i31] = c5_p_a * (real_T)c5_i31;
  }

  c5_q_a = c5_b_len_back_left;
  for (c5_i36 = 0; c5_i36 < 2; c5_i36++) {
    c5_d_y[c5_i36] = c5_q_a * c5_step_back_left[c5_i36];
  }

  c5_r_a = c5_b_len_back_right;
  for (c5_i40 = 0; c5_i40 < 2; c5_i40++) {
    c5_e_y[c5_i40] = c5_r_a * (0.86602540378443871 + -0.36602540378443876 *
      (real_T)c5_i40);
  }

  c5_i43 = 0;
  for (c5_i46 = 0; c5_i46 < 2; c5_i46++) {
    c5_endpoints[c5_i43] = (60.0 + 20.0 * (real_T)c5_i46) + c5_new_point[c5_i46];
    c5_i43 += 7;
  }

  c5_i49 = 0;
  for (c5_i51 = 0; c5_i51 < 2; c5_i51++) {
    c5_endpoints[c5_i49 + 1] = (60.0 + 20.0 * (real_T)c5_i51) +
      c5_end_point[c5_i51];
    c5_i49 += 7;
  }

  c5_i55 = 0;
  for (c5_i57 = 0; c5_i57 < 2; c5_i57++) {
    c5_endpoints[c5_i55 + 2] = (60.0 + 20.0 * (real_T)c5_i57) + c5_y[c5_i57];
    c5_i55 += 7;
  }

  c5_i60 = 0;
  for (c5_i62 = 0; c5_i62 < 2; c5_i62++) {
    c5_endpoints[c5_i60 + 3] = (60.0 + 20.0 * (real_T)c5_i62) + c5_b_y[c5_i62];
    c5_i60 += 7;
  }

  c5_i66 = 0;
  for (c5_i68 = 0; c5_i68 < 2; c5_i68++) {
    c5_endpoints[c5_i66 + 4] = (60.0 + 20.0 * (real_T)c5_i68) + c5_c_y[c5_i68];
    c5_i66 += 7;
  }

  c5_i72 = 0;
  for (c5_i75 = 0; c5_i75 < 2; c5_i75++) {
    c5_endpoints[c5_i72 + 5] = (60.0 + 20.0 * (real_T)c5_i75) + c5_d_y[c5_i75];
    c5_i72 += 7;
  }

  c5_i79 = 0;
  for (c5_i81 = 0; c5_i81 < 2; c5_i81++) {
    c5_endpoints[c5_i79 + 6] = (60.0 + 20.0 * (real_T)c5_i81) + c5_e_y[c5_i81];
    c5_i79 += 7;
  }

  c5_b_st.site = &c5_yb_emlrtRSI;
  for (c5_i86 = 0; c5_i86 < 7; c5_i86++) {
    c5_ndx[c5_i86] = c5_endpoints[c5_i86];
  }

  for (c5_i90 = 0; c5_i90 < 7; c5_i90++) {
    c5_varargin_2[c5_i90] = c5_endpoints[c5_i90 + 7];
  }

  c5_c_st.site = &c5_emlrtRSI;
  c5_sub2ind(chartInstance, &c5_c_st, c5_ndx, c5_varargin_2, c5_iv);
  for (c5_i97 = 0; c5_i97 < 7; c5_i97++) {
    c5_ndx[c5_i97] = (real_T)c5_iv[c5_i97];
  }

  for (c5_i101 = 0; c5_i101 < 7; c5_i101++) {
    if (c5_ndx[c5_i101] != (real_T)(int32_T)muDoubleScalarFloor(c5_ndx[c5_i101]))
    {
      emlrtIntegerCheckR2012b(c5_ndx[c5_i101], &c5_rc_emlrtDCI, &c5_st);
    }

    c5_i107 = (int32_T)c5_ndx[c5_i101];
    if ((c5_i107 < 1) || (c5_i107 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c5_i107, 1, 19200, &c5_tc_emlrtBCI, &c5_st);
    }

    c5_is_edge[c5_i101] = !c5_mask[c5_i107 - 1];
  }

  c5_b_st.site = &c5_ac_emlrtRSI;
  c5_c_st.site = &c5_b_emlrtRSI;
  c5_eml_find(chartInstance, c5_is_edge, c5_ii_data, c5_ii_size);
  c5_edge_indices_size[0] = c5_ii_size[0];
  c5_loop_ub = c5_ii_size[0] - 1;
  for (c5_i111 = 0; c5_i111 <= c5_loop_ub; c5_i111++) {
    c5_edge_indices_data[c5_i111] = (real_T)c5_ii_data[c5_i111];
  }

  c5_num_indices = (real_T)c5_edge_indices_size[0];
  c5_b_num_indices = c5_num_indices;
  c5_i114 = (int32_T)c5_b_num_indices;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c5_b_num_indices, mxDOUBLE_CLASS,
    c5_i114, &c5_ib_emlrtRTEI, &c5_st);
  c5_emxInit_real_T(chartInstance, &c5_st, &c5_b_edge_points, 2, &c5_d_emlrtRTEI);
  for (c5_d_i = 0; c5_d_i < c5_i114; c5_d_i++) {
    c5_c_i = 1.0 + (real_T)c5_d_i;
    covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 1, 1);
    if (c5_c_i != (real_T)(int32_T)muDoubleScalarFloor(c5_c_i)) {
      emlrtIntegerCheckR2012b(c5_c_i, &c5_sc_emlrtDCI, &c5_st);
    }

    c5_i116 = (int32_T)c5_c_i;
    if ((c5_i116 < 1) || (c5_i116 > c5_edge_indices_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c5_i116, 1, c5_edge_indices_size[0],
        &c5_uc_emlrtBCI, &c5_st);
    }

    c5_idx = c5_edge_indices_data[c5_i116 - 1];
    if (c5_idx != (real_T)(int32_T)muDoubleScalarFloor(c5_idx)) {
      emlrtIntegerCheckR2012b(c5_idx, &c5_emlrtDCI, &c5_st);
    }

    c5_i121 = (int32_T)c5_idx;
    if ((c5_i121 < 1) || (c5_i121 > 7)) {
      emlrtDynamicBoundsCheckR2012b(c5_i121, 1, 7, &c5_emlrtBCI, &c5_st);
    }

    c5_b_idx = c5_i121 - 1;
    for (c5_i124 = 0; c5_i124 < 2; c5_i124++) {
      c5_new_point[c5_i124] = c5_endpoints[c5_b_idx + 7 * c5_i124];
    }

    c5_continue_trace = true;
    c5_exitg2 = false;
    while ((!c5_exitg2) && covrtEmlWhileEval(chartInstance->c5_covrtInstance, 4U,
            0, 0, c5_continue_trace)) {
      if (c5_idx != (real_T)(int32_T)muDoubleScalarFloor(c5_idx)) {
        emlrtIntegerCheckR2012b(c5_idx, &c5_b_emlrtDCI, &c5_st);
      }

      c5_i127 = (int32_T)c5_idx;
      if ((c5_i127 < 1) || (c5_i127 > 7)) {
        emlrtDynamicBoundsCheckR2012b(c5_i127, 1, 7, &c5_b_emlrtBCI, &c5_st);
      }

      c5_c_idx = c5_i127 - 1;
      for (c5_i130 = 0; c5_i130 < 2; c5_i130++) {
        c5_new_point[c5_i130] += c5_directions[c5_c_idx + 7 * c5_i130];
      }

      for (c5_s_k = 0; c5_s_k < 2; c5_s_k++) {
        c5_t_k = c5_s_k;
        c5_q_x = c5_new_point[c5_t_k];
        c5_r_x = c5_q_x;
        c5_r_x = muDoubleScalarRound(c5_r_x);
        c5_new_point[c5_t_k] = c5_r_x;
      }

      if (covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 48,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c5_covrtInstance, 4U, 0U, 40U,
                            c5_new_point[0], 0.0, -1, 3U, c5_new_point[0] <= 0.0))
          || covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 49,
                              covrtRelationalopUpdateFcn
                              (chartInstance->c5_covrtInstance, 4U, 0U, 41U,
            c5_new_point[1], 0.0, -1, 3U, c5_new_point[1] <= 0.0)) ||
          covrtEmlCondEval(chartInstance->c5_covrtInstance, 4U, 0, 50,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c5_covrtInstance, 4U, 0U, 42U,
                            c5_new_point[0], 120.0, -1, 4U, c5_new_point[0] >
                            120.0)) || covrtEmlCondEval
          (chartInstance->c5_covrtInstance, 4U, 0, 51,
           covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance, 4U, 0U,
            43U, c5_new_point[1], 160.0, -1, 4U, c5_new_point[1] > 160.0))) {
        covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 9, true);
        covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 17, true);
        c5_continue_trace = false;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      } else {
        covrtEmlMcdcEval(chartInstance->c5_covrtInstance, 4U, 0, 9, false);
        covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 17, false);
        if (c5_new_point[0] != (real_T)(int32_T)muDoubleScalarFloor
            (c5_new_point[0])) {
          emlrtIntegerCheckR2012b(c5_new_point[0], &c5_uc_emlrtDCI, &c5_st);
        }

        c5_i134 = (int32_T)c5_new_point[0];
        if ((c5_i134 < 1) || (c5_i134 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c5_i134, 1, 120, &c5_wc_emlrtBCI, &c5_st);
        }

        if (c5_new_point[1] != (real_T)(int32_T)muDoubleScalarFloor
            (c5_new_point[1])) {
          emlrtIntegerCheckR2012b(c5_new_point[1], &c5_vc_emlrtDCI, &c5_st);
        }

        c5_i141 = (int32_T)c5_new_point[1];
        if ((c5_i141 < 1) || (c5_i141 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c5_i141, 1, 160, &c5_xc_emlrtBCI, &c5_st);
        }

        c5_d9 = (real_T)c5_mask[(c5_i134 + 120 * (c5_i141 - 1)) - 1];
        if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 18,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c5_covrtInstance, 4U, 0U, 44U, c5_d9,
                            0.0, -1, 0U, c5_d9 == 0.0))) {
          c5_i145 = c5_b_edge_points->size[0] * c5_b_edge_points->size[1];
          c5_b_edge_points->size[0] = c5_edge_points->size[0] + 1;
          c5_b_edge_points->size[1] = 2;
          c5_emxEnsureCapacity_real_T1(chartInstance, &c5_st, c5_b_edge_points,
            c5_i145, &c5_d_emlrtRTEI);
          for (c5_i151 = 0; c5_i151 < 2; c5_i151++) {
            c5_g_loop_ub = c5_edge_points->size[0] - 1;
            for (c5_i156 = 0; c5_i156 <= c5_g_loop_ub; c5_i156++) {
              c5_b_edge_points->data[c5_i156 + c5_b_edge_points->size[0] *
                c5_i151] = c5_edge_points->data[c5_i156 + c5_edge_points->size[0]
                * c5_i151];
            }
          }

          for (c5_i154 = 0; c5_i154 < 2; c5_i154++) {
            c5_b_edge_points->data[c5_edge_points->size[0] +
              c5_b_edge_points->size[0] * c5_i154] = c5_new_point[c5_i154];
          }

          c5_i158 = c5_edge_points->size[0] * c5_edge_points->size[1];
          c5_edge_points->size[0] = c5_b_edge_points->size[0];
          c5_edge_points->size[1] = 2;
          c5_emxEnsureCapacity_real_T1(chartInstance, &c5_st, c5_edge_points,
            c5_i158, &c5_e_emlrtRTEI);
          c5_i_loop_ub = (c5_b_edge_points->size[0] << 1) - 1;
          for (c5_i163 = 0; c5_i163 <= c5_i_loop_ub; c5_i163++) {
            c5_edge_points->data[c5_i163] = c5_b_edge_points->data[c5_i163];
          }

          c5_exitg2 = true;
        } else {
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }
      }
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c5_emxFree_real_T(chartInstance, &c5_b_edge_points);
  covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 1, 0);
  if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 19,
                     covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance,
        4U, 0U, 45U, (real_T)c5_edge_points->size[0], 2.0, -1, 5U, (real_T)
        c5_edge_points->size[0] >= 2.0))) {
    c5_b_st.site = &c5_bc_emlrtRSI;
    c5_b_sortrows(chartInstance, &c5_b_st, c5_edge_points);
    c5_i117 = c5_edge_points->size[0];
    c5_i118 = 1;
    if ((c5_i118 < 1) || (c5_i118 > c5_i117)) {
      emlrtDynamicBoundsCheckR2012b(c5_i118, 1, c5_i117, &c5_c_emlrtBCI, &c5_st);
    }

    c5_i119 = c5_i118 - 1;
    for (c5_i120 = 0; c5_i120 < 2; c5_i120++) {
      c5_new_point[c5_i120] = c5_edge_points->data[c5_i119 +
        c5_edge_points->size[0] * c5_i120];
    }

    c5_i122 = c5_edge_points->size[0];
    if (c5_i122 < 0) {
      emlrtDynamicBoundsCheckR2012b(c5_i122, 0, MAX_int32_T, &c5_d_emlrtBCI,
        &c5_st);
    }

    c5_d8 = (real_T)c5_i122;
    if (c5_d8 != (real_T)(int32_T)muDoubleScalarFloor(c5_d8)) {
      emlrtIntegerCheckR2012b(c5_d8, &c5_c_emlrtDCI, &c5_st);
    }

    c5_i125 = c5_edge_points->size[0];
    c5_i126 = (int32_T)c5_d8;
    if ((c5_i126 < 1) || (c5_i126 > c5_i125)) {
      emlrtDynamicBoundsCheckR2012b(c5_i126, 1, c5_i125, &c5_e_emlrtBCI, &c5_st);
    }

    c5_c_edge_points = c5_i126 - 1;
    for (c5_i129 = 0; c5_i129 < 2; c5_i129++) {
      c5_end_point[c5_i129] = c5_edge_points->data[c5_c_edge_points +
        c5_edge_points->size[0] * c5_i129];
    }

    c5_emxInit_real_T1(chartInstance, &c5_st, &c5_x_line, 1, &c5_i_emlrtRTEI);
    c5_emxInit_real_T1(chartInstance, &c5_st, &c5_y_line, 1, &c5_j_emlrtRTEI);
    c5_b_st.site = &c5_cc_emlrtRSI;
    c5_ddaLine(chartInstance, &c5_b_st, c5_new_point[0], c5_new_point[1],
               c5_end_point[0], c5_end_point[1], c5_x_line, c5_y_line);
    c5_emxInit_real_T1(chartInstance, &c5_st, &c5_b_ndx, 1, &c5_c_emlrtRTEI);
    c5_b_st.site = &c5_dc_emlrtRSI;
    c5_emxInit_int32_T(chartInstance, &c5_b_st, &c5_r3, 1, &c5_l_emlrtRTEI);
    c5_c_st.site = &c5_emlrtRSI;
    c5_b_sub2ind(chartInstance, &c5_c_st, c5_x_line, c5_y_line, c5_r3);
    c5_i133 = c5_b_ndx->size[0];
    c5_b_ndx->size[0] = c5_r3->size[0];
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_b_st, c5_b_ndx, c5_i133,
      &c5_b_emlrtRTEI);
    c5_c_loop_ub = c5_r3->size[0] - 1;
    for (c5_i139 = 0; c5_i139 <= c5_c_loop_ub; c5_i139++) {
      c5_b_ndx->data[c5_i139] = (real_T)c5_r3->data[c5_i139];
    }

    c5_i140 = c5_r3->size[0];
    c5_r3->size[0] = c5_b_ndx->size[0];
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r3, c5_i140,
      &c5_c_emlrtRTEI);
    c5_d_loop_ub = c5_b_ndx->size[0] - 1;
    for (c5_i144 = 0; c5_i144 <= c5_d_loop_ub; c5_i144++) {
      c5_d11 = c5_b_ndx->data[c5_i144];
      if (c5_d11 != (real_T)(int32_T)muDoubleScalarFloor(c5_d11)) {
        emlrtIntegerCheckR2012b(c5_d11, &c5_tc_emlrtDCI, &c5_st);
      }

      c5_i150 = (int32_T)c5_d11;
      if ((c5_i150 < 1) || (c5_i150 > 19200)) {
        emlrtDynamicBoundsCheckR2012b(c5_i150, 1, 19200, &c5_vc_emlrtBCI, &c5_st);
      }

      c5_r3->data[c5_i144] = c5_i150;
    }

    c5_e_loop_ub = c5_r3->size[0] - 1;
    for (c5_i147 = 0; c5_i147 <= c5_e_loop_ub; c5_i147++) {
      c5_b_R[c5_r3->data[c5_i147] - 1] = 0U;
    }

    c5_b_st.site = &c5_ec_emlrtRSI;
    c5_c_st.site = &c5_emlrtRSI;
    c5_b_sub2ind(chartInstance, &c5_c_st, c5_x_line, c5_y_line, c5_r3);
    c5_i155 = c5_b_ndx->size[0];
    c5_b_ndx->size[0] = c5_r3->size[0];
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_b_st, c5_b_ndx, c5_i155,
      &c5_b_emlrtRTEI);
    c5_h_loop_ub = c5_r3->size[0] - 1;
    for (c5_i161 = 0; c5_i161 <= c5_h_loop_ub; c5_i161++) {
      c5_b_ndx->data[c5_i161] = (real_T)c5_r3->data[c5_i161];
    }

    c5_i162 = c5_r3->size[0];
    c5_r3->size[0] = c5_b_ndx->size[0];
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r3, c5_i162,
      &c5_f_emlrtRTEI);
    c5_k_loop_ub = c5_b_ndx->size[0] - 1;
    for (c5_i166 = 0; c5_i166 <= c5_k_loop_ub; c5_i166++) {
      c5_d15 = c5_b_ndx->data[c5_i166];
      if (c5_d15 != (real_T)(int32_T)muDoubleScalarFloor(c5_d15)) {
        emlrtIntegerCheckR2012b(c5_d15, &c5_wc_emlrtDCI, &c5_st);
      }

      c5_i170 = (int32_T)c5_d15;
      if ((c5_i170 < 1) || (c5_i170 > 19200)) {
        emlrtDynamicBoundsCheckR2012b(c5_i170, 1, 19200, &c5_yc_emlrtBCI, &c5_st);
      }

      c5_r3->data[c5_i166] = c5_i170;
    }

    c5_l_loop_ub = c5_r3->size[0] - 1;
    for (c5_i168 = 0; c5_i168 <= c5_l_loop_ub; c5_i168++) {
      c5_b_G[c5_r3->data[c5_i168] - 1] = 0U;
    }

    c5_b_st.site = &c5_fc_emlrtRSI;
    c5_c_st.site = &c5_emlrtRSI;
    c5_b_sub2ind(chartInstance, &c5_c_st, c5_x_line, c5_y_line, c5_r3);
    c5_emxFree_real_T(chartInstance, &c5_y_line);
    c5_emxFree_real_T(chartInstance, &c5_x_line);
    c5_i171 = c5_b_ndx->size[0];
    c5_b_ndx->size[0] = c5_r3->size[0];
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_b_st, c5_b_ndx, c5_i171,
      &c5_b_emlrtRTEI);
    c5_m_loop_ub = c5_r3->size[0] - 1;
    for (c5_i173 = 0; c5_i173 <= c5_m_loop_ub; c5_i173++) {
      c5_b_ndx->data[c5_i173] = (real_T)c5_r3->data[c5_i173];
    }

    c5_i174 = c5_r3->size[0];
    c5_r3->size[0] = c5_b_ndx->size[0];
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r3, c5_i174,
      &c5_g_emlrtRTEI);
    c5_n_loop_ub = c5_b_ndx->size[0] - 1;
    for (c5_i175 = 0; c5_i175 <= c5_n_loop_ub; c5_i175++) {
      c5_d18 = c5_b_ndx->data[c5_i175];
      if (c5_d18 != (real_T)(int32_T)muDoubleScalarFloor(c5_d18)) {
        emlrtIntegerCheckR2012b(c5_d18, &c5_yc_emlrtDCI, &c5_st);
      }

      c5_i177 = (int32_T)c5_d18;
      if ((c5_i177 < 1) || (c5_i177 > 19200)) {
        emlrtDynamicBoundsCheckR2012b(c5_i177, 1, 19200, &c5_cd_emlrtBCI, &c5_st);
      }

      c5_r3->data[c5_i175] = c5_i177;
    }

    c5_emxFree_real_T(chartInstance, &c5_b_ndx);
    c5_o_loop_ub = c5_r3->size[0] - 1;
    for (c5_i176 = 0; c5_i176 <= c5_o_loop_ub; c5_i176++) {
      c5_b_B[c5_r3->data[c5_i176] - 1] = MAX_uint8_T;
    }

    c5_emxFree_int32_T(chartInstance, &c5_r3);
  }

  c5_emxFree_real_T(chartInstance, &c5_edge_points);
  c5_b_st.site = &c5_gc_emlrtRSI;
  c5_edge(chartInstance, &c5_b_st, c5_mask, c5_edges_canny);
  c5_b_st.site = &c5_hc_emlrtRSI;
  c5_bwlabel(chartInstance, &c5_b_st, c5_edges_canny, chartInstance->c5_L,
             &c5_num);
  c5_b_num = c5_num;
  c5_emxInit_real_T(chartInstance, &c5_st, &c5_colormap, 2, &c5_k_emlrtRTEI);
  c5_b_st.site = &c5_ic_emlrtRSI;
  c5_rand(chartInstance, &c5_b_st, c5_b_num, c5_colormap);
  c5_c_num = c5_b_num;
  c5_i123 = (int32_T)c5_c_num;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c5_c_num, mxDOUBLE_CLASS, c5_i123,
    &c5_jb_emlrtRTEI, &c5_st);
  c5_emxInit_int32_T(chartInstance, &c5_st, &c5_r, 1, &c5_m_emlrtRTEI);
  c5_emxInit_int32_T(chartInstance, &c5_st, &c5_r1, 1, &c5_n_emlrtRTEI);
  c5_emxInit_int32_T(chartInstance, &c5_st, &c5_r2, 1, &c5_o_emlrtRTEI);
  for (c5_q_k = 0; c5_q_k < c5_i123; c5_q_k++) {
    c5_r_k = 1.0 + (real_T)c5_q_k;
    covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 2, 1);
    for (c5_i128 = 0; c5_i128 < 19200; c5_i128++) {
      c5_mask[c5_i128] = (chartInstance->c5_L[c5_i128] == c5_r_k);
    }

    c5_end = 19200;
    c5_trueCount = 0;
    for (c5_e_i = 0; c5_e_i < c5_end; c5_e_i++) {
      if (c5_mask[c5_e_i]) {
        c5_trueCount++;
      }
    }

    c5_i131 = c5_r->size[0];
    c5_r->size[0] = c5_trueCount;
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r, c5_i131,
      (emlrtRTEInfo *)NULL);
    c5_partialTrueCount = 0;
    for (c5_f_i = 0; c5_f_i < c5_end; c5_f_i++) {
      if (c5_mask[c5_f_i]) {
        c5_r->data[c5_partialTrueCount] = c5_f_i;
        c5_partialTrueCount++;
      }
    }

    c5_b_loop_ub = c5_r->size[0] - 1;
    for (c5_i136 = 0; c5_i136 <= c5_b_loop_ub; c5_i136++) {
      c5_i138 = c5_colormap->size[0];
      if (c5_r_k != (real_T)(int32_T)muDoubleScalarFloor(c5_r_k)) {
        emlrtIntegerCheckR2012b(c5_r_k, &c5_xc_emlrtDCI, &c5_st);
      }

      c5_i142 = (int32_T)c5_r_k;
      if ((c5_i142 < 1) || (c5_i142 > c5_i138)) {
        emlrtDynamicBoundsCheckR2012b(c5_i142, 1, c5_i138, &c5_ad_emlrtBCI,
          &c5_st);
      }

      c5_d10 = (real_T)c5_r->data[c5_i136];
      if (c5_d10 != (real_T)(int32_T)muDoubleScalarFloor(c5_d10)) {
        emlrtIntegerCheckR2012b(c5_d10, &c5_xc_emlrtDCI, &c5_st);
      }

      c5_i146 = (int32_T)muDoubleScalarFloor(c5_d10);
      if ((c5_i146 < 0) || (c5_i146 > 19199)) {
        emlrtDynamicBoundsCheckR2012b(c5_i146, 0, 19199, &c5_bd_emlrtBCI, &c5_st);
      }

      c5_d12 = muDoubleScalarRound(c5_colormap->data[c5_i142 - 1] * 255.0);
      c5_covSaturation = false;
      if (c5_d12 < 256.0) {
        if (c5_d12 >= 0.0) {
          c5_u = (uint8_T)c5_d12;
        } else {
          c5_covSaturation = true;
          c5_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 8728, 30);
        }
      } else if (c5_d12 >= 256.0) {
        c5_covSaturation = true;
        c5_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 8728, 30);
      } else {
        c5_u = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 0, 0,
        c5_covSaturation);
      c5_b_R[c5_i146] = c5_u;
    }

    c5_b_end = 19200;
    c5_b_trueCount = 0;
    for (c5_g_i = 0; c5_g_i < c5_b_end; c5_g_i++) {
      if (c5_mask[c5_g_i]) {
        c5_b_trueCount++;
      }
    }

    c5_i143 = c5_r1->size[0];
    c5_r1->size[0] = c5_b_trueCount;
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r1, c5_i143,
      (emlrtRTEInfo *)NULL);
    c5_b_partialTrueCount = 0;
    for (c5_h_i = 0; c5_h_i < c5_b_end; c5_h_i++) {
      if (c5_mask[c5_h_i]) {
        c5_r1->data[c5_b_partialTrueCount] = c5_h_i;
        c5_b_partialTrueCount++;
      }
    }

    c5_f_loop_ub = c5_r1->size[0] - 1;
    for (c5_i149 = 0; c5_i149 <= c5_f_loop_ub; c5_i149++) {
      c5_i153 = c5_colormap->size[0];
      if (c5_r_k != (real_T)(int32_T)muDoubleScalarFloor(c5_r_k)) {
        emlrtIntegerCheckR2012b(c5_r_k, &c5_ad_emlrtDCI, &c5_st);
      }

      c5_i159 = (int32_T)c5_r_k;
      if ((c5_i159 < 1) || (c5_i159 > c5_i153)) {
        emlrtDynamicBoundsCheckR2012b(c5_i159, 1, c5_i153, &c5_dd_emlrtBCI,
          &c5_st);
      }

      c5_d13 = (real_T)c5_r1->data[c5_i149];
      if (c5_d13 != (real_T)(int32_T)muDoubleScalarFloor(c5_d13)) {
        emlrtIntegerCheckR2012b(c5_d13, &c5_ad_emlrtDCI, &c5_st);
      }

      c5_i164 = (int32_T)muDoubleScalarFloor(c5_d13);
      if ((c5_i164 < 0) || (c5_i164 > 19199)) {
        emlrtDynamicBoundsCheckR2012b(c5_i164, 0, 19199, &c5_ed_emlrtBCI, &c5_st);
      }

      c5_d14 = muDoubleScalarRound(c5_colormap->data[(c5_i159 +
        c5_colormap->size[0]) - 1] * 255.0);
      c5_b_covSaturation = false;
      if (c5_d14 < 256.0) {
        if (c5_d14 >= 0.0) {
          c5_u1 = (uint8_T)c5_d14;
        } else {
          c5_b_covSaturation = true;
          c5_u1 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 8768, 30);
        }
      } else if (c5_d14 >= 256.0) {
        c5_b_covSaturation = true;
        c5_u1 = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 8768, 30);
      } else {
        c5_u1 = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 1, 0,
        c5_b_covSaturation);
      c5_b_G[c5_i164] = c5_u1;
    }

    c5_c_end = 19200;
    c5_c_trueCount = 0;
    for (c5_i_i = 0; c5_i_i < c5_c_end; c5_i_i++) {
      if (c5_mask[c5_i_i]) {
        c5_c_trueCount++;
      }
    }

    c5_i160 = c5_r2->size[0];
    c5_r2->size[0] = c5_c_trueCount;
    c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_r2, c5_i160,
      (emlrtRTEInfo *)NULL);
    c5_c_partialTrueCount = 0;
    for (c5_j_i = 0; c5_j_i < c5_c_end; c5_j_i++) {
      if (c5_mask[c5_j_i]) {
        c5_r2->data[c5_c_partialTrueCount] = c5_j_i;
        c5_c_partialTrueCount++;
      }
    }

    c5_j_loop_ub = c5_r2->size[0] - 1;
    for (c5_i165 = 0; c5_i165 <= c5_j_loop_ub; c5_i165++) {
      c5_i167 = c5_colormap->size[0];
      if (c5_r_k != (real_T)(int32_T)muDoubleScalarFloor(c5_r_k)) {
        emlrtIntegerCheckR2012b(c5_r_k, &c5_bd_emlrtDCI, &c5_st);
      }

      c5_i169 = (int32_T)c5_r_k;
      if ((c5_i169 < 1) || (c5_i169 > c5_i167)) {
        emlrtDynamicBoundsCheckR2012b(c5_i169, 1, c5_i167, &c5_fd_emlrtBCI,
          &c5_st);
      }

      c5_d16 = (real_T)c5_r2->data[c5_i165];
      if (c5_d16 != (real_T)(int32_T)muDoubleScalarFloor(c5_d16)) {
        emlrtIntegerCheckR2012b(c5_d16, &c5_bd_emlrtDCI, &c5_st);
      }

      c5_i172 = (int32_T)muDoubleScalarFloor(c5_d16);
      if ((c5_i172 < 0) || (c5_i172 > 19199)) {
        emlrtDynamicBoundsCheckR2012b(c5_i172, 0, 19199, &c5_gd_emlrtBCI, &c5_st);
      }

      c5_d17 = muDoubleScalarRound(c5_colormap->data[(c5_i169 +
        (c5_colormap->size[0] << 1)) - 1] * 255.0);
      c5_c_covSaturation = false;
      if (c5_d17 < 256.0) {
        if (c5_d17 >= 0.0) {
          c5_u2 = (uint8_T)c5_d17;
        } else {
          c5_c_covSaturation = true;
          c5_u2 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 8808, 30);
        }
      } else if (c5_d17 >= 256.0) {
        c5_c_covSaturation = true;
        c5_u2 = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 8808, 30);
      } else {
        c5_u2 = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c5_covrtInstance, 4, 0, 2, 0,
        c5_c_covSaturation);
      c5_b_B[c5_i172] = c5_u2;
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c5_emxFree_int32_T(chartInstance, &c5_r2);
  c5_emxFree_int32_T(chartInstance, &c5_r1);
  c5_emxFree_int32_T(chartInstance, &c5_r);
  c5_emxFree_real_T(chartInstance, &c5_colormap);
  covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 2, 0);
  *chartInstance->c5_len_center = c5_b_len_center;
  *chartInstance->c5_len_left = c5_b_len_left;
  *chartInstance->c5_len_right = c5_b_len_right;
  *chartInstance->c5_len_left_or = c5_b_len_left_or;
  *chartInstance->c5_len_right_or = c5_b_len_right_or;
  *chartInstance->c5_len_back_center = c5_b_len_back_center;
  *chartInstance->c5_len_back_left = c5_b_len_back_left;
  *chartInstance->c5_len_back_right = c5_b_len_back_right;
  for (c5_i132 = 0; c5_i132 < 19200; c5_i132++) {
    (*chartInstance->c5_R_out)[c5_i132] = c5_b_R[c5_i132];
  }

  for (c5_i135 = 0; c5_i135 < 19200; c5_i135++) {
    (*chartInstance->c5_G_out)[c5_i135] = c5_b_G[c5_i135];
  }

  for (c5_i137 = 0; c5_i137 < 19200; c5_i137++) {
    (*chartInstance->c5_B_out)[c5_i137] = c5_b_B[c5_i137];
  }

  c5_do_animation_call_c5_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 4U,
                    *chartInstance->c5_len_center);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 5U,
                    *chartInstance->c5_len_left);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 6U,
                    *chartInstance->c5_len_right);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 7U,
                    *chartInstance->c5_len_left_or);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 8U,
                    *chartInstance->c5_len_right_or);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 9U,
                    *chartInstance->c5_len_back_center);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 10U,
                    *chartInstance->c5_len_back_left);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 11U,
                    *chartInstance->c5_len_back_right);
  for (c5_i148 = 0; c5_i148 < 19200; c5_i148++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 12U, (real_T)
                      (*chartInstance->c5_R_out)[c5_i148]);
  }

  for (c5_i152 = 0; c5_i152 < 19200; c5_i152++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 13U, (real_T)
                      (*chartInstance->c5_G_out)[c5_i152]);
  }

  for (c5_i157 = 0; c5_i157 < 19200; c5_i157++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 14U, (real_T)
                      (*chartInstance->c5_B_out)[c5_i157]);
  }
}

static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_g_y = NULL;
  const mxArray *c5_h_y = NULL;
  const mxArray *c5_i_y = NULL;
  const mxArray *c5_j_y = NULL;
  const mxArray *c5_k_y = NULL;
  const mxArray *c5_l_y = NULL;
  const mxArray *c5_m_y = NULL;
  const mxArray *c5_n_y = NULL;
  const mxArray *c5_o_y = NULL;
  const mxArray *c5_p_y = NULL;
  const mxArray *c5_q_y = NULL;
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(16, 1), false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", *chartInstance->c5_B_out, 3, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", *chartInstance->c5_G_out, 3, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", *chartInstance->c5_R_out, 3, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", chartInstance->c5_len_back_center, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 3, c5_e_y);
  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", chartInstance->c5_len_back_left, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 4, c5_f_y);
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", chartInstance->c5_len_back_right, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 5, c5_g_y);
  c5_h_y = NULL;
  sf_mex_assign(&c5_h_y, sf_mex_create("y", chartInstance->c5_len_center, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 6, c5_h_y);
  c5_i_y = NULL;
  sf_mex_assign(&c5_i_y, sf_mex_create("y", chartInstance->c5_len_left, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 7, c5_i_y);
  c5_j_y = NULL;
  sf_mex_assign(&c5_j_y, sf_mex_create("y", chartInstance->c5_len_left_or, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 8, c5_j_y);
  c5_k_y = NULL;
  sf_mex_assign(&c5_k_y, sf_mex_create("y", chartInstance->c5_len_right, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 9, c5_k_y);
  c5_l_y = NULL;
  sf_mex_assign(&c5_l_y, sf_mex_create("y", chartInstance->c5_len_right_or, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 10, c5_l_y);
  c5_m_y = NULL;
  if (!chartInstance->c5_method_not_empty) {
    sf_mex_assign(&c5_m_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c5_m_y, sf_mex_create("y", &chartInstance->c5_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c5_y, 11, c5_m_y);
  c5_n_y = NULL;
  if (!chartInstance->c5_method_not_empty) {
    sf_mex_assign(&c5_n_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c5_n_y, sf_mex_create("y", &chartInstance->c5_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c5_y, 12, c5_n_y);
  c5_o_y = NULL;
  if (!chartInstance->c5_c_state_not_empty) {
    sf_mex_assign(&c5_o_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c5_o_y, sf_mex_create("y", chartInstance->c5_c_state, 7, 0U,
      1U, 0U, 1, 625), false);
  }

  sf_mex_setcell(c5_y, 13, c5_o_y);
  c5_p_y = NULL;
  if (!chartInstance->c5_b_state_not_empty) {
    sf_mex_assign(&c5_p_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c5_p_y, sf_mex_create("y", chartInstance->c5_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c5_y, 14, c5_p_y);
  c5_q_y = NULL;
  sf_mex_assign(&c5_q_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c5_y, 15, c5_q_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  int32_T c5_b_i1;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  uint32_T c5_uv3[625];
  uint32_T c5_uv4[2];
  uint8_T c5_uv[19200];
  uint8_T c5_uv1[19200];
  uint8_T c5_uv2[19200];
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_u = sf_mex_dup(c5_st);
  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 0)),
                      "B_out", c5_uv);
  for (c5_i = 0; c5_i < 19200; c5_i++) {
    (*chartInstance->c5_B_out)[c5_i] = c5_uv[c5_i];
  }

  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
                      "G_out", c5_uv1);
  for (c5_b_i1 = 0; c5_b_i1 < 19200; c5_b_i1++) {
    (*chartInstance->c5_G_out)[c5_b_i1] = c5_uv1[c5_b_i1];
  }

  c5_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 2)),
                      "R_out", c5_uv2);
  for (c5_i2 = 0; c5_i2 < 19200; c5_i2++) {
    (*chartInstance->c5_R_out)[c5_i2] = c5_uv2[c5_i2];
  }

  *chartInstance->c5_len_back_center = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 3)), "len_back_center");
  *chartInstance->c5_len_back_left = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 4)), "len_back_left");
  *chartInstance->c5_len_back_right = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 5)), "len_back_right");
  *chartInstance->c5_len_center = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 6)), "len_center");
  *chartInstance->c5_len_left = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 7)), "len_left");
  *chartInstance->c5_len_left_or = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 8)), "len_left_or");
  *chartInstance->c5_len_right = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 9)), "len_right");
  *chartInstance->c5_len_right_or = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 10)), "len_right_or");
  chartInstance->c5_method = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 11)), "method", &chartInstance->c5_method_not_empty);
  chartInstance->c5_state = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 12)), "state", &chartInstance->c5_state_not_empty);
  c5_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 13)),
                        "state", &chartInstance->c5_c_state_not_empty, c5_uv3);
  for (c5_i3 = 0; c5_i3 < 625; c5_i3++) {
    chartInstance->c5_c_state[c5_i3] = c5_uv3[c5_i3];
  }

  c5_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 14)),
                        "state", &chartInstance->c5_b_state_not_empty, c5_uv4);
  for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
    chartInstance->c5_b_state[c5_i4] = c5_uv4[c5_i4];
  }

  chartInstance->c5_is_active_c5_flightControlSystem = c5_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 15)),
     "is_active_c5_flightControlSystem");
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void initSimStructsc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_sub2ind(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_varargin_1[7], real_T c5_varargin_2[7],
  int32_T c5_idx[7])
{
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_y = NULL;
  int32_T c5_b[7];
  int32_T c5_b_i1;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_i3;
  if (!c5_allinrange(chartInstance, c5_varargin_1, 120)) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c5_sp, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
                (c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c5_sp, NULL,
      "message", 1U, 1U, 14, c5_c_y)));
  }

  if (!c5_allinrange(chartInstance, c5_varargin_2, 160)) {
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c5_sp, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_b_y, 14,
                sf_mex_call(c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c5_sp, NULL, "message", 1U, 1U, 14, c5_d_y)));
  }

  for (c5_i = 0; c5_i < 7; c5_i++) {
    c5_idx[c5_i] = (int32_T)c5_varargin_1[c5_i];
  }

  for (c5_b_i1 = 0; c5_b_i1 < 7; c5_b_i1++) {
    c5_b[c5_b_i1] = (int32_T)c5_varargin_2[c5_b_i1] - 1;
  }

  for (c5_i2 = 0; c5_i2 < 7; c5_i2++) {
    c5_b[c5_i2] *= 120;
  }

  for (c5_i3 = 0; c5_i3 < 7; c5_i3++) {
    c5_idx[c5_i3] += c5_b[c5_i3];
  }
}

static boolean_T c5_allinrange(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[7], int32_T c5_hi)
{
  real_T c5_b_k;
  int32_T c5_exitg1;
  int32_T c5_k;
  boolean_T c5_b;
  boolean_T c5_p;
  (void)chartInstance;
  c5_k = 0;
  do {
    c5_exitg1 = 0;
    if (c5_k < 7) {
      c5_b_k = (real_T)c5_k + 1.0;
      if ((c5_x[(int32_T)c5_b_k - 1] >= 1.0) && (c5_x[(int32_T)c5_b_k - 1] <=
           (real_T)c5_hi)) {
        c5_b = true;
      } else {
        c5_b = false;
      }

      if (!c5_b) {
        c5_p = false;
        c5_exitg1 = 1;
      } else {
        c5_k++;
      }
    } else {
      c5_p = true;
      c5_exitg1 = 1;
    }
  } while (c5_exitg1 == 0);

  return c5_p;
}

static void c5_eml_find(SFc5_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c5_x[7], int32_T c5_i_data[], int32_T c5_i_size[1])
{
  int32_T c5_b_ii;
  int32_T c5_i;
  int32_T c5_idx;
  int32_T c5_ii;
  boolean_T c5_b;
  boolean_T c5_exitg1;
  c5_idx = 0;
  c5_ii = 1;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_ii - 1 < 7)) {
    c5_b_ii = c5_ii;
    if (c5_x[c5_b_ii - 1]) {
      c5_idx++;
      c5_i_data[c5_idx - 1] = c5_b_ii;
      if (c5_idx >= 7) {
        c5_exitg1 = true;
      } else {
        c5_ii++;
      }
    } else {
      c5_ii++;
    }
  }

  c5_b = (c5_idx < 1);
  if (c5_b) {
    c5_i = 0;
  } else {
    c5_i = c5_idx;
  }

  c5_indexShapeCheck(chartInstance);
  c5_i_size[0] = c5_i;
}

static void c5_indexShapeCheck(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c5_sortrows(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_y, c5_emxArray_real_T *c5_b_y)
{
  int32_T c5_b_i1;
  int32_T c5_i;
  int32_T c5_loop_ub;
  c5_i = c5_b_y->size[0] * c5_b_y->size[1];
  c5_b_y->size[0] = c5_y->size[0];
  c5_b_y->size[1] = 2;
  c5_emxEnsureCapacity_real_T1(chartInstance, c5_sp, c5_b_y, c5_i,
    &c5_r_emlrtRTEI);
  c5_loop_ub = (c5_y->size[0] << 1) - 1;
  for (c5_b_i1 = 0; c5_b_i1 <= c5_loop_ub; c5_b_i1++) {
    c5_b_y->data[c5_b_i1] = c5_y->data[c5_b_i1];
  }

  c5_b_sortrows(chartInstance, c5_sp, c5_b_y);
}

static void c5_check_forloop_overflow_error
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c5_sp)
{
  static char_T c5_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c5_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_y = NULL;
  (void)chartInstance;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c5_sp, &c5_c_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
              (c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c5_sp, NULL,
    "message", 1U, 2U, 14, c5_b_y, 14, c5_c_y)));
}

static boolean_T c5_sortLE(SFc5_flightControlSystemInstanceStruct *chartInstance,
  c5_emxArray_real_T *c5_v, int32_T c5_idx1, int32_T c5_idx2)
{
  real_T c5_b;
  real_T c5_b_b;
  real_T c5_b_x;
  real_T c5_c_b;
  real_T c5_c_x;
  real_T c5_d_a;
  real_T c5_e_a;
  real_T c5_f_a;
  real_T c5_v1;
  real_T c5_v2;
  real_T c5_x;
  int32_T c5_irow1;
  int32_T c5_irow2;
  boolean_T c5_b_p;
  boolean_T c5_c_p;
  boolean_T c5_d_b;
  boolean_T c5_isnanv1;
  boolean_T c5_isnanv2;
  boolean_T c5_p;
  boolean_T c5_v1eqv2;
  (void)chartInstance;
  c5_irow1 = c5_idx1 - 1;
  c5_irow2 = c5_idx2 - 1;
  c5_p = true;
  c5_v1 = c5_v->data[c5_irow1];
  c5_v2 = c5_v->data[c5_irow2];
  c5_v1eqv2 = (c5_v1 == c5_v2);
  c5_x = c5_v1;
  c5_isnanv1 = muDoubleScalarIsNaN(c5_x);
  c5_b_x = c5_v2;
  c5_isnanv2 = muDoubleScalarIsNaN(c5_b_x);
  if (c5_v1eqv2 || (c5_isnanv1 && c5_isnanv2)) {
  } else {
    c5_d_a = c5_v1;
    c5_b = c5_v2;
    c5_e_a = c5_d_a;
    c5_b_b = c5_b;
    c5_f_a = c5_e_a;
    c5_c_b = c5_b_b;
    c5_b_p = (c5_f_a <= c5_c_b);
    if (c5_b_p) {
      c5_c_p = true;
    } else {
      c5_c_x = c5_b_b;
      c5_d_b = muDoubleScalarIsNaN(c5_c_x);
      if (c5_d_b) {
        c5_c_p = true;
      } else {
        c5_c_p = false;
      }
    }

    c5_p = c5_c_p;
  }

  return c5_p;
}

static void c5_b_sub2ind(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_varargin_1, c5_emxArray_real_T
  *c5_varargin_2, c5_emxArray_int32_T *c5_idx)
{
  static char_T c5_b_cv[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't', 'V',
    'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  c5_emxArray_int32_T *c5_b;
  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_b_varargin_1[2];
  real_T c5_b_varargin_2[2];
  real_T c5_b_k;
  real_T c5_x1;
  real_T c5_x2;
  int32_T c5_b_i1;
  int32_T c5_b_loop_ub;
  int32_T c5_c_loop_ub;
  int32_T c5_d_loop_ub;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_k;
  int32_T c5_loop_ub;
  boolean_T c5_b_p;
  boolean_T c5_c_p;
  boolean_T c5_exitg1;
  boolean_T c5_p;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  if (!c5_b_allinrange(chartInstance, c5_varargin_1, 120)) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c5_sp, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
                (c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c5_sp, NULL,
      "message", 1U, 1U, 14, c5_b_y)));
  }

  c5_b_varargin_1[0] = (real_T)c5_varargin_1->size[0];
  c5_b_varargin_1[1] = 1.0;
  c5_b_varargin_2[0] = (real_T)c5_varargin_2->size[0];
  c5_b_varargin_2[1] = 1.0;
  c5_p = false;
  c5_b_p = true;
  c5_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_k < 2)) {
    c5_b_k = (real_T)c5_k + 1.0;
    c5_x1 = c5_b_varargin_1[(int32_T)c5_b_k - 1];
    c5_x2 = c5_b_varargin_2[(int32_T)c5_b_k - 1];
    c5_c_p = (c5_x1 == c5_x2);
    if (!c5_c_p) {
      c5_b_p = false;
      c5_exitg1 = true;
    } else {
      c5_k++;
    }
  }

  if (c5_b_p) {
    c5_p = true;
  }

  if (!c5_p) {
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c5_e_y = NULL;
    sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c5_sp, &c5_d_emlrtMCI, "error", 0U, 2U, 14, c5_c_y, 14,
                sf_mex_call(c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c5_sp, NULL, "message", 1U, 1U, 14, c5_e_y)));
  }

  if (!c5_b_allinrange(chartInstance, c5_varargin_2, 160)) {
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c5_sp, &c5_emlrtMCI, "error", 0U, 2U, 14, c5_d_y, 14,
                sf_mex_call(c5_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c5_sp, NULL, "message", 1U, 1U, 14, c5_f_y)));
  }

  c5_i = c5_idx->size[0];
  c5_idx->size[0] = c5_varargin_1->size[0];
  c5_st.site = &c5_mc_emlrtRSI;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_idx, c5_i,
    &c5_s_emlrtRTEI);
  c5_loop_ub = c5_varargin_1->size[0] - 1;
  for (c5_b_i1 = 0; c5_b_i1 <= c5_loop_ub; c5_b_i1++) {
    c5_idx->data[c5_b_i1] = (int32_T)c5_varargin_1->data[c5_b_i1];
  }

  c5_emxInit_int32_T(chartInstance, c5_sp, &c5_b, 1, &c5_t_emlrtRTEI);
  c5_i2 = c5_b->size[0];
  c5_b->size[0] = c5_varargin_2->size[0];
  c5_st.site = &c5_lc_emlrtRSI;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_b, c5_i2,
    &c5_t_emlrtRTEI);
  c5_b_loop_ub = c5_varargin_2->size[0] - 1;
  for (c5_i3 = 0; c5_i3 <= c5_b_loop_ub; c5_i3++) {
    c5_b->data[c5_i3] = (int32_T)c5_varargin_2->data[c5_i3] - 1;
  }

  c5_c_loop_ub = c5_b->size[0] - 1;
  for (c5_i4 = 0; c5_i4 <= c5_c_loop_ub; c5_i4++) {
    c5_b->data[c5_i4] *= 120;
  }

  c5_d_loop_ub = c5_idx->size[0] - 1;
  for (c5_i5 = 0; c5_i5 <= c5_d_loop_ub; c5_i5++) {
    c5_idx->data[c5_i5] += c5_b->data[c5_i5];
  }

  c5_emxFree_int32_T(chartInstance, &c5_b);
}

static boolean_T c5_b_allinrange(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_real_T *c5_x, int32_T c5_hi)
{
  real_T c5_b_k;
  real_T c5_d;
  int32_T c5_exitg1;
  int32_T c5_i;
  int32_T c5_k;
  boolean_T c5_b;
  boolean_T c5_p;
  (void)chartInstance;
  c5_d = (real_T)c5_x->size[0];
  c5_i = (int32_T)c5_d - 1;
  c5_k = 0;
  do {
    c5_exitg1 = 0;
    if (c5_k <= c5_i) {
      c5_b_k = (real_T)c5_k + 1.0;
      if ((c5_x->data[(int32_T)c5_b_k - 1] >= 1.0) && (c5_x->data[(int32_T)
           c5_b_k - 1] <= (real_T)c5_hi)) {
        c5_b = true;
      } else {
        c5_b = false;
      }

      if (!c5_b) {
        c5_p = false;
        c5_exitg1 = 1;
      } else {
        c5_k++;
      }
    } else {
      c5_p = true;
      c5_exitg1 = 1;
    }
  } while (c5_exitg1 == 0);

  return c5_p;
}

static void c5_edge(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, boolean_T c5_varargin_1[19200], boolean_T
                    c5_varargout_1[19200])
{
  static real_T c5_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c5_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c5_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c5_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c5_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c5_b_idxA[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
    38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
    57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
    76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
    95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
    111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
    126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
    141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
    156, 157, 158, 159, 160, 160, 160, 160, 160, 160, 160 };

  static int32_T c5_idxA[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
    134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160 };

  static boolean_T c5_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c5_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st;
  real_T c5_counts[64];
  real_T c5_connDimsT[2];
  real_T c5_outSizeT[2];
  real_T c5_padSizeT[2];
  real_T c5_startT[2];
  real_T c5_b_data[1];
  real_T c5_highThresh_data[1];
  real_T c5_lowThresh_data[1];
  real_T c5_b_idx;
  real_T c5_b_j;
  real_T c5_b_lowThresh;
  real_T c5_d_i;
  real_T c5_d_j;
  real_T c5_f_j;
  real_T c5_g_i;
  real_T c5_h_j;
  real_T c5_highThresh;
  real_T c5_highThreshTemp;
  real_T c5_j_i;
  real_T c5_lowThresh;
  real_T c5_m_i;
  real_T c5_o_i;
  real_T c5_out;
  real_T c5_sum;
  int32_T c5_highThresh_size[1];
  int32_T c5_lowThresh_size[1];
  int32_T c5_b_c;
  int32_T c5_b_i;
  int32_T c5_b_i1;
  int32_T c5_c;
  int32_T c5_c_i;
  int32_T c5_c_j;
  int32_T c5_e_i;
  int32_T c5_e_j;
  int32_T c5_f_i;
  int32_T c5_g_j;
  int32_T c5_h_i;
  int32_T c5_i;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i2;
  int32_T c5_i20;
  int32_T c5_i21;
  int32_T c5_i22;
  int32_T c5_i23;
  int32_T c5_i24;
  int32_T c5_i25;
  int32_T c5_i26;
  int32_T c5_i27;
  int32_T c5_i28;
  int32_T c5_i29;
  int32_T c5_i3;
  int32_T c5_i30;
  int32_T c5_i31;
  int32_T c5_i32;
  int32_T c5_i33;
  int32_T c5_i34;
  int32_T c5_i35;
  int32_T c5_i36;
  int32_T c5_i37;
  int32_T c5_i38;
  int32_T c5_i39;
  int32_T c5_i4;
  int32_T c5_i40;
  int32_T c5_i41;
  int32_T c5_i42;
  int32_T c5_i43;
  int32_T c5_i44;
  int32_T c5_i45;
  int32_T c5_i46;
  int32_T c5_i47;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_i_i;
  int32_T c5_idx;
  int32_T c5_j;
  int32_T c5_k_i;
  int32_T c5_l_i;
  int32_T c5_loop_ub;
  int32_T c5_n_i;
  real32_T c5_b_i2[19200];
  real32_T c5_b;
  real32_T c5_b_b;
  real32_T c5_b_r;
  real32_T c5_b_varargin_1;
  real32_T c5_b_x;
  real32_T c5_b_x1;
  real32_T c5_b_x2;
  real32_T c5_b_y;
  real32_T c5_c_b;
  real32_T c5_c_x;
  real32_T c5_c_y;
  real32_T c5_d_a;
  real32_T c5_d_b;
  real32_T c5_d_idx;
  real32_T c5_d_x;
  real32_T c5_d_y;
  real32_T c5_e_a;
  real32_T c5_e_x;
  real32_T c5_e_y;
  real32_T c5_f_a;
  real32_T c5_f_x;
  real32_T c5_f_y;
  real32_T c5_g_a;
  real32_T c5_g_b;
  real32_T c5_g_x;
  real32_T c5_g_y;
  real32_T c5_h_a;
  real32_T c5_h_x;
  real32_T c5_h_y;
  real32_T c5_i_a;
  real32_T c5_i_x;
  real32_T c5_i_y;
  real32_T c5_j_a;
  real32_T c5_j_x;
  real32_T c5_j_y;
  real32_T c5_k_x;
  real32_T c5_k_y;
  real32_T c5_magmax;
  real32_T c5_r;
  real32_T c5_varargin_2;
  real32_T c5_x;
  real32_T c5_x1;
  real32_T c5_x2;
  real32_T c5_y;
  int8_T c5_c_idx;
  boolean_T c5_E[19200];
  boolean_T c5_conn[13];
  boolean_T c5_b_modeFlag;
  boolean_T c5_b_tooBig;
  boolean_T c5_c_modeFlag;
  boolean_T c5_c_tooBig;
  boolean_T c5_d_modeFlag;
  boolean_T c5_d_tooBig;
  boolean_T c5_e_b;
  boolean_T c5_e_modeFlag;
  boolean_T c5_f_b;
  boolean_T c5_f_modeFlag;
  boolean_T c5_g_modeFlag;
  boolean_T c5_h_modeFlag;
  boolean_T c5_i_modeFlag;
  boolean_T c5_j_modeFlag;
  boolean_T c5_k_modeFlag;
  boolean_T c5_l_modeFlag;
  boolean_T c5_modeFlag;
  boolean_T c5_nanFlag;
  boolean_T c5_tooBig;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  for (c5_i = 0; c5_i < 19200; c5_i++) {
    chartInstance->c5_c_a[c5_i] = (real32_T)c5_varargin_1[c5_i];
  }

  c5_st.site = &c5_n_emlrtRSI;
  c5_b_st.site = &c5_q_emlrtRSI;
  c5_c_st.site = &c5_u_emlrtRSI;
  c5_d_st.site = &c5_w_emlrtRSI;
  for (c5_j = 0; c5_j < 160; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    for (c5_b_i = 0; c5_b_i < 132; c5_b_i++) {
      c5_d_i = (real_T)c5_b_i + 1.0;
      if ((c5_idxA[(int32_T)c5_d_i - 1] < 1) || (c5_idxA[(int32_T)c5_d_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c5_idxA[(int32_T)c5_d_i - 1], 1, 120,
          &c5_ld_emlrtBCI, &c5_d_st);
      }

      c5_b_i1 = c5_idxA[(int32_T)c5_b_j + 159];
      if ((c5_b_i1 < 1) || (c5_b_i1 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c5_b_i1, 1, 160, &c5_md_emlrtBCI, &c5_d_st);
      }

      chartInstance->c5_a[((int32_T)c5_d_i + 132 * ((int32_T)c5_b_j - 1)) - 1] =
        chartInstance->c5_c_a[(c5_idxA[(int32_T)c5_d_i - 1] + 120 * (c5_b_i1 - 1))
        - 1];
    }
  }

  c5_c_st.site = &c5_v_emlrtRSI;
  c5_d_st.site = &c5_x_emlrtRSI;
  c5_tooBig = true;
  for (c5_c_i = 0; c5_c_i < 2; c5_c_i++) {
    c5_tooBig = false;
  }

  if (!c5_tooBig) {
    c5_modeFlag = true;
  } else {
    c5_modeFlag = false;
  }

  if (c5_modeFlag) {
    c5_b_modeFlag = true;
  } else {
    c5_b_modeFlag = false;
  }

  c5_c_modeFlag = c5_b_modeFlag;
  if (c5_c_modeFlag) {
    for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
      c5_padSizeT[c5_i3] = 132.0 + 28.0 * (real_T)c5_i3;
    }

    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_outSizeT[c5_i5] = 120.0 + 40.0 * (real_T)c5_i5;
    }

    for (c5_i7 = 0; c5_i7 < 2; c5_i7++) {
      c5_connDimsT[c5_i7] = 13.0 + -12.0 * (real_T)c5_i7;
    }

    ippfilter_real32(&chartInstance->c5_a[0], &chartInstance->c5_i1[0],
                     &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_kernel[0],
                     &c5_connDimsT[0], true);
  } else {
    for (c5_i2 = 0; c5_i2 < 13; c5_i2++) {
      c5_conn[c5_i2] = true;
    }

    for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
      c5_padSizeT[c5_i4] = 132.0 + 28.0 * (real_T)c5_i4;
    }

    for (c5_i6 = 0; c5_i6 < 2; c5_i6++) {
      c5_outSizeT[c5_i6] = 120.0 + 40.0 * (real_T)c5_i6;
    }

    for (c5_i8 = 0; c5_i8 < 2; c5_i8++) {
      c5_connDimsT[c5_i8] = 13.0 + -12.0 * (real_T)c5_i8;
    }

    for (c5_i9 = 0; c5_i9 < 2; c5_i9++) {
      c5_startT[c5_i9] = 6.0 + -6.0 * (real_T)c5_i9;
    }

    imfilter_real32(&chartInstance->c5_a[0], &chartInstance->c5_i1[0], 2.0,
                    &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_kernel[0], 13.0,
                    &c5_conn[0], 2.0, &c5_connDimsT[0], &c5_startT[0], 2.0, true,
                    true);
  }

  c5_b_st.site = &c5_r_emlrtRSI;
  c5_c_st.site = &c5_u_emlrtRSI;
  c5_d_st.site = &c5_w_emlrtRSI;
  for (c5_c_j = 0; c5_c_j < 172; c5_c_j++) {
    c5_d_j = (real_T)c5_c_j + 1.0;
    for (c5_e_i = 0; c5_e_i < 120; c5_e_i++) {
      c5_g_i = (real_T)c5_e_i + 1.0;
      if ((c5_b_idxA[(int32_T)c5_g_i - 1] < 1) || (c5_b_idxA[(int32_T)c5_g_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c5_b_idxA[(int32_T)c5_g_i - 1], 1, 120,
          &c5_ld_emlrtBCI, &c5_d_st);
      }

      c5_i10 = c5_b_idxA[(int32_T)c5_d_j + 171];
      if ((c5_i10 < 1) || (c5_i10 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c5_i10, 1, 160, &c5_md_emlrtBCI, &c5_d_st);
      }

      chartInstance->c5_b_a[((int32_T)c5_g_i + 120 * ((int32_T)c5_d_j - 1)) - 1]
        = chartInstance->c5_i1[(c5_b_idxA[(int32_T)c5_g_i - 1] + 120 * (c5_i10 -
        1)) - 1];
    }
  }

  c5_c_st.site = &c5_v_emlrtRSI;
  c5_d_st.site = &c5_x_emlrtRSI;
  c5_b_tooBig = true;
  for (c5_f_i = 0; c5_f_i < 2; c5_f_i++) {
    c5_b_tooBig = false;
  }

  if (!c5_b_tooBig) {
    c5_d_modeFlag = true;
  } else {
    c5_d_modeFlag = false;
  }

  if (c5_d_modeFlag) {
    c5_e_modeFlag = true;
  } else {
    c5_e_modeFlag = false;
  }

  c5_f_modeFlag = c5_e_modeFlag;
  if (c5_f_modeFlag) {
    for (c5_i12 = 0; c5_i12 < 2; c5_i12++) {
      c5_padSizeT[c5_i12] = 120.0 + 52.0 * (real_T)c5_i12;
    }

    for (c5_i14 = 0; c5_i14 < 2; c5_i14++) {
      c5_outSizeT[c5_i14] = 120.0 + 40.0 * (real_T)c5_i14;
    }

    for (c5_i16 = 0; c5_i16 < 2; c5_i16++) {
      c5_connDimsT[c5_i16] = 1.0 + 12.0 * (real_T)c5_i16;
    }

    ippfilter_real32(&chartInstance->c5_b_a[0], &chartInstance->c5_i1[0],
                     &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_b_kernel[0],
                     &c5_connDimsT[0], true);
  } else {
    for (c5_i11 = 0; c5_i11 < 2; c5_i11++) {
      c5_padSizeT[c5_i11] = 120.0 + 52.0 * (real_T)c5_i11;
    }

    for (c5_i13 = 0; c5_i13 < 2; c5_i13++) {
      c5_outSizeT[c5_i13] = 120.0 + 40.0 * (real_T)c5_i13;
    }

    for (c5_i15 = 0; c5_i15 < 2; c5_i15++) {
      c5_connDimsT[c5_i15] = 1.0 + 12.0 * (real_T)c5_i15;
    }

    for (c5_i17 = 0; c5_i17 < 2; c5_i17++) {
      c5_startT[c5_i17] = 6.0 * (real_T)c5_i17;
    }

    imfilter_real32(&chartInstance->c5_b_a[0], &chartInstance->c5_i1[0], 2.0,
                    &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_nonZeroKernel[0],
                    12.0, &c5_b_conn[0], 2.0, &c5_connDimsT[0], &c5_startT[0],
                    2.0, true, true);
  }

  c5_b_st.site = &c5_s_emlrtRSI;
  c5_c_st.site = &c5_u_emlrtRSI;
  c5_d_st.site = &c5_w_emlrtRSI;
  for (c5_e_j = 0; c5_e_j < 172; c5_e_j++) {
    c5_f_j = (real_T)c5_e_j + 1.0;
    for (c5_h_i = 0; c5_h_i < 120; c5_h_i++) {
      c5_j_i = (real_T)c5_h_i + 1.0;
      if ((c5_b_idxA[(int32_T)c5_j_i - 1] < 1) || (c5_b_idxA[(int32_T)c5_j_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c5_b_idxA[(int32_T)c5_j_i - 1], 1, 120,
          &c5_ld_emlrtBCI, &c5_d_st);
      }

      c5_i18 = c5_b_idxA[(int32_T)c5_f_j + 171];
      if ((c5_i18 < 1) || (c5_i18 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c5_i18, 1, 160, &c5_md_emlrtBCI, &c5_d_st);
      }

      chartInstance->c5_b_a[((int32_T)c5_j_i + 120 * ((int32_T)c5_f_j - 1)) - 1]
        = chartInstance->c5_c_a[(c5_b_idxA[(int32_T)c5_j_i - 1] + 120 * (c5_i18
        - 1)) - 1];
    }
  }

  c5_c_st.site = &c5_v_emlrtRSI;
  c5_d_st.site = &c5_x_emlrtRSI;
  c5_c_tooBig = true;
  for (c5_i_i = 0; c5_i_i < 2; c5_i_i++) {
    c5_c_tooBig = false;
  }

  if (!c5_c_tooBig) {
    c5_g_modeFlag = true;
  } else {
    c5_g_modeFlag = false;
  }

  if (c5_g_modeFlag) {
    c5_h_modeFlag = true;
  } else {
    c5_h_modeFlag = false;
  }

  c5_i_modeFlag = c5_h_modeFlag;
  if (c5_i_modeFlag) {
    for (c5_i20 = 0; c5_i20 < 2; c5_i20++) {
      c5_padSizeT[c5_i20] = 120.0 + 52.0 * (real_T)c5_i20;
    }

    for (c5_i22 = 0; c5_i22 < 2; c5_i22++) {
      c5_outSizeT[c5_i22] = 120.0 + 40.0 * (real_T)c5_i22;
    }

    for (c5_i24 = 0; c5_i24 < 2; c5_i24++) {
      c5_connDimsT[c5_i24] = 1.0 + 12.0 * (real_T)c5_i24;
    }

    ippfilter_real32(&chartInstance->c5_b_a[0], &c5_b_i2[0], &c5_outSizeT[0],
                     2.0, &c5_padSizeT[0], &c5_c_kernel[0], &c5_connDimsT[0],
                     true);
  } else {
    for (c5_i19 = 0; c5_i19 < 13; c5_i19++) {
      c5_conn[c5_i19] = true;
    }

    for (c5_i21 = 0; c5_i21 < 2; c5_i21++) {
      c5_padSizeT[c5_i21] = 120.0 + 52.0 * (real_T)c5_i21;
    }

    for (c5_i23 = 0; c5_i23 < 2; c5_i23++) {
      c5_outSizeT[c5_i23] = 120.0 + 40.0 * (real_T)c5_i23;
    }

    for (c5_i25 = 0; c5_i25 < 2; c5_i25++) {
      c5_connDimsT[c5_i25] = 1.0 + 12.0 * (real_T)c5_i25;
    }

    for (c5_i26 = 0; c5_i26 < 2; c5_i26++) {
      c5_startT[c5_i26] = 6.0 * (real_T)c5_i26;
    }

    imfilter_real32(&chartInstance->c5_b_a[0], &c5_b_i2[0], 2.0, &c5_outSizeT[0],
                    2.0, &c5_padSizeT[0], &c5_kernel[0], 13.0, &c5_conn[0], 2.0,
                    &c5_connDimsT[0], &c5_startT[0], 2.0, true, true);
  }

  c5_b_st.site = &c5_t_emlrtRSI;
  c5_c_st.site = &c5_u_emlrtRSI;
  c5_d_st.site = &c5_w_emlrtRSI;
  for (c5_g_j = 0; c5_g_j < 160; c5_g_j++) {
    c5_h_j = (real_T)c5_g_j + 1.0;
    for (c5_k_i = 0; c5_k_i < 132; c5_k_i++) {
      c5_m_i = (real_T)c5_k_i + 1.0;
      if ((c5_idxA[(int32_T)c5_m_i - 1] < 1) || (c5_idxA[(int32_T)c5_m_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c5_idxA[(int32_T)c5_m_i - 1], 1, 120,
          &c5_ld_emlrtBCI, &c5_d_st);
      }

      c5_i27 = c5_idxA[(int32_T)c5_h_j + 159];
      if ((c5_i27 < 1) || (c5_i27 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c5_i27, 1, 160, &c5_md_emlrtBCI, &c5_d_st);
      }

      chartInstance->c5_a[((int32_T)c5_m_i + 132 * ((int32_T)c5_h_j - 1)) - 1] =
        c5_b_i2[(c5_idxA[(int32_T)c5_m_i - 1] + 120 * (c5_i27 - 1)) - 1];
    }
  }

  c5_c_st.site = &c5_v_emlrtRSI;
  c5_d_st.site = &c5_x_emlrtRSI;
  c5_d_tooBig = true;
  for (c5_l_i = 0; c5_l_i < 2; c5_l_i++) {
    c5_d_tooBig = false;
  }

  if (!c5_d_tooBig) {
    c5_j_modeFlag = true;
  } else {
    c5_j_modeFlag = false;
  }

  if (c5_j_modeFlag) {
    c5_k_modeFlag = true;
  } else {
    c5_k_modeFlag = false;
  }

  c5_l_modeFlag = c5_k_modeFlag;
  if (c5_l_modeFlag) {
    for (c5_i29 = 0; c5_i29 < 2; c5_i29++) {
      c5_padSizeT[c5_i29] = 132.0 + 28.0 * (real_T)c5_i29;
    }

    for (c5_i31 = 0; c5_i31 < 2; c5_i31++) {
      c5_outSizeT[c5_i31] = 120.0 + 40.0 * (real_T)c5_i31;
    }

    for (c5_i33 = 0; c5_i33 < 2; c5_i33++) {
      c5_connDimsT[c5_i33] = 13.0 + -12.0 * (real_T)c5_i33;
    }

    ippfilter_real32(&chartInstance->c5_a[0], &c5_b_i2[0], &c5_outSizeT[0], 2.0,
                     &c5_padSizeT[0], &c5_d_kernel[0], &c5_connDimsT[0], true);
  } else {
    for (c5_i28 = 0; c5_i28 < 2; c5_i28++) {
      c5_padSizeT[c5_i28] = 132.0 + 28.0 * (real_T)c5_i28;
    }

    for (c5_i30 = 0; c5_i30 < 2; c5_i30++) {
      c5_outSizeT[c5_i30] = 120.0 + 40.0 * (real_T)c5_i30;
    }

    for (c5_i32 = 0; c5_i32 < 2; c5_i32++) {
      c5_connDimsT[c5_i32] = 13.0 + -12.0 * (real_T)c5_i32;
    }

    for (c5_i34 = 0; c5_i34 < 2; c5_i34++) {
      c5_startT[c5_i34] = 6.0 + -6.0 * (real_T)c5_i34;
    }

    imfilter_real32(&chartInstance->c5_a[0], &c5_b_i2[0], 2.0, &c5_outSizeT[0],
                    2.0, &c5_padSizeT[0], &c5_nonZeroKernel[0], 12.0,
                    &c5_c_conn[0], 2.0, &c5_connDimsT[0], &c5_startT[0], 2.0,
                    true, true);
  }

  c5_x = chartInstance->c5_i1[0];
  c5_y = c5_b_i2[0];
  c5_d_a = c5_x;
  c5_b = c5_y;
  c5_b_x = c5_d_a;
  c5_b_y = c5_b;
  c5_x1 = c5_b_x;
  c5_x2 = c5_b_y;
  c5_e_a = c5_x1;
  c5_b_b = c5_x2;
  c5_r = muSingleScalarHypot(c5_e_a, c5_b_b);
  chartInstance->c5_c_a[0] = c5_r;
  c5_magmax = chartInstance->c5_c_a[0];
  for (c5_idx = 0; c5_idx < 19199; c5_idx++) {
    c5_b_idx = (real_T)c5_idx + 2.0;
    c5_c_x = chartInstance->c5_i1[(int32_T)c5_b_idx - 1];
    c5_e_y = c5_b_i2[(int32_T)c5_b_idx - 1];
    c5_f_a = c5_c_x;
    c5_c_b = c5_e_y;
    c5_d_x = c5_f_a;
    c5_f_y = c5_c_b;
    c5_b_x1 = c5_d_x;
    c5_b_x2 = c5_f_y;
    c5_g_a = c5_b_x1;
    c5_d_b = c5_b_x2;
    c5_b_r = muSingleScalarHypot(c5_g_a, c5_d_b);
    chartInstance->c5_c_a[(int32_T)c5_b_idx - 1] = c5_b_r;
    c5_b_varargin_1 = chartInstance->c5_c_a[(int32_T)c5_b_idx - 1];
    c5_varargin_2 = c5_magmax;
    c5_f_x = c5_b_varargin_1;
    c5_g_y = c5_varargin_2;
    c5_g_x = c5_f_x;
    c5_h_y = c5_g_y;
    c5_h_x = c5_g_x;
    c5_i_y = c5_h_y;
    c5_h_a = c5_h_x;
    c5_g_b = c5_i_y;
    c5_j_x = c5_h_a;
    c5_j_y = c5_g_b;
    c5_k_x = c5_j_x;
    c5_k_y = c5_j_y;
    c5_magmax = muSingleScalarMax(c5_k_x, c5_k_y);
  }

  if (c5_magmax > 0.0F) {
    c5_c_y = c5_magmax;
    c5_d_y = c5_c_y;
    for (c5_i35 = 0; c5_i35 < 19200; c5_i35++) {
      chartInstance->c5_c_a[c5_i35] /= c5_d_y;
    }
  }

  c5_st.site = &c5_o_emlrtRSI;
  c5_b_st.site = &c5_cb_emlrtRSI;
  c5_c_st.site = &c5_db_emlrtRSI;
  c5_d_st.site = &c5_eb_emlrtRSI;
  c5_out = 1.0;
  getnumcores(&c5_out);
  for (c5_i36 = 0; c5_i36 < 64; c5_i36++) {
    c5_counts[c5_i36] = 0.0;
  }

  c5_nanFlag = false;
  for (c5_n_i = 0; c5_n_i < 19200; c5_n_i++) {
    c5_o_i = (real_T)c5_n_i + 1.0;
    c5_e_x = chartInstance->c5_c_a[(int32_T)c5_o_i - 1];
    c5_e_b = muSingleScalarIsNaN(c5_e_x);
    if (c5_e_b) {
      c5_nanFlag = true;
      c5_d_idx = 0.0F;
    } else {
      c5_d_idx = chartInstance->c5_c_a[(int32_T)c5_o_i - 1] * 63.0F + 0.5F;
    }

    if (c5_d_idx > 63.0F) {
      c5_counts[63]++;
    } else {
      c5_i_x = chartInstance->c5_c_a[(int32_T)c5_o_i - 1];
      c5_f_b = muSingleScalarIsInf(c5_i_x);
      if (c5_f_b) {
        c5_counts[63]++;
      } else {
        c5_i_a = c5_d_idx;
        c5_c = (int32_T)c5_i_a;
        c5_j_a = c5_d_idx;
        c5_b_c = (int32_T)c5_j_a;
        c5_counts[c5_c] = c5_counts[c5_b_c] + 1.0;
      }
    }
  }

  if (c5_nanFlag) {
    c5_d_st.site = &c5_fb_emlrtRSI;
    c5_warning(chartInstance, &c5_d_st);
  }

  c5_sum = 0.0;
  c5_c_idx = 1;
  while ((!(c5_sum > 13440.0)) && ((real_T)c5_c_idx <= 64.0)) {
    c5_sum += c5_counts[c5_c_idx - 1];
    c5_i38 = c5_c_idx + 1;
    if (c5_i38 > 127) {
      c5_i38 = 127;
    } else if (c5_i38 < -128) {
      c5_i38 = -128;
    }

    c5_c_idx = (int8_T)c5_i38;
  }

  c5_i37 = c5_c_idx - 1;
  if (c5_i37 > 127) {
    c5_i37 = 127;
  } else if (c5_i37 < -128) {
    c5_i37 = -128;
  }

  c5_highThreshTemp = (real_T)(int8_T)c5_i37 / 64.0;
  if (((real_T)c5_c_idx > 64.0) && (!(c5_sum > 13440.0))) {
    c5_highThresh_size[0] = 0;
    c5_lowThresh_size[0] = 0;
  } else {
    c5_highThresh_size[0] = 1;
    c5_highThresh_data[0] = c5_highThreshTemp;
    c5_loop_ub = c5_highThresh_size[0] - 1;
    for (c5_i39 = 0; c5_i39 <= c5_loop_ub; c5_i39++) {
      c5_b_data[c5_i39] = c5_highThresh_data[c5_i39];
    }

    c5_b_data[0] *= 0.4;
    c5_lowThresh_size[0] = 1;
    c5_lowThresh_data[0] = c5_b_data[0];
  }

  c5_st.site = &c5_p_emlrtRSI;
  c5_i40 = 1;
  if ((c5_i40 < 1) || (c5_i40 > c5_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i40, 1, c5_lowThresh_size[0],
      &c5_jd_emlrtBCI, &c5_st);
  }

  c5_b_st.site = &c5_hb_emlrtRSI;
  c5_lowThresh = c5_lowThresh_data[0];
  c5_c_st.site = &c5_jb_emlrtRSI;
  c5_b_lowThresh = c5_lowThresh;
  for (c5_i41 = 0; c5_i41 < 19200; c5_i41++) {
    c5_E[c5_i41] = false;
  }

  for (c5_i42 = 0; c5_i42 < 2; c5_i42++) {
    c5_connDimsT[c5_i42] = 120.0 + 40.0 * (real_T)c5_i42;
  }

  cannythresholding_real32_tbb(&chartInstance->c5_i1[0], &c5_b_i2[0],
    &chartInstance->c5_c_a[0], &c5_connDimsT[0], c5_b_lowThresh, &c5_E[0]);
  c5_i43 = 1;
  if ((c5_i43 < 1) || (c5_i43 > c5_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i43, 1, c5_highThresh_size[0],
      &c5_kd_emlrtBCI, &c5_st);
  }

  c5_highThresh = c5_highThresh_data[0];
  for (c5_i44 = 0; c5_i44 < 19200; c5_i44++) {
    c5_varargout_1[c5_i44] = ((real_T)chartInstance->c5_c_a[c5_i44] >
      c5_highThresh);
  }

  c5_b_st.site = &c5_ib_emlrtRSI;
  c5_c_st.site = &c5_kb_emlrtRSI;
  for (c5_i45 = 0; c5_i45 < 2; c5_i45++) {
    c5_connDimsT[c5_i45] = 120.0 + 40.0 * (real_T)c5_i45;
  }

  ippreconstruct_uint8((uint8_T *)&c5_varargout_1[0], (uint8_T *)&c5_E[0],
                       &c5_connDimsT[0], 2.0);
  c5_i46 = 1;
  if ((c5_i46 < 1) || (c5_i46 > c5_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i46, 1, c5_lowThresh_size[0],
      &c5_hd_emlrtBCI, (emlrtConstCTX)c5_sp);
  }

  c5_i47 = 1;
  if ((c5_i47 < 1) || (c5_i47 > c5_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i47, 1, c5_highThresh_size[0],
      &c5_id_emlrtBCI, (emlrtConstCTX)c5_sp);
  }
}

static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp)
{
  static char_T c5_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c5_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c5_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_y = NULL;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c5_st.site = &c5_gb_emlrtRSI;
  c5_b_feval(chartInstance, &c5_st, c5_y, c5_feval(chartInstance, &c5_st, c5_b_y,
              c5_c_y));
}

static void c5_bwlabel(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_varargin_1[19200], real_T c5_b_L[19200],
  real_T *c5_numComponents)
{
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_st;
  int64_T c5_i7;
  real_T c5_P[9601];
  real_T c5_b_c;
  real_T c5_b_i;
  real_T c5_b_j;
  real_T c5_b_numComponents;
  real_T c5_b_r;
  real_T c5_b_root;
  real_T c5_b_rootj;
  real_T c5_b_thread;
  real_T c5_b_varargin_1;
  real_T c5_b_x;
  real_T c5_c_i;
  real_T c5_c_j;
  real_T c5_c_root;
  real_T c5_c_rootj;
  real_T c5_c_varargin_1;
  real_T c5_c_x;
  real_T c5_d;
  real_T c5_d1;
  real_T c5_d10;
  real_T c5_d11;
  real_T c5_d2;
  real_T c5_d3;
  real_T c5_d4;
  real_T c5_d5;
  real_T c5_d6;
  real_T c5_d7;
  real_T c5_d8;
  real_T c5_d9;
  real_T c5_d_a;
  real_T c5_d_i;
  real_T c5_d_j;
  real_T c5_d_root;
  real_T c5_d_rootj;
  real_T c5_d_x;
  real_T c5_e_i;
  real_T c5_e_j;
  real_T c5_e_root;
  real_T c5_e_x;
  real_T c5_f_i;
  real_T c5_f_j;
  real_T c5_f_root;
  real_T c5_firstLabel;
  real_T c5_g_a;
  real_T c5_g_i;
  real_T c5_g_j;
  real_T c5_h_i;
  real_T c5_h_j;
  real_T c5_i_i;
  real_T c5_i_j;
  real_T c5_j;
  real_T c5_j_i;
  real_T c5_j_j;
  real_T c5_k_i;
  real_T c5_k_x;
  real_T c5_l_i;
  real_T c5_l_x;
  real_T c5_label;
  real_T c5_m_i;
  real_T c5_minval;
  real_T c5_n_i;
  real_T c5_n_x;
  real_T c5_o_i;
  real_T c5_o_x;
  real_T c5_p_i;
  real_T c5_p_x;
  real_T c5_q_x;
  real_T c5_r_x;
  real_T c5_root;
  real_T c5_rootj;
  real_T c5_startC;
  real_T c5_x;
  real_T c5_y;
  real_T c5_z;
  int32_T c5_chunksSizeAndLabels[168];
  int32_T c5_b;
  int32_T c5_b_b;
  int32_T c5_b_i1;
  int32_T c5_b_q0;
  int32_T c5_b_q1;
  int32_T c5_b_qY;
  int32_T c5_b_y;
  int32_T c5_b_z;
  int32_T c5_c;
  int32_T c5_c_c;
  int32_T c5_c_q0;
  int32_T c5_c_q1;
  int32_T c5_c_qY;
  int32_T c5_c_r;
  int32_T c5_d_c;
  int32_T c5_d_q0;
  int32_T c5_d_q1;
  int32_T c5_d_qY;
  int32_T c5_d_r;
  int32_T c5_e_a;
  int32_T c5_e_q0;
  int32_T c5_e_q1;
  int32_T c5_e_qY;
  int32_T c5_exitg1;
  int32_T c5_f_a;
  int32_T c5_f_q0;
  int32_T c5_f_q1;
  int32_T c5_f_qY;
  int32_T c5_f_x;
  int32_T c5_g_q0;
  int32_T c5_g_q1;
  int32_T c5_g_qY;
  int32_T c5_g_x;
  int32_T c5_h_a;
  int32_T c5_h_q0;
  int32_T c5_h_q1;
  int32_T c5_h_qY;
  int32_T c5_h_x;
  int32_T c5_i;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i2;
  int32_T c5_i20;
  int32_T c5_i21;
  int32_T c5_i22;
  int32_T c5_i23;
  int32_T c5_i24;
  int32_T c5_i25;
  int32_T c5_i26;
  int32_T c5_i27;
  int32_T c5_i28;
  int32_T c5_i29;
  int32_T c5_i3;
  int32_T c5_i30;
  int32_T c5_i31;
  int32_T c5_i32;
  int32_T c5_i33;
  int32_T c5_i34;
  int32_T c5_i35;
  int32_T c5_i36;
  int32_T c5_i37;
  int32_T c5_i38;
  int32_T c5_i39;
  int32_T c5_i4;
  int32_T c5_i40;
  int32_T c5_i41;
  int32_T c5_i42;
  int32_T c5_i43;
  int32_T c5_i44;
  int32_T c5_i45;
  int32_T c5_i46;
  int32_T c5_i47;
  int32_T c5_i48;
  int32_T c5_i49;
  int32_T c5_i5;
  int32_T c5_i50;
  int32_T c5_i51;
  int32_T c5_i52;
  int32_T c5_i53;
  int32_T c5_i54;
  int32_T c5_i55;
  int32_T c5_i56;
  int32_T c5_i57;
  int32_T c5_i58;
  int32_T c5_i59;
  int32_T c5_i6;
  int32_T c5_i60;
  int32_T c5_i61;
  int32_T c5_i62;
  int32_T c5_i63;
  int32_T c5_i64;
  int32_T c5_i65;
  int32_T c5_i66;
  int32_T c5_i67;
  int32_T c5_i68;
  int32_T c5_i69;
  int32_T c5_i70;
  int32_T c5_i71;
  int32_T c5_i72;
  int32_T c5_i73;
  int32_T c5_i74;
  int32_T c5_i75;
  int32_T c5_i76;
  int32_T c5_i77;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_i_a;
  int32_T c5_i_q0;
  int32_T c5_i_q1;
  int32_T c5_i_qY;
  int32_T c5_i_x;
  int32_T c5_j_q0;
  int32_T c5_j_q1;
  int32_T c5_j_qY;
  int32_T c5_j_x;
  int32_T c5_k_q0;
  int32_T c5_k_q1;
  int32_T c5_k_qY;
  int32_T c5_l_q0;
  int32_T c5_l_q1;
  int32_T c5_l_qY;
  int32_T c5_m_x;
  int32_T c5_q0;
  int32_T c5_q1;
  int32_T c5_qY;
  int32_T c5_q_i;
  int32_T c5_r;
  int32_T c5_stripeFirstLabel;
  int32_T c5_thread;
  boolean_T c5_overflow;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_lb_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_P[0] = 0.0;
  for (c5_thread = 0; c5_thread < 8; c5_thread++) {
    c5_b_thread = (real_T)c5_thread;
    c5_b_c = c5_b_thread * 20.0 + 1.0;
    c5_b_varargin_1 = (c5_b_thread + 1.0) * 20.0 + 1.0;
    c5_x = c5_b_varargin_1;
    c5_b_x = c5_x;
    c5_c_x = c5_b_x;
    c5_d_a = c5_c_x;
    c5_d_x = c5_d_a;
    c5_e_x = c5_d_x;
    c5_minval = muDoubleScalarMin(c5_e_x, 161.0);
    c5_d1 = muDoubleScalarRound(c5_minval);
    if (c5_d1 < 2.147483648E+9) {
      if (c5_d1 >= -2.147483648E+9) {
        c5_i = (int32_T)c5_d1;
      } else {
        c5_i = MIN_int32_T;
      }
    } else if (c5_d1 >= 2.147483648E+9) {
      c5_i = MAX_int32_T;
    } else {
      c5_i = 0;
    }

    c5_chunksSizeAndLabels[(int32_T)c5_b_c - 1] = c5_i;
    c5_k_x = c5_b_c / 2.0;
    c5_l_x = c5_k_x;
    c5_y = c5_l_x;
    c5_y = muDoubleScalarFloor(c5_y);
    c5_label = c5_y * 60.0 + 1.0;
    c5_firstLabel = c5_label;
    c5_startC = c5_b_c;
    c5_d6 = c5_b_thread * 20.0 + 1.0;
    c5_c_varargin_1 = (c5_b_thread + 1.0) * 20.0;
    c5_n_x = c5_c_varargin_1;
    c5_o_x = c5_n_x;
    c5_p_x = c5_o_x;
    c5_g_a = c5_p_x;
    c5_q_x = c5_g_a;
    c5_r_x = c5_q_x;
    c5_d7 = muDoubleScalarMin(c5_r_x, 160.0);
    c5_i10 = (int32_T)(c5_d7 + (1.0 - c5_d6)) - 1;
    for (c5_d_c = 0; c5_d_c <= c5_i10; c5_d_c++) {
      c5_b_c = c5_d6 + (real_T)c5_d_c;
      for (c5_d_r = 0; c5_d_r < 120; c5_d_r++) {
        c5_b_r = (real_T)c5_d_r + 1.0;
        c5_i15 = (int32_T)c5_b_c;
        if ((c5_i15 < 1) || (c5_i15 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c5_i15, 1, 160, &c5_he_emlrtBCI, &c5_st);
        }

        if (c5_varargin_1[((int32_T)c5_b_r + 120 * (c5_i15 - 1)) - 1]) {
          if ((c5_b_c > c5_startC) && c5_varargin_1[((int32_T)c5_b_r + 120 *
               ((int32_T)(c5_b_c - 1.0) - 1)) - 1]) {
            c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
              c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)(c5_b_c - 1.0) - 1)) - 1];
          } else if ((c5_b_r < 120.0) && (c5_b_c > c5_startC) && c5_varargin_1
                     [((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)(c5_b_c - 1.0)
                       - 1)) - 1]) {
            if ((c5_b_c > c5_startC) && (c5_b_r > 1.0) && c5_varargin_1
                [((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c - 1.0) - 1))
                - 1]) {
              c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c - 1.0)
                         - 1)) - 1];
              do {
                c5_exitg1 = 0;
                c5_i23 = (int32_T)(c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                  c5_b_c - 1)) - 1] + 1.0);
                if ((c5_i23 < 1) || (c5_i23 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i23, 1, 9601, &c5_je_emlrtBCI,
                    &c5_st);
                }

                if (c5_P[c5_i23 - 1] < c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                      c5_b_c - 1)) - 1]) {
                  c5_i31 = (int32_T)(c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                    c5_b_c - 1)) - 1] + 1.0);
                  if ((c5_i31 < 1) || (c5_i31 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i31, 1, 9601,
                      &c5_ke_emlrtBCI, &c5_st);
                  }

                  c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                    c5_P[c5_i31 - 1];
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              if (c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c -
                     1.0) - 1)) - 1] != c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                   ((int32_T)(c5_b_c - 1.0) - 1)) - 1]) {
                c5_d_rootj = c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)
                  (c5_b_c - 1.0) - 1)) - 1];
                do {
                  c5_exitg1 = 0;
                  c5_i45 = (int32_T)(c5_d_rootj + 1.0);
                  if ((c5_i45 < 1) || (c5_i45 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i45, 1, 9601,
                      &c5_oe_emlrtBCI, &c5_st);
                  }

                  if (c5_P[c5_i45 - 1] < c5_d_rootj) {
                    c5_i51 = (int32_T)(c5_d_rootj + 1.0);
                    if ((c5_i51 < 1) || (c5_i51 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i51, 1, 9601,
                        &c5_re_emlrtBCI, &c5_st);
                    }

                    c5_d_rootj = c5_P[c5_i51 - 1];
                  } else {
                    c5_exitg1 = 1;
                  }
                } while (c5_exitg1 == 0);

                if (c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] >
                    c5_d_rootj) {
                  c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                    c5_d_rootj;
                }

                do {
                  c5_exitg1 = 0;
                  c5_i65 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                    ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                  if ((c5_i65 < 1) || (c5_i65 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i65, 1, 9601,
                      &c5_af_emlrtBCI, &c5_st);
                  }

                  if (c5_P[c5_i65 - 1] < c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                       ((int32_T)(c5_b_c - 1.0) - 1)) - 1]) {
                    c5_i71 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                      ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                    if ((c5_i71 < 1) || (c5_i71 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i71, 1, 9601,
                        &c5_cf_emlrtBCI, &c5_st);
                    }

                    c5_g_j = c5_P[c5_i71 - 1];
                    c5_i76 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                      ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                    if ((c5_i76 < 1) || (c5_i76 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i76, 1, 9601,
                        &c5_ef_emlrtBCI, &c5_st);
                    }

                    c5_P[c5_i76 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                      c5_b_c - 1)) - 1];
                    c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)(c5_b_c -
                              1.0) - 1)) - 1] = c5_g_j;
                  } else {
                    c5_exitg1 = 1;
                  }
                } while (c5_exitg1 == 0);

                c5_i74 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                  ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                if ((c5_i74 < 1) || (c5_i74 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i74, 1, 9601, &c5_bf_emlrtBCI,
                    &c5_st);
                }

                c5_P[c5_i74 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                  c5_b_c - 1)) - 1];
              }

              do {
                c5_exitg1 = 0;
                c5_i44 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                  ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                if ((c5_i44 < 1) || (c5_i44 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i44, 1, 9601, &c5_ne_emlrtBCI,
                    &c5_st);
                }

                if (c5_P[c5_i44 - 1] < c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                     ((int32_T)(c5_b_c - 1.0) - 1)) - 1]) {
                  c5_i50 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                    ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                  if ((c5_i50 < 1) || (c5_i50 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i50, 1, 9601,
                      &c5_qe_emlrtBCI, &c5_st);
                  }

                  c5_g_j = c5_P[c5_i50 - 1];
                  c5_i59 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                    ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                  if ((c5_i59 < 1) || (c5_i59 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i59, 1, 9601,
                      &c5_ue_emlrtBCI, &c5_st);
                  }

                  c5_P[c5_i59 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                    c5_b_c - 1)) - 1];
                  c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c -
                            1.0) - 1)) - 1] = c5_g_j;
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              c5_i57 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
              if ((c5_i57 < 1) || (c5_i57 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i57, 1, 9601, &c5_pe_emlrtBCI,
                  &c5_st);
              }

              c5_P[c5_i57 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                c5_b_c - 1)) - 1];
            } else if ((c5_b_r > 1.0) && c5_varargin_1[((int32_T)(c5_b_r - 1.0)
                        + 120 * ((int32_T)c5_b_c - 1)) - 1]) {
              c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)c5_b_c - 1)) -
                1];
              do {
                c5_exitg1 = 0;
                c5_i25 = (int32_T)(c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                  c5_b_c - 1)) - 1] + 1.0);
                if ((c5_i25 < 1) || (c5_i25 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i25, 1, 9601, &c5_le_emlrtBCI,
                    &c5_st);
                }

                if (c5_P[c5_i25 - 1] < c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                      c5_b_c - 1)) - 1]) {
                  c5_i33 = (int32_T)(c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                    c5_b_c - 1)) - 1] + 1.0);
                  if ((c5_i33 < 1) || (c5_i33 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i33, 1, 9601,
                      &c5_me_emlrtBCI, &c5_st);
                  }

                  c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                    c5_P[c5_i33 - 1];
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              if (c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)c5_b_c - 1))
                  - 1] != c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)
                    (c5_b_c - 1.0) - 1)) - 1]) {
                c5_d_rootj = c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)
                  (c5_b_c - 1.0) - 1)) - 1];
                do {
                  c5_exitg1 = 0;
                  c5_i48 = (int32_T)(c5_d_rootj + 1.0);
                  if ((c5_i48 < 1) || (c5_i48 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i48, 1, 9601,
                      &c5_te_emlrtBCI, &c5_st);
                  }

                  if (c5_P[c5_i48 - 1] < c5_d_rootj) {
                    c5_i54 = (int32_T)(c5_d_rootj + 1.0);
                    if ((c5_i54 < 1) || (c5_i54 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i54, 1, 9601,
                        &c5_xe_emlrtBCI, &c5_st);
                    }

                    c5_d_rootj = c5_P[c5_i54 - 1];
                  } else {
                    c5_exitg1 = 1;
                  }
                } while (c5_exitg1 == 0);

                if (c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] >
                    c5_d_rootj) {
                  c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                    c5_d_rootj;
                }

                do {
                  c5_exitg1 = 0;
                  c5_i67 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                    ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                  if ((c5_i67 < 1) || (c5_i67 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i67, 1, 9601,
                      &c5_df_emlrtBCI, &c5_st);
                  }

                  if (c5_P[c5_i67 - 1] < c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                       ((int32_T)(c5_b_c - 1.0) - 1)) - 1]) {
                    c5_i72 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                      ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                    if ((c5_i72 < 1) || (c5_i72 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i72, 1, 9601,
                        &c5_gf_emlrtBCI, &c5_st);
                    }

                    c5_g_j = c5_P[c5_i72 - 1];
                    c5_i77 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                      ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                    if ((c5_i77 < 1) || (c5_i77 > 9601)) {
                      emlrtDynamicBoundsCheckR2012b(c5_i77, 1, 9601,
                        &c5_hf_emlrtBCI, &c5_st);
                    }

                    c5_P[c5_i77 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                      c5_b_c - 1)) - 1];
                    c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)(c5_b_c -
                              1.0) - 1)) - 1] = c5_g_j;
                  } else {
                    c5_exitg1 = 1;
                  }
                } while (c5_exitg1 == 0);

                c5_i75 = (int32_T)(c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 *
                  ((int32_T)(c5_b_c - 1.0) - 1)) - 1] + 1.0);
                if ((c5_i75 < 1) || (c5_i75 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i75, 1, 9601, &c5_ff_emlrtBCI,
                    &c5_st);
                }

                c5_P[c5_i75 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                  c5_b_c - 1)) - 1];
              }

              do {
                c5_exitg1 = 0;
                c5_i47 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                  ((int32_T)c5_b_c - 1)) - 1] + 1.0);
                if ((c5_i47 < 1) || (c5_i47 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i47, 1, 9601, &c5_se_emlrtBCI,
                    &c5_st);
                }

                if (c5_P[c5_i47 - 1] < c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                     ((int32_T)c5_b_c - 1)) - 1]) {
                  c5_i53 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                    ((int32_T)c5_b_c - 1)) - 1] + 1.0);
                  if ((c5_i53 < 1) || (c5_i53 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i53, 1, 9601,
                      &c5_we_emlrtBCI, &c5_st);
                  }

                  c5_g_j = c5_P[c5_i53 - 1];
                  c5_i61 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                    ((int32_T)c5_b_c - 1)) - 1] + 1.0);
                  if ((c5_i61 < 1) || (c5_i61 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i61, 1, 9601,
                      &c5_ye_emlrtBCI, &c5_st);
                  }

                  c5_P[c5_i61 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                    c5_b_c - 1)) - 1];
                  c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)c5_b_c - 1))
                    - 1] = c5_g_j;
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              c5_i58 = (int32_T)(c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 *
                ((int32_T)c5_b_c - 1)) - 1] + 1.0);
              if ((c5_i58 < 1) || (c5_i58 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i58, 1, 9601, &c5_ve_emlrtBCI,
                  &c5_st);
              }

              c5_P[c5_i58 - 1] = c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)
                c5_b_c - 1)) - 1];
            } else {
              c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
                c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * ((int32_T)(c5_b_c - 1.0)
                         - 1)) - 1];
            }
          } else if ((c5_b_c > c5_startC) && (c5_b_r > 1.0) && c5_varargin_1
                     [((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c - 1.0)
                       - 1)) - 1]) {
            c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
              c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)(c5_b_c - 1.0) -
                       1)) - 1];
          } else if ((c5_b_r > 1.0) && c5_varargin_1[((int32_T)(c5_b_r - 1.0) +
                      120 * ((int32_T)c5_b_c - 1)) - 1]) {
            c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
              c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * ((int32_T)c5_b_c - 1)) - 1];
          } else {
            c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] =
              c5_label;
            c5_i20 = (int32_T)(c5_label + 1.0);
            if ((c5_i20 < 1) || (c5_i20 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i20, 1, 9601, &c5_nd_emlrtBCI,
                &c5_st);
            }

            c5_P[c5_i20 - 1] = c5_label;
            c5_label++;
          }
        } else {
          c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] = 0.0;
        }
      }
    }

    c5_d10 = muDoubleScalarRound(c5_label - c5_firstLabel);
    if (c5_d10 < 2.147483648E+9) {
      if (c5_d10 >= -2.147483648E+9) {
        c5_i13 = (int32_T)c5_d10;
      } else {
        c5_i13 = MIN_int32_T;
      }
    } else if (c5_d10 >= 2.147483648E+9) {
      c5_i13 = MAX_int32_T;
    } else {
      c5_i13 = 0;
    }

    c5_chunksSizeAndLabels[(int32_T)(c5_startC + 1.0) - 1] = c5_i13;
  }

  c5_c = c5_chunksSizeAndLabels[0];
  while ((real_T)c5_c <= 160.0) {
    for (c5_r = 0; c5_r < 120; c5_r++) {
      c5_b_r = (real_T)c5_r + 1.0;
      if ((c5_c < 1) || (c5_c > 160)) {
        emlrtDynamicBoundsCheckR2012b(c5_c, 1, 160, &c5_rd_emlrtBCI, &c5_st);
      }

      c5_d = c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1];
      if (c5_d != 0.0) {
        if (c5_b_r > 1.0) {
          c5_b_q0 = c5_c;
          c5_b_q1 = 1;
          if ((c5_b_q1 < 0) && (c5_b_q0 > c5_b_q1 + MAX_int32_T)) {
            c5_b_qY = MAX_int32_T;
          } else if ((c5_b_q1 > 0) && (c5_b_q0 < c5_b_q1 + MIN_int32_T)) {
            c5_b_qY = MIN_int32_T;
          } else {
            c5_b_qY = c5_b_q0 - c5_b_q1;
          }

          c5_i2 = c5_b_qY;
          if ((c5_i2 < 1) || (c5_i2 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i2, 1, 160, &c5_sd_emlrtBCI, &c5_st);
          }

          c5_d3 = c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * (c5_i2 - 1)) - 1];
          if (c5_d3 != 0.0) {
            c5_b_st.site = &c5_mb_emlrtRSI;
            c5_e_q0 = c5_c;
            c5_e_q1 = 1;
            if ((c5_e_q1 < 0) && (c5_e_q0 > c5_e_q1 + MAX_int32_T)) {
              c5_e_qY = MAX_int32_T;
            } else if ((c5_e_q1 > 0) && (c5_e_q0 < c5_e_q1 + MIN_int32_T)) {
              c5_e_qY = MIN_int32_T;
            } else {
              c5_e_qY = c5_e_q0 - c5_e_q1;
            }

            c5_i6 = c5_e_qY;
            if ((c5_i6 < 1) || (c5_i6 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i6, 1, 160, &c5_ud_emlrtBCI,
                &c5_b_st);
            }

            c5_b_i = c5_b_L[((int32_T)(c5_b_r - 1.0) + 120 * (c5_i6 - 1)) - 1];
            c5_j = c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1];
            c5_c_st.site = &c5_qb_emlrtRSI;
            c5_e_i = c5_b_i;
            c5_d8 = c5_e_i;
            do {
              c5_exitg1 = 0;
              c5_i11 = (int32_T)(c5_d8 + 1.0);
              if ((c5_i11 < 1) || (c5_i11 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i11, 1, 9601, &c5_ae_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i11 - 1] < c5_d8) {
                c5_i16 = (int32_T)(c5_d8 + 1.0);
                if ((c5_i16 < 1) || (c5_i16 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i16, 1, 9601, &c5_be_emlrtBCI,
                    &c5_c_st);
                }

                c5_d8 = c5_P[c5_i16 - 1];
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            if (c5_b_i != c5_j) {
              c5_c_st.site = &c5_rb_emlrtRSI;
              c5_h_i = c5_j;
              c5_rootj = c5_h_i;
              do {
                c5_exitg1 = 0;
                c5_i22 = (int32_T)(c5_rootj + 1.0);
                if ((c5_i22 < 1) || (c5_i22 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i22, 1, 9601, &c5_ae_emlrtBCI,
                    &c5_c_st);
                }

                if (c5_P[c5_i22 - 1] < c5_rootj) {
                  c5_i30 = (int32_T)(c5_rootj + 1.0);
                  if ((c5_i30 < 1) || (c5_i30 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i30, 1, 9601,
                      &c5_be_emlrtBCI, &c5_c_st);
                  }

                  c5_rootj = c5_P[c5_i30 - 1];
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              if (c5_d8 > c5_rootj) {
                c5_d8 = c5_rootj;
              }

              c5_c_st.site = &c5_sb_emlrtRSI;
              c5_n_i = c5_j;
              c5_d_root = c5_d8;
              do {
                c5_exitg1 = 0;
                c5_i49 = (int32_T)(c5_n_i + 1.0);
                if ((c5_i49 < 1) || (c5_i49 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i49, 1, 9601, &c5_de_emlrtBCI,
                    &c5_c_st);
                }

                if (c5_P[c5_i49 - 1] < c5_n_i) {
                  c5_i56 = (int32_T)(c5_n_i + 1.0);
                  if ((c5_i56 < 1) || (c5_i56 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i56, 1, 9601,
                      &c5_ee_emlrtBCI, &c5_c_st);
                  }

                  c5_h_j = c5_P[c5_i56 - 1];
                  c5_i64 = (int32_T)(c5_n_i + 1.0);
                  if ((c5_i64 < 1) || (c5_i64 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i64, 1, 9601,
                      &c5_od_emlrtBCI, &c5_c_st);
                  }

                  c5_P[c5_i64 - 1] = c5_d_root;
                  c5_n_i = c5_h_j;
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              c5_i63 = (int32_T)(c5_n_i + 1.0);
              if ((c5_i63 < 1) || (c5_i63 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i63, 1, 9601, &c5_pd_emlrtBCI,
                  &c5_c_st);
              }

              c5_P[c5_i63 - 1] = c5_d_root;
            }

            c5_c_st.site = &c5_tb_emlrtRSI;
            c5_i_i = c5_b_i;
            c5_root = c5_d8;
            do {
              c5_exitg1 = 0;
              c5_i24 = (int32_T)(c5_i_i + 1.0);
              if ((c5_i24 < 1) || (c5_i24 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i24, 1, 9601, &c5_de_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i24 - 1] < c5_i_i) {
                c5_i32 = (int32_T)(c5_i_i + 1.0);
                if ((c5_i32 < 1) || (c5_i32 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i32, 1, 9601, &c5_ee_emlrtBCI,
                    &c5_c_st);
                }

                c5_d_j = c5_P[c5_i32 - 1];
                c5_i40 = (int32_T)(c5_i_i + 1.0);
                if ((c5_i40 < 1) || (c5_i40 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i40, 1, 9601, &c5_od_emlrtBCI,
                    &c5_c_st);
                }

                c5_P[c5_i40 - 1] = c5_root;
                c5_i_i = c5_d_j;
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            c5_i39 = (int32_T)(c5_i_i + 1.0);
            if ((c5_i39 < 1) || (c5_i39 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i39, 1, 9601, &c5_pd_emlrtBCI,
                &c5_c_st);
            }

            c5_P[c5_i39 - 1] = c5_root;
            c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1] = c5_d8;
          }
        }

        if (c5_b_r < 120.0) {
          c5_c_q0 = c5_c;
          c5_c_q1 = 1;
          if ((c5_c_q1 < 0) && (c5_c_q0 > c5_c_q1 + MAX_int32_T)) {
            c5_c_qY = MAX_int32_T;
          } else if ((c5_c_q1 > 0) && (c5_c_q0 < c5_c_q1 + MIN_int32_T)) {
            c5_c_qY = MIN_int32_T;
          } else {
            c5_c_qY = c5_c_q0 - c5_c_q1;
          }

          c5_i3 = c5_c_qY;
          if ((c5_i3 < 1) || (c5_i3 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i3, 1, 160, &c5_td_emlrtBCI, &c5_st);
          }

          c5_d4 = c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * (c5_i3 - 1)) - 1];
          if (c5_d4 != 0.0) {
            c5_b_st.site = &c5_nb_emlrtRSI;
            c5_f_q0 = c5_c;
            c5_f_q1 = 1;
            if ((c5_f_q1 < 0) && (c5_f_q0 > c5_f_q1 + MAX_int32_T)) {
              c5_f_qY = MAX_int32_T;
            } else if ((c5_f_q1 > 0) && (c5_f_q0 < c5_f_q1 + MIN_int32_T)) {
              c5_f_qY = MIN_int32_T;
            } else {
              c5_f_qY = c5_f_q0 - c5_f_q1;
            }

            c5_i8 = c5_f_qY;
            if ((c5_i8 < 1) || (c5_i8 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c5_i8, 1, 160, &c5_xd_emlrtBCI,
                &c5_b_st);
            }

            c5_c_i = c5_b_L[((int32_T)(c5_b_r + 1.0) + 120 * (c5_i8 - 1)) - 1];
            c5_b_j = c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1];
            c5_c_st.site = &c5_qb_emlrtRSI;
            c5_f_i = c5_c_i;
            c5_d9 = c5_f_i;
            do {
              c5_exitg1 = 0;
              c5_i12 = (int32_T)(c5_d9 + 1.0);
              if ((c5_i12 < 1) || (c5_i12 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i12, 1, 9601, &c5_ae_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i12 - 1] < c5_d9) {
                c5_i17 = (int32_T)(c5_d9 + 1.0);
                if ((c5_i17 < 1) || (c5_i17 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i17, 1, 9601, &c5_be_emlrtBCI,
                    &c5_c_st);
                }

                c5_d9 = c5_P[c5_i17 - 1];
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            if (c5_c_i != c5_b_j) {
              c5_c_st.site = &c5_rb_emlrtRSI;
              c5_j_i = c5_b_j;
              c5_b_rootj = c5_j_i;
              do {
                c5_exitg1 = 0;
                c5_i26 = (int32_T)(c5_b_rootj + 1.0);
                if ((c5_i26 < 1) || (c5_i26 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i26, 1, 9601, &c5_ae_emlrtBCI,
                    &c5_c_st);
                }

                if (c5_P[c5_i26 - 1] < c5_b_rootj) {
                  c5_i34 = (int32_T)(c5_b_rootj + 1.0);
                  if ((c5_i34 < 1) || (c5_i34 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i34, 1, 9601,
                      &c5_be_emlrtBCI, &c5_c_st);
                  }

                  c5_b_rootj = c5_P[c5_i34 - 1];
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              if (c5_d9 > c5_b_rootj) {
                c5_d9 = c5_b_rootj;
              }

              c5_c_st.site = &c5_sb_emlrtRSI;
              c5_o_i = c5_b_j;
              c5_e_root = c5_d9;
              do {
                c5_exitg1 = 0;
                c5_i52 = (int32_T)(c5_o_i + 1.0);
                if ((c5_i52 < 1) || (c5_i52 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i52, 1, 9601, &c5_de_emlrtBCI,
                    &c5_c_st);
                }

                if (c5_P[c5_i52 - 1] < c5_o_i) {
                  c5_i60 = (int32_T)(c5_o_i + 1.0);
                  if ((c5_i60 < 1) || (c5_i60 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i60, 1, 9601,
                      &c5_ee_emlrtBCI, &c5_c_st);
                  }

                  c5_i_j = c5_P[c5_i60 - 1];
                  c5_i69 = (int32_T)(c5_o_i + 1.0);
                  if ((c5_i69 < 1) || (c5_i69 > 9601)) {
                    emlrtDynamicBoundsCheckR2012b(c5_i69, 1, 9601,
                      &c5_od_emlrtBCI, &c5_c_st);
                  }

                  c5_P[c5_i69 - 1] = c5_e_root;
                  c5_o_i = c5_i_j;
                } else {
                  c5_exitg1 = 1;
                }
              } while (c5_exitg1 == 0);

              c5_i66 = (int32_T)(c5_o_i + 1.0);
              if ((c5_i66 < 1) || (c5_i66 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i66, 1, 9601, &c5_pd_emlrtBCI,
                  &c5_c_st);
              }

              c5_P[c5_i66 - 1] = c5_e_root;
            }

            c5_c_st.site = &c5_tb_emlrtRSI;
            c5_l_i = c5_c_i;
            c5_b_root = c5_d9;
            do {
              c5_exitg1 = 0;
              c5_i28 = (int32_T)(c5_l_i + 1.0);
              if ((c5_i28 < 1) || (c5_i28 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i28, 1, 9601, &c5_de_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i28 - 1] < c5_l_i) {
                c5_i36 = (int32_T)(c5_l_i + 1.0);
                if ((c5_i36 < 1) || (c5_i36 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i36, 1, 9601, &c5_ee_emlrtBCI,
                    &c5_c_st);
                }

                c5_e_j = c5_P[c5_i36 - 1];
                c5_i43 = (int32_T)(c5_l_i + 1.0);
                if ((c5_i43 < 1) || (c5_i43 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i43, 1, 9601, &c5_od_emlrtBCI,
                    &c5_c_st);
                }

                c5_P[c5_i43 - 1] = c5_b_root;
                c5_l_i = c5_e_j;
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            c5_i41 = (int32_T)(c5_l_i + 1.0);
            if ((c5_i41 < 1) || (c5_i41 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i41, 1, 9601, &c5_pd_emlrtBCI,
                &c5_c_st);
            }

            c5_P[c5_i41 - 1] = c5_b_root;
            c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1] = c5_d9;
          }
        }

        c5_d_q0 = c5_c;
        c5_d_q1 = 1;
        if ((c5_d_q1 < 0) && (c5_d_q0 > c5_d_q1 + MAX_int32_T)) {
          c5_d_qY = MAX_int32_T;
        } else if ((c5_d_q1 > 0) && (c5_d_q0 < c5_d_q1 + MIN_int32_T)) {
          c5_d_qY = MIN_int32_T;
        } else {
          c5_d_qY = c5_d_q0 - c5_d_q1;
        }

        c5_i4 = c5_d_qY;
        if ((c5_i4 < 1) || (c5_i4 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c5_i4, 1, 160, &c5_wd_emlrtBCI, &c5_st);
        }

        c5_d5 = c5_b_L[((int32_T)c5_b_r + 120 * (c5_i4 - 1)) - 1];
        if (c5_d5 != 0.0) {
          c5_b_st.site = &c5_ob_emlrtRSI;
          c5_g_q0 = c5_c;
          c5_g_q1 = 1;
          if ((c5_g_q1 < 0) && (c5_g_q0 > c5_g_q1 + MAX_int32_T)) {
            c5_g_qY = MAX_int32_T;
          } else if ((c5_g_q1 > 0) && (c5_g_q0 < c5_g_q1 + MIN_int32_T)) {
            c5_g_qY = MIN_int32_T;
          } else {
            c5_g_qY = c5_g_q0 - c5_g_q1;
          }

          c5_i9 = c5_g_qY;
          if ((c5_i9 < 1) || (c5_i9 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c5_i9, 1, 160, &c5_yd_emlrtBCI,
              &c5_b_st);
          }

          c5_d_i = c5_b_L[((int32_T)c5_b_r + 120 * (c5_i9 - 1)) - 1];
          c5_c_j = c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1];
          c5_c_st.site = &c5_qb_emlrtRSI;
          c5_g_i = c5_d_i;
          c5_d11 = c5_g_i;
          do {
            c5_exitg1 = 0;
            c5_i14 = (int32_T)(c5_d11 + 1.0);
            if ((c5_i14 < 1) || (c5_i14 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i14, 1, 9601, &c5_ae_emlrtBCI,
                &c5_c_st);
            }

            if (c5_P[c5_i14 - 1] < c5_d11) {
              c5_i19 = (int32_T)(c5_d11 + 1.0);
              if ((c5_i19 < 1) || (c5_i19 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i19, 1, 9601, &c5_be_emlrtBCI,
                  &c5_c_st);
              }

              c5_d11 = c5_P[c5_i19 - 1];
            } else {
              c5_exitg1 = 1;
            }
          } while (c5_exitg1 == 0);

          if (c5_d_i != c5_c_j) {
            c5_c_st.site = &c5_rb_emlrtRSI;
            c5_k_i = c5_c_j;
            c5_c_rootj = c5_k_i;
            do {
              c5_exitg1 = 0;
              c5_i27 = (int32_T)(c5_c_rootj + 1.0);
              if ((c5_i27 < 1) || (c5_i27 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i27, 1, 9601, &c5_ae_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i27 - 1] < c5_c_rootj) {
                c5_i35 = (int32_T)(c5_c_rootj + 1.0);
                if ((c5_i35 < 1) || (c5_i35 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i35, 1, 9601, &c5_be_emlrtBCI,
                    &c5_c_st);
                }

                c5_c_rootj = c5_P[c5_i35 - 1];
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            if (c5_d11 > c5_c_rootj) {
              c5_d11 = c5_c_rootj;
            }

            c5_c_st.site = &c5_sb_emlrtRSI;
            c5_p_i = c5_c_j;
            c5_f_root = c5_d11;
            do {
              c5_exitg1 = 0;
              c5_i55 = (int32_T)(c5_p_i + 1.0);
              if ((c5_i55 < 1) || (c5_i55 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i55, 1, 9601, &c5_de_emlrtBCI,
                  &c5_c_st);
              }

              if (c5_P[c5_i55 - 1] < c5_p_i) {
                c5_i62 = (int32_T)(c5_p_i + 1.0);
                if ((c5_i62 < 1) || (c5_i62 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i62, 1, 9601, &c5_ee_emlrtBCI,
                    &c5_c_st);
                }

                c5_j_j = c5_P[c5_i62 - 1];
                c5_i70 = (int32_T)(c5_p_i + 1.0);
                if ((c5_i70 < 1) || (c5_i70 > 9601)) {
                  emlrtDynamicBoundsCheckR2012b(c5_i70, 1, 9601, &c5_od_emlrtBCI,
                    &c5_c_st);
                }

                c5_P[c5_i70 - 1] = c5_f_root;
                c5_p_i = c5_j_j;
              } else {
                c5_exitg1 = 1;
              }
            } while (c5_exitg1 == 0);

            c5_i68 = (int32_T)(c5_p_i + 1.0);
            if ((c5_i68 < 1) || (c5_i68 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i68, 1, 9601, &c5_pd_emlrtBCI,
                &c5_c_st);
            }

            c5_P[c5_i68 - 1] = c5_f_root;
          }

          c5_c_st.site = &c5_tb_emlrtRSI;
          c5_m_i = c5_d_i;
          c5_c_root = c5_d11;
          do {
            c5_exitg1 = 0;
            c5_i29 = (int32_T)(c5_m_i + 1.0);
            if ((c5_i29 < 1) || (c5_i29 > 9601)) {
              emlrtDynamicBoundsCheckR2012b(c5_i29, 1, 9601, &c5_de_emlrtBCI,
                &c5_c_st);
            }

            if (c5_P[c5_i29 - 1] < c5_m_i) {
              c5_i38 = (int32_T)(c5_m_i + 1.0);
              if ((c5_i38 < 1) || (c5_i38 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i38, 1, 9601, &c5_ee_emlrtBCI,
                  &c5_c_st);
              }

              c5_f_j = c5_P[c5_i38 - 1];
              c5_i46 = (int32_T)(c5_m_i + 1.0);
              if ((c5_i46 < 1) || (c5_i46 > 9601)) {
                emlrtDynamicBoundsCheckR2012b(c5_i46, 1, 9601, &c5_od_emlrtBCI,
                  &c5_c_st);
              }

              c5_P[c5_i46 - 1] = c5_c_root;
              c5_m_i = c5_f_j;
            } else {
              c5_exitg1 = 1;
            }
          } while (c5_exitg1 == 0);

          c5_i42 = (int32_T)(c5_m_i + 1.0);
          if ((c5_i42 < 1) || (c5_i42 > 9601)) {
            emlrtDynamicBoundsCheckR2012b(c5_i42, 1, 9601, &c5_pd_emlrtBCI,
              &c5_c_st);
          }

          c5_P[c5_i42 - 1] = c5_c_root;
          c5_b_L[((int32_T)c5_b_r + 120 * (c5_c - 1)) - 1] = c5_d11;
        }
      }
    }

    if ((c5_c < 1) || (c5_c > 168)) {
      emlrtDynamicBoundsCheckR2012b(c5_c, 1, 168, &c5_qd_emlrtBCI, &c5_st);
    }

    c5_c = c5_chunksSizeAndLabels[c5_c - 1];
  }

  c5_b_numComponents = 1.0;
  c5_c = 1;
  while ((real_T)c5_c <= 160.0) {
    c5_q0 = c5_c;
    c5_q1 = 1;
    if ((c5_q1 < 0) && (c5_q0 > c5_q1 + MAX_int32_T)) {
      c5_qY = MAX_int32_T;
    } else if ((c5_q1 > 0) && (c5_q0 < c5_q1 + MIN_int32_T)) {
      c5_qY = MIN_int32_T;
    } else {
      c5_qY = c5_q0 - c5_q1;
    }

    c5_f_x = c5_qY;
    c5_g_x = c5_f_x;
    c5_h_x = c5_g_x;
    c5_i_x = c5_h_x;
    c5_e_a = c5_i_x;
    c5_j_x = c5_e_a;
    c5_z = (real_T)c5_j_x / 2.0;
    c5_d2 = muDoubleScalarRound(c5_z);
    if (c5_d2 < 2.147483648E+9) {
      if (c5_d2 >= -2.147483648E+9) {
        c5_i5 = (int32_T)c5_d2;
      } else {
        c5_i5 = MIN_int32_T;
      }
    } else if (c5_d2 >= 2.147483648E+9) {
      c5_i5 = MAX_int32_T;
    } else {
      c5_i5 = 0;
    }

    c5_b_z = c5_i5;
    c5_m_x = c5_b_z;
    c5_f_a = c5_m_x;
    c5_i7 = (int64_T)c5_f_a * 60LL;
    if (c5_i7 > 2147483647LL) {
      c5_i7 = 2147483647LL;
    } else if (c5_i7 < -2147483648LL) {
      c5_i7 = -2147483648LL;
    }

    c5_b_y = (int32_T)c5_i7;
    c5_h_q0 = c5_b_y;
    c5_h_q1 = 1;
    if ((c5_h_q1 < 0) && (c5_h_q0 < MIN_int32_T - c5_h_q1)) {
      c5_h_qY = MIN_int32_T;
    } else if ((c5_h_q1 > 0) && (c5_h_q0 > MAX_int32_T - c5_h_q1)) {
      c5_h_qY = MAX_int32_T;
    } else {
      c5_h_qY = c5_h_q0 + c5_h_q1;
    }

    c5_stripeFirstLabel = c5_h_qY;
    c5_i_q0 = c5_stripeFirstLabel;
    c5_i_q1 = 1;
    if ((c5_i_q1 < 0) && (c5_i_q0 < MIN_int32_T - c5_i_q1)) {
      c5_i_qY = MIN_int32_T;
    } else if ((c5_i_q1 > 0) && (c5_i_q0 > MAX_int32_T - c5_i_q1)) {
      c5_i_qY = MAX_int32_T;
    } else {
      c5_i_qY = c5_i_q0 + c5_i_q1;
    }

    c5_i18 = c5_i_qY;
    c5_j_q0 = c5_c;
    c5_j_q1 = 1;
    if ((c5_j_q1 < 0) && (c5_j_q0 < MIN_int32_T - c5_j_q1)) {
      c5_j_qY = MIN_int32_T;
    } else if ((c5_j_q1 > 0) && (c5_j_q0 > MAX_int32_T - c5_j_q1)) {
      c5_j_qY = MAX_int32_T;
    } else {
      c5_j_qY = c5_j_q0 + c5_j_q1;
    }

    c5_i21 = c5_j_qY;
    if ((c5_i21 < 1) || (c5_i21 > 168)) {
      emlrtDynamicBoundsCheckR2012b(c5_i21, 1, 168, &c5_ce_emlrtBCI, &c5_st);
    }

    c5_k_q0 = c5_stripeFirstLabel;
    c5_k_q1 = c5_chunksSizeAndLabels[c5_i21 - 1];
    if ((c5_k_q0 < 0) && (c5_k_q1 < MIN_int32_T - c5_k_q0)) {
      c5_k_qY = MIN_int32_T;
    } else if ((c5_k_q0 > 0) && (c5_k_q1 > MAX_int32_T - c5_k_q0)) {
      c5_k_qY = MAX_int32_T;
    } else {
      c5_k_qY = c5_k_q0 + c5_k_q1;
    }

    c5_i37 = c5_k_qY;
    c5_b_st.site = &c5_pb_emlrtRSI;
    c5_h_a = c5_i18;
    c5_b = c5_i37;
    c5_i_a = c5_h_a;
    c5_b_b = c5_b;
    if (c5_i_a > c5_b_b) {
      c5_overflow = false;
    } else {
      c5_overflow = (c5_b_b > 2147483646);
    }

    if (c5_overflow) {
      c5_c_st.site = &c5_i_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_c_st);
    }

    for (c5_q_i = c5_i18; c5_q_i <= c5_i37; c5_q_i++) {
      if ((c5_q_i < 1) || (c5_q_i > 9601)) {
        emlrtDynamicBoundsCheckR2012b(c5_q_i, 1, 9601, &c5_ge_emlrtBCI, &c5_st);
      }

      c5_l_q0 = c5_q_i;
      c5_l_q1 = 1;
      if ((c5_l_q1 < 0) && (c5_l_q0 > c5_l_q1 + MAX_int32_T)) {
        c5_l_qY = MAX_int32_T;
      } else if ((c5_l_q1 > 0) && (c5_l_q0 < c5_l_q1 + MIN_int32_T)) {
        c5_l_qY = MIN_int32_T;
      } else {
        c5_l_qY = c5_l_q0 - c5_l_q1;
      }

      if (c5_P[c5_q_i - 1] < (real_T)c5_l_qY) {
        c5_i73 = (int32_T)(c5_P[c5_q_i - 1] + 1.0);
        if ((c5_i73 < 1) || (c5_i73 > 9601)) {
          emlrtDynamicBoundsCheckR2012b(c5_i73, 1, 9601, &c5_ie_emlrtBCI, &c5_st);
        }

        c5_P[c5_q_i - 1] = c5_P[c5_i73 - 1];
      } else {
        c5_P[c5_q_i - 1] = c5_b_numComponents;
        c5_b_numComponents++;
      }
    }

    if ((c5_c < 1) || (c5_c > 168)) {
      emlrtDynamicBoundsCheckR2012b(c5_c, 1, 168, &c5_fe_emlrtBCI, &c5_st);
    }

    c5_c = c5_chunksSizeAndLabels[c5_c - 1];
  }

  c5_b_numComponents--;
  for (c5_c_c = 0; c5_c_c < 160; c5_c_c++) {
    c5_b_c = (real_T)c5_c_c + 1.0;
    for (c5_c_r = 0; c5_c_r < 120; c5_c_r++) {
      c5_b_r = (real_T)c5_c_r + 1.0;
      c5_b_i1 = (int32_T)(c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1))
                          - 1] + 1.0);
      if ((c5_b_i1 < 1) || (c5_b_i1 > 9601)) {
        emlrtDynamicBoundsCheckR2012b(c5_b_i1, 1, 9601, &c5_vd_emlrtBCI, &c5_st);
      }

      c5_b_L[((int32_T)c5_b_r + 120 * ((int32_T)c5_b_c - 1)) - 1] = c5_P[c5_b_i1
        - 1];
    }
  }

  *c5_numComponents = c5_b_numComponents;
}

static void c5_rand(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, real_T c5_varargin_1, c5_emxArray_real_T *
                    c5_r)
{
  static uint32_T c5_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  static char_T c5_b_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st;
  const mxArray *c5_h_y = NULL;
  const mxArray *c5_i_y = NULL;
  real_T c5_b_j;
  real_T c5_b_k;
  real_T c5_b_r;
  real_T c5_b_varargin_1;
  real_T c5_c_kk;
  real_T c5_c_varargin_1;
  real_T c5_d;
  real_T c5_d1;
  int32_T c5_b_i1;
  int32_T c5_b_kk;
  int32_T c5_c_k;
  int32_T c5_d_a;
  int32_T c5_exitg1;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_j;
  int32_T c5_k;
  int32_T c5_kk;
  uint32_T c5_u[2];
  uint32_T c5_b_y;
  uint32_T c5_c_y;
  uint32_T c5_d_y;
  uint32_T c5_e_y;
  uint32_T c5_f_y;
  uint32_T c5_g_y;
  uint32_T c5_mti;
  uint32_T c5_y;
  boolean_T c5_b_isvalid;
  boolean_T c5_exitg2;
  boolean_T c5_isvalid;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  c5_st.site = &c5_ub_emlrtRSI;
  c5_b_varargin_1 = c5_varargin_1;
  if (!chartInstance->c5_method_not_empty) {
    chartInstance->c5_method = 7U;
    chartInstance->c5_method_not_empty = true;
  }

  c5_b_st.site = &c5_vb_emlrtRSI;
  c5_c_varargin_1 = c5_b_varargin_1;
  if (!chartInstance->c5_c_state_not_empty) {
    for (c5_i = 0; c5_i < 625; c5_i++) {
      chartInstance->c5_c_state[c5_i] = c5_uv[c5_i];
    }

    chartInstance->c5_c_state_not_empty = true;
  }

  c5_b_i1 = c5_r->size[0] * c5_r->size[1];
  c5_r->size[0] = (int32_T)c5_c_varargin_1;
  c5_r->size[1] = 3;
  c5_emxEnsureCapacity_real_T1(chartInstance, &c5_b_st, c5_r, c5_b_i1,
    &c5_y_emlrtRTEI);
  c5_d = (real_T)(c5_r->size[0] * 3);
  c5_i2 = (int32_T)c5_d - 1;
  for (c5_k = 0; c5_k <= c5_i2; c5_k++) {
    c5_b_k = (real_T)c5_k + 1.0;
    c5_c_st.site = &c5_wb_emlrtRSI;
    c5_d_st.site = &c5_xb_emlrtRSI;

    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on:        */
    /*                                                                         */
    /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
    /*                                                                         */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
    /*  All rights reserved.                                                   */
    /*                                                                         */
    /*  Redistribution and use in source and binary forms, with or without     */
    /*  modification, are permitted provided that the following conditions     */
    /*  are met:                                                               */
    /*                                                                         */
    /*    1. Redistributions of source code must retain the above copyright    */
    /*       notice, this list of conditions and the following disclaimer.     */
    /*                                                                         */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer      */
    /*       in the documentation and/or other materials provided with the     */
    /*       distribution.                                                     */
    /*                                                                         */
    /*    3. The names of its contributors may not be used to endorse or       */
    /*       promote products derived from this software without specific      */
    /*       prior written permission.                                         */
    /*                                                                         */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
    /*                                                                         */
    /* =============================   END   ================================= */
    do {
      c5_exitg1 = 0;
      for (c5_j = 0; c5_j < 2; c5_j++) {
        c5_b_j = (real_T)c5_j + 1.0;
        c5_mti = chartInstance->c5_c_state[624] + 1U;
        if ((real_T)c5_mti >= 625.0) {
          for (c5_kk = 0; c5_kk < 227; c5_kk++) {
            c5_c_kk = (real_T)c5_kk + 1.0;
            c5_y = (chartInstance->c5_c_state[(int32_T)c5_c_kk - 1] &
                    2147483648U) | (chartInstance->c5_c_state[(int32_T)(c5_c_kk
              + 1.0) - 1] & 2147483647U);
            c5_b_y = c5_y;
            c5_d_y = c5_b_y;
            if ((c5_d_y & 1U) == 0U) {
              c5_d_y >>= 1U;
            } else {
              c5_d_y = c5_d_y >> 1U ^ 2567483615U;
            }

            chartInstance->c5_c_state[(int32_T)c5_c_kk - 1] =
              chartInstance->c5_c_state[(int32_T)(c5_c_kk + 397.0) - 1] ^ c5_d_y;
          }

          for (c5_b_kk = 0; c5_b_kk < 396; c5_b_kk++) {
            c5_c_kk = (real_T)c5_b_kk + 228.0;
            c5_y = (chartInstance->c5_c_state[(int32_T)c5_c_kk - 1] &
                    2147483648U) | (chartInstance->c5_c_state[(int32_T)(c5_c_kk
              + 1.0) - 1] & 2147483647U);
            c5_f_y = c5_y;
            c5_g_y = c5_f_y;
            if ((c5_g_y & 1U) == 0U) {
              c5_g_y >>= 1U;
            } else {
              c5_g_y = c5_g_y >> 1U ^ 2567483615U;
            }

            chartInstance->c5_c_state[(int32_T)c5_c_kk - 1] =
              chartInstance->c5_c_state[(int32_T)((c5_c_kk + 1.0) - 228.0) - 1] ^
              c5_g_y;
          }

          c5_y = (chartInstance->c5_c_state[623] & 2147483648U) |
            (chartInstance->c5_c_state[0] & 2147483647U);
          c5_c_y = c5_y;
          c5_e_y = c5_c_y;
          if ((c5_e_y & 1U) == 0U) {
            c5_e_y >>= 1U;
          } else {
            c5_e_y = c5_e_y >> 1U ^ 2567483615U;
          }

          chartInstance->c5_c_state[623] = chartInstance->c5_c_state[396] ^
            c5_e_y;
          c5_mti = 1U;
        }

        c5_y = chartInstance->c5_c_state[(int32_T)c5_mti - 1];
        chartInstance->c5_c_state[624] = c5_mti;
        c5_y ^= c5_y >> 11U;
        c5_y ^= c5_y << 7U & 2636928640U;
        c5_y ^= c5_y << 15U & 4022730752U;
        c5_y ^= c5_y >> 18U;
        c5_u[(int32_T)c5_b_j - 1] = c5_y;
      }

      c5_u[0] >>= 5U;
      c5_u[1] >>= 6U;
      c5_b_r = 1.1102230246251565E-16 * ((real_T)c5_u[0] * 6.7108864E+7 +
        (real_T)c5_u[1]);
      if (c5_b_r == 0.0) {
        if (((real_T)chartInstance->c5_c_state[624] >= 1.0) && ((real_T)
             chartInstance->c5_c_state[624] < 625.0)) {
          c5_isvalid = true;
        } else {
          c5_isvalid = false;
        }

        c5_b_isvalid = c5_isvalid;
        if (c5_isvalid) {
          c5_b_isvalid = false;
          c5_c_k = 0;
          c5_exitg2 = false;
          while ((!c5_exitg2) && (c5_c_k + 1 < 625)) {
            if ((real_T)chartInstance->c5_c_state[c5_c_k] == 0.0) {
              c5_d_a = c5_c_k + 1;
              c5_c_k = c5_d_a;
            } else {
              c5_b_isvalid = true;
              c5_exitg2 = true;
            }
          }
        }

        if (!c5_b_isvalid) {
          c5_h_y = NULL;
          sf_mex_assign(&c5_h_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2,
            1, 37), false);
          c5_i_y = NULL;
          sf_mex_assign(&c5_i_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2,
            1, 37), false);
          sf_mex_call(&c5_d_st, &c5_e_emlrtMCI, "error", 0U, 2U, 14, c5_h_y, 14,
                      sf_mex_call(&c5_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c5_d_st, NULL, "message", 1U, 1U, 14, c5_i_y)));
        }
      } else {
        c5_exitg1 = 1;
      }
    } while (c5_exitg1 == 0);

    c5_d1 = c5_b_r;
    c5_r->data[(int32_T)c5_b_k - 1] = c5_d1;
  }
}

const mxArray *sf_c5_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static void c5_ddaLine(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_x1, real_T c5_y1, real_T c5_x2, real_T
  c5_y2, c5_emxArray_real_T *c5_x, c5_emxArray_real_T *c5_y)
{
  emlrtStack c5_st;
  real_T c5_b;
  real_T c5_b_step;
  real_T c5_b_x;
  real_T c5_b_y;
  real_T c5_c_x;
  real_T c5_c_y;
  real_T c5_d_a;
  real_T c5_d_x;
  real_T c5_d_y;
  real_T c5_dx;
  real_T c5_dy;
  real_T c5_e_x;
  real_T c5_e_y;
  real_T c5_f_x;
  real_T c5_f_y;
  real_T c5_g_x;
  real_T c5_g_y;
  real_T c5_h_x;
  real_T c5_h_y;
  real_T c5_i_x;
  real_T c5_i_y;
  real_T c5_j_x;
  real_T c5_k_x;
  real_T c5_l_x;
  real_T c5_m_x;
  real_T c5_n_x;
  real_T c5_o_x;
  real_T c5_p_x;
  real_T c5_q_x;
  real_T c5_step;
  real_T c5_varargin_1;
  real_T c5_varargin_2;
  real_T c5_x_inc;
  real_T c5_y_inc;
  int32_T c5_b_i;
  int32_T c5_b_i1;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 1);
  c5_dx = c5_x2 - c5_x1;
  c5_dy = c5_y2 - c5_y1;
  c5_b_x = c5_dx;
  c5_c_x = c5_b_x;
  c5_d_x = c5_c_x;
  c5_varargin_1 = muDoubleScalarAbs(c5_d_x);
  c5_e_x = c5_dy;
  c5_f_x = c5_e_x;
  c5_g_x = c5_f_x;
  c5_varargin_2 = muDoubleScalarAbs(c5_g_x);
  c5_h_x = c5_varargin_1;
  c5_b_y = c5_varargin_2;
  c5_i_x = c5_h_x;
  c5_c_y = c5_b_y;
  c5_j_x = c5_i_x;
  c5_d_y = c5_c_y;
  c5_d_a = c5_j_x;
  c5_b = c5_d_y;
  c5_k_x = c5_d_a;
  c5_e_y = c5_b;
  c5_l_x = c5_k_x;
  c5_f_y = c5_e_y;
  c5_step = muDoubleScalarMax(c5_l_x, c5_f_y);
  c5_x_inc = c5_dx / c5_step;
  c5_y_inc = c5_dy / c5_step;
  c5_m_x = c5_x1;
  c5_g_y = c5_y1;
  c5_x->size[0] = 0;
  c5_y->size[0] = 0;
  c5_b_step = c5_step;
  c5_i = (int32_T)(c5_b_step + 1.0);
  emlrtForLoopVectorCheckR2021a(0.0, 1.0, c5_b_step, mxDOUBLE_CLASS, c5_i,
    &c5_kb_emlrtRTEI, (emlrtConstCTX)c5_sp);
  for (c5_b_i = 0; c5_b_i < c5_i; c5_b_i++) {
    covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 3, 1);
    c5_n_x = c5_m_x;
    c5_o_x = c5_n_x;
    c5_h_y = c5_o_x;
    c5_h_y = muDoubleScalarRound(c5_h_y);
    c5_b_i1 = c5_x->size[0];
    c5_i2 = c5_x->size[0];
    c5_x->size[0]++;
    c5_st.site = &c5_kc_emlrtRSI;
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_st, c5_x, c5_i2,
      &c5_ab_emlrtRTEI);
    c5_x->data[c5_b_i1] = c5_h_y;
    c5_p_x = c5_g_y;
    c5_q_x = c5_p_x;
    c5_i_y = c5_q_x;
    c5_i_y = muDoubleScalarRound(c5_i_y);
    c5_i3 = c5_y->size[0];
    c5_i4 = c5_y->size[0];
    c5_y->size[0]++;
    c5_st.site = &c5_jc_emlrtRSI;
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_st, c5_y, c5_i4,
      &c5_bb_emlrtRTEI);
    c5_y->data[c5_i3] = c5_i_y;
    c5_m_x += c5_x_inc;
    c5_g_y += c5_y_inc;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c5_covrtInstance, 4U, 0, 3, 0);
}

static void c5_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_B_out, const char_T *c5_identifier,
  uint8_T c5_y[19200])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_B_out), &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_B_out);
}

static void c5_b_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  uint8_T c5_y[19200])
{
  int32_T c5_i;
  uint8_T c5_uv[19200];
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_uv, 1, 3, 0U, 1, 0U, 2, 120,
                160);
  for (c5_i = 0; c5_i < 19200; c5_i++) {
    c5_y[c5_i] = c5_uv[c5_i];
  }

  sf_mex_destroy(&c5_u);
}

static real_T c5_c_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_len_back_center, const char_T
  *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_len_back_center),
    &c5_thisId);
  sf_mex_destroy(&c5_b_len_back_center);
  return c5_y;
}

static real_T c5_d_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_d;
  real_T c5_y;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint32_T c5_e_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_method, const char_T *c5_identifier,
  boolean_T *c5_svPtr)
{
  emlrtMsgIdentifier c5_thisId;
  uint32_T c5_y;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_method),
    &c5_thisId, c5_svPtr);
  sf_mex_destroy(&c5_b_method);
  return c5_y;
}

static uint32_T c5_f_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr)
{
  uint32_T c5_b_u;
  uint32_T c5_y;
  (void)chartInstance;
  if (mxIsEmpty(c5_u)) {
    *c5_svPtr = false;
  } else {
    *c5_svPtr = true;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 7, 0U, 0, 0U, 0);
    c5_y = c5_b_u;
  }

  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_g_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_d_state, const char_T *c5_identifier,
  boolean_T *c5_svPtr, uint32_T c5_y[625])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_d_state), &c5_thisId,
                        c5_svPtr, c5_y);
  sf_mex_destroy(&c5_d_state);
}

static void c5_h_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr, uint32_T c5_y[625])
{
  int32_T c5_i;
  uint32_T c5_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c5_u)) {
    *c5_svPtr = false;
  } else {
    *c5_svPtr = true;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_uv, 1, 7, 0U, 1, 0U, 1, 625);
    for (c5_i = 0; c5_i < 625; c5_i++) {
      c5_y[c5_i] = c5_uv[c5_i];
    }
  }

  sf_mex_destroy(&c5_u);
}

static void c5_i_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_d_state, const char_T *c5_identifier,
  boolean_T *c5_svPtr, uint32_T c5_y[2])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_d_state), &c5_thisId,
                        c5_svPtr, c5_y);
  sf_mex_destroy(&c5_d_state);
}

static void c5_j_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T *c5_svPtr, uint32_T c5_y[2])
{
  int32_T c5_i;
  uint32_T c5_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c5_u)) {
    *c5_svPtr = false;
  } else {
    *c5_svPtr = true;
    sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c5_i = 0; c5_i < 2; c5_i++) {
      c5_y[c5_i] = c5_uv[c5_i];
    }
  }

  sf_mex_destroy(&c5_u);
}

static uint8_T c5_k_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_flightControlSystem, const
  char_T *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_y;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_flightControlSystem), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_flightControlSystem);
  return c5_y;
}

static uint8_T c5_l_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_b_u;
  uint8_T c5_y;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_b_u;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_slStringInitializeDynamicBuffers
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_chart_data_browse_helper(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig)
{
  real_T c5_d;
  real_T c5_d1;
  real_T c5_d2;
  real_T c5_d3;
  real_T c5_d4;
  real_T c5_d5;
  real_T c5_d6;
  real_T c5_d7;
  *c5_mxData = NULL;
  *c5_mxData = NULL;
  *c5_isValueTooBig = 0U;
  switch (c5_ssIdNumber) {
   case 15U:
    c5_d = *chartInstance->c5_len_center;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 16U:
    c5_d1 = *chartInstance->c5_len_left;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 17U:
    c5_d2 = *chartInstance->c5_len_right;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d2, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 18U:
    c5_d3 = *chartInstance->c5_len_left_or;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d3, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 19U:
    c5_d4 = *chartInstance->c5_len_right_or;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d4, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 20U:
    c5_d5 = *chartInstance->c5_len_back_center;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d5, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 21U:
    c5_d6 = *chartInstance->c5_len_back_left;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d6, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 22U:
    c5_d7 = *chartInstance->c5_len_back_right;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d7, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_R, 3, 0U,
      1U, 0U, 2, 120, 160), false);
    break;

   case 5U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_R_out, 3,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 6U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_G_out, 3,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 7U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_B_out, 3,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 12U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_G, 3, 0U,
      1U, 0U, 2, 120, 160), false);
    break;

   case 13U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_B, 3, 0U,
      1U, 0U, 2, 120, 160), false);
    break;

   case 14U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_BW, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;
  }
}

static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c5_input0), 14, sf_mex_dup(c5_input1)), false);
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
  return c5_m;
}

static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1)
{
  (void)chartInstance;
  sf_mex_call(c5_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c5_input0), 14,
              sf_mex_dup(c5_input1));
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
}

static void c5_b_sortrows(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T *c5_y)
{
  c5_emxArray_int32_T *c5_idx;
  c5_emxArray_int32_T *c5_iwork;
  c5_emxArray_real_T *c5_x;
  c5_emxArray_real_T *c5_ycol;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st;
  int32_T c5_iv1[2];
  int32_T c5_iv[1];
  int32_T c5_b;
  int32_T c5_b_b;
  int32_T c5_b_i;
  int32_T c5_b_i1;
  int32_T c5_b_i2;
  int32_T c5_b_j;
  int32_T c5_b_k;
  int32_T c5_b_loop_ub;
  int32_T c5_b_n;
  int32_T c5_c_b;
  int32_T c5_c_i;
  int32_T c5_c_j;
  int32_T c5_c_k;
  int32_T c5_d_a;
  int32_T c5_d_b;
  int32_T c5_d_i;
  int32_T c5_e_b;
  int32_T c5_e_i;
  int32_T c5_f_b;
  int32_T c5_g_b;
  int32_T c5_h_b;
  int32_T c5_i;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_j;
  int32_T c5_k;
  int32_T c5_kEnd;
  int32_T c5_len;
  int32_T c5_loop_ub;
  int32_T c5_m;
  int32_T c5_n;
  int32_T c5_np1;
  int32_T c5_p;
  int32_T c5_pEnd;
  int32_T c5_q;
  int32_T c5_qEnd;
  boolean_T c5_b_overflow;
  boolean_T c5_c_overflow;
  boolean_T c5_d_overflow;
  boolean_T c5_overflow;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_f_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  c5_emxInit_real_T(chartInstance, &c5_st, &c5_x, 2, &c5_cb_emlrtRTEI);
  c5_i = c5_x->size[0] * c5_x->size[1];
  c5_x->size[0] = c5_y->size[0];
  c5_x->size[1] = 2;
  c5_b_st.site = &c5_f_emlrtRSI;
  c5_emxEnsureCapacity_real_T1(chartInstance, &c5_b_st, c5_x, c5_i,
    &c5_cb_emlrtRTEI);
  c5_loop_ub = (c5_y->size[0] << 1) - 1;
  for (c5_b_i1 = 0; c5_b_i1 <= c5_loop_ub; c5_b_i1++) {
    c5_x->data[c5_b_i1] = c5_y->data[c5_b_i1];
  }

  c5_n = c5_x->size[0];
  c5_emxInit_int32_T(chartInstance, &c5_st, &c5_idx, 1, &c5_db_emlrtRTEI);
  c5_i2 = c5_idx->size[0];
  c5_idx->size[0] = c5_x->size[0];
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_idx, c5_i2,
    &c5_db_emlrtRTEI);
  c5_b_loop_ub = c5_x->size[0] - 1;
  for (c5_i3 = 0; c5_i3 <= c5_b_loop_ub; c5_i3++) {
    c5_idx->data[c5_i3] = 0;
  }

  c5_b_st.site = &c5_h_emlrtRSI;
  c5_b_n = c5_n;
  c5_emxInit_int32_T(chartInstance, &c5_b_st, &c5_iwork, 1, &c5_fb_emlrtRTEI);
  c5_len = c5_idx->size[0];
  c5_i4 = c5_iwork->size[0];
  c5_iwork->size[0] = c5_len;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_b_st, c5_iwork, c5_i4,
    &c5_eb_emlrtRTEI);
  c5_iv[0] = c5_iwork->size[0];
  c5_i5 = c5_iwork->size[0];
  c5_iwork->size[0] = c5_iv[0];
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_b_st, c5_iwork, c5_i5,
    &c5_fb_emlrtRTEI);
  c5_np1 = c5_b_n + 1;
  c5_i6 = c5_b_n - 1;
  c5_c_st.site = &c5_j_emlrtRSI;
  c5_b = c5_i6;
  c5_b_b = c5_b;
  c5_overflow = (c5_b_b > 2147483645);
  if (c5_overflow) {
    c5_d_st.site = &c5_i_emlrtRSI;
    c5_check_forloop_overflow_error(chartInstance, &c5_d_st);
  }

  for (c5_k = 1; c5_k <= c5_i6; c5_k += 2) {
    if (c5_sortLE(chartInstance, c5_x, c5_k, c5_k + 1)) {
      c5_idx->data[c5_k - 1] = c5_k;
      c5_idx->data[c5_k] = c5_k + 1;
    } else {
      c5_idx->data[c5_k - 1] = c5_k + 1;
      c5_idx->data[c5_k] = c5_k;
    }
  }

  if ((c5_b_n & 1) != 0) {
    c5_idx->data[c5_b_n - 1] = c5_b_n;
  }

  c5_b_i = 2;
  while (c5_b_i < c5_b_n) {
    c5_d_a = c5_b_i;
    c5_b_i2 = c5_d_a << 1;
    c5_j = 1;
    for (c5_pEnd = 1 + c5_b_i; c5_pEnd < c5_np1; c5_pEnd = c5_qEnd + c5_b_i) {
      c5_p = c5_j - 1;
      c5_q = c5_pEnd - 1;
      c5_qEnd = c5_j + c5_b_i2;
      if (c5_qEnd > c5_np1) {
        c5_qEnd = c5_np1;
      }

      c5_b_k = 0;
      c5_kEnd = c5_qEnd - c5_j;
      while (c5_b_k + 1 <= c5_kEnd) {
        if (c5_sortLE(chartInstance, c5_x, c5_idx->data[c5_p], c5_idx->data[c5_q]))
        {
          c5_iwork->data[c5_b_k] = c5_idx->data[c5_p];
          c5_p++;
          if (c5_p + 1 == c5_pEnd) {
            while (c5_q + 1 < c5_qEnd) {
              c5_b_k++;
              c5_iwork->data[c5_b_k] = c5_idx->data[c5_q];
              c5_q++;
            }
          }
        } else {
          c5_iwork->data[c5_b_k] = c5_idx->data[c5_q];
          c5_q++;
          if (c5_q + 1 == c5_qEnd) {
            while (c5_p + 1 < c5_pEnd) {
              c5_b_k++;
              c5_iwork->data[c5_b_k] = c5_idx->data[c5_p];
              c5_p++;
            }
          }
        }

        c5_b_k++;
      }

      c5_p = c5_j - 2;
      c5_c_st.site = &c5_k_emlrtRSI;
      c5_e_b = c5_kEnd;
      c5_f_b = c5_e_b;
      if (c5_f_b < 1) {
        c5_c_overflow = false;
      } else {
        c5_c_overflow = (c5_f_b > 2147483646);
      }

      if (c5_c_overflow) {
        c5_d_st.site = &c5_i_emlrtRSI;
        c5_check_forloop_overflow_error(chartInstance, &c5_d_st);
      }

      for (c5_c_k = 0; c5_c_k < c5_kEnd; c5_c_k++) {
        c5_b_k = c5_c_k;
        c5_idx->data[(c5_p + c5_b_k) + 1] = c5_iwork->data[c5_b_k];
      }

      c5_j = c5_qEnd;
    }

    c5_b_i = c5_b_i2;
  }

  c5_emxFree_int32_T(chartInstance, &c5_iwork);
  c5_emxFree_real_T(chartInstance, &c5_x);
  c5_st.site = &c5_g_emlrtRSI;
  c5_m = c5_y->size[0];
  c5_iv1[0] = c5_m;
  c5_emxInit_real_T1(chartInstance, &c5_st, &c5_ycol, 1, &c5_hb_emlrtRTEI);
  c5_i7 = c5_ycol->size[0];
  c5_ycol->size[0] = c5_iv1[0];
  c5_emxEnsureCapacity_real_T(chartInstance, &c5_st, c5_ycol, c5_i7,
    &c5_gb_emlrtRTEI);
  for (c5_b_j = 0; c5_b_j < 2; c5_b_j++) {
    c5_c_j = c5_b_j;
    c5_b_st.site = &c5_l_emlrtRSI;
    c5_c_b = c5_m;
    c5_d_b = c5_c_b;
    if (c5_d_b < 1) {
      c5_b_overflow = false;
    } else {
      c5_b_overflow = (c5_d_b > 2147483646);
    }

    if (c5_b_overflow) {
      c5_c_st.site = &c5_i_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_c_st);
    }

    for (c5_c_i = 0; c5_c_i < c5_m; c5_c_i++) {
      c5_d_i = c5_c_i;
      c5_ycol->data[c5_d_i] = c5_y->data[(c5_idx->data[c5_d_i] + c5_y->size[0] *
        c5_c_j) - 1];
    }

    c5_b_st.site = &c5_m_emlrtRSI;
    c5_g_b = c5_m;
    c5_h_b = c5_g_b;
    if (c5_h_b < 1) {
      c5_d_overflow = false;
    } else {
      c5_d_overflow = (c5_h_b > 2147483646);
    }

    if (c5_d_overflow) {
      c5_c_st.site = &c5_i_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_c_st);
    }

    for (c5_e_i = 0; c5_e_i < c5_m; c5_e_i++) {
      c5_d_i = c5_e_i;
      c5_y->data[c5_d_i + c5_y->size[0] * c5_c_j] = c5_ycol->data[c5_d_i];
    }
  }

  c5_emxFree_real_T(chartInstance, &c5_ycol);
  c5_emxFree_int32_T(chartInstance, &c5_idx);
}

static void c5_emxEnsureCapacity_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation)
{
  int32_T c5_i;
  int32_T c5_newCapacity;
  int32_T c5_newNumel;
  void *c5_newData;
  (void)chartInstance;
  if (c5_oldNumel < 0) {
    c5_oldNumel = 0;
  }

  c5_newNumel = 1;
  for (c5_i = 0; c5_i < c5_emxArray->numDimensions; c5_i++) {
    c5_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c5_newNumel,
      (size_t)(uint32_T)c5_emxArray->size[c5_i], c5_srcLocation, (void *)c5_sp);
  }

  if (c5_newNumel > c5_emxArray->allocatedSize) {
    c5_newCapacity = c5_emxArray->allocatedSize;
    if (c5_newCapacity < 16) {
      c5_newCapacity = 16;
    }

    while (c5_newCapacity < c5_newNumel) {
      if (c5_newCapacity > 1073741823) {
        c5_newCapacity = MAX_int32_T;
      } else {
        c5_newCapacity <<= 1;
      }
    }

    c5_newData = emlrtCallocMex((uint32_T)c5_newCapacity, sizeof(real_T));
    if (c5_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
    }

    if (c5_emxArray->data != NULL) {
      memcpy(c5_newData, c5_emxArray->data, sizeof(real_T) * (uint32_T)
             c5_oldNumel);
      if (c5_emxArray->canFreeData) {
        emlrtFreeMex(c5_emxArray->data);
      }
    }

    c5_emxArray->data = (real_T *)c5_newData;
    c5_emxArray->allocatedSize = c5_newCapacity;
    c5_emxArray->canFreeData = true;
  }
}

static void c5_emxEnsureCapacity_int32_T(SFc5_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation)
{
  int32_T c5_i;
  int32_T c5_newCapacity;
  int32_T c5_newNumel;
  void *c5_newData;
  (void)chartInstance;
  if (c5_oldNumel < 0) {
    c5_oldNumel = 0;
  }

  c5_newNumel = 1;
  for (c5_i = 0; c5_i < c5_emxArray->numDimensions; c5_i++) {
    c5_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c5_newNumel,
      (size_t)(uint32_T)c5_emxArray->size[c5_i], c5_srcLocation, (void *)c5_sp);
  }

  if (c5_newNumel > c5_emxArray->allocatedSize) {
    c5_newCapacity = c5_emxArray->allocatedSize;
    if (c5_newCapacity < 16) {
      c5_newCapacity = 16;
    }

    while (c5_newCapacity < c5_newNumel) {
      if (c5_newCapacity > 1073741823) {
        c5_newCapacity = MAX_int32_T;
      } else {
        c5_newCapacity <<= 1;
      }
    }

    c5_newData = emlrtCallocMex((uint32_T)c5_newCapacity, sizeof(int32_T));
    if (c5_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
    }

    if (c5_emxArray->data != NULL) {
      memcpy(c5_newData, c5_emxArray->data, sizeof(int32_T) * (uint32_T)
             c5_oldNumel);
      if (c5_emxArray->canFreeData) {
        emlrtFreeMex(c5_emxArray->data);
      }
    }

    c5_emxArray->data = (int32_T *)c5_newData;
    c5_emxArray->allocatedSize = c5_newCapacity;
    c5_emxArray->canFreeData = true;
  }
}

static void c5_emxEnsureCapacity_real_T1(SFc5_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation)
{
  int32_T c5_i;
  int32_T c5_newCapacity;
  int32_T c5_newNumel;
  void *c5_newData;
  (void)chartInstance;
  if (c5_oldNumel < 0) {
    c5_oldNumel = 0;
  }

  c5_newNumel = 1;
  for (c5_i = 0; c5_i < c5_emxArray->numDimensions; c5_i++) {
    c5_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c5_newNumel,
      (size_t)(uint32_T)c5_emxArray->size[c5_i], c5_srcLocation, (void *)c5_sp);
  }

  if (c5_newNumel > c5_emxArray->allocatedSize) {
    c5_newCapacity = c5_emxArray->allocatedSize;
    if (c5_newCapacity < 16) {
      c5_newCapacity = 16;
    }

    while (c5_newCapacity < c5_newNumel) {
      if (c5_newCapacity > 1073741823) {
        c5_newCapacity = MAX_int32_T;
      } else {
        c5_newCapacity <<= 1;
      }
    }

    c5_newData = emlrtCallocMex((uint32_T)c5_newCapacity, sizeof(real_T));
    if (c5_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
    }

    if (c5_emxArray->data != NULL) {
      memcpy(c5_newData, c5_emxArray->data, sizeof(real_T) * (uint32_T)
             c5_oldNumel);
      if (c5_emxArray->canFreeData) {
        emlrtFreeMex(c5_emxArray->data);
      }
    }

    c5_emxArray->data = (real_T *)c5_newData;
    c5_emxArray->allocatedSize = c5_newCapacity;
    c5_emxArray->canFreeData = true;
  }
}

static void c5_emxInit_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation)
{
  c5_emxArray_real_T *c5_emxArray;
  int32_T c5_i;
  (void)chartInstance;
  *c5_pEmxArray = (c5_emxArray_real_T *)emlrtMallocMex(sizeof(c5_emxArray_real_T));
  if ((void *)*c5_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray = *c5_pEmxArray;
  c5_emxArray->data = (real_T *)NULL;
  c5_emxArray->numDimensions = c5_numDimensions;
  c5_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c5_numDimensions);
  if ((void *)c5_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray->allocatedSize = 0;
  c5_emxArray->canFreeData = true;
  for (c5_i = 0; c5_i < c5_numDimensions; c5_i++) {
    c5_emxArray->size[c5_i] = 0;
  }
}

static void c5_emxInit_real_T1(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation)
{
  c5_emxArray_real_T *c5_emxArray;
  int32_T c5_i;
  (void)chartInstance;
  *c5_pEmxArray = (c5_emxArray_real_T *)emlrtMallocMex(sizeof(c5_emxArray_real_T));
  if ((void *)*c5_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray = *c5_pEmxArray;
  c5_emxArray->data = (real_T *)NULL;
  c5_emxArray->numDimensions = c5_numDimensions;
  c5_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c5_numDimensions);
  if ((void *)c5_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray->allocatedSize = 0;
  c5_emxArray->canFreeData = true;
  for (c5_i = 0; c5_i < c5_numDimensions; c5_i++) {
    c5_emxArray->size[c5_i] = 0;
  }
}

static void c5_emxInit_int32_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation)
{
  c5_emxArray_int32_T *c5_emxArray;
  int32_T c5_i;
  (void)chartInstance;
  *c5_pEmxArray = (c5_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c5_emxArray_int32_T));
  if ((void *)*c5_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray = *c5_pEmxArray;
  c5_emxArray->data = (int32_T *)NULL;
  c5_emxArray->numDimensions = c5_numDimensions;
  c5_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c5_numDimensions);
  if ((void *)c5_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, (void *)c5_sp);
  }

  c5_emxArray->allocatedSize = 0;
  c5_emxArray->canFreeData = true;
  for (c5_i = 0; c5_i < c5_numDimensions; c5_i++) {
    c5_emxArray->size[c5_i] = 0;
  }
}

static void c5_emxFree_real_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_real_T **c5_pEmxArray)
{
  (void)chartInstance;
  if (*c5_pEmxArray != (c5_emxArray_real_T *)NULL) {
    if (((*c5_pEmxArray)->data != (real_T *)NULL) && (*c5_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c5_pEmxArray)->data);
    }

    emlrtFreeMex((*c5_pEmxArray)->size);
    emlrtFreeMex(*c5_pEmxArray);
    *c5_pEmxArray = (c5_emxArray_real_T *)NULL;
  }
}

static void c5_emxFree_int32_T(SFc5_flightControlSystemInstanceStruct
  *chartInstance, c5_emxArray_int32_T **c5_pEmxArray)
{
  (void)chartInstance;
  if (*c5_pEmxArray != (c5_emxArray_int32_T *)NULL) {
    if (((*c5_pEmxArray)->data != (int32_T *)NULL) && (*c5_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c5_pEmxArray)->data);
    }

    emlrtFreeMex((*c5_pEmxArray)->size);
    emlrtFreeMex(*c5_pEmxArray);
    *c5_pEmxArray = (c5_emxArray_int32_T *)NULL;
  }
}

static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_len_center = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_len_left = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_len_right = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c5_len_left_or = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c5_len_right_or = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c5_len_back_center = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c5_len_back_left = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c5_len_back_right = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c5_R = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_R_out = (uint8_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c5_G_out = (uint8_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c5_B_out = (uint8_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c5_G = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_B = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_BW = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(492177203U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2524263049U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1657338103U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3636537478U);
}

mxArray *sf_c5_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c5_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c5_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtlstqGzEUhmdMYuxcXFO66CKLeQLjS3PrppMEGgwJmLSLLgSqRtbYQ6WR0cgh2XnZR+iyj9B"
    "H6CP1ETIXOR1U0xmSaa2UCoQ4x5xjf79+i2PZw0srXq14f3tuWfX4bMS7ZmVrU8V2vNvqzPIb93"
    "kn3vJ2RpJ8JPBwHJ8hYmmM5jfD0Odp/yPrZ//6iv52rn9T5bP1483j6vdcvX5jRf1mrr6t4lPI5"
    "1Lps9RpfRwvH8xxbhTHiwdzXBnF8SrlcAs4nmkcSUxJCD2EP0FMQkmEITz7pXh2NZ7dPA8lvjn3"
    "c1CKp6XxtPI8IphMpSk8nVI8WxrPluJRVrvnWD9Pt9Q70NB4GoonsZoZHP1S97KtcWznOCAXBt1"
    "LrxRPU+NpKh71lzGIZ1CKZ0fj2cnzqAuqhqftPq7+1+9fxVPXeJKYETnl46x+ZP9+3rO1ea+W60"
    "utwJqp3+EWcNQ0jvYS4sPCTc/PC7cKfywK9BhpeiTx2WswEnwiEHPeBpRE4PLk/cXJKbjqd/sDB"
    "CTn1OM3gDAKaOABhiRFHhAoHPvzEMxEcI0kST6GSa7DnoIvVs1VkYw5VP103b5YjDNfOKQSX3wp"
    "0MPT9PAq9wVkeNI7OOoewlRnf0477Om8I8b75bvyy8e/4xes6YH/gF9k7/h4cIiEbpj/fqnAL1+"
    "VX9x/5n2JpmKAeTip+H1xKvHLqEAfR9MniYMIIiyDawLxPvRpMoGd8VAKTt/dRpKw5Rx2BwC9I1"
    "g="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sdO6hSOy5u7SZtl0WfZrokB";
}

static void sf_opaque_initialize_c5_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_flightControlSystem(void *chartInstanceVar)
{
  enable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_flightControlSystem(void *chartInstanceVar)
{
  disable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c5_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc5_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c5_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [29] = {
    "eNrtWs9vG0UUXkdp1DRtiAABh0pE4oKQqPKD9AdC4NixiyWHRF23RcGSO9599o48O+POzDoxQiI",
    "3+BPgxplT/wSu3Lgg8VcgjpwQb9Zr12yMveu4xC1dydnMrr9587353ps3u7YypX0Lj1X8fPqeZS",
    "3h+TJ+FqzecSlqZ4Y+veuL1kdR+6sVy3KEC03gdtBo0BMr3cED/5BI4isr/cGJD/dACRZoKniJN",
    "0RyLOUNkMAd7KAtpE5lV1E/YJS3igF3jGX10KOOZ3siYG4OOyTuAWfdf7PbDvQhWtyjEhxdBHC1",
    "J0XQ9IqMNMd7QerjvAdOSwV+al8p0HbQNlTVfsA0bTMonIBT4koT9IKawNfWRENen6RzsuGr7D5",
    "a+G1GCU/ua48oG9qoDg332y7+PQg0ei8R1vGI1DnwSAdUmbZC64JDIutU4bfrlBMtJCWs4LO86S",
    "0h30OGHPcxJFjaOUK+OQmk1RaU65QBYRfRzwVO6gz2oB40U9q14XFgouEBhWOQ6ea3kRcdkKQJB",
    "zzdmMM5KpyEohzEUkKspj48IHLXQe0qcNPlDQw6ZROUI1Swm1RYCF1cUhVJO6iNtLmuZMJ/qlwX",
    "+D31q6mwod1CB1LramC36PA8YUylw1ZEuwwdYKH9PaLJFNie/RRgpahbEagOk21SZqyAU4yECJs",
    "X3KXJVdmJocKF7TNcpBLAqW/CAFx082Dog44mxVGgtPDzmHL2yuWE9s5iS1yDbBAHEq8xklAFOO",
    "BQVyntulSZQEI0ekmHLBP30IvBqaCWagR871jIFvo47WL21FcmEtKhwW1iYtYQJrkCqvsBYUHCM",
    "fuqifGD8rivMMums4tYEz9TgR3ieOCalZMy2Mc8ix0knWJllvxdZNuhursHypG0nTSSAkzouOga",
    "L1W6bbjPW1wc86IUvh1VXmN0BYBZg0hOeTOHS7jsFnHwyUYt4XElzO5pixzjZ6IZqRtt3AWOq6H",
    "haqoG4mBUFTiWyDig82Bt+iUWMVxRpXGh7vaW+t66F9bv1tP6fXFE/f7GUP2+FrWdnVqD0aZnEo",
    "2Wgtld7Nvv9bcx1N/VBPuB/jjG4awzOGuA65/fHcJnRti1hs5xe8sL//z+YszeAl7J4GFw2SHcN",
    "Ws8biny2de/v/PFL3b5+x83f/71yf5f30yynzljPxP+b3CPXku331qN2tf7ddMgS3fOJLIkengz",
    "pgfTVu7BTc8+6O4Et+wjzTYeNo6kaOXC/p68On68a7Hx9q+vm1oNgzjMCdIpudG+zbRJ0NtPmP5",
    "vD413aYI/lof0ZFl/fHI+/PVsHD/KX5di/jLtXE2Eu5Fh/V4cj7em5nF3rni8PjWPe3PF44NsPM",
    "+M4vFKjIdpM+C1OnFaNQdMTTYnfHYS8bkW43NtmA+DxvzMz81EfFZjfFaH+UizeM4LnxuJ+FyJ8",
    "bkS8YmkdmY9vjg+G4nywOUYn8sRHyO1+eCxlWheVmI8VoZ41ISco3nZTMRnOcZnOeIThcwc8dlO",
    "xOdqjM/VYT7RBM2Gz1r2fPiz9kfxWYrxMW0ftCfcHv4wk64+XRjql1nUakfjyE7gsRDjsdYn8fl",
    "pNjx/e5qdhT5OJ/jjMOYP085/WD2UoimJvx5uIqv7u5Xybq56b2tja5tUtRCsLk6q4LMqo/Vqbx",
    "tXlYS7jYBX25J2cA9sbtfMtRv+86CLUXVVuJeP8N5F6+LU7eliHWaii+8m+KMe80d95rqo+U5z8",
    "+btjVu10M+NgN3wn588Mvd6+SnSy6P/Ri9OzB/OM9CL3rxzZ/sWkXHBvNTLDPTyQ6SX7AuTX5Qn",
    "tx3BmzPOL+sz0cvhBP+sx/yzHr5zrBHzZBlqo59griZ8Pjju+VxanPUSNxe4zP+QX5Ln84tT4la",
    "sZ/c+YJa48/JL+97hef/+xpi8a8W+vzbHPOLnad8/zRuv36x0ddDbUfvjwe8f8h5l7og3sNHtMp",
    "DGqLsviL7/TOm//vuwgvFf9EO5o+1dTlhX0d7r4/5lrM06IAe3JBA1+r32Rawn1oj6N+nzrGPKX",
    "XGs3t/c2tk6z/r0Nz1DJo0=",
    ""
  };

  static char newstr [2049] = "";
  newstr[0] = '\0';
  for (i = 0; i < 29; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c5_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1529081471U));
  ssSetChecksum1(S,(2571916240U));
  ssSetChecksum2(S,(3586732458U));
  ssSetChecksum3(S,(2281590192U));
}

static void mdlRTW_c5_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_flightControlSystem(SimStruct *S)
{
  SFc5_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc5_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc5_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c5_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c5_JITStateAnimation,
    chartInstance->c5_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c5_flightControlSystem(chartInstance);
}

void c5_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
