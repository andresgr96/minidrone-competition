/* Include files */

#include "waypointControlSystem_sfun.h"
#include "c4_waypointControlSystem.h"
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
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 454,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 474,/* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 21,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtMCInfo c4_k_emlrtMCI = { 642,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtMCInfo c4_l_emlrtMCI = { 56,/* lineNo */
  27,                                  /* colNo */
  "parseSortrowsOptions",              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\parseSortrowsOptions.m"/* pName */
};

static emlrtMCInfo c4_m_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c4_n_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c4_o_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c4_p_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 13, /* lineNo */
  "im2gray",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\im2gray.m"/* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 48,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 117,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 133,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 139,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 698,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 699,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 704,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 705,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 754,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 760,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 864,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 80,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 60,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 290,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 297,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 110,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 91,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 61,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 274,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 321,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 324,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 469,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_ub_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_vb_emlrtRSI = { 190,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_wb_emlrtRSI = { 901,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_xb_emlrtRSI = { 72,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_yb_emlrtRSI = { 130,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c4_ac_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c4_bc_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c4_cc_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c4_dc_emlrtRSI = { 99,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c4_ec_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_fc_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_gc_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_hc_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c4_ic_emlrtRSI = { 17,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c4_jc_emlrtRSI = { 38,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_kc_emlrtRSI = { 77,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c4_lc_emlrtRSI = { 173,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c4_mc_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c4_nc_emlrtRSI = { 74,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_oc_emlrtRSI = { 91,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_pc_emlrtRSI = { 127,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_qc_emlrtRSI = { 137,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_rc_emlrtRSI = { 145,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_sc_emlrtRSI = { 159,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_tc_emlrtRSI = { 638,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_uc_emlrtRSI = { 531,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_vc_emlrtRSI = { 501,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_wc_emlrtRSI = { 420,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_xc_emlrtRSI = { 24,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_yc_emlrtRSI = { 27,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_ad_emlrtRSI = { 28,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_bd_emlrtRSI = { 86,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c4_cd_emlrtRSI = { 57,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c4_dd_emlrtRSI = { 113,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c4_ed_emlrtRSI = { 39,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_fd_emlrtRSI = { 42,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_gd_emlrtRSI = { 543,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_hd_emlrtRSI = { 587,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_id_emlrtRSI = { 590,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_jd_emlrtRSI = { 608,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_kd_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c4_ld_emlrtRSI = { 49,/* lineNo */
  "mean",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pathName */
};

static emlrtRSInfo c4_md_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c4_nd_emlrtRSI = { 82,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c4_od_emlrtRSI = { 4,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_pd_emlrtRSI = { 5,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_qd_emlrtRSI = { 8,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_rd_emlrtRSI = { 9,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_sd_emlrtRSI = { 12,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_td_emlrtRSI = { 20,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_ud_emlrtRSI = { 28,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_vd_emlrtRSI = { 33,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_wd_emlrtRSI = { 42,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_xd_emlrtRSI = { 46,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRSInfo c4_yd_emlrtRSI = { 55,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#waypointControlSystem:2722"        /* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 21,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 21,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 55,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 34,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 34,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 47,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 47,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_k_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtRTEInfo c4_l_emlrtRTEI = { 729,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_m_emlrtRTEI = { 730,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_n_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c4_o_emlrtRTEI = { 730,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_p_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtRTEInfo c4_q_emlrtRTEI = { 74,/* lineNo */
  15,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_r_emlrtRTEI = { 531,/* lineNo */
  12,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_s_emlrtRTEI = { 547,/* lineNo */
  29,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_t_emlrtRTEI = { 531,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_u_emlrtRTEI = { 560,/* lineNo */
  31,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_v_emlrtRTEI = { 142,/* lineNo */
  9,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_w_emlrtRTEI = { 143,/* lineNo */
  9,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_x_emlrtRTEI = { 150,/* lineNo */
  27,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_y_emlrtRTEI = { 150,/* lineNo */
  13,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_ab_emlrtRTEI = { 151,/* lineNo */
  27,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_bb_emlrtRTEI = { 151,/* lineNo */
  13,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_cb_emlrtRTEI = { 152,/* lineNo */
  13,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_db_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_eb_emlrtRTEI = { 102,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_fb_emlrtRTEI = { 105,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_gb_emlrtRTEI = { 108,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_hb_emlrtRTEI = { 111,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_ib_emlrtRTEI = { 137,/* lineNo */
  5,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_jb_emlrtRTEI = { 127,/* lineNo */
  22,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_kb_emlrtRTEI = { 547,/* lineNo */
  1,                                   /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pName */
};

static emlrtRTEInfo c4_lb_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_mb_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c4_nb_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c4_ob_emlrtRTEI = { 33,/* lineNo */
  14,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_pb_emlrtRTEI = { 27,/* lineNo */
  30,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_qb_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_rb_emlrtRTEI = { 52,/* lineNo */
  20,                                  /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c4_sb_emlrtRTEI = { 148,/* lineNo */
  24,                                  /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c4_tb_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c4_ub_emlrtRTEI = { 37,/* lineNo */
  23,                                  /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_vb_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c4_wb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "sortrows",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pName */
};

static emlrtRTEInfo c4_xb_emlrtRTEI = { 18,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722"        /* pName */
};

static emlrtDCInfo c4_emlrtDCI = { 33, /* lineNo */
  48,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  48,                                  /* colNo */
  "sorted_waypoints",                  /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 33,/* lineNo */
  71,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  71,                                  /* colNo */
  "sorted_waypoints",                  /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 46,/* lineNo */
  50,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  50,                                  /* colNo */
  "sorted_waypoints_y",                /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 46,/* lineNo */
  75,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  75,                                  /* colNo */
  "sorted_waypoints_y",                /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 56,/* lineNo */
  42,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  42,                                  /* colNo */
  "grouped_waypoints",                 /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  15,                                  /* colNo */
  "lines",                             /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 19,/* lineNo */
  15,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  32,                                  /* colNo */
  "lines",                             /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_g_emlrtDCI = { 19,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  33,                                  /* colNo */
  "sorted_waypoints",                  /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_h_emlrtDCI = { 32,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  58,                                  /* colNo */
  "sorted_waypoints",                  /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_i_emlrtDCI = { 32,/* lineNo */
  58,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  35,                                  /* colNo */
  "sorted_waypoints_y",                /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_j_emlrtDCI = { 45,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  62,                                  /* colNo */
  "sorted_waypoints_y",                /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_k_emlrtDCI = { 45,/* lineNo */
  62,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#waypointControlSystem:2722",       /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  754,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  759,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_p_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_q_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_r_emlrtBCI = { 1,/* iFirst */
  399,                                 /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_s_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_t_emlrtBCI = { 1,/* iFirst */
  4,                                   /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_u_emlrtBCI = { 1,/* iFirst */
  399,                                 /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  578,                                 /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  578,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  578,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  578,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  552,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  552,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_eb_emlrtBCI = { 1,/* iFirst */
  180,                                 /* iLast */
  398,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_fb_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  531,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  592,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  591,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ib_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  248,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  591,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_sb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  592,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  593,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  593,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  594,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  594,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_l_emlrtDCI = { 547,/* lineNo */
  35,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_xb_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  503,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_yb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  429,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_m_emlrtDCI = { 560,/* lineNo */
  37,                                  /* colNo */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  562,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  565,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  567,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  143,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  552,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  552,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_jc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  554,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_lc_emlrtBCI = { 1,/* iFirst */
  180,                                 /* iLast */
  152,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_mc_emlrtBCI = { 1,/* iFirst */
  399,                                 /* iLast */
  153,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "houghlines",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_n_emlrtDCI = { 31,/* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c4_o_emlrtDCI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRSInfo c4_ae_emlrtRSI = { 37,/* lineNo */
  "sortrows",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrows.m"/* pathName */
};

static emlrtRSInfo c4_be_emlrtRSI = { 151,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_ce_emlrtRSI = { 150,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_de_emlrtRSI = { 153,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_ee_emlrtRSI = { 152,/* lineNo */
  "houghlines",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\images\\images\\eml\\houghlines.m"/* pathName */
};

static emlrtRSInfo c4_fe_emlrtRSI = { 31,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c4_ge_emlrtRSI = { 53,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static char_T c4_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'I', 'n', 't', 'e', 'g', 'e', 'r' };

static char_T c4_cv1[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
  't', 'e', 'g', 'e', 'r' };

/* Function Declarations */
static void initialize_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void initialize_params_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void mdl_start_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void enable_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void disable_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const mxArray *c4_st);
static void initSimStructsc4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void initSubchartIOPointersc4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void c4_edge(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                    const emlrtStack *c4_sp, uint8_T c4_b_varargin_1[19200],
                    boolean_T c4_varargout_1[19200]);
static void c4_warning(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static void c4_hough(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
                     real_T c4_h[71820]);
static void c4_check_forloop_overflow_error
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp);
static void c4_houghpeaks(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_b_varargin_1[71820], real_T
  c4_peaks_data[], int32_T c4_peaks_size[2]);
static void c4_validateattributes(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_d_a[2]);
static real_T c4_maximum(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  real_T c4_x[180]);
static void c4_diff(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                    real_T c4_x[180], real_T c4_y[179]);
static void c4_b_diff(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                      real_T c4_x[179], real_T c4_y[178]);
static real_T c4_sumColumnB(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178]);
static void c4_houghlines(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
  real_T c4_varargin_4_data[], int32_T c4_varargin_4_size[2],
  c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_lines);
static void c4_b_validateattributes(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_a_data[], int32_T
  c4_a_size[2]);
static void c4_sortrows(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_y, real_T c4_b_varargin_1[2],
  c4_emxArray_int32_T *c4_b_y);
static boolean_T c4_sortLE(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_v, int32_T c4_dir[2], int32_T c4_idx1,
  int32_T c4_idx2);
static void c4_repmat(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c4_sp, int32_T c4_varargin_2,
                      c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_b);
static real_T c4_b_sumColumnB(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, real_T c4_x[4], int32_T c4_col);
static void c4_b_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_real_T *c4_b_y);
static void c4_apply_row_permutation(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_int32_T *c4_idx, c4_emxArray_real_T *c4_b_y);
static void c4_c_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_real_T *c4_b_y);
static real_T c4_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_waypointX, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static uint8_T c4_c_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_waypointControlSystem, const
  char_T *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_slStringInitializeDynamicBuffers
  (SFc4_waypointControlSystemInstanceStruct *chartInstance);
static void c4_chart_data_browse_helper(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig);
static const mxArray *c4_feval(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1);
static void c4_b_feval(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void c4_d_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_y, real_T
  c4_b_varargin_1[2]);
static void c4_e_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y);
static void c4_b_apply_row_permutation(SFc4_waypointControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_int32_T *c4_idx);
static void c4_f_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y);
static void c4_emxEnsureCapacity_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real_T1
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_s52BVvgcaqgLKaYLjO15CeF
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_s52BVvgcaqgLKaYLjO15Ce **c4_pEmxArray, int32_T
   c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real_T1(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_s52BVvgcaqgLKaYLjO15CeF
  (SFc4_waypointControlSystemInstanceStruct *chartInstance,
   c4_emxArray_s52BVvgcaqgLKaYLjO15Ce **c4_pEmxArray);
static void c4_emxFree_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray);
static void c4_emxEnsureCapacity_int32_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_real32_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_real32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_real32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_int32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray);
static void c4_emxFree_real32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray);
static void c4_emxEnsureCapacity_boolean_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_boolean_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation);
static void c4_emxEnsureCapacity_s52BVvgcaqgLK
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_emxArray, int32_T c4_oldNumel,
   const emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_boolean_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void c4_emxFree_boolean_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray);
static void c4_emxEnsureCapacity_int32_T1
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation);
static void c4_emxInit_int32_T1(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation);
static void init_dsm_address_info(SFc4_waypointControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_waypointControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_waypointControlSystem = 0U;
}

static void initialize_params_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    18U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 2U, 0U,
                  0U, 0U, 1U, 2U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1950);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 882, 952, 1131,
                    1170, false);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 1338, 1412,
                    1595, 1634, false);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 527, 550, 681);
  covrtEmlWhileInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 839, 873,
                       1178);
  covrtEmlWhileInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 1293, 1329,
                       1642);
  covrtEmlRelationalInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 885,
    952, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 1341,
    1412, -1, 3U);
}

static void mdl_cleanup_runtime_resources_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  static char_T c4_b_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T c4_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  c4_emxArray_real_T *c4_b_grouped_waypoints;
  c4_emxArray_real_T *c4_b_waypoints;
  c4_emxArray_real_T *c4_c_grouped_waypoints;
  c4_emxArray_real_T *c4_f_varargin_1;
  c4_emxArray_real_T *c4_grouped_waypoints;
  c4_emxArray_real_T *c4_sorted_waypoints;
  c4_emxArray_real_T *c4_waypoints;
  c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_lines;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_e_st;
  emlrtStack c4_f_st;
  emlrtStack c4_g_st;
  emlrtStack c4_h_st;
  emlrtStack c4_i_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_P_data[8];
  real_T c4_xy[4];
  real_T c4_midpoint[2];
  real_T c4_b_index;
  real_T c4_b_k;
  real_T c4_b_n;
  real_T c4_b_waypointX;
  real_T c4_b_waypointY;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d6;
  real_T c4_d_n;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_ex;
  real_T c4_f_x;
  real_T c4_index;
  real_T c4_x;
  int32_T c4_P_size[2];
  int32_T c4_b_b;
  int32_T c4_b_col;
  int32_T c4_b_i1;
  int32_T c4_b_idx;
  int32_T c4_b_last;
  int32_T c4_b_loop_ub;
  int32_T c4_b_varargin_1;
  int32_T c4_c;
  int32_T c4_c_b;
  int32_T c4_c_col;
  int32_T c4_c_idx;
  int32_T c4_c_index;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_c_n;
  int32_T c4_c_varargin_1;
  int32_T c4_col;
  int32_T c4_d_a;
  int32_T c4_d_col;
  int32_T c4_d_idx;
  int32_T c4_d_k;
  int32_T c4_d_loop_ub;
  int32_T c4_d_varargin_1;
  int32_T c4_e_col;
  int32_T c4_e_k;
  int32_T c4_e_loop_ub;
  int32_T c4_e_varargin_1;
  int32_T c4_exitg1;
  int32_T c4_f_col;
  int32_T c4_f_k;
  int32_T c4_f_loop_ub;
  int32_T c4_g_k;
  int32_T c4_g_loop_ub;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_k;
  int32_T c4_last;
  int32_T c4_loop_ub;
  int32_T c4_n;
  int32_T c4_nx;
  uint8_T c4_gray_img[19200];
  boolean_T c4_edges[19200];
  boolean_T c4_b;
  boolean_T c4_overflow;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_e_st.prev = &c4_d_st;
  c4_e_st.tls = c4_d_st.tls;
  c4_f_st.prev = &c4_e_st;
  c4_f_st.tls = c4_e_st.tls;
  c4_g_st.prev = &c4_f_st;
  c4_g_st.tls = c4_f_st.tls;
  c4_h_st.prev = &c4_g_st;
  c4_h_st.tls = c4_g_st.tls;
  c4_i_st.prev = &c4_h_st;
  c4_i_st.tls = c4_h_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 57600; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_I)[c4_i]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_od_emlrtRSI;
  c4_c_st.site = &c4_emlrtRSI;
  c4_d_st.site = &c4_b_emlrtRSI;
  rgb2gray_tbb_uint8(&(*chartInstance->c4_I)[0], 19200.0, &c4_gray_img[0], true);
  c4_b_st.site = &c4_pd_emlrtRSI;
  c4_edge(chartInstance, &c4_b_st, c4_gray_img, c4_edges);
  c4_b_st.site = &c4_qd_emlrtRSI;
  c4_hough(chartInstance, &c4_b_st, c4_edges, chartInstance->c4_H);
  c4_b_st.site = &c4_rd_emlrtRSI;
  c4_houghpeaks(chartInstance, &c4_b_st, chartInstance->c4_H, c4_P_data,
                c4_P_size);
  c4_emxInit_s52BVvgcaqgLKaYLjO15CeF(chartInstance, &c4_st, &c4_lines, 2,
    &c4_i_emlrtRTEI);
  c4_b_st.site = &c4_sd_emlrtRSI;
  c4_houghlines(chartInstance, &c4_b_st, c4_edges, c4_P_data, c4_P_size,
                c4_lines);
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_waypoints, 2, &c4_j_emlrtRTEI);
  c4_waypoints->size[0] = 0;
  c4_waypoints->size[1] = 2;
  c4_d = (real_T)c4_lines->size[1];
  c4_b_i1 = (int32_T)c4_d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c4_d, mxDOUBLE_CLASS, c4_b_i1,
    &c4_xb_emlrtRTEI, &c4_st);
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_b_waypoints, 2, &c4_b_emlrtRTEI);
  for (c4_k = 0; c4_k < c4_b_i1; c4_k++) {
    c4_b_k = 1.0 + (real_T)c4_k;
    covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 1);
    for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
      c4_i4 = c4_lines->size[1];
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_f_emlrtDCI, &c4_st);
      }

      c4_i7 = (int32_T)c4_b_k;
      if ((c4_i7 < 1) || (c4_i7 > c4_i4)) {
        emlrtDynamicBoundsCheckR2012b(c4_i7, 1, c4_i4, &c4_f_emlrtBCI, &c4_st);
      }

      c4_xy[c4_i2 << 1] = c4_lines->data[c4_i7 - 1].point1[c4_i2];
    }

    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_i5 = c4_lines->size[1];
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_g_emlrtDCI, &c4_st);
      }

      c4_i8 = (int32_T)c4_b_k;
      if ((c4_i8 < 1) || (c4_i8 > c4_i5)) {
        emlrtDynamicBoundsCheckR2012b(c4_i8, 1, c4_i5, &c4_g_emlrtBCI, &c4_st);
      }

      c4_xy[1 + (c4_i3 << 1)] = c4_lines->data[c4_i8 - 1].point2[c4_i3];
    }

    c4_b_st.site = &c4_td_emlrtRSI;
    c4_c_st.site = &c4_ld_emlrtRSI;
    c4_d_st.site = &c4_cc_emlrtRSI;
    c4_e_st.site = &c4_md_emlrtRSI;
    c4_f_st.site = &c4_ec_emlrtRSI;
    for (c4_col = 0; c4_col < 2; c4_col++) {
      c4_b_col = c4_col;
      c4_g_st.site = &c4_fc_emlrtRSI;
      c4_midpoint[c4_b_col] = c4_b_sumColumnB(chartInstance, c4_xy, c4_b_col + 1);
    }

    for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
      c4_midpoint[c4_i10] /= 2.0;
    }

    c4_i11 = c4_b_waypoints->size[0] * c4_b_waypoints->size[1];
    c4_b_waypoints->size[0] = c4_waypoints->size[0] + 1;
    c4_b_waypoints->size[1] = 2;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_b_waypoints, c4_i11,
      &c4_b_emlrtRTEI);
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_b_loop_ub = c4_waypoints->size[0] - 1;
      for (c4_i14 = 0; c4_i14 <= c4_b_loop_ub; c4_i14++) {
        c4_b_waypoints->data[c4_i14 + c4_b_waypoints->size[0] * c4_i12] =
          c4_waypoints->data[c4_i14 + c4_waypoints->size[0] * c4_i12];
      }
    }

    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_b_waypoints->data[c4_waypoints->size[0] + c4_b_waypoints->size[0] *
        c4_i13] = c4_midpoint[c4_i13];
    }

    c4_i15 = c4_waypoints->size[0] * c4_waypoints->size[1];
    c4_waypoints->size[0] = c4_b_waypoints->size[0];
    c4_waypoints->size[1] = 2;
    c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_waypoints, c4_i15,
      &c4_c_emlrtRTEI);
    c4_c_loop_ub = (c4_b_waypoints->size[0] << 1) - 1;
    for (c4_i17 = 0; c4_i17 <= c4_c_loop_ub; c4_i17++) {
      c4_waypoints->data[c4_i17] = c4_b_waypoints->data[c4_i17];
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c4_emxFree_real_T(chartInstance, &c4_b_waypoints);
  c4_emxFree_s52BVvgcaqgLKaYLjO15CeF(chartInstance, &c4_lines);
  covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 0);
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_grouped_waypoints, 2,
                    &c4_k_emlrtRTEI);
  c4_grouped_waypoints->size[0] = 0;
  c4_grouped_waypoints->size[1] = 2;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_sorted_waypoints, 2,
                    &c4_emlrtRTEI);
  c4_i6 = c4_sorted_waypoints->size[0] * c4_sorted_waypoints->size[1];
  c4_sorted_waypoints->size[0] = c4_waypoints->size[0];
  c4_sorted_waypoints->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_sorted_waypoints, c4_i6,
    &c4_emlrtRTEI);
  c4_loop_ub = (c4_waypoints->size[0] << 1) - 1;
  for (c4_i9 = 0; c4_i9 <= c4_loop_ub; c4_i9++) {
    c4_sorted_waypoints->data[c4_i9] = c4_waypoints->data[c4_i9];
  }

  c4_b_st.site = &c4_ud_emlrtRSI;
  c4_e_sortrows(chartInstance, &c4_b_st, c4_sorted_waypoints);
  c4_b_k = 1.0;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_b_grouped_waypoints, 2,
                    &c4_e_emlrtRTEI);
  do {
    c4_exitg1 = 0;
    c4_b_varargin_1 = c4_sorted_waypoints->size[0];
    c4_c_varargin_1 = c4_b_varargin_1;
    if (c4_c_varargin_1 == 0) {
      c4_n = 0;
    } else if (c4_c_varargin_1 > 2) {
      c4_n = c4_c_varargin_1;
    } else {
      c4_n = 2;
    }

    c4_b_n = (real_T)c4_n;
    if (covrtEmlWhileEval(chartInstance->c4_covrtInstance, 4U, 0, 0, c4_b_k <
                          c4_b_n)) {
      c4_i16 = c4_sorted_waypoints->size[0];
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_h_emlrtDCI, &c4_st);
      }

      c4_i18 = (int32_T)c4_b_k;
      if ((c4_i18 < 1) || (c4_i18 > c4_i16)) {
        emlrtDynamicBoundsCheckR2012b(c4_i18, 1, c4_i16, &c4_h_emlrtBCI, &c4_st);
      }

      c4_i19 = c4_sorted_waypoints->size[0];
      c4_d1 = c4_b_k + 1.0;
      if (c4_d1 != (real_T)(int32_T)muDoubleScalarFloor(c4_d1)) {
        emlrtIntegerCheckR2012b(c4_d1, &c4_i_emlrtDCI, &c4_st);
      }

      c4_i20 = (int32_T)c4_d1;
      if ((c4_i20 < 1) || (c4_i20 > c4_i19)) {
        emlrtDynamicBoundsCheckR2012b(c4_i20, 1, c4_i19, &c4_i_emlrtBCI, &c4_st);
      }

      c4_x = c4_sorted_waypoints->data[c4_i18 - 1] - c4_sorted_waypoints->
        data[c4_i20 - 1];
      c4_b_x = c4_x;
      c4_c_x = c4_b_x;
      c4_d2 = muDoubleScalarAbs(c4_c_x);
      if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c4_covrtInstance, 4U, 0U, 0U, c4_d2,
                          1.0, -1, 3U, c4_d2 <= 1.0))) {
        c4_b_st.site = &c4_vd_emlrtRSI;
        if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
          emlrtIntegerCheckR2012b(c4_b_k, &c4_emlrtDCI, &c4_b_st);
        }

        c4_i23 = c4_sorted_waypoints->size[0];
        c4_i24 = (int32_T)c4_b_k;
        if ((c4_i24 < 1) || (c4_i24 > c4_i23)) {
          emlrtDynamicBoundsCheckR2012b(c4_i24, 1, c4_i23, &c4_emlrtBCI,
            &c4_b_st);
        }

        c4_c_k = c4_i24 - 1;
        c4_d4 = c4_b_k + 1.0;
        if (c4_d4 != (real_T)(int32_T)muDoubleScalarFloor(c4_d4)) {
          emlrtIntegerCheckR2012b(c4_d4, &c4_b_emlrtDCI, &c4_b_st);
        }

        c4_i29 = c4_sorted_waypoints->size[0];
        c4_i30 = (int32_T)c4_d4;
        if ((c4_i30 < 1) || (c4_i30 > c4_i29)) {
          emlrtDynamicBoundsCheckR2012b(c4_i30, 1, c4_i29, &c4_b_emlrtBCI,
            &c4_b_st);
        }

        c4_d_k = c4_i30 - 1;
        for (c4_i31 = 0; c4_i31 < 2; c4_i31++) {
          c4_xy[c4_i31 << 1] = c4_sorted_waypoints->data[c4_c_k +
            c4_sorted_waypoints->size[0] * c4_i31];
        }

        for (c4_i32 = 0; c4_i32 < 2; c4_i32++) {
          c4_xy[1 + (c4_i32 << 1)] = c4_sorted_waypoints->data[c4_d_k +
            c4_sorted_waypoints->size[0] * c4_i32];
        }

        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_d_st.site = &c4_cc_emlrtRSI;
        c4_e_st.site = &c4_md_emlrtRSI;
        c4_f_st.site = &c4_ec_emlrtRSI;
        for (c4_c_col = 0; c4_c_col < 2; c4_c_col++) {
          c4_d_col = c4_c_col;
          c4_g_st.site = &c4_fc_emlrtRSI;
          c4_midpoint[c4_d_col] = c4_b_sumColumnB(chartInstance, c4_xy, c4_d_col
            + 1);
        }

        for (c4_i35 = 0; c4_i35 < 2; c4_i35++) {
          c4_midpoint[c4_i35] /= 2.0;
        }

        c4_i36 = c4_b_grouped_waypoints->size[0] * c4_b_grouped_waypoints->size
          [1];
        c4_b_grouped_waypoints->size[0] = c4_grouped_waypoints->size[0] + 1;
        c4_b_grouped_waypoints->size[1] = 2;
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
          c4_b_grouped_waypoints, c4_i36, &c4_e_emlrtRTEI);
        for (c4_i39 = 0; c4_i39 < 2; c4_i39++) {
          c4_e_loop_ub = c4_grouped_waypoints->size[0] - 1;
          for (c4_i42 = 0; c4_i42 <= c4_e_loop_ub; c4_i42++) {
            c4_b_grouped_waypoints->data[c4_i42 + c4_b_grouped_waypoints->size[0]
              * c4_i39] = c4_grouped_waypoints->data[c4_i42 +
              c4_grouped_waypoints->size[0] * c4_i39];
          }
        }

        for (c4_i41 = 0; c4_i41 < 2; c4_i41++) {
          c4_b_grouped_waypoints->data[c4_grouped_waypoints->size[0] +
            c4_b_grouped_waypoints->size[0] * c4_i41] = c4_midpoint[c4_i41];
        }

        c4_i44 = c4_grouped_waypoints->size[0] * c4_grouped_waypoints->size[1];
        c4_grouped_waypoints->size[0] = c4_b_grouped_waypoints->size[0];
        c4_grouped_waypoints->size[1] = 2;
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_grouped_waypoints,
          c4_i44, &c4_f_emlrtRTEI);
        c4_f_loop_ub = (c4_b_grouped_waypoints->size[0] << 1) - 1;
        for (c4_i46 = 0; c4_i46 <= c4_f_loop_ub; c4_i46++) {
          c4_grouped_waypoints->data[c4_i46] = c4_b_grouped_waypoints->
            data[c4_i46];
        }

        c4_b_k += 2.0;
      } else {
        c4_b_k++;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    } else {
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  c4_emxFree_real_T(chartInstance, &c4_b_grouped_waypoints);
  c4_emxFree_real_T(chartInstance, &c4_sorted_waypoints);
  c4_b_st.site = &c4_wd_emlrtRSI;
  c4_f_sortrows(chartInstance, &c4_b_st, c4_waypoints);
  c4_b_k = 1.0;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_c_grouped_waypoints, 2,
                    &c4_g_emlrtRTEI);
  do {
    c4_exitg1 = 0;
    c4_d_varargin_1 = c4_waypoints->size[0];
    c4_e_varargin_1 = c4_d_varargin_1;
    if (c4_e_varargin_1 == 0) {
      c4_c_n = 0;
    } else if (c4_e_varargin_1 > 2) {
      c4_c_n = c4_e_varargin_1;
    } else {
      c4_c_n = 2;
    }

    c4_d_n = (real_T)c4_c_n;
    if (covrtEmlWhileEval(chartInstance->c4_covrtInstance, 4U, 0, 1, c4_b_k <
                          c4_d_n)) {
      c4_i21 = c4_waypoints->size[0];
      if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
        emlrtIntegerCheckR2012b(c4_b_k, &c4_j_emlrtDCI, &c4_st);
      }

      c4_i22 = (int32_T)c4_b_k;
      if ((c4_i22 < 1) || (c4_i22 > c4_i21)) {
        emlrtDynamicBoundsCheckR2012b(c4_i22, 1, c4_i21, &c4_j_emlrtBCI, &c4_st);
      }

      c4_i25 = c4_waypoints->size[0];
      c4_d3 = c4_b_k + 1.0;
      if (c4_d3 != (real_T)(int32_T)muDoubleScalarFloor(c4_d3)) {
        emlrtIntegerCheckR2012b(c4_d3, &c4_k_emlrtDCI, &c4_st);
      }

      c4_i27 = (int32_T)c4_d3;
      if ((c4_i27 < 1) || (c4_i27 > c4_i25)) {
        emlrtDynamicBoundsCheckR2012b(c4_i27, 1, c4_i25, &c4_k_emlrtBCI, &c4_st);
      }

      c4_d_x = c4_waypoints->data[(c4_i22 + c4_waypoints->size[0]) - 1] -
        c4_waypoints->data[(c4_i27 + c4_waypoints->size[0]) - 1];
      c4_e_x = c4_d_x;
      c4_f_x = c4_e_x;
      c4_d5 = muDoubleScalarAbs(c4_f_x);
      if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 1,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c4_covrtInstance, 4U, 0U, 1U, c4_d5,
                          1.0, -1, 3U, c4_d5 <= 1.0))) {
        c4_b_st.site = &c4_xd_emlrtRSI;
        if (c4_b_k != (real_T)(int32_T)muDoubleScalarFloor(c4_b_k)) {
          emlrtIntegerCheckR2012b(c4_b_k, &c4_c_emlrtDCI, &c4_b_st);
        }

        c4_i33 = c4_waypoints->size[0];
        c4_i34 = (int32_T)c4_b_k;
        if ((c4_i34 < 1) || (c4_i34 > c4_i33)) {
          emlrtDynamicBoundsCheckR2012b(c4_i34, 1, c4_i33, &c4_c_emlrtBCI,
            &c4_b_st);
        }

        c4_e_k = c4_i34 - 1;
        c4_d6 = c4_b_k + 1.0;
        if (c4_d6 != (real_T)(int32_T)muDoubleScalarFloor(c4_d6)) {
          emlrtIntegerCheckR2012b(c4_d6, &c4_d_emlrtDCI, &c4_b_st);
        }

        c4_i37 = c4_waypoints->size[0];
        c4_i38 = (int32_T)c4_d6;
        if ((c4_i38 < 1) || (c4_i38 > c4_i37)) {
          emlrtDynamicBoundsCheckR2012b(c4_i38, 1, c4_i37, &c4_d_emlrtBCI,
            &c4_b_st);
        }

        c4_f_k = c4_i38 - 1;
        for (c4_i40 = 0; c4_i40 < 2; c4_i40++) {
          c4_xy[c4_i40 << 1] = c4_waypoints->data[c4_e_k + c4_waypoints->size[0]
            * c4_i40];
        }

        for (c4_i43 = 0; c4_i43 < 2; c4_i43++) {
          c4_xy[1 + (c4_i43 << 1)] = c4_waypoints->data[c4_f_k +
            c4_waypoints->size[0] * c4_i43];
        }

        c4_c_st.site = &c4_ld_emlrtRSI;
        c4_d_st.site = &c4_cc_emlrtRSI;
        c4_e_st.site = &c4_md_emlrtRSI;
        c4_f_st.site = &c4_ec_emlrtRSI;
        for (c4_e_col = 0; c4_e_col < 2; c4_e_col++) {
          c4_f_col = c4_e_col;
          c4_g_st.site = &c4_fc_emlrtRSI;
          c4_midpoint[c4_f_col] = c4_b_sumColumnB(chartInstance, c4_xy, c4_f_col
            + 1);
        }

        for (c4_i48 = 0; c4_i48 < 2; c4_i48++) {
          c4_midpoint[c4_i48] /= 2.0;
        }

        c4_i50 = c4_c_grouped_waypoints->size[0] * c4_c_grouped_waypoints->size
          [1];
        c4_c_grouped_waypoints->size[0] = c4_grouped_waypoints->size[0] + 1;
        c4_c_grouped_waypoints->size[1] = 2;
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_st,
          c4_c_grouped_waypoints, c4_i50, &c4_g_emlrtRTEI);
        for (c4_i51 = 0; c4_i51 < 2; c4_i51++) {
          c4_g_loop_ub = c4_grouped_waypoints->size[0] - 1;
          for (c4_i53 = 0; c4_i53 <= c4_g_loop_ub; c4_i53++) {
            c4_c_grouped_waypoints->data[c4_i53 + c4_c_grouped_waypoints->size[0]
              * c4_i51] = c4_grouped_waypoints->data[c4_i53 +
              c4_grouped_waypoints->size[0] * c4_i51];
          }
        }

        for (c4_i52 = 0; c4_i52 < 2; c4_i52++) {
          c4_c_grouped_waypoints->data[c4_grouped_waypoints->size[0] +
            c4_c_grouped_waypoints->size[0] * c4_i52] = c4_midpoint[c4_i52];
        }

        c4_i54 = c4_grouped_waypoints->size[0] * c4_grouped_waypoints->size[1];
        c4_grouped_waypoints->size[0] = c4_c_grouped_waypoints->size[0];
        c4_grouped_waypoints->size[1] = 2;
        c4_emxEnsureCapacity_real_T(chartInstance, &c4_st, c4_grouped_waypoints,
          c4_i54, &c4_h_emlrtRTEI);
        c4_h_loop_ub = (c4_c_grouped_waypoints->size[0] << 1) - 1;
        for (c4_i55 = 0; c4_i55 <= c4_h_loop_ub; c4_i55++) {
          c4_grouped_waypoints->data[c4_i55] = c4_c_grouped_waypoints->
            data[c4_i55];
        }

        c4_b_k += 2.0;
      } else {
        c4_b_k++;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    } else {
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  c4_emxFree_real_T(chartInstance, &c4_c_grouped_waypoints);
  c4_emxFree_real_T(chartInstance, &c4_waypoints);
  c4_b_st.site = &c4_yd_emlrtRSI;
  c4_emxInit_real_T1(chartInstance, &c4_b_st, &c4_f_varargin_1, 1,
                     &c4_d_emlrtRTEI);
  c4_i26 = c4_f_varargin_1->size[0];
  c4_f_varargin_1->size[0] = c4_grouped_waypoints->size[0];
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_b_st, c4_f_varargin_1, c4_i26,
    &c4_d_emlrtRTEI);
  c4_d_loop_ub = c4_grouped_waypoints->size[0] - 1;
  for (c4_i28 = 0; c4_i28 <= c4_d_loop_ub; c4_i28++) {
    c4_f_varargin_1->data[c4_i28] = c4_grouped_waypoints->data[c4_i28 +
      c4_grouped_waypoints->size[0]];
  }

  c4_c_st.site = &c4_ic_emlrtRSI;
  c4_d_st.site = &c4_jc_emlrtRSI;
  c4_e_st.site = &c4_kc_emlrtRSI;
  if ((c4_f_varargin_1->size[0] == 1) || ((real_T)c4_f_varargin_1->size[0] !=
       1.0)) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c4_e_st, &c4_o_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_e_st, NULL, "message", 1U, 1U, 14, c4_c_y)));
  }

  if (!((real_T)c4_f_varargin_1->size[0] >= 1.0)) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c4_e_st, &c4_p_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_e_st, NULL, "message", 1U, 1U, 14, c4_d_y)));
  }

  c4_f_st.site = &c4_lc_emlrtRSI;
  c4_last = c4_f_varargin_1->size[0];
  c4_d_a = c4_last;
  c4_c = c4_d_a;
  c4_nx = c4_c;
  if (c4_nx <= 2) {
    if (c4_nx == 1) {
      c4_idx = 1;
    } else if (c4_f_varargin_1->data[0] < c4_f_varargin_1->data[c4_last - 1]) {
      c4_idx = c4_last;
    } else {
      c4_idx = 1;
    }
  } else {
    c4_g_st.site = &c4_xb_emlrtRSI;
    c4_b_last = c4_last;
    c4_ex = c4_f_varargin_1->data[0];
    c4_b_idx = 1;
    c4_h_st.site = &c4_yb_emlrtRSI;
    c4_b_b = c4_b_last;
    c4_c_b = c4_b_b;
    if (c4_c_b < 2) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_c_b > 2147483646);
    }

    if (c4_overflow) {
      c4_i_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_i_st);
    }

    for (c4_g_k = 2; c4_g_k <= c4_b_last; c4_g_k++) {
      if (c4_ex < c4_f_varargin_1->data[c4_g_k - 1]) {
        c4_ex = c4_f_varargin_1->data[c4_g_k - 1];
        c4_b_idx = c4_g_k;
      }
    }

    c4_idx = c4_b_idx;
  }

  c4_emxFree_real_T(chartInstance, &c4_f_varargin_1);
  c4_c_idx = c4_idx;
  c4_d_idx = c4_c_idx;
  c4_iindx = c4_d_idx;
  c4_index = (real_T)c4_iindx;
  c4_b_index = c4_index;
  if (c4_b_index != (real_T)(int32_T)muDoubleScalarFloor(c4_b_index)) {
    emlrtIntegerCheckR2012b(c4_b_index, &c4_e_emlrtDCI, &c4_st);
  }

  c4_i45 = c4_grouped_waypoints->size[0];
  c4_i47 = (int32_T)c4_b_index;
  if ((c4_i47 < 1) || (c4_i47 > c4_i45)) {
    emlrtDynamicBoundsCheckR2012b(c4_i47, 1, c4_i45, &c4_e_emlrtBCI, &c4_st);
  }

  c4_c_index = c4_i47 - 1;
  for (c4_i49 = 0; c4_i49 < 2; c4_i49++) {
    c4_midpoint[c4_i49] = c4_grouped_waypoints->data[c4_c_index +
      c4_grouped_waypoints->size[0] * c4_i49];
  }

  c4_emxFree_real_T(chartInstance, &c4_grouped_waypoints);
  c4_b_waypointX = c4_midpoint[0];
  c4_b_waypointY = c4_midpoint[1];
  *chartInstance->c4_waypointX = c4_b_waypointX;
  *chartInstance->c4_waypointY = c4_b_waypointY;
  c4_do_animation_call_c4_waypointControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                    *chartInstance->c4_waypointX);
  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                    *chartInstance->c4_waypointY);
}

static void ext_mode_exec_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(3, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_waypointX, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", chartInstance->c4_waypointY, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_waypointControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c4_y, 2, c4_d_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_waypointX = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 0)), "waypointX");
  *chartInstance->c4_waypointY = c4_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c4_u, 1)), "waypointY");
  chartInstance->c4_is_active_c4_waypointControlSystem = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)),
     "is_active_c4_waypointControlSystem");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc4_waypointControlSystem
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_edge(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                    const emlrtStack *c4_sp, uint8_T c4_b_varargin_1[19200],
                    boolean_T c4_varargout_1[19200])
{
  static real_T c4_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c4_b_idxA[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
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

  static int32_T c4_idxA[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
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

  static boolean_T c4_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c4_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_counts[64];
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_data[1];
  real_T c4_highThresh_data[1];
  real_T c4_lowThresh_data[1];
  real_T c4_b_idx;
  real_T c4_b_j;
  real_T c4_b_lowThresh;
  real_T c4_d_i;
  real_T c4_d_j;
  real_T c4_f_j;
  real_T c4_g_i;
  real_T c4_h_j;
  real_T c4_highThresh;
  real_T c4_highThreshTemp;
  real_T c4_j_i;
  real_T c4_lowThresh;
  real_T c4_m_i;
  real_T c4_o_i;
  real_T c4_out;
  real_T c4_sum;
  int32_T c4_highThresh_size[1];
  int32_T c4_lowThresh_size[1];
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_e_i;
  int32_T c4_e_j;
  int32_T c4_f_i;
  int32_T c4_g_j;
  int32_T c4_h_i;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_i;
  int32_T c4_idx;
  int32_T c4_j;
  int32_T c4_k_i;
  int32_T c4_l_i;
  int32_T c4_loop_ub;
  int32_T c4_n_i;
  real32_T c4_b_i2[19200];
  real32_T c4_b;
  real32_T c4_b_b;
  real32_T c4_b_r;
  real32_T c4_b_x;
  real32_T c4_b_x1;
  real32_T c4_b_x2;
  real32_T c4_b_y;
  real32_T c4_c_b;
  real32_T c4_c_varargin_1;
  real32_T c4_c_x;
  real32_T c4_c_y;
  real32_T c4_d_a;
  real32_T c4_d_b;
  real32_T c4_d_idx;
  real32_T c4_d_x;
  real32_T c4_d_y;
  real32_T c4_e_a;
  real32_T c4_e_x;
  real32_T c4_e_y;
  real32_T c4_f_a;
  real32_T c4_f_x;
  real32_T c4_f_y;
  real32_T c4_g_a;
  real32_T c4_g_b;
  real32_T c4_g_x;
  real32_T c4_g_y;
  real32_T c4_h_a;
  real32_T c4_h_x;
  real32_T c4_h_y;
  real32_T c4_i_a;
  real32_T c4_i_x;
  real32_T c4_i_y;
  real32_T c4_j_a;
  real32_T c4_j_x;
  real32_T c4_j_y;
  real32_T c4_k_x;
  real32_T c4_k_y;
  real32_T c4_magmax;
  real32_T c4_r;
  real32_T c4_varargin_2;
  real32_T c4_x;
  real32_T c4_x1;
  real32_T c4_x2;
  real32_T c4_y;
  int8_T c4_c_idx;
  boolean_T c4_E[19200];
  boolean_T c4_conn[13];
  boolean_T c4_b_modeFlag;
  boolean_T c4_b_tooBig;
  boolean_T c4_c_modeFlag;
  boolean_T c4_c_tooBig;
  boolean_T c4_d_modeFlag;
  boolean_T c4_d_tooBig;
  boolean_T c4_e_b;
  boolean_T c4_e_modeFlag;
  boolean_T c4_f_b;
  boolean_T c4_f_modeFlag;
  boolean_T c4_g_modeFlag;
  boolean_T c4_h_modeFlag;
  boolean_T c4_i_modeFlag;
  boolean_T c4_j_modeFlag;
  boolean_T c4_k_modeFlag;
  boolean_T c4_l_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_nanFlag;
  boolean_T c4_tooBig;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  for (c4_i = 0; c4_i < 19200; c4_i++) {
    chartInstance->c4_c_a[c4_i] = (real32_T)c4_b_varargin_1[c4_i];
  }

  for (c4_b_i1 = 0; c4_b_i1 < 19200; c4_b_i1++) {
    chartInstance->c4_c_a[c4_b_i1] /= 255.0F;
  }

  c4_st.site = &c4_c_emlrtRSI;
  c4_b_st.site = &c4_f_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_b_i = 0; c4_b_i < 132; c4_b_i++) {
      c4_d_i = (real_T)c4_b_i + 1.0;
      if ((c4_idxA[(int32_T)c4_d_i - 1] < 1) || (c4_idxA[(int32_T)c4_d_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_d_i - 1], 1, 120,
          &c4_p_emlrtBCI, &c4_d_st);
      }

      c4_i2 = c4_idxA[(int32_T)c4_b_j + 159];
      if ((c4_i2 < 1) || (c4_i2 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i2, 1, 160, &c4_q_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_a[((int32_T)c4_d_i + 132 * ((int32_T)c4_b_j - 1)) - 1] =
        chartInstance->c4_c_a[(c4_idxA[(int32_T)c4_d_i - 1] + 120 * (c4_i2 - 1))
        - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_tooBig = true;
  for (c4_c_i = 0; c4_c_i < 2; c4_c_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_padSizeT[c4_i4] = 132.0 + 28.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_outSizeT[c4_i6] = 120.0 + 40.0 * (real_T)c4_i6;
    }

    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_connDimsT[c4_i8] = 13.0 + -12.0 * (real_T)c4_i8;
    }

    ippfilter_real32(&chartInstance->c4_a[0], &chartInstance->c4_i1[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_kernel[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i3 = 0; c4_i3 < 13; c4_i3++) {
      c4_conn[c4_i3] = true;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_padSizeT[c4_i5] = 132.0 + 28.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_outSizeT[c4_i7] = 120.0 + 40.0 * (real_T)c4_i7;
    }

    for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
      c4_connDimsT[c4_i9] = 13.0 + -12.0 * (real_T)c4_i9;
    }

    for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
      c4_startT[c4_i10] = 6.0 + -6.0 * (real_T)c4_i10;
    }

    imfilter_real32(&chartInstance->c4_a[0], &chartInstance->c4_i1[0], 2.0,
                    &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_kernel[0], 13.0,
                    &c4_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true,
                    true);
  }

  c4_b_st.site = &c4_g_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_c_j = 0; c4_c_j < 172; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_e_i = 0; c4_e_i < 120; c4_e_i++) {
      c4_g_i = (real_T)c4_e_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_g_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_g_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_g_i - 1], 1, 120,
          &c4_p_emlrtBCI, &c4_d_st);
      }

      c4_i11 = c4_b_idxA[(int32_T)c4_d_j + 171];
      if ((c4_i11 < 1) || (c4_i11 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i11, 1, 160, &c4_q_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_b_a[((int32_T)c4_g_i + 120 * ((int32_T)c4_d_j - 1)) - 1]
        = chartInstance->c4_i1[(c4_b_idxA[(int32_T)c4_g_i - 1] + 120 * (c4_i11 -
        1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_b_tooBig = true;
  for (c4_f_i = 0; c4_f_i < 2; c4_f_i++) {
    c4_b_tooBig = false;
  }

  if (!c4_b_tooBig) {
    c4_d_modeFlag = true;
  } else {
    c4_d_modeFlag = false;
  }

  if (c4_d_modeFlag) {
    c4_e_modeFlag = true;
  } else {
    c4_e_modeFlag = false;
  }

  c4_f_modeFlag = c4_e_modeFlag;
  if (c4_f_modeFlag) {
    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_padSizeT[c4_i13] = 120.0 + 52.0 * (real_T)c4_i13;
    }

    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_outSizeT[c4_i15] = 120.0 + 40.0 * (real_T)c4_i15;
    }

    for (c4_i17 = 0; c4_i17 < 2; c4_i17++) {
      c4_connDimsT[c4_i17] = 1.0 + 12.0 * (real_T)c4_i17;
    }

    ippfilter_real32(&chartInstance->c4_b_a[0], &chartInstance->c4_i1[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_b_kernel[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_padSizeT[c4_i12] = 120.0 + 52.0 * (real_T)c4_i12;
    }

    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_outSizeT[c4_i14] = 120.0 + 40.0 * (real_T)c4_i14;
    }

    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_connDimsT[c4_i16] = 1.0 + 12.0 * (real_T)c4_i16;
    }

    for (c4_i18 = 0; c4_i18 < 2; c4_i18++) {
      c4_startT[c4_i18] = 6.0 * (real_T)c4_i18;
    }

    imfilter_real32(&chartInstance->c4_b_a[0], &chartInstance->c4_i1[0], 2.0,
                    &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_nonZeroKernel[0],
                    12.0, &c4_b_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0],
                    2.0, true, true);
  }

  c4_b_st.site = &c4_h_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_e_j = 0; c4_e_j < 172; c4_e_j++) {
    c4_f_j = (real_T)c4_e_j + 1.0;
    for (c4_h_i = 0; c4_h_i < 120; c4_h_i++) {
      c4_j_i = (real_T)c4_h_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_j_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_j_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_j_i - 1], 1, 120,
          &c4_p_emlrtBCI, &c4_d_st);
      }

      c4_i19 = c4_b_idxA[(int32_T)c4_f_j + 171];
      if ((c4_i19 < 1) || (c4_i19 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i19, 1, 160, &c4_q_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_b_a[((int32_T)c4_j_i + 120 * ((int32_T)c4_f_j - 1)) - 1]
        = chartInstance->c4_c_a[(c4_b_idxA[(int32_T)c4_j_i - 1] + 120 * (c4_i19
        - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_c_tooBig = true;
  for (c4_i_i = 0; c4_i_i < 2; c4_i_i++) {
    c4_c_tooBig = false;
  }

  if (!c4_c_tooBig) {
    c4_g_modeFlag = true;
  } else {
    c4_g_modeFlag = false;
  }

  if (c4_g_modeFlag) {
    c4_h_modeFlag = true;
  } else {
    c4_h_modeFlag = false;
  }

  c4_i_modeFlag = c4_h_modeFlag;
  if (c4_i_modeFlag) {
    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_padSizeT[c4_i21] = 120.0 + 52.0 * (real_T)c4_i21;
    }

    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_outSizeT[c4_i23] = 120.0 + 40.0 * (real_T)c4_i23;
    }

    for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
      c4_connDimsT[c4_i25] = 1.0 + 12.0 * (real_T)c4_i25;
    }

    ippfilter_real32(&chartInstance->c4_b_a[0], &c4_b_i2[0], &c4_outSizeT[0],
                     2.0, &c4_padSizeT[0], &c4_c_kernel[0], &c4_connDimsT[0],
                     true);
  } else {
    for (c4_i20 = 0; c4_i20 < 13; c4_i20++) {
      c4_conn[c4_i20] = true;
    }

    for (c4_i22 = 0; c4_i22 < 2; c4_i22++) {
      c4_padSizeT[c4_i22] = 120.0 + 52.0 * (real_T)c4_i22;
    }

    for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
      c4_outSizeT[c4_i24] = 120.0 + 40.0 * (real_T)c4_i24;
    }

    for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
      c4_connDimsT[c4_i26] = 1.0 + 12.0 * (real_T)c4_i26;
    }

    for (c4_i27 = 0; c4_i27 < 2; c4_i27++) {
      c4_startT[c4_i27] = 6.0 * (real_T)c4_i27;
    }

    imfilter_real32(&chartInstance->c4_b_a[0], &c4_b_i2[0], 2.0, &c4_outSizeT[0],
                    2.0, &c4_padSizeT[0], &c4_kernel[0], 13.0, &c4_conn[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_b_st.site = &c4_i_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_g_j = 0; c4_g_j < 160; c4_g_j++) {
    c4_h_j = (real_T)c4_g_j + 1.0;
    for (c4_k_i = 0; c4_k_i < 132; c4_k_i++) {
      c4_m_i = (real_T)c4_k_i + 1.0;
      if ((c4_idxA[(int32_T)c4_m_i - 1] < 1) || (c4_idxA[(int32_T)c4_m_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_m_i - 1], 1, 120,
          &c4_p_emlrtBCI, &c4_d_st);
      }

      c4_i28 = c4_idxA[(int32_T)c4_h_j + 159];
      if ((c4_i28 < 1) || (c4_i28 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i28, 1, 160, &c4_q_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_a[((int32_T)c4_m_i + 132 * ((int32_T)c4_h_j - 1)) - 1] =
        c4_b_i2[(c4_idxA[(int32_T)c4_m_i - 1] + 120 * (c4_i28 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_d_tooBig = true;
  for (c4_l_i = 0; c4_l_i < 2; c4_l_i++) {
    c4_d_tooBig = false;
  }

  if (!c4_d_tooBig) {
    c4_j_modeFlag = true;
  } else {
    c4_j_modeFlag = false;
  }

  if (c4_j_modeFlag) {
    c4_k_modeFlag = true;
  } else {
    c4_k_modeFlag = false;
  }

  c4_l_modeFlag = c4_k_modeFlag;
  if (c4_l_modeFlag) {
    for (c4_i30 = 0; c4_i30 < 2; c4_i30++) {
      c4_padSizeT[c4_i30] = 132.0 + 28.0 * (real_T)c4_i30;
    }

    for (c4_i32 = 0; c4_i32 < 2; c4_i32++) {
      c4_outSizeT[c4_i32] = 120.0 + 40.0 * (real_T)c4_i32;
    }

    for (c4_i34 = 0; c4_i34 < 2; c4_i34++) {
      c4_connDimsT[c4_i34] = 13.0 + -12.0 * (real_T)c4_i34;
    }

    ippfilter_real32(&chartInstance->c4_a[0], &c4_b_i2[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_d_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i29 = 0; c4_i29 < 2; c4_i29++) {
      c4_padSizeT[c4_i29] = 132.0 + 28.0 * (real_T)c4_i29;
    }

    for (c4_i31 = 0; c4_i31 < 2; c4_i31++) {
      c4_outSizeT[c4_i31] = 120.0 + 40.0 * (real_T)c4_i31;
    }

    for (c4_i33 = 0; c4_i33 < 2; c4_i33++) {
      c4_connDimsT[c4_i33] = 13.0 + -12.0 * (real_T)c4_i33;
    }

    for (c4_i35 = 0; c4_i35 < 2; c4_i35++) {
      c4_startT[c4_i35] = 6.0 + -6.0 * (real_T)c4_i35;
    }

    imfilter_real32(&chartInstance->c4_a[0], &c4_b_i2[0], 2.0, &c4_outSizeT[0],
                    2.0, &c4_padSizeT[0], &c4_nonZeroKernel[0], 12.0,
                    &c4_c_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0,
                    true, true);
  }

  c4_x = chartInstance->c4_i1[0];
  c4_y = c4_b_i2[0];
  c4_d_a = c4_x;
  c4_b = c4_y;
  c4_b_x = c4_d_a;
  c4_b_y = c4_b;
  c4_x1 = c4_b_x;
  c4_x2 = c4_b_y;
  c4_e_a = c4_x1;
  c4_b_b = c4_x2;
  c4_r = muSingleScalarHypot(c4_e_a, c4_b_b);
  chartInstance->c4_c_a[0] = c4_r;
  c4_magmax = chartInstance->c4_c_a[0];
  for (c4_idx = 0; c4_idx < 19199; c4_idx++) {
    c4_b_idx = (real_T)c4_idx + 2.0;
    c4_c_x = chartInstance->c4_i1[(int32_T)c4_b_idx - 1];
    c4_e_y = c4_b_i2[(int32_T)c4_b_idx - 1];
    c4_f_a = c4_c_x;
    c4_c_b = c4_e_y;
    c4_d_x = c4_f_a;
    c4_f_y = c4_c_b;
    c4_b_x1 = c4_d_x;
    c4_b_x2 = c4_f_y;
    c4_g_a = c4_b_x1;
    c4_d_b = c4_b_x2;
    c4_b_r = muSingleScalarHypot(c4_g_a, c4_d_b);
    chartInstance->c4_c_a[(int32_T)c4_b_idx - 1] = c4_b_r;
    c4_c_varargin_1 = chartInstance->c4_c_a[(int32_T)c4_b_idx - 1];
    c4_varargin_2 = c4_magmax;
    c4_f_x = c4_c_varargin_1;
    c4_g_y = c4_varargin_2;
    c4_g_x = c4_f_x;
    c4_h_y = c4_g_y;
    c4_h_x = c4_g_x;
    c4_i_y = c4_h_y;
    c4_h_a = c4_h_x;
    c4_g_b = c4_i_y;
    c4_j_x = c4_h_a;
    c4_j_y = c4_g_b;
    c4_k_x = c4_j_x;
    c4_k_y = c4_j_y;
    c4_magmax = muSingleScalarMax(c4_k_x, c4_k_y);
  }

  if (c4_magmax > 0.0F) {
    c4_c_y = c4_magmax;
    c4_d_y = c4_c_y;
    for (c4_i36 = 0; c4_i36 < 19200; c4_i36++) {
      chartInstance->c4_c_a[c4_i36] /= c4_d_y;
    }
  }

  c4_st.site = &c4_d_emlrtRSI;
  c4_b_st.site = &c4_s_emlrtRSI;
  c4_c_st.site = &c4_t_emlrtRSI;
  c4_d_st.site = &c4_u_emlrtRSI;
  c4_out = 1.0;
  getnumcores(&c4_out);
  for (c4_i37 = 0; c4_i37 < 64; c4_i37++) {
    c4_counts[c4_i37] = 0.0;
  }

  c4_nanFlag = false;
  for (c4_n_i = 0; c4_n_i < 19200; c4_n_i++) {
    c4_o_i = (real_T)c4_n_i + 1.0;
    c4_e_x = chartInstance->c4_c_a[(int32_T)c4_o_i - 1];
    c4_e_b = muSingleScalarIsNaN(c4_e_x);
    if (c4_e_b) {
      c4_nanFlag = true;
      c4_d_idx = 0.0F;
    } else {
      c4_d_idx = chartInstance->c4_c_a[(int32_T)c4_o_i - 1] * 63.0F + 0.5F;
    }

    if (c4_d_idx > 63.0F) {
      c4_counts[63]++;
    } else {
      c4_i_x = chartInstance->c4_c_a[(int32_T)c4_o_i - 1];
      c4_f_b = muSingleScalarIsInf(c4_i_x);
      if (c4_f_b) {
        c4_counts[63]++;
      } else {
        c4_i_a = c4_d_idx;
        c4_c = (int32_T)c4_i_a;
        c4_j_a = c4_d_idx;
        c4_b_c = (int32_T)c4_j_a;
        c4_counts[c4_c] = c4_counts[c4_b_c] + 1.0;
      }
    }
  }

  if (c4_nanFlag) {
    c4_d_st.site = &c4_v_emlrtRSI;
    c4_warning(chartInstance, &c4_d_st);
  }

  c4_sum = 0.0;
  c4_c_idx = 1;
  while ((!(c4_sum > 13440.0)) && ((real_T)c4_c_idx <= 64.0)) {
    c4_sum += c4_counts[c4_c_idx - 1];
    c4_i39 = c4_c_idx + 1;
    if (c4_i39 > 127) {
      c4_i39 = 127;
    } else if (c4_i39 < -128) {
      c4_i39 = -128;
    }

    c4_c_idx = (int8_T)c4_i39;
  }

  c4_i38 = c4_c_idx - 1;
  if (c4_i38 > 127) {
    c4_i38 = 127;
  } else if (c4_i38 < -128) {
    c4_i38 = -128;
  }

  c4_highThreshTemp = (real_T)(int8_T)c4_i38 / 64.0;
  if (((real_T)c4_c_idx > 64.0) && (!(c4_sum > 13440.0))) {
    c4_highThresh_size[0] = 0;
    c4_lowThresh_size[0] = 0;
  } else {
    c4_highThresh_size[0] = 1;
    c4_highThresh_data[0] = c4_highThreshTemp;
    c4_loop_ub = c4_highThresh_size[0] - 1;
    for (c4_i40 = 0; c4_i40 <= c4_loop_ub; c4_i40++) {
      c4_b_data[c4_i40] = c4_highThresh_data[c4_i40];
    }

    c4_b_data[0] *= 0.4;
    c4_lowThresh_size[0] = 1;
    c4_lowThresh_data[0] = c4_b_data[0];
  }

  c4_st.site = &c4_e_emlrtRSI;
  c4_i41 = 1;
  if ((c4_i41 < 1) || (c4_i41 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i41, 1, c4_lowThresh_size[0],
      &c4_n_emlrtBCI, &c4_st);
  }

  c4_b_st.site = &c4_x_emlrtRSI;
  c4_lowThresh = c4_lowThresh_data[0];
  c4_c_st.site = &c4_ab_emlrtRSI;
  c4_b_lowThresh = c4_lowThresh;
  for (c4_i42 = 0; c4_i42 < 19200; c4_i42++) {
    c4_E[c4_i42] = false;
  }

  for (c4_i43 = 0; c4_i43 < 2; c4_i43++) {
    c4_connDimsT[c4_i43] = 120.0 + 40.0 * (real_T)c4_i43;
  }

  cannythresholding_real32_tbb(&chartInstance->c4_i1[0], &c4_b_i2[0],
    &chartInstance->c4_c_a[0], &c4_connDimsT[0], c4_b_lowThresh, &c4_E[0]);
  c4_i44 = 1;
  if ((c4_i44 < 1) || (c4_i44 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i44, 1, c4_highThresh_size[0],
      &c4_o_emlrtBCI, &c4_st);
  }

  c4_highThresh = c4_highThresh_data[0];
  for (c4_i45 = 0; c4_i45 < 19200; c4_i45++) {
    c4_varargout_1[c4_i45] = ((real_T)chartInstance->c4_c_a[c4_i45] >
      c4_highThresh);
  }

  c4_b_st.site = &c4_y_emlrtRSI;
  c4_c_st.site = &c4_bb_emlrtRSI;
  for (c4_i46 = 0; c4_i46 < 2; c4_i46++) {
    c4_connDimsT[c4_i46] = 120.0 + 40.0 * (real_T)c4_i46;
  }

  ippreconstruct_uint8((uint8_T *)&c4_varargout_1[0], (uint8_T *)&c4_E[0],
                       &c4_connDimsT[0], 2.0);
  c4_i47 = 1;
  if ((c4_i47 < 1) || (c4_i47 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i47, 1, c4_lowThresh_size[0],
      &c4_l_emlrtBCI, (emlrtConstCTX)c4_sp);
  }

  c4_i48 = 1;
  if ((c4_i48 < 1) || (c4_i48 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i48, 1, c4_highThresh_size[0],
      &c4_m_emlrtBCI, (emlrtConstCTX)c4_sp);
  }
}

static void c4_warning(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  static char_T c4_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c4_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_y, c4_feval(chartInstance, &c4_st, c4_b_y,
              c4_c_y));
}

static void c4_hough(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
                     real_T c4_h[71820])
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  real_T c4_cost[180];
  real_T c4_sint[180];
  real_T c4_tempBin[120];
  real_T c4_b_j;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_j;
  real_T c4_d_x;
  real_T c4_e_i;
  real_T c4_e_x;
  real_T c4_myRho;
  real_T c4_tempNum;
  real_T c4_x;
  int32_T c4_nonZeroPixelMatrix[19200];
  int32_T c4_rhoIdxVector[399];
  int32_T c4_numNonZeros[160];
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_thetaIdx;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_d_a;
  int32_T c4_d_i;
  int32_T c4_f_i;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_n;
  int32_T c4_rhoIdx;
  int32_T c4_thetaIdx;
  int32_T c4_y;
  boolean_T c4_exitg1;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_cb_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  for (c4_i = 0; c4_i < 180; c4_i++) {
    c4_b_i = c4_i;
    c4_x = (-90.0 + (real_T)c4_b_i) * 3.1415926535897931 / 180.0;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarCos(c4_b_x);
    c4_cost[c4_b_i] = c4_b_x;
    c4_c_x = (-90.0 + (real_T)c4_b_i) * 3.1415926535897931 / 180.0;
    c4_d_x = c4_c_x;
    c4_d_x = muDoubleScalarSin(c4_d_x);
    c4_sint[c4_b_i] = c4_d_x;
  }

  c4_b_st.site = &c4_db_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_tempNum = 0.0;
    for (c4_c_i = 0; c4_c_i < 120; c4_c_i++) {
      c4_e_i = (real_T)c4_c_i + 1.0;
      if (c4_b_varargin_1[((int32_T)c4_e_i + 120 * ((int32_T)c4_b_j - 1)) - 1])
      {
        c4_tempNum++;
        c4_i2 = (int32_T)c4_tempNum;
        if ((c4_i2 < 1) || (c4_i2 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c4_i2, 1, 120, &c4_s_emlrtBCI, &c4_b_st);
        }

        c4_tempBin[c4_i2 - 1] = c4_e_i;
      }
    }

    c4_numNonZeros[(int32_T)c4_b_j - 1] = (int32_T)c4_tempNum;
    c4_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k < 120)) {
      c4_b_k = (real_T)c4_k + 1.0;
      if (c4_b_k > c4_tempNum) {
        c4_exitg1 = true;
      } else {
        c4_nonZeroPixelMatrix[((int32_T)c4_b_k + 120 * ((int32_T)c4_b_j - 1)) -
          1] = (int32_T)c4_tempBin[(int32_T)c4_b_k - 1];
        c4_k++;
      }
    }
  }

  for (c4_thetaIdx = 0; c4_thetaIdx < 180; c4_thetaIdx++) {
    c4_b_thetaIdx = c4_thetaIdx;
    for (c4_d_i = 0; c4_d_i < 399; c4_d_i++) {
      c4_rhoIdxVector[c4_d_i] = 0;
    }

    for (c4_c_j = 0; c4_c_j < 160; c4_c_j++) {
      c4_d_j = (real_T)c4_c_j + 1.0;
      c4_i3 = c4_numNonZeros[(int32_T)c4_d_j - 1];
      c4_b_st.site = &c4_eb_emlrtRSI;
      c4_b = c4_i3;
      c4_b_b = c4_b;
      if (c4_b_b < 1) {
        c4_overflow = false;
      } else {
        c4_overflow = (c4_b_b > 2147483646);
      }

      if (c4_overflow) {
        c4_c_st.site = &c4_fb_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      c4_i4 = (uint8_T)c4_i3 - 1;
      for (c4_f_i = 0; c4_f_i <= c4_i4; c4_f_i++) {
        c4_b_i = c4_f_i;
        c4_n = c4_nonZeroPixelMatrix[c4_b_i + 120 * ((int32_T)c4_d_j - 1)];
        c4_myRho = (c4_d_j - 1.0) * c4_cost[c4_b_thetaIdx] + ((real_T)c4_n - 1.0)
          * c4_sint[c4_b_thetaIdx];
        c4_e_x = c4_myRho - -199.0;
        c4_y = (int32_T)(c4_e_x + 0.5) + 1;
        c4_rhoIdx = c4_y;
        c4_d_a = c4_rhoIdxVector[c4_rhoIdx - 1] + 1;
        c4_c = c4_d_a;
        if ((c4_rhoIdx < 1) || (c4_rhoIdx > 399)) {
          emlrtDynamicBoundsCheckR2012b(c4_rhoIdx, 1, 399, &c4_r_emlrtBCI,
            &c4_st);
        }

        c4_rhoIdxVector[c4_rhoIdx - 1] = c4_c;
      }
    }

    for (c4_b_i1 = 0; c4_b_i1 < 399; c4_b_i1++) {
      c4_h[c4_b_i1 + 399 * c4_b_thetaIdx] = (real_T)c4_rhoIdxVector[c4_b_i1];
    }
  }
}

static void c4_check_forloop_overflow_error
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp)
{
  static char_T c4_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c4_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  (void)chartInstance;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c4_sp, &c4_c_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14, sf_mex_call
              (c4_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c4_sp, NULL,
    "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
}

static void c4_houghpeaks(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_b_varargin_1[71820], real_T
  c4_peaks_data[], int32_T c4_peaks_size[2])
{
  static char_T c4_b_cv1[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i',
    'd', 'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a',
    'c', 'i', 'n', 'g' };

  static char_T c4_b_cv[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_dv1[180];
  real_T c4_dv2[180];
  real_T c4_dv3[180];
  real_T c4_thetaInterval[179];
  real_T c4_f_x[178];
  real_T c4_peakCoordinates[8];
  real_T c4_dv[2];
  real_T c4_b_default;
  real_T c4_b_ex;
  real_T c4_b_k;
  real_T c4_b_ndx;
  real_T c4_b_threshold;
  real_T c4_b_thresholdDefault;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_default;
  real_T c4_e_idx;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_ex;
  real_T c4_f_y;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_iPeak;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_jPeak;
  real_T c4_j_x;
  real_T c4_j_y;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_m_x;
  real_T c4_maxTheta;
  real_T c4_maxVal;
  real_T c4_minTheta;
  real_T c4_n_x;
  real_T c4_ndx;
  real_T c4_o_x;
  real_T c4_thetaResolution;
  real_T c4_threshold;
  real_T c4_thresholdDefault;
  real_T c4_val;
  real_T c4_x;
  int32_T c4_b_i1;
  int32_T c4_b_iPeak;
  int32_T c4_b_idx;
  int32_T c4_b_jPeak;
  int32_T c4_c_idx;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_idx;
  int32_T c4_e_k;
  int32_T c4_f_idx;
  int32_T c4_f_k;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_peakIdx;
  int32_T c4_rho;
  int32_T c4_rhoMax;
  int32_T c4_rhoMin;
  int32_T c4_rhoToRemove;
  int32_T c4_theta;
  int32_T c4_thetaMax;
  int32_T c4_thetaMin;
  int32_T c4_thetaToRemove;
  int32_T c4_v1;
  int32_T c4_varargout_3;
  int32_T c4_varargout_4;
  int32_T c4_vk;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_exitg1;
  boolean_T c4_isDone;
  boolean_T c4_isThetaAntisymmetric;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_jb_emlrtRSI;
  c4_b_st.site = &c4_kb_emlrtRSI;
  c4_c_st.site = &c4_nb_emlrtRSI;
  c4_c_st.site = &c4_nb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 71820)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_b_varargin_1[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    c4_b_b = muDoubleScalarIsInf(c4_c_x);
    c4_b1 = !c4_b_b;
    c4_c_b = c4_b1;
    if (c4_c_b) {
      c4_d_x = c4_x;
      c4_e_x = c4_d_x;
      c4_d_y = c4_e_x;
      c4_d_y = muDoubleScalarFloor(c4_d_y);
      if (c4_d_y == c4_x) {
        c4_b_p = true;
      } else {
        c4_b_p = false;
      }
    } else {
      c4_b_p = false;
    }

    c4_c_p = c4_b_p;
    if (c4_c_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c4_c_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_maxVal = 0.0;
  for (c4_c_k = 0; c4_c_k < 71820; c4_c_k++) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_val = c4_b_varargin_1[(int32_T)c4_d_k - 1];
    if (c4_val > c4_maxVal) {
      c4_maxVal = c4_val;
    }
  }

  c4_thresholdDefault = 0.5 * c4_maxVal;
  c4_b_thresholdDefault = c4_thresholdDefault;
  c4_default = c4_b_thresholdDefault;
  c4_b_default = c4_default;
  c4_threshold = c4_b_default;
  c4_b_threshold = c4_threshold;
  c4_b_st.site = &c4_lb_emlrtRSI;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_dv[c4_i] = 9.0 + -4.0 * (real_T)c4_i;
  }

  c4_c_st.site = &c4_ob_emlrtRSI;
  c4_validateattributes(chartInstance, &c4_c_st, c4_dv);
  c4_b_st.site = &c4_mb_emlrtRSI;
  c4_c_st.site = &c4_rb_emlrtRSI;
  c4_c_st.site = &c4_qb_emlrtRSI;
  for (c4_b_i1 = 0; c4_b_i1 < 180; c4_b_i1++) {
    c4_dv1[c4_b_i1] = -90.0 + (real_T)c4_b_i1;
  }

  c4_maximum(chartInstance, c4_dv1);
  for (c4_i2 = 0; c4_i2 < 180; c4_i2++) {
    c4_dv2[c4_i2] = -90.0 + (real_T)c4_i2;
  }

  c4_diff(chartInstance, c4_dv2, c4_thetaInterval);
  c4_c_st.site = &c4_pb_emlrtRSI;
  c4_c_st.site = &c4_pb_emlrtRSI;
  c4_b_diff(chartInstance, c4_thetaInterval, c4_f_x);
  c4_e_y = c4_sumColumnB(chartInstance, c4_f_x);
  c4_g_x = c4_e_y;
  c4_h_x = c4_g_x;
  c4_i_x = c4_h_x;
  c4_f_y = muDoubleScalarAbs(c4_i_x);
  if (c4_f_y > 1.4901161193847656E-8) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    sf_mex_call(&c4_b_st, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_h_y)));
  }

  c4_isDone = false;
  for (c4_i3 = 0; c4_i3 < 71820; c4_i3++) {
    chartInstance->c4_hnew[c4_i3] = c4_b_varargin_1[c4_i3];
  }

  c4_peakIdx = 0;
  c4_ex = -90.0;
  for (c4_e_k = 0; c4_e_k < 179; c4_e_k++) {
    if (c4_ex > -90.0 + (real_T)(c4_e_k + 1)) {
      c4_ex = -90.0 + (real_T)(c4_e_k + 1);
    }
  }

  c4_minTheta = c4_ex;
  c4_st.site = &c4_ib_emlrtRSI;
  c4_b_st.site = &c4_sb_emlrtRSI;
  for (c4_i4 = 0; c4_i4 < 180; c4_i4++) {
    c4_dv3[c4_i4] = -90.0 + (real_T)c4_i4;
  }

  c4_c_st.site = &c4_tb_emlrtRSI;
  c4_maxTheta = c4_maximum(chartInstance, c4_dv3);
  c4_j_x = c4_maxTheta - c4_minTheta;
  c4_k_x = c4_j_x;
  c4_l_x = c4_k_x;
  c4_i_y = muDoubleScalarAbs(c4_l_x);
  c4_thetaResolution = c4_i_y / 179.0;
  c4_m_x = c4_minTheta + c4_thetaResolution * 5.0;
  c4_n_x = c4_m_x;
  c4_o_x = c4_n_x;
  c4_j_y = muDoubleScalarAbs(c4_o_x);
  c4_isThetaAntisymmetric = (c4_j_y <= c4_maxTheta);
  while (!c4_isDone) {
    c4_st.site = &c4_hb_emlrtRSI;
    for (c4_i5 = 0; c4_i5 < 71820; c4_i5++) {
      chartInstance->c4_varargin_1[c4_i5] = chartInstance->c4_hnew[c4_i5];
    }

    c4_b_st.site = &c4_ic_emlrtRSI;
    c4_c_st.site = &c4_jc_emlrtRSI;
    c4_b_ex = chartInstance->c4_varargin_1[0];
    c4_idx = 1;
    for (c4_f_k = 0; c4_f_k < 71819; c4_f_k++) {
      if (c4_b_ex < chartInstance->c4_varargin_1[c4_f_k + 1]) {
        c4_b_ex = chartInstance->c4_varargin_1[c4_f_k + 1];
        c4_idx = c4_f_k + 2;
      }
    }

    c4_b_idx = c4_idx;
    c4_c_idx = c4_b_idx;
    c4_d_idx = c4_c_idx;
    c4_iindx = c4_d_idx;
    c4_e_idx = (real_T)c4_iindx;
    c4_st.site = &c4_gb_emlrtRSI;
    c4_ndx = c4_e_idx;
    c4_b_st.site = &c4_mc_emlrtRSI;
    c4_b_ndx = c4_ndx;
    c4_f_idx = (int32_T)c4_b_ndx - 1;
    c4_v1 = c4_f_idx;
    c4_d_a = c4_v1;
    c4_vk = (int32_T)((uint32_T)c4_d_a / 399U);
    c4_varargout_4 = c4_vk;
    c4_v1 = (c4_v1 - c4_vk * 399) + 1;
    c4_varargout_3 = c4_v1;
    c4_iPeak = (real_T)c4_varargout_3;
    c4_jPeak = (real_T)(c4_varargout_4 + 1);
    c4_b_iPeak = (int32_T)c4_iPeak;
    c4_b_jPeak = (int32_T)c4_jPeak;
    if ((c4_b_iPeak < 1) || (c4_b_iPeak > 399)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_iPeak, 1, 399, &c4_u_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    if (chartInstance->c4_hnew[(c4_b_iPeak + 399 * (c4_b_jPeak - 1)) - 1] >=
        c4_b_threshold) {
      c4_peakIdx++;
      if ((c4_peakIdx < 1) || (c4_peakIdx > 4)) {
        emlrtDynamicBoundsCheckR2012b(c4_peakIdx, 1, 4, &c4_t_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_peakCoordinates[c4_peakIdx - 1] = (real_T)c4_b_iPeak;
      c4_peakCoordinates[c4_peakIdx + 3] = (real_T)c4_b_jPeak;
      c4_rhoMin = c4_b_iPeak - 4;
      c4_rhoMax = c4_b_iPeak + 4;
      c4_thetaMin = c4_b_jPeak;
      c4_thetaMax = c4_b_jPeak;
      if (c4_rhoMin < 1) {
        c4_rhoMin = 1;
      }

      if (c4_rhoMax > 399) {
        c4_rhoMax = 399;
      }

      for (c4_theta = c4_thetaMin - 2; c4_theta <= c4_thetaMax + 2; c4_theta++)
      {
        for (c4_rho = c4_rhoMin; c4_rho <= c4_rhoMax; c4_rho++) {
          c4_rhoToRemove = c4_rho;
          c4_thetaToRemove = c4_theta;
          if (c4_isThetaAntisymmetric) {
            if (c4_theta > 180) {
              c4_rhoToRemove = 400 - c4_rho;
              c4_thetaToRemove = c4_theta - 180;
            } else if (c4_theta < 1) {
              c4_rhoToRemove = 400 - c4_rho;
              c4_thetaToRemove = c4_theta + 180;
            }
          }

          if ((c4_thetaToRemove > 180) || (c4_thetaToRemove < 1)) {
          } else {
            chartInstance->c4_hnew[(c4_rhoToRemove + 399 * (c4_thetaToRemove - 1))
              - 1] = 0.0;
          }
        }
      }

      c4_isDone = (c4_peakIdx == 4);
    } else {
      c4_isDone = true;
    }
  }

  if (c4_peakIdx == 0) {
    c4_peaks_size[0] = 0;
    c4_peaks_size[1] = 0;
  } else {
    c4_peaks_size[0] = c4_peakIdx;
    c4_peaks_size[1] = 2;
    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_loop_ub = c4_peakIdx - 1;
      for (c4_i7 = 0; c4_i7 <= c4_loop_ub; c4_i7++) {
        c4_peaks_data[c4_i7 + c4_peaks_size[0] * c4_i6] =
          c4_peakCoordinates[c4_i7 + (c4_i6 << 2)];
      }
    }
  }
}

static void c4_validateattributes(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_d_a[2])
{
  static char_T c4_cv2[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'O', 'd', 'd' };

  static char_T c4_b_cv1[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'O', 'd', 'd' };

  static char_T c4_b_cv[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c4_cv3[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_a;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_i_x;
  real_T c4_r;
  real_T c4_x;
  int32_T c4_c_k;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_p;
  boolean_T c4_rEQ0;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_nb_emlrtRSI;
  c4_st.site = &c4_nb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 2)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_d_a[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    c4_b_b = muDoubleScalarIsInf(c4_c_x);
    c4_b1 = !c4_b_b;
    c4_c_b = c4_b1;
    if (c4_c_b) {
      c4_d_x = c4_x;
      c4_e_x = c4_d_x;
      c4_d_y = c4_e_x;
      c4_d_y = muDoubleScalarFloor(c4_d_y);
      if (c4_d_y == c4_x) {
        c4_c_p = true;
      } else {
        c4_c_p = false;
      }
    } else {
      c4_c_p = false;
    }

    c4_d_p = c4_c_p;
    if (c4_d_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_st.site = &c4_nb_emlrtRSI;
  c4_st.site = &c4_nb_emlrtRSI;
  c4_b_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 2)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_f_x = c4_d_a[(int32_T)c4_d_k - 1];
    c4_g_x = c4_f_x;
    c4_e_a = c4_g_x;
    c4_h_x = c4_e_a;
    c4_i_x = c4_h_x;
    c4_r = muDoubleScalarRem(c4_i_x, 2.0);
    c4_rEQ0 = (c4_r == 0.0);
    if (c4_rEQ0) {
      c4_r = 0.0;
    }

    c4_e_p = (c4_r == 1.0);
    if (c4_e_p) {
      c4_c_k++;
    } else {
      c4_b_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_b_p) {
    c4_b2 = true;
  } else {
    c4_b2 = false;
  }

  if (!c4_b2) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }
}

static real_T c4_maximum(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  real_T c4_x[180])
{
  real_T c4_b_ex;
  int32_T c4_k;
  (void)chartInstance;
  c4_b_ex = c4_x[0];
  for (c4_k = 0; c4_k < 179; c4_k++) {
    if (c4_b_ex < c4_x[c4_k + 1]) {
      c4_b_ex = c4_x[c4_k + 1];
    }
  }

  return c4_b_ex;
}

static void c4_diff(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                    real_T c4_x[180], real_T c4_y[179])
{
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_work;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_m;
  (void)chartInstance;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = c4_x[0];
  for (c4_m = 0; c4_m < 179; c4_m++) {
    c4_tmp1 = c4_x[c4_ixLead];
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }
}

static void c4_b_diff(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                      real_T c4_x[179], real_T c4_y[178])
{
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_work;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_m;
  (void)chartInstance;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = c4_x[0];
  for (c4_m = 0; c4_m < 178; c4_m++) {
    c4_tmp1 = c4_x[c4_ixLead];
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }
}

static real_T c4_sumColumnB(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178])
{
  real_T c4_y;
  int32_T c4_b_k;
  int32_T c4_k;
  (void)chartInstance;
  c4_y = c4_x[0];
  for (c4_k = 0; c4_k < 177; c4_k++) {
    c4_b_k = c4_k;
    c4_y += c4_x[c4_b_k + 1];
  }

  return c4_y;
}

static void c4_houghlines(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
  real_T c4_varargin_4_data[], int32_T c4_varargin_4_size[2],
  c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_lines)
{
  static char_T c4_b_cv[30] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'l', 'i', 'n', 'e', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'P', 'E', 'A', 'K', 'S' };

  c4_emxArray_int32_T *c4_b_point1Array;
  c4_emxArray_int32_T *c4_b_point2Array;
  c4_emxArray_int32_T *c4_houghPix;
  c4_emxArray_int32_T *c4_point1Array;
  c4_emxArray_int32_T *c4_point2Array;
  c4_emxArray_int32_T *c4_r;
  c4_emxArray_real32_T *c4_rhoArray;
  c4_emxArray_real32_T *c4_thetaArray;
  c4_emxArray_real_T *c4_distances2;
  c4_emxArray_real_T *c4_indices;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_tempBin[120];
  real_T c4_peaks_data[8];
  real_T c4_sortingOrder[2];
  real_T c4_b_j;
  real_T c4_b_n;
  real_T c4_b_numHoughPix;
  real_T c4_b_peakIdx;
  real_T c4_b_varargin_2;
  real_T c4_b_x;
  real_T c4_c_i;
  real_T c4_c_varargin_1;
  real_T c4_c_varargin_2;
  real_T c4_c_x;
  real_T c4_c_y;
  real_T c4_colMax;
  real_T c4_colMin;
  real_T c4_colRange;
  real_T c4_cosTheta;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d_a;
  real_T c4_d_varargin_1;
  real_T c4_d_varargin_2;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_a;
  real_T c4_e_k;
  real_T c4_e_varargin_1;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_f_i;
  real_T c4_f_varargin_1;
  real_T c4_f_x;
  real_T c4_f_y;
  real_T c4_g_b;
  real_T c4_g_x;
  real_T c4_g_y;
  real_T c4_h_b;
  real_T c4_h_k;
  real_T c4_h_x;
  real_T c4_h_y;
  real_T c4_i_b;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_j_b;
  real_T c4_j_k;
  real_T c4_j_x;
  real_T c4_j_y;
  real_T c4_k_a;
  real_T c4_k_x;
  real_T c4_k_y;
  real_T c4_l_x;
  real_T c4_l_y;
  real_T c4_m_k;
  real_T c4_m_x;
  real_T c4_m_y;
  real_T c4_n;
  real_T c4_n_a;
  real_T c4_n_x;
  real_T c4_n_y;
  real_T c4_numPairs;
  real_T c4_numPeaks;
  real_T c4_o_x;
  real_T c4_o_y;
  real_T c4_p_x;
  real_T c4_p_y;
  real_T c4_q_x;
  real_T c4_q_y;
  real_T c4_r_x;
  real_T c4_r_y;
  real_T c4_rhoVal;
  real_T c4_rowMax;
  real_T c4_rowMin;
  real_T c4_rowRange;
  real_T c4_s_x;
  real_T c4_s_y;
  real_T c4_sinTheta;
  real_T c4_t_x;
  real_T c4_t_y;
  real_T c4_tempNum;
  real_T c4_thetaVal;
  real_T c4_u_x;
  real_T c4_u_y;
  real_T c4_v_x;
  real_T c4_v_y;
  real_T c4_varargin_2;
  real_T c4_w_x;
  real_T c4_x;
  int32_T c4_houghPixTemp[19200];
  int32_T c4_nonZeroPixelMatrix[19200];
  int32_T c4_tempHoughPixNumsVector[160];
  int32_T c4_tempNumsVector[160];
  int32_T c4_b_tempBin[120];
  int32_T c4_peaks_size[2];
  int32_T c4_point1_data[2];
  int32_T c4_point1_size[2];
  int32_T c4_point2_data[2];
  int32_T c4_point2_size[2];
  int32_T c4_ab_a;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_bu;
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_indices;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_numLines;
  int32_T c4_b_peak1;
  int32_T c4_b_peak2;
  int32_T c4_b_tempNum;
  int32_T c4_bb_a;
  int32_T c4_bu;
  int32_T c4_c;
  int32_T c4_c_b;
  int32_T c4_c_bu;
  int32_T c4_c_c;
  int32_T c4_c_indices;
  int32_T c4_c_j;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_c_numLines;
  int32_T c4_d_b;
  int32_T c4_d_bu;
  int32_T c4_d_c;
  int32_T c4_d_i;
  int32_T c4_d_j;
  int32_T c4_d_k;
  int32_T c4_d_loop_ub;
  int32_T c4_e_b;
  int32_T c4_e_i;
  int32_T c4_e_j;
  int32_T c4_e_loop_ub;
  int32_T c4_exitg2;
  int32_T c4_f_a;
  int32_T c4_f_b;
  int32_T c4_f_k;
  int32_T c4_f_loop_ub;
  int32_T c4_g_a;
  int32_T c4_g_k;
  int32_T c4_g_loop_ub;
  int32_T c4_h_a;
  int32_T c4_h_loop_ub;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i48;
  int32_T c4_i49;
  int32_T c4_i5;
  int32_T c4_i50;
  int32_T c4_i51;
  int32_T c4_i52;
  int32_T c4_i53;
  int32_T c4_i54;
  int32_T c4_i55;
  int32_T c4_i56;
  int32_T c4_i57;
  int32_T c4_i58;
  int32_T c4_i59;
  int32_T c4_i6;
  int32_T c4_i60;
  int32_T c4_i61;
  int32_T c4_i62;
  int32_T c4_i63;
  int32_T c4_i64;
  int32_T c4_i65;
  int32_T c4_i66;
  int32_T c4_i67;
  int32_T c4_i68;
  int32_T c4_i69;
  int32_T c4_i7;
  int32_T c4_i70;
  int32_T c4_i71;
  int32_T c4_i72;
  int32_T c4_i73;
  int32_T c4_i74;
  int32_T c4_i75;
  int32_T c4_i76;
  int32_T c4_i77;
  int32_T c4_i78;
  int32_T c4_i79;
  int32_T c4_i8;
  int32_T c4_i80;
  int32_T c4_i81;
  int32_T c4_i82;
  int32_T c4_i83;
  int32_T c4_i84;
  int32_T c4_i85;
  int32_T c4_i86;
  int32_T c4_i87;
  int32_T c4_i88;
  int32_T c4_i89;
  int32_T c4_i9;
  int32_T c4_i90;
  int32_T c4_i_a;
  int32_T c4_i_k;
  int32_T c4_i_loop_ub;
  int32_T c4_j;
  int32_T c4_j_a;
  int32_T c4_k;
  int32_T c4_k_k;
  int32_T c4_l_a;
  int32_T c4_l_k;
  int32_T c4_lineLength2;
  int32_T c4_loop_ub;
  int32_T c4_m_a;
  int32_T c4_numHoughPix;
  int32_T c4_numLines;
  int32_T c4_o_a;
  int32_T c4_p_a;
  int32_T c4_peak1;
  int32_T c4_peak2;
  int32_T c4_peakIdx;
  int32_T c4_q_a;
  int32_T c4_r_a;
  int32_T c4_rhoBinIdx;
  int32_T c4_s_a;
  int32_T c4_t_a;
  int32_T c4_u_a;
  int32_T c4_v_a;
  int32_T c4_w_a;
  int32_T c4_x_a;
  int32_T c4_y_a;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_exitg1;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_nc_emlrtRSI;
  c4_b_st.site = &c4_tc_emlrtRSI;
  c4_b_validateattributes(chartInstance, &c4_b_st, c4_varargin_4_data,
    c4_varargin_4_size);
  if ((real_T)c4_varargin_4_size[1] != 2.0) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c4_st, &c4_k_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_b_y)));
  }

  c4_peaks_size[0] = c4_varargin_4_size[0];
  c4_loop_ub = c4_varargin_4_size[0] * c4_varargin_4_size[1] - 1;
  for (c4_i = 0; c4_i <= c4_loop_ub; c4_i++) {
    c4_peaks_data[c4_i] = c4_varargin_4_data[c4_i];
  }

  c4_st.site = &c4_oc_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_tempNum = 0.0;
    for (c4_b_i = 0; c4_b_i < 120; c4_b_i++) {
      c4_c_i = (real_T)c4_b_i + 1.0;
      if (c4_b_varargin_1[((int32_T)c4_c_i + 120 * ((int32_T)c4_b_j - 1)) - 1])
      {
        c4_tempNum++;
        c4_b_i1 = (int32_T)c4_tempNum;
        if ((c4_b_i1 < 1) || (c4_b_i1 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c4_b_i1, 1, 120, &c4_ib_emlrtBCI, &c4_st);
        }

        c4_tempBin[c4_b_i1 - 1] = c4_c_i - 1.0;
      }
    }

    c4_tempNumsVector[(int32_T)c4_b_j - 1] = (int32_T)c4_tempNum;
    c4_d_i = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_d_i < 120)) {
      c4_c_i = (real_T)c4_d_i + 1.0;
      if (c4_c_i > c4_tempNum) {
        c4_exitg1 = true;
      } else {
        c4_nonZeroPixelMatrix[((int32_T)c4_c_i + 120 * ((int32_T)c4_b_j - 1)) -
          1] = (int32_T)c4_tempBin[(int32_T)c4_c_i - 1];
        c4_d_i++;
      }
    }
  }

  c4_numLines = 0;
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_point1Array, 2, &c4_eb_emlrtRTEI);
  c4_point1Array->size[0] = 0;
  c4_point1Array->size[1] = 2;
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_point2Array, 2, &c4_fb_emlrtRTEI);
  c4_point2Array->size[0] = 0;
  c4_point2Array->size[1] = 2;
  c4_emxInit_real32_T(chartInstance, c4_sp, &c4_thetaArray, 1, &c4_gb_emlrtRTEI);
  c4_thetaArray->size[0] = 0;
  c4_emxInit_real32_T(chartInstance, c4_sp, &c4_rhoArray, 1, &c4_hb_emlrtRTEI);
  c4_rhoArray->size[0] = 0;
  c4_numPeaks = (real_T)c4_peaks_size[0];
  c4_i2 = (int32_T)c4_numPeaks - 1;
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_indices, 1, &c4_ib_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_houghPix, 2, &c4_jb_emlrtRTEI);
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_distances2, 1, &c4_kb_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_r, 2, &c4_r_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_b_point1Array, 2, &c4_x_emlrtRTEI);
  c4_emxInit_int32_T(chartInstance, c4_sp, &c4_b_point2Array, 2,
                     &c4_ab_emlrtRTEI);
  for (c4_peakIdx = 0; c4_peakIdx <= c4_i2; c4_peakIdx++) {
    c4_b_peakIdx = (real_T)c4_peakIdx + 1.0;
    c4_i3 = (int32_T)c4_b_peakIdx;
    if ((c4_i3 < 1) || (c4_i3 > c4_peaks_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c4_i3, 1, c4_peaks_size[0], &c4_pb_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_peak1 = (int32_T)c4_peaks_data[c4_i3 - 1];
    c4_i4 = (int32_T)c4_b_peakIdx;
    if ((c4_i4 < 1) || (c4_i4 > c4_peaks_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c4_i4, 1, c4_peaks_size[0], &c4_qb_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    c4_peak2 = (int32_T)c4_peaks_data[(c4_i4 + c4_peaks_size[0]) - 1];
    c4_st.site = &c4_pc_emlrtRSI;
    c4_b_peak1 = c4_peak1;
    c4_b_peak2 = c4_peak2;
    c4_numHoughPix = 0;
    if ((c4_b_peak2 < 1) || (c4_b_peak2 > 180)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_peak2, 1, 180, &c4_eb_emlrtBCI, &c4_st);
    }

    c4_thetaVal = (-90.0 + (real_T)(c4_b_peak2 - 1)) * 3.1415926535897931 /
      180.0;
    c4_x = c4_thetaVal;
    c4_cosTheta = c4_x;
    c4_cosTheta = muDoubleScalarCos(c4_cosTheta);
    c4_b_x = c4_thetaVal;
    c4_sinTheta = c4_b_x;
    c4_sinTheta = muDoubleScalarSin(c4_sinTheta);
    c4_rowMax = 0.0;
    c4_rowMin = rtInf;
    c4_colMax = 0.0;
    c4_colMin = rtInf;
    for (c4_d_k = 0; c4_d_k < 160; c4_d_k++) {
      c4_e_k = (real_T)c4_d_k + 1.0;
      c4_b_tempNum = 0;
      c4_i9 = c4_tempNumsVector[(int32_T)c4_e_k - 1];
      c4_b_st.site = &c4_wc_emlrtRSI;
      c4_c_b = c4_i9;
      c4_d_b = c4_c_b;
      if (c4_d_b < 1) {
        c4_b_overflow = false;
      } else {
        c4_b_overflow = (c4_d_b > 2147483646);
      }

      if (c4_b_overflow) {
        c4_c_st.site = &c4_fb_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
      }

      c4_i18 = (uint8_T)c4_i9 - 1;
      for (c4_c_j = 0; c4_c_j <= c4_i18; c4_c_j++) {
        c4_d_j = c4_c_j;
        c4_rhoVal = (c4_e_k - 1.0) * c4_cosTheta + (real_T)
          c4_nonZeroPixelMatrix[c4_d_j + 120 * ((int32_T)c4_e_k - 1)] *
          c4_sinTheta;
        c4_c_x = (c4_rhoVal - -199.0) + 1.0;
        c4_rhoBinIdx = (int32_T)(c4_c_x + 0.5);
        if (c4_rhoBinIdx == c4_b_peak1) {
          c4_b_tempNum++;
          if ((c4_b_tempNum < 1) || (c4_b_tempNum > 120)) {
            emlrtDynamicBoundsCheckR2012b(c4_b_tempNum, 1, 120, &c4_yb_emlrtBCI,
              &c4_st);
          }

          c4_b_tempBin[c4_b_tempNum - 1] = c4_nonZeroPixelMatrix[c4_d_j + 120 *
            ((int32_T)c4_e_k - 1)] + 1;
        }
      }

      c4_tempHoughPixNumsVector[(int32_T)c4_e_k - 1] = c4_b_tempNum;
      c4_numHoughPix += c4_b_tempNum;
      if (c4_b_tempNum != 0) {
        c4_c_varargin_1 = c4_rowMax;
        c4_varargin_2 = (real_T)c4_b_tempBin[c4_b_tempNum - 1];
        c4_d_x = c4_c_varargin_1;
        c4_c_y = c4_varargin_2;
        c4_e_x = c4_d_x;
        c4_d_y = c4_c_y;
        c4_f_x = c4_e_x;
        c4_e_y = c4_d_y;
        c4_d_a = c4_f_x;
        c4_g_b = c4_e_y;
        c4_g_x = c4_d_a;
        c4_f_y = c4_g_b;
        c4_h_x = c4_g_x;
        c4_g_y = c4_f_y;
        c4_rowMax = muDoubleScalarMax(c4_h_x, c4_g_y);
        c4_d_varargin_1 = c4_rowMin;
        c4_b_varargin_2 = (real_T)c4_b_tempBin[0];
        c4_i_x = c4_d_varargin_1;
        c4_h_y = c4_b_varargin_2;
        c4_j_x = c4_i_x;
        c4_i_y = c4_h_y;
        c4_k_x = c4_j_x;
        c4_j_y = c4_i_y;
        c4_e_a = c4_k_x;
        c4_h_b = c4_j_y;
        c4_l_x = c4_e_a;
        c4_k_y = c4_h_b;
        c4_m_x = c4_l_x;
        c4_l_y = c4_k_y;
        c4_rowMin = muDoubleScalarMin(c4_m_x, c4_l_y);
        c4_e_varargin_1 = c4_colMax;
        c4_c_varargin_2 = c4_e_k;
        c4_n_x = c4_e_varargin_1;
        c4_m_y = c4_c_varargin_2;
        c4_o_x = c4_n_x;
        c4_n_y = c4_m_y;
        c4_p_x = c4_o_x;
        c4_o_y = c4_n_y;
        c4_k_a = c4_p_x;
        c4_i_b = c4_o_y;
        c4_q_x = c4_k_a;
        c4_p_y = c4_i_b;
        c4_r_x = c4_q_x;
        c4_q_y = c4_p_y;
        c4_colMax = muDoubleScalarMax(c4_r_x, c4_q_y);
        c4_f_varargin_1 = c4_colMin;
        c4_d_varargin_2 = c4_e_k;
        c4_s_x = c4_f_varargin_1;
        c4_r_y = c4_d_varargin_2;
        c4_t_x = c4_s_x;
        c4_s_y = c4_r_y;
        c4_u_x = c4_t_x;
        c4_t_y = c4_s_y;
        c4_n_a = c4_u_x;
        c4_j_b = c4_t_y;
        c4_v_x = c4_n_a;
        c4_u_y = c4_j_b;
        c4_w_x = c4_v_x;
        c4_v_y = c4_u_y;
        c4_colMin = muDoubleScalarMin(c4_w_x, c4_v_y);
      }

      c4_e_i = 0;
      c4_exitg1 = false;
      while ((!c4_exitg1) && (c4_e_i < 120)) {
        c4_f_i = (real_T)c4_e_i + 1.0;
        if (c4_f_i > (real_T)c4_b_tempNum) {
          c4_exitg1 = true;
        } else {
          c4_houghPixTemp[((int32_T)c4_f_i + 120 * ((int32_T)c4_e_k - 1)) - 1] =
            c4_b_tempBin[(int32_T)c4_f_i - 1];
          c4_e_i++;
        }
      }
    }

    if (c4_numHoughPix < 1) {
      c4_houghPix->size[0] = 0;
      c4_houghPix->size[1] = 0;
    } else {
      c4_n = 0.0;
      for (c4_f_k = 0; c4_f_k < 160; c4_f_k++) {
        c4_h_k = (real_T)c4_f_k + 1.0;
        c4_i11 = c4_tempHoughPixNumsVector[(int32_T)c4_h_k - 1];
        c4_b_st.site = &c4_vc_emlrtRSI;
        c4_e_b = c4_i11;
        c4_f_b = c4_e_b;
        if (c4_f_b < 1) {
          c4_c_overflow = false;
        } else {
          c4_c_overflow = (c4_f_b > 2147483646);
        }

        if (c4_c_overflow) {
          c4_c_st.site = &c4_fb_emlrtRSI;
          c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
        }

        c4_i22 = (uint8_T)c4_i11 - 1;
        for (c4_e_j = 0; c4_e_j <= c4_i22; c4_e_j++) {
          c4_d_j = c4_e_j;
          c4_n++;
          c4_i26 = (int32_T)c4_n;
          if ((c4_i26 < 1) || (c4_i26 > 19200)) {
            emlrtDynamicBoundsCheckR2012b(c4_i26, 1, 19200, &c4_xb_emlrtBCI,
              &c4_st);
          }

          chartInstance->c4_houghPixIdx[c4_i26 - 1] = c4_houghPixTemp[c4_d_j +
            120 * ((int32_T)c4_h_k - 1)];
          chartInstance->c4_houghPixIdx[(int32_T)c4_n + 19199] = (int32_T)c4_h_k;
        }
      }

      c4_rowRange = c4_rowMax - c4_rowMin;
      c4_colRange = c4_colMax - c4_colMin;
      if (c4_rowRange > c4_colRange) {
        for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
          c4_sortingOrder[c4_i15] = 1.0 + (real_T)c4_i15;
        }
      } else {
        for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
          c4_sortingOrder[c4_i14] = 2.0 - (real_T)c4_i14;
        }
      }

      if ((c4_numHoughPix < 1) || (c4_numHoughPix > 19200)) {
        emlrtDynamicBoundsCheckR2012b(c4_numHoughPix, 1, 19200, &c4_fb_emlrtBCI,
          &c4_st);
      }

      c4_i19 = c4_numHoughPix - 1;
      c4_i20 = c4_r->size[0] * c4_r->size[1];
      c4_r->size[0] = c4_i19 + 1;
      c4_r->size[1] = 2;
      c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_r, c4_i20,
        &c4_r_emlrtRTEI);
      for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
        c4_b_loop_ub = c4_i19;
        for (c4_i27 = 0; c4_i27 <= c4_b_loop_ub; c4_i27++) {
          c4_r->data[c4_i27 + c4_r->size[0] * c4_i24] =
            chartInstance->c4_houghPixIdx[c4_i27 + 19200 * c4_i24];
        }
      }

      c4_b_st.site = &c4_uc_emlrtRSI;
      c4_d_sortrows(chartInstance, &c4_b_st, c4_r, c4_sortingOrder);
      c4_i29 = c4_houghPix->size[0] * c4_houghPix->size[1];
      c4_houghPix->size[0] = c4_r->size[0];
      c4_houghPix->size[1] = 2;
      c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_houghPix, c4_i29,
        &c4_t_emlrtRTEI);
      c4_c_loop_ub = (c4_r->size[0] << 1) - 1;
      for (c4_i33 = 0; c4_i33 <= c4_c_loop_ub; c4_i33++) {
        c4_houghPix->data[c4_i33] = c4_r->data[c4_i33];
      }
    }

    if (!(c4_numHoughPix < 1)) {
      c4_st.site = &c4_qc_emlrtRSI;
      c4_b_numHoughPix = (real_T)c4_houghPix->size[0];
      c4_b_st.site = &c4_gd_emlrtRSI;
      c4_c_st.site = &c4_j_emlrtRSI;
      c4_i16 = c4_distances2->size[0];
      c4_d = c4_b_numHoughPix - 1.0;
      if (!(c4_d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(c4_d, &c4_l_emlrtDCI, &c4_st);
      }

      c4_distances2->size[0] = (int32_T)c4_d;
      c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_distances2, c4_i16,
        &c4_s_emlrtRTEI);
      c4_numPairs = 0.0;
      c4_d1 = c4_b_numHoughPix - 1.0;
      c4_i25 = (int32_T)c4_d1 - 1;
      for (c4_i_k = 0; c4_i_k <= c4_i25; c4_i_k++) {
        c4_j_k = (real_T)c4_i_k + 1.0;
        c4_i30 = c4_houghPix->size[1];
        c4_i31 = 1;
        if ((c4_i31 < 1) || (c4_i31 > c4_i30)) {
          emlrtDynamicBoundsCheckR2012b(c4_i31, 1, c4_i30, &c4_db_emlrtBCI,
            &c4_st);
        }

        c4_i32 = c4_houghPix->size[1];
        c4_i34 = 1;
        if ((c4_i34 < 1) || (c4_i34 > c4_i32)) {
          emlrtDynamicBoundsCheckR2012b(c4_i34, 1, c4_i32, &c4_cb_emlrtBCI,
            &c4_st);
        }

        c4_i37 = c4_houghPix->size[1];
        c4_i38 = 2;
        if ((c4_i38 < 1) || (c4_i38 > c4_i37)) {
          emlrtDynamicBoundsCheckR2012b(c4_i38, 1, c4_i37, &c4_bb_emlrtBCI,
            &c4_st);
        }

        c4_i39 = c4_houghPix->size[1];
        c4_i41 = 2;
        if ((c4_i41 < 1) || (c4_i41 > c4_i39)) {
          emlrtDynamicBoundsCheckR2012b(c4_i41, 1, c4_i39, &c4_ab_emlrtBCI,
            &c4_st);
        }

        c4_i42 = c4_houghPix->size[0];
        c4_i45 = (int32_T)(c4_j_k + 1.0);
        if ((c4_i45 < 1) || (c4_i45 > c4_i42)) {
          emlrtDynamicBoundsCheckR2012b(c4_i45, 1, c4_i42, &c4_bc_emlrtBCI,
            &c4_st);
        }

        c4_i47 = c4_houghPix->size[0];
        c4_i49 = (int32_T)c4_j_k;
        if ((c4_i49 < 1) || (c4_i49 > c4_i47)) {
          emlrtDynamicBoundsCheckR2012b(c4_i49, 1, c4_i47, &c4_cc_emlrtBCI,
            &c4_st);
        }

        c4_f_a = c4_houghPix->data[c4_i45 - 1] - c4_houghPix->data[c4_i49 - 1];
        c4_g_a = c4_f_a;
        c4_h_a = c4_g_a;
        c4_i_a = c4_h_a;
        c4_j_a = c4_i_a;
        c4_c = 1;
        c4_bu = 2;
        do {
          c4_exitg2 = 0;
          if ((c4_bu & 1) != 0) {
            c4_c *= c4_j_a;
          }

          c4_bu >>= 1;
          if (c4_bu == 0) {
            c4_exitg2 = 1;
          } else {
            c4_j_a *= c4_j_a;
          }
        } while (c4_exitg2 == 0);

        c4_i60 = c4_houghPix->size[0];
        c4_i61 = (int32_T)(c4_j_k + 1.0);
        if ((c4_i61 < 1) || (c4_i61 > c4_i60)) {
          emlrtDynamicBoundsCheckR2012b(c4_i61, 1, c4_i60, &c4_hc_emlrtBCI,
            &c4_st);
        }

        c4_i62 = c4_houghPix->size[0];
        c4_i64 = (int32_T)c4_j_k;
        if ((c4_i64 < 1) || (c4_i64 > c4_i62)) {
          emlrtDynamicBoundsCheckR2012b(c4_i64, 1, c4_i62, &c4_ic_emlrtBCI,
            &c4_st);
        }

        c4_l_a = c4_houghPix->data[(c4_i61 + c4_houghPix->size[0]) - 1] -
          c4_houghPix->data[(c4_i64 + c4_houghPix->size[0]) - 1];
        c4_m_a = c4_l_a;
        c4_o_a = c4_m_a;
        c4_p_a = c4_o_a;
        c4_q_a = c4_p_a;
        c4_b_c = 1;
        c4_b_bu = 2;
        do {
          c4_exitg2 = 0;
          if ((c4_b_bu & 1) != 0) {
            c4_b_c *= c4_q_a;
          }

          c4_b_bu >>= 1;
          if (c4_b_bu == 0) {
            c4_exitg2 = 1;
          } else {
            c4_q_a *= c4_q_a;
          }
        } while (c4_exitg2 == 0);

        c4_i69 = c4_distances2->size[0];
        c4_i70 = (int32_T)c4_j_k;
        if ((c4_i70 < 1) || (c4_i70 > c4_i69)) {
          emlrtDynamicBoundsCheckR2012b(c4_i70, 1, c4_i69, &c4_jc_emlrtBCI,
            &c4_st);
        }

        c4_distances2->data[c4_i70 - 1] = (real_T)(c4_c + c4_b_c);
        c4_i71 = c4_distances2->size[0];
        c4_i72 = (int32_T)c4_j_k;
        if ((c4_i72 < 1) || (c4_i72 > c4_i71)) {
          emlrtDynamicBoundsCheckR2012b(c4_i72, 1, c4_i71, &c4_kc_emlrtBCI,
            &c4_st);
        }

        if (c4_distances2->data[c4_i72 - 1] > 2500.0) {
          c4_numPairs++;
        }
      }

      c4_i28 = c4_indices->size[0];
      c4_d2 = c4_numPairs + 2.0;
      if (c4_d2 != (real_T)(int32_T)muDoubleScalarFloor(c4_d2)) {
        emlrtIntegerCheckR2012b(c4_d2, &c4_m_emlrtDCI, &c4_st);
      }

      c4_indices->size[0] = (int32_T)c4_d2;
      c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_indices, c4_i28,
        &c4_u_emlrtRTEI);
      c4_indices->data[0] = 0.0;
      c4_i35 = c4_indices->size[0];
      c4_i36 = c4_indices->size[0];
      if ((c4_i36 < 1) || (c4_i36 > c4_i35)) {
        emlrtDynamicBoundsCheckR2012b(c4_i36, 1, c4_i35, &c4_ac_emlrtBCI, &c4_st);
      }

      c4_indices->data[c4_i36 - 1] = c4_b_numHoughPix;
      c4_b_n = 1.0;
      c4_d3 = c4_b_numHoughPix - 1.0;
      c4_i40 = (int32_T)c4_d3 - 1;
      for (c4_k_k = 0; c4_k_k <= c4_i40; c4_k_k++) {
        c4_j_k = (real_T)c4_k_k + 1.0;
        c4_i44 = c4_distances2->size[0];
        c4_i46 = (int32_T)c4_j_k;
        if ((c4_i46 < 1) || (c4_i46 > c4_i44)) {
          emlrtDynamicBoundsCheckR2012b(c4_i46, 1, c4_i44, &c4_dc_emlrtBCI,
            &c4_st);
        }

        if (c4_distances2->data[c4_i46 - 1] > 2500.0) {
          c4_b_n++;
          c4_i52 = c4_indices->size[0];
          c4_i53 = (int32_T)c4_b_n;
          if ((c4_i53 < 1) || (c4_i53 > c4_i52)) {
            emlrtDynamicBoundsCheckR2012b(c4_i53, 1, c4_i52, &c4_ec_emlrtBCI,
              &c4_st);
          }

          c4_indices->data[c4_i53 - 1] = c4_j_k;
        }
      }

      c4_d4 = (real_T)c4_indices->size[0] - 1.0;
      c4_i43 = (int32_T)c4_d4 - 1;
      for (c4_l_k = 0; c4_l_k <= c4_i43; c4_l_k++) {
        c4_m_k = (real_T)c4_l_k + 1.0;
        c4_i48 = c4_houghPix->size[0];
        c4_i50 = c4_indices->size[0];
        c4_i51 = (int32_T)c4_m_k;
        if ((c4_i51 < 1) || (c4_i51 > c4_i50)) {
          emlrtDynamicBoundsCheckR2012b(c4_i51, 1, c4_i50, &c4_fc_emlrtBCI,
            (emlrtConstCTX)c4_sp);
        }

        c4_i54 = (int32_T)(c4_indices->data[c4_i51 - 1] + 1.0);
        if ((c4_i54 < 1) || (c4_i54 > c4_i48)) {
          emlrtDynamicBoundsCheckR2012b(c4_i54, 1, c4_i48, &c4_ob_emlrtBCI,
            (emlrtConstCTX)c4_sp);
        }

        c4_b_indices = c4_i54 - 1;
        c4_point1_size[1] = c4_houghPix->size[1];
        c4_d_loop_ub = c4_houghPix->size[1] - 1;
        for (c4_i55 = 0; c4_i55 <= c4_d_loop_ub; c4_i55++) {
          c4_point1_data[c4_i55] = c4_houghPix->data[c4_b_indices +
            c4_houghPix->size[0] * c4_i55];
        }

        c4_i56 = c4_houghPix->size[0];
        c4_i57 = c4_indices->size[0];
        c4_i58 = (int32_T)(c4_m_k + 1.0);
        if ((c4_i58 < 1) || (c4_i58 > c4_i57)) {
          emlrtDynamicBoundsCheckR2012b(c4_i58, 1, c4_i57, &c4_gc_emlrtBCI,
            (emlrtConstCTX)c4_sp);
        }

        c4_i59 = (int32_T)c4_indices->data[c4_i58 - 1];
        if ((c4_i59 < 1) || (c4_i59 > c4_i56)) {
          emlrtDynamicBoundsCheckR2012b(c4_i59, 1, c4_i56, &c4_nb_emlrtBCI,
            (emlrtConstCTX)c4_sp);
        }

        c4_c_indices = c4_i59 - 1;
        c4_point2_size[1] = c4_houghPix->size[1];
        c4_e_loop_ub = c4_houghPix->size[1] - 1;
        for (c4_i63 = 0; c4_i63 <= c4_e_loop_ub; c4_i63++) {
          c4_point2_data[c4_i63] = c4_houghPix->data[c4_c_indices +
            c4_houghPix->size[0] * c4_i63];
        }

        c4_st.site = &c4_rc_emlrtRSI;
        c4_i65 = 1;
        if ((c4_i65 < 1) || (c4_i65 > c4_point2_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c4_i65, 1, c4_point2_size[1],
            &c4_y_emlrtBCI, &c4_st);
        }

        c4_i66 = 1;
        if ((c4_i66 < 1) || (c4_i66 > c4_point1_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c4_i66, 1, c4_point1_size[1],
            &c4_x_emlrtBCI, &c4_st);
        }

        c4_i67 = 2;
        if ((c4_i67 < 1) || (c4_i67 > c4_point2_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c4_i67, 1, c4_point2_size[1],
            &c4_w_emlrtBCI, &c4_st);
        }

        c4_i68 = 2;
        if ((c4_i68 < 1) || (c4_i68 > c4_point1_size[1])) {
          emlrtDynamicBoundsCheckR2012b(c4_i68, 1, c4_point1_size[1],
            &c4_v_emlrtBCI, &c4_st);
        }

        c4_r_a = c4_point2_data[0] - c4_point1_data[0];
        c4_s_a = c4_r_a;
        c4_t_a = c4_s_a;
        c4_u_a = c4_t_a;
        c4_v_a = c4_u_a;
        c4_c_c = 1;
        c4_c_bu = 2;
        do {
          c4_exitg2 = 0;
          if ((c4_c_bu & 1) != 0) {
            c4_c_c *= c4_v_a;
          }

          c4_c_bu >>= 1;
          if (c4_c_bu == 0) {
            c4_exitg2 = 1;
          } else {
            c4_v_a *= c4_v_a;
          }
        } while (c4_exitg2 == 0);

        c4_w_a = c4_point2_data[1] - c4_point1_data[1];
        c4_x_a = c4_w_a;
        c4_y_a = c4_x_a;
        c4_ab_a = c4_y_a;
        c4_bb_a = c4_ab_a;
        c4_d_c = 1;
        c4_d_bu = 2;
        do {
          c4_exitg2 = 0;
          if ((c4_d_bu & 1) != 0) {
            c4_d_c *= c4_bb_a;
          }

          c4_d_bu >>= 1;
          if (c4_d_bu == 0) {
            c4_exitg2 = 1;
          } else {
            c4_bb_a *= c4_bb_a;
          }
        } while (c4_exitg2 == 0);

        c4_lineLength2 = c4_c_c + c4_d_c;
        if (c4_lineLength2 >= 49) {
          c4_numLines++;
          c4_i73 = 2;
          if ((c4_i73 < 1) || (c4_i73 > c4_point1_size[1])) {
            emlrtDynamicBoundsCheckR2012b(c4_i73, 1, c4_point1_size[1],
              &c4_mb_emlrtBCI, (emlrtConstCTX)c4_sp);
          }

          c4_i74 = 1;
          if ((c4_i74 < 1) || (c4_i74 > c4_point1_size[1])) {
            emlrtDynamicBoundsCheckR2012b(c4_i74, 1, c4_point1_size[1],
              &c4_lb_emlrtBCI, (emlrtConstCTX)c4_sp);
          }

          c4_i75 = c4_b_point1Array->size[0] * c4_b_point1Array->size[1];
          c4_b_point1Array->size[0] = c4_point1Array->size[0] + 1;
          c4_b_point1Array->size[1] = 2;
          c4_st.site = &c4_ce_emlrtRSI;
          c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_b_point1Array,
            c4_i75, &c4_x_emlrtRTEI);
          for (c4_i76 = 0; c4_i76 < 2; c4_i76++) {
            c4_f_loop_ub = c4_point1Array->size[0] - 1;
            for (c4_i77 = 0; c4_i77 <= c4_f_loop_ub; c4_i77++) {
              c4_b_point1Array->data[c4_i77 + c4_b_point1Array->size[0] * c4_i76]
                = c4_point1Array->data[c4_i77 + c4_point1Array->size[0] * c4_i76];
            }
          }

          c4_b_point1Array->data[c4_point1Array->size[0]] = c4_point1_data[1];
          c4_b_point1Array->data[c4_point1Array->size[0] +
            c4_b_point1Array->size[0]] = c4_point1_data[0];
          c4_i78 = c4_point1Array->size[0] * c4_point1Array->size[1];
          c4_point1Array->size[0] = c4_b_point1Array->size[0];
          c4_point1Array->size[1] = 2;
          c4_st.site = &c4_ce_emlrtRSI;
          c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_point1Array,
            c4_i78, &c4_y_emlrtRTEI);
          c4_g_loop_ub = (c4_b_point1Array->size[0] << 1) - 1;
          for (c4_i79 = 0; c4_i79 <= c4_g_loop_ub; c4_i79++) {
            c4_point1Array->data[c4_i79] = c4_b_point1Array->data[c4_i79];
          }

          c4_i80 = 2;
          if ((c4_i80 < 1) || (c4_i80 > c4_point2_size[1])) {
            emlrtDynamicBoundsCheckR2012b(c4_i80, 1, c4_point2_size[1],
              &c4_kb_emlrtBCI, (emlrtConstCTX)c4_sp);
          }

          c4_i81 = 1;
          if ((c4_i81 < 1) || (c4_i81 > c4_point2_size[1])) {
            emlrtDynamicBoundsCheckR2012b(c4_i81, 1, c4_point2_size[1],
              &c4_jb_emlrtBCI, (emlrtConstCTX)c4_sp);
          }

          c4_i82 = c4_b_point2Array->size[0] * c4_b_point2Array->size[1];
          c4_b_point2Array->size[0] = c4_point2Array->size[0] + 1;
          c4_b_point2Array->size[1] = 2;
          c4_st.site = &c4_be_emlrtRSI;
          c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_b_point2Array,
            c4_i82, &c4_ab_emlrtRTEI);
          for (c4_i83 = 0; c4_i83 < 2; c4_i83++) {
            c4_h_loop_ub = c4_point2Array->size[0] - 1;
            for (c4_i84 = 0; c4_i84 <= c4_h_loop_ub; c4_i84++) {
              c4_b_point2Array->data[c4_i84 + c4_b_point2Array->size[0] * c4_i83]
                = c4_point2Array->data[c4_i84 + c4_point2Array->size[0] * c4_i83];
            }
          }

          c4_b_point2Array->data[c4_point2Array->size[0]] = c4_point2_data[1];
          c4_b_point2Array->data[c4_point2Array->size[0] +
            c4_b_point2Array->size[0]] = c4_point2_data[0];
          c4_i85 = c4_point2Array->size[0] * c4_point2Array->size[1];
          c4_point2Array->size[0] = c4_b_point2Array->size[0];
          c4_point2Array->size[1] = 2;
          c4_st.site = &c4_be_emlrtRSI;
          c4_emxEnsureCapacity_int32_T(chartInstance, &c4_st, c4_point2Array,
            c4_i85, &c4_bb_emlrtRTEI);
          c4_i_loop_ub = (c4_b_point2Array->size[0] << 1) - 1;
          for (c4_i86 = 0; c4_i86 <= c4_i_loop_ub; c4_i86++) {
            c4_point2Array->data[c4_i86] = c4_b_point2Array->data[c4_i86];
          }

          c4_i87 = c4_thetaArray->size[0];
          c4_i88 = c4_thetaArray->size[0];
          c4_thetaArray->size[0]++;
          c4_st.site = &c4_ee_emlrtRSI;
          c4_emxEnsureCapacity_real32_T(chartInstance, &c4_st, c4_thetaArray,
            c4_i88, &c4_cb_emlrtRTEI);
          if ((c4_peak2 < 1) || (c4_peak2 > 180)) {
            emlrtDynamicBoundsCheckR2012b(c4_peak2, 1, 180, &c4_lc_emlrtBCI,
              (emlrtConstCTX)c4_sp);
          }

          c4_thetaArray->data[c4_i87] = (real32_T)(-90.0 + (real_T)(c4_peak2 - 1));
          c4_i89 = c4_rhoArray->size[0];
          c4_i90 = c4_rhoArray->size[0];
          c4_rhoArray->size[0]++;
          c4_st.site = &c4_de_emlrtRSI;
          c4_emxEnsureCapacity_real32_T(chartInstance, &c4_st, c4_rhoArray,
            c4_i90, &c4_db_emlrtRTEI);
          if ((c4_peak1 < 1) || (c4_peak1 > 399)) {
            emlrtDynamicBoundsCheckR2012b(c4_peak1, 1, 399, &c4_mc_emlrtBCI,
              (emlrtConstCTX)c4_sp);
          }

          c4_rhoArray->data[c4_i89] = (real32_T)(-199.0 + (real_T)(c4_peak1 - 1));
        }
      }
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_b_point2Array);
  c4_emxFree_int32_T(chartInstance, &c4_b_point1Array);
  c4_emxFree_int32_T(chartInstance, &c4_r);
  c4_emxFree_real_T(chartInstance, &c4_distances2);
  c4_emxFree_int32_T(chartInstance, &c4_houghPix);
  c4_emxFree_real_T(chartInstance, &c4_indices);
  c4_st.site = &c4_sc_emlrtRSI;
  c4_b_numLines = c4_numLines;
  c4_b_st.site = &c4_hd_emlrtRSI;
  c4_c_numLines = c4_b_numLines;
  c4_c_st.site = &c4_jd_emlrtRSI;
  c4_repmat(chartInstance, &c4_c_st, c4_c_numLines, c4_lines);
  c4_b_st.site = &c4_id_emlrtRSI;
  c4_b = c4_b_numLines;
  c4_b_b = c4_b;
  if (c4_b_b < 1) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483646);
  }

  if (c4_overflow) {
    c4_c_st.site = &c4_fb_emlrtRSI;
    c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
  }

  for (c4_k = 0; c4_k < c4_b_numLines; c4_k++) {
    c4_b_k = c4_k + 1;
    c4_i5 = c4_point1Array->size[0];
    if ((c4_b_k < 1) || (c4_b_k > c4_i5)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i5, &c4_hb_emlrtBCI, &c4_st);
    }

    c4_c_k = c4_b_k - 1;
    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_i8 = c4_lines->size[1];
      if ((c4_b_k < 1) || (c4_b_k > c4_i8)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i8, &c4_rb_emlrtBCI, &c4_st);
      }

      c4_lines->data[c4_b_k - 1].point1[c4_i6] = (real_T)c4_point1Array->
        data[c4_c_k + c4_point1Array->size[0] * c4_i6];
    }

    c4_i7 = c4_point2Array->size[0];
    if ((c4_b_k < 1) || (c4_b_k > c4_i7)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i7, &c4_gb_emlrtBCI, &c4_st);
    }

    c4_g_k = c4_b_k - 1;
    for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
      c4_i13 = c4_lines->size[1];
      if ((c4_b_k < 1) || (c4_b_k > c4_i13)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i13, &c4_sb_emlrtBCI, &c4_st);
      }

      c4_lines->data[c4_b_k - 1].point2[c4_i10] = (real_T)c4_point2Array->
        data[c4_g_k + c4_point2Array->size[0] * c4_i10];
    }

    c4_i12 = c4_thetaArray->size[0];
    if ((c4_b_k < 1) || (c4_b_k > c4_i12)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i12, &c4_tb_emlrtBCI, &c4_st);
    }

    c4_i17 = c4_lines->size[1];
    if ((c4_b_k < 1) || (c4_b_k > c4_i17)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i17, &c4_ub_emlrtBCI, &c4_st);
    }

    c4_lines->data[c4_b_k - 1].theta = c4_thetaArray->data[c4_b_k - 1];
    c4_i21 = c4_rhoArray->size[0];
    if ((c4_b_k < 1) || (c4_b_k > c4_i21)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i21, &c4_vb_emlrtBCI, &c4_st);
    }

    c4_i23 = c4_lines->size[1];
    if ((c4_b_k < 1) || (c4_b_k > c4_i23)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_k, 1, c4_i23, &c4_wb_emlrtBCI, &c4_st);
    }

    c4_lines->data[c4_b_k - 1].rho = c4_rhoArray->data[c4_b_k - 1];
  }

  c4_emxFree_real32_T(chartInstance, &c4_rhoArray);
  c4_emxFree_real32_T(chartInstance, &c4_thetaArray);
  c4_emxFree_int32_T(chartInstance, &c4_point2Array);
  c4_emxFree_int32_T(chartInstance, &c4_point1Array);
}

static void c4_b_validateattributes(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_a_data[], int32_T
  c4_a_size[2])
{
  static char_T c4_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c4_b_cv[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'l', 'i', 'n', 'e', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c4_cv3[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'l', 'i', 'n', 'e', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T c4_cv2[22] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '4', ',', ' ', 'P', 'E', 'A', 'K', 'S', ',' };

  static char_T c4_cv4[22] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '4', ',', ' ', 'P', 'E', 'A', 'K', 'S', ',' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_y;
  real_T c4_x;
  int32_T c4_b_i1;
  int32_T c4_c_k;
  int32_T c4_i;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b2;
  boolean_T c4_b_b;
  boolean_T c4_b_p;
  boolean_T c4_c_b;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_p;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_nb_emlrtRSI;
  c4_p = true;
  c4_d = (real_T)(c4_a_size[0] * c4_a_size[1]);
  c4_i = (int32_T)c4_d - 1;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k <= c4_i)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_a_data[(int32_T)c4_b_k - 1];
    c4_b_p = !(c4_x <= 0.0);
    if (c4_b_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 22),
                  false);
    sf_mex_call(&c4_st, &c4_g_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_b_y, 14, c4_c_y)));
  }

  c4_st.site = &c4_nb_emlrtRSI;
  c4_c_p = true;
  c4_d1 = (real_T)(c4_a_size[0] * c4_a_size[1]);
  c4_b_i1 = (int32_T)c4_d1 - 1;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k <= c4_b_i1)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_b_x = c4_a_data[(int32_T)c4_d_k - 1];
    c4_c_x = c4_b_x;
    c4_d_x = c4_c_x;
    c4_b_b = muDoubleScalarIsInf(c4_d_x);
    c4_b2 = !c4_b_b;
    c4_c_b = c4_b2;
    if (c4_c_b) {
      c4_e_x = c4_b_x;
      c4_f_x = c4_e_x;
      c4_g_y = c4_f_x;
      c4_g_y = muDoubleScalarFloor(c4_g_y);
      if (c4_g_y == c4_b_x) {
        c4_d_p = true;
      } else {
        c4_d_p = false;
      }
    } else {
      c4_d_p = false;
    }

    c4_e_p = c4_d_p;
    if (c4_e_p) {
      c4_c_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_c_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 22),
                  false);
    sf_mex_call(&c4_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_d_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_e_y, 14, c4_f_y)));
  }
}

static void c4_sortrows(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_y, real_T c4_b_varargin_1[2],
  c4_emxArray_int32_T *c4_b_y)
{
  real_T c4_c_varargin_1[2];
  int32_T c4_b_i1;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_loop_ub;
  c4_i = c4_b_y->size[0] * c4_b_y->size[1];
  c4_b_y->size[0] = c4_y->size[0];
  c4_b_y->size[1] = 2;
  c4_emxEnsureCapacity_int32_T(chartInstance, c4_sp, c4_b_y, c4_i,
    &c4_lb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_b_y->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_c_varargin_1[c4_i2] = c4_b_varargin_1[c4_i2];
  }

  c4_d_sortrows(chartInstance, c4_sp, c4_b_y, c4_c_varargin_1);
}

static boolean_T c4_sortLE(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_int32_T *c4_v, int32_T c4_dir[2], int32_T c4_idx1,
  int32_T c4_idx2)
{
  int32_T c4_abscolk;
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_k;
  int32_T c4_b_x;
  int32_T c4_c_x;
  int32_T c4_colk;
  int32_T c4_d_a;
  int32_T c4_e_a;
  int32_T c4_irow1;
  int32_T c4_irow2;
  int32_T c4_k;
  int32_T c4_v1;
  int32_T c4_v2;
  int32_T c4_x;
  boolean_T c4_exitg1;
  boolean_T c4_p;
  boolean_T c4_v1eqv2;
  (void)chartInstance;
  c4_irow1 = c4_idx1 - 1;
  c4_irow2 = c4_idx2 - 1;
  c4_p = true;
  c4_k = 1;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k - 1 < 2)) {
    c4_b_k = c4_k - 1;
    c4_colk = c4_dir[c4_b_k];
    c4_x = c4_colk;
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    c4_abscolk = c4_c_x - 1;
    c4_v1 = c4_v->data[c4_irow1 + c4_v->size[0] * c4_abscolk];
    c4_v2 = c4_v->data[c4_irow2 + c4_v->size[0] * c4_abscolk];
    c4_v1eqv2 = (c4_v1 == c4_v2);
    if (c4_v1eqv2) {
      c4_k++;
    } else {
      c4_d_a = c4_v1;
      c4_b = c4_v2;
      c4_e_a = c4_d_a;
      c4_b_b = c4_b;
      c4_p = (c4_e_a <= c4_b_b);
      c4_exitg1 = true;
    }
  }

  return c4_p;
}

static void c4_repmat(SFc4_waypointControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c4_sp, int32_T c4_varargin_2,
                      c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_b)
{
  static char_T c4_b_cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  c4_emxArray_boolean_T *c4_tile;
  c4_s52BVvgcaqgLKaYLjO15CeF c4_s;
  emlrtStack c4_st;
  const mxArray *c4_y = NULL;
  real_T c4_d;
  real_T c4_d1;
  int32_T c4_outsize[2];
  int32_T c4_b_i1;
  int32_T c4_b_loop_ub;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_loop_ub;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_kd_emlrtRSI;
  c4_emxInit_boolean_T(chartInstance, c4_sp, &c4_tile, 2, &c4_mb_emlrtRTEI);
  c4_i = c4_tile->size[0] * c4_tile->size[1];
  c4_tile->size[0] = 1;
  c4_d = (real_T)c4_varargin_2;
  if (!(c4_d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_d, &c4_n_emlrtDCI, (emlrtConstCTX)c4_sp);
  }

  c4_tile->size[1] = (int32_T)muDoubleScalarFloor(c4_d);
  c4_st.site = &c4_fe_emlrtRSI;
  c4_emxEnsureCapacity_boolean_T(chartInstance, &c4_st, c4_tile, c4_i,
    &c4_mb_emlrtRTEI);
  c4_d1 = (real_T)c4_varargin_2;
  if (!(c4_d1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_d1, &c4_o_emlrtDCI, (emlrtConstCTX)c4_sp);
  }

  c4_loop_ub = (int32_T)muDoubleScalarFloor(c4_d1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_tile->data[c4_b_i1] = false;
  }

  c4_outsize[1] = c4_tile->size[1];
  if (!((real_T)c4_outsize[1] == (real_T)c4_tile->size[1])) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(c4_sp, &c4_m_emlrtMCI, "error", 0U, 1U, 14, c4_y);
  }

  c4_emxFree_boolean_T(chartInstance, &c4_tile);
  for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
    c4_s.point1[c4_i2] = 0.0;
  }

  for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
    c4_s.point2[c4_i3] = 0.0;
  }

  c4_s.theta = 0.0;
  c4_s.rho = 0.0;
  c4_i4 = c4_b->size[0] * c4_b->size[1];
  c4_b->size[0] = 1;
  c4_b->size[1] = c4_outsize[1];
  c4_st.site = &c4_ge_emlrtRSI;
  c4_emxEnsureCapacity_s52BVvgcaqgLK(chartInstance, &c4_st, c4_b, c4_i4,
    &c4_nb_emlrtRTEI);
  c4_b_loop_ub = c4_outsize[1] - 1;
  for (c4_i5 = 0; c4_i5 <= c4_b_loop_ub; c4_i5++) {
    c4_b->data[c4_i5] = c4_s;
  }
}

static real_T c4_b_sumColumnB(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, real_T c4_x[4], int32_T c4_col)
{
  real_T c4_y;
  int32_T c4_b_col;
  int32_T c4_i0;
  int32_T c4_k;
  (void)chartInstance;
  c4_b_col = c4_col - 1;
  c4_i0 = c4_b_col << 1;
  c4_y = c4_x[c4_i0];
  for (c4_k = 0; c4_k < 1; c4_k++) {
    c4_y += c4_x[c4_i0 + 1];
  }

  return c4_y;
}

static void c4_b_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_real_T *c4_b_y)
{
  int32_T c4_b_i1;
  int32_T c4_i;
  int32_T c4_loop_ub;
  c4_i = c4_b_y->size[0] * c4_b_y->size[1];
  c4_b_y->size[0] = c4_y->size[0];
  c4_b_y->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, c4_sp, c4_b_y, c4_i,
    &c4_lb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_b_y->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  c4_e_sortrows(chartInstance, c4_sp, c4_b_y);
}

static void c4_apply_row_permutation(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_int32_T *c4_idx, c4_emxArray_real_T *c4_b_y)
{
  c4_emxArray_int32_T *c4_b_idx;
  int32_T c4_b_i1;
  int32_T c4_b_loop_ub;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_loop_ub;
  c4_i = c4_b_y->size[0] * c4_b_y->size[1];
  c4_b_y->size[0] = c4_y->size[0];
  c4_b_y->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, c4_sp, c4_b_y, c4_i,
    &c4_ob_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_b_y->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  c4_emxInit_int32_T1(chartInstance, c4_sp, &c4_b_idx, 1, &c4_ob_emlrtRTEI);
  c4_i2 = c4_b_idx->size[0];
  c4_b_idx->size[0] = c4_idx->size[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, c4_sp, c4_b_idx, c4_i2,
    &c4_ob_emlrtRTEI);
  c4_b_loop_ub = c4_idx->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_b_idx->data[c4_i3] = c4_idx->data[c4_i3];
  }

  c4_b_apply_row_permutation(chartInstance, c4_sp, c4_b_y, c4_b_idx);
  c4_emxFree_int32_T(chartInstance, &c4_b_idx);
}

static void c4_c_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_real_T *c4_b_y)
{
  int32_T c4_b_i1;
  int32_T c4_i;
  int32_T c4_loop_ub;
  c4_i = c4_b_y->size[0] * c4_b_y->size[1];
  c4_b_y->size[0] = c4_y->size[0];
  c4_b_y->size[1] = 2;
  c4_emxEnsureCapacity_real_T(chartInstance, c4_sp, c4_b_y, c4_i,
    &c4_lb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_b_y->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  c4_f_sortrows(chartInstance, c4_sp, c4_b_y);
}

const mxArray *sf_c4_waypointControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_waypointX, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_waypointX),
    &c4_thisId);
  sf_mex_destroy(&c4_b_waypointX);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_waypointControlSystem, const
  char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_waypointControlSystem), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_waypointControlSystem);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_slStringInitializeDynamicBuffers
  (SFc4_waypointControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_chart_data_browse_helper(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig)
{
  real_T c4_d;
  real_T c4_d1;
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 4U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_I, 3, 0U,
      1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    c4_d = *chartInstance->c4_waypointX;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 6U:
    c4_d1 = *chartInstance->c4_waypointY;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c4_feval(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static void c4_b_feval(SFc4_waypointControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void c4_d_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T *c4_y, real_T
  c4_b_varargin_1[2])
{
  static char_T c4_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 's', 's',
    'o', 'r', 't', 'e', 'd', 'r', 'o', 'w', 's', ':', 'C', 'o', 'l', 'M', 'i',
    's', 'm', 'a', 't', 'c', 'h', 'X' };

  c4_emxArray_int32_T *c4_b_iwork;
  c4_emxArray_int32_T *c4_f_x;
  c4_emxArray_int32_T *c4_idx;
  c4_emxArray_int32_T *c4_iwork;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_ck;
  real_T c4_d_x;
  real_T c4_d_y;
  real_T c4_e_x;
  real_T c4_x;
  int32_T c4_col[2];
  int32_T c4_iv[1];
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_i2;
  int32_T c4_b_j;
  int32_T c4_b_loop_ub;
  int32_T c4_b_n;
  int32_T c4_b_p;
  int32_T c4_c_b;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_c_k;
  int32_T c4_c_loop_ub;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_i;
  int32_T c4_d_k;
  int32_T c4_e_b;
  int32_T c4_e_i;
  int32_T c4_e_k;
  int32_T c4_exitg1;
  int32_T c4_f_b;
  int32_T c4_g_b;
  int32_T c4_h_b;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_kEnd;
  int32_T c4_len;
  int32_T c4_loop_ub;
  int32_T c4_m;
  int32_T c4_n;
  int32_T c4_np1;
  int32_T c4_pEnd;
  int32_T c4_q;
  int32_T c4_qEnd;
  boolean_T c4_b_overflow;
  boolean_T c4_c_overflow;
  boolean_T c4_d_overflow;
  boolean_T c4_overflow;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_st.site = &c4_xc_emlrtRSI;
  c4_k = 0;
  do {
    c4_exitg1 = 0;
    if (c4_k < 2) {
      c4_b_k = (real_T)c4_k + 1.0;
      c4_x = c4_b_varargin_1[(int32_T)c4_b_k - 1];
      c4_b_x = c4_x;
      c4_c_x = c4_b_x;
      c4_ck = muDoubleScalarAbs(c4_c_x);
      c4_d_x = c4_ck;
      c4_e_x = c4_d_x;
      c4_d_y = c4_e_x;
      c4_d_y = muDoubleScalarFloor(c4_d_y);
      if ((c4_d_y != c4_ck) || (c4_ck < 1.0) || (c4_ck > 2.0)) {
        c4_p = false;
        c4_exitg1 = 1;
      } else {
        c4_k++;
      }
    } else {
      c4_p = true;
      c4_exitg1 = 1;
    }
  } while (c4_exitg1 == 0);

  if (!c4_p) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    sf_mex_call(&c4_st, &c4_l_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 1U, 14, c4_c_y)));
  }

  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_col[c4_i] = (int32_T)c4_b_varargin_1[c4_i];
  }

  c4_st.site = &c4_yc_emlrtRSI;
  c4_emxInit_int32_T(chartInstance, &c4_st, &c4_f_x, 2, &c4_pb_emlrtRTEI);
  c4_b_i1 = c4_f_x->size[0] * c4_f_x->size[1];
  c4_f_x->size[0] = c4_y->size[0];
  c4_f_x->size[1] = 2;
  c4_b_st.site = &c4_yc_emlrtRSI;
  c4_emxEnsureCapacity_int32_T(chartInstance, &c4_b_st, c4_f_x, c4_b_i1,
    &c4_pb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_i2 = 0; c4_i2 <= c4_loop_ub; c4_i2++) {
    c4_f_x->data[c4_i2] = c4_y->data[c4_i2];
  }

  c4_n = c4_f_x->size[0];
  c4_emxInit_int32_T1(chartInstance, &c4_st, &c4_idx, 1, &c4_qb_emlrtRTEI);
  c4_i3 = c4_idx->size[0];
  c4_idx->size[0] = c4_f_x->size[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_st, c4_idx, c4_i3,
    &c4_qb_emlrtRTEI);
  c4_b_loop_ub = c4_f_x->size[0] - 1;
  for (c4_i4 = 0; c4_i4 <= c4_b_loop_ub; c4_i4++) {
    c4_idx->data[c4_i4] = 0;
  }

  c4_b_st.site = &c4_bd_emlrtRSI;
  c4_b_n = c4_n;
  c4_emxInit_int32_T1(chartInstance, &c4_b_st, &c4_iwork, 1, &c4_tb_emlrtRTEI);
  c4_i5 = c4_iwork->size[0];
  c4_iwork->size[0] = c4_idx->size[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i5,
    &c4_rb_emlrtRTEI);
  c4_c_loop_ub = c4_idx->size[0] - 1;
  for (c4_i6 = 0; c4_i6 <= c4_c_loop_ub; c4_i6++) {
    c4_iwork->data[c4_i6] = c4_idx->data[c4_i6];
  }

  c4_len = c4_iwork->size[0];
  c4_i7 = c4_iwork->size[0];
  c4_iwork->size[0] = c4_len;
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i7,
    &c4_sb_emlrtRTEI);
  c4_iv[0] = c4_iwork->size[0];
  c4_emxFree_int32_T(chartInstance, &c4_iwork);
  c4_emxInit_int32_T1(chartInstance, &c4_b_st, &c4_b_iwork, 1, &c4_vb_emlrtRTEI);
  c4_i8 = c4_b_iwork->size[0];
  c4_b_iwork->size[0] = c4_iv[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_b_iwork, c4_i8,
    &c4_tb_emlrtRTEI);
  c4_np1 = c4_b_n + 1;
  c4_i9 = c4_b_n - 1;
  c4_c_st.site = &c4_cd_emlrtRSI;
  c4_b = c4_i9;
  c4_b_b = c4_b;
  if (c4_b_b < 1) {
    c4_overflow = false;
  } else {
    c4_overflow = (c4_b_b > 2147483645);
  }

  if (c4_overflow) {
    c4_d_st.site = &c4_fb_emlrtRSI;
    c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
  }

  for (c4_c_k = 1; c4_c_k <= c4_i9; c4_c_k += 2) {
    if (c4_sortLE(chartInstance, c4_f_x, c4_col, c4_c_k, c4_c_k + 1)) {
      c4_idx->data[c4_c_k - 1] = c4_c_k;
      c4_idx->data[c4_c_k] = c4_c_k + 1;
    } else {
      c4_idx->data[c4_c_k - 1] = c4_c_k + 1;
      c4_idx->data[c4_c_k] = c4_c_k;
    }
  }

  if ((c4_b_n & 1) != 0) {
    c4_idx->data[c4_b_n - 1] = c4_b_n;
  }

  c4_b_i = 2;
  while (c4_b_i < c4_b_n) {
    c4_d_a = c4_b_i;
    c4_b_i2 = c4_d_a << 1;
    c4_j = 1;
    for (c4_pEnd = 1 + c4_b_i; c4_pEnd < c4_np1; c4_pEnd = c4_qEnd + c4_b_i) {
      c4_b_p = c4_j - 1;
      c4_q = c4_pEnd - 1;
      c4_qEnd = c4_j + c4_b_i2;
      if (c4_qEnd > c4_np1) {
        c4_qEnd = c4_np1;
      }

      c4_d_k = 0;
      c4_kEnd = c4_qEnd - c4_j;
      while (c4_d_k + 1 <= c4_kEnd) {
        if (c4_sortLE(chartInstance, c4_f_x, c4_col, c4_idx->data[c4_b_p],
                      c4_idx->data[c4_q])) {
          c4_b_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
          c4_b_p++;
          if (c4_b_p + 1 == c4_pEnd) {
            while (c4_q + 1 < c4_qEnd) {
              c4_d_k++;
              c4_b_iwork->data[c4_d_k] = c4_idx->data[c4_q];
              c4_q++;
            }
          }
        } else {
          c4_b_iwork->data[c4_d_k] = c4_idx->data[c4_q];
          c4_q++;
          if (c4_q + 1 == c4_qEnd) {
            while (c4_b_p + 1 < c4_pEnd) {
              c4_d_k++;
              c4_b_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
              c4_b_p++;
            }
          }
        }

        c4_d_k++;
      }

      c4_b_p = c4_j - 2;
      c4_c_st.site = &c4_dd_emlrtRSI;
      c4_e_b = c4_kEnd;
      c4_f_b = c4_e_b;
      if (c4_f_b < 1) {
        c4_c_overflow = false;
      } else {
        c4_c_overflow = (c4_f_b > 2147483646);
      }

      if (c4_c_overflow) {
        c4_d_st.site = &c4_fb_emlrtRSI;
        c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
      }

      for (c4_e_k = 0; c4_e_k < c4_kEnd; c4_e_k++) {
        c4_d_k = c4_e_k;
        c4_idx->data[(c4_b_p + c4_d_k) + 1] = c4_b_iwork->data[c4_d_k];
      }

      c4_j = c4_qEnd;
    }

    c4_b_i = c4_b_i2;
  }

  c4_emxFree_int32_T(chartInstance, &c4_f_x);
  c4_st.site = &c4_ad_emlrtRSI;
  c4_m = c4_y->size[0];
  c4_col[0] = c4_m;
  c4_i10 = c4_b_iwork->size[0];
  c4_b_iwork->size[0] = c4_col[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_st, c4_b_iwork, c4_i10,
    &c4_ub_emlrtRTEI);
  for (c4_b_j = 0; c4_b_j < 2; c4_b_j++) {
    c4_c_j = c4_b_j;
    c4_b_st.site = &c4_ed_emlrtRSI;
    c4_c_b = c4_m;
    c4_d_b = c4_c_b;
    if (c4_d_b < 1) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_c_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    c4_i11 = (uint16_T)c4_m - 1;
    for (c4_c_i = 0; c4_c_i <= c4_i11; c4_c_i++) {
      c4_d_i = c4_c_i;
      c4_b_iwork->data[c4_d_i] = c4_y->data[(c4_idx->data[c4_d_i] + c4_y->size[0]
        * c4_c_j) - 1];
    }

    c4_b_st.site = &c4_fd_emlrtRSI;
    c4_g_b = c4_m;
    c4_h_b = c4_g_b;
    if (c4_h_b < 1) {
      c4_d_overflow = false;
    } else {
      c4_d_overflow = (c4_h_b > 2147483646);
    }

    if (c4_d_overflow) {
      c4_c_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    c4_i12 = (uint16_T)c4_m - 1;
    for (c4_e_i = 0; c4_e_i <= c4_i12; c4_e_i++) {
      c4_d_i = c4_e_i;
      c4_y->data[c4_d_i + c4_y->size[0] * c4_c_j] = c4_b_iwork->data[c4_d_i];
    }
  }

  c4_emxFree_int32_T(chartInstance, &c4_b_iwork);
  c4_emxFree_int32_T(chartInstance, &c4_idx);
}

static void c4_e_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y)
{
  c4_emxArray_int32_T *c4_idx;
  c4_emxArray_int32_T *c4_iwork;
  c4_emxArray_real_T *c4_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_b_v1;
  real_T c4_b_v2;
  real_T c4_e_a;
  real_T c4_f_a;
  real_T c4_f_b;
  real_T c4_g_a;
  real_T c4_g_b;
  real_T c4_h_a;
  real_T c4_h_b;
  real_T c4_i_a;
  real_T c4_j_a;
  real_T c4_k_b;
  real_T c4_l_b;
  real_T c4_m_b;
  real_T c4_v1;
  real_T c4_v2;
  int32_T c4_iv[1];
  int32_T c4_b_b;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_i2;
  int32_T c4_b_idx1;
  int32_T c4_b_idx2;
  int32_T c4_b_irow1;
  int32_T c4_b_irow2;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_n;
  int32_T c4_b_p;
  int32_T c4_c_b;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_e_b;
  int32_T c4_e_k;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i_b;
  int32_T c4_idx1;
  int32_T c4_idx2;
  int32_T c4_irow1;
  int32_T c4_irow2;
  int32_T c4_j;
  int32_T c4_j_b;
  int32_T c4_k;
  int32_T c4_kEnd;
  int32_T c4_len;
  int32_T c4_loop_ub;
  int32_T c4_n;
  int32_T c4_np1;
  int32_T c4_pEnd;
  int32_T c4_q;
  int32_T c4_qEnd;
  boolean_T c4_b;
  boolean_T c4_b_overflow;
  boolean_T c4_b_v1eqv2;
  boolean_T c4_c_overflow;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_f_p;
  boolean_T c4_g_p;
  boolean_T c4_overflow;
  boolean_T c4_p;
  boolean_T c4_v1eqv2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_yc_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_x, 2, &c4_pb_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = c4_y->size[0];
  c4_x->size[1] = 2;
  c4_b_st.site = &c4_yc_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_x, c4_i,
    &c4_pb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_x->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  c4_n = c4_x->size[0];
  c4_emxInit_int32_T1(chartInstance, &c4_st, &c4_idx, 1, &c4_qb_emlrtRTEI);
  c4_i2 = c4_idx->size[0];
  c4_idx->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_st, c4_idx, c4_i2,
    &c4_qb_emlrtRTEI);
  c4_b_loop_ub = c4_x->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_idx->data[c4_i3] = 0;
  }

  c4_b = (c4_x->size[0] == 0);
  if (c4_b) {
    c4_b_st.site = &c4_nd_emlrtRSI;
    c4_b_b = c4_n;
    c4_c_b = c4_b_b;
    if (c4_c_b < 1) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_c_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_k = 0; c4_k < c4_n; c4_k++) {
      c4_b_k = c4_k;
      c4_idx->data[c4_b_k] = c4_b_k + 1;
    }
  } else {
    c4_b_st.site = &c4_bd_emlrtRSI;
    c4_b_n = c4_n;
    c4_emxInit_int32_T1(chartInstance, &c4_b_st, &c4_iwork, 1, &c4_tb_emlrtRTEI);
    c4_len = c4_idx->size[0];
    c4_i4 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_len;
    c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i4,
      &c4_sb_emlrtRTEI);
    c4_iv[0] = c4_iwork->size[0];
    c4_i5 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_iv[0];
    c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i5,
      &c4_tb_emlrtRTEI);
    c4_np1 = c4_b_n + 1;
    c4_i6 = c4_b_n - 1;
    c4_c_st.site = &c4_cd_emlrtRSI;
    c4_d_b = c4_i6;
    c4_e_b = c4_d_b;
    if (c4_e_b < 1) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_e_b > 2147483645);
    }

    if (c4_b_overflow) {
      c4_d_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
    }

    for (c4_c_k = 1; c4_c_k <= c4_i6; c4_c_k += 2) {
      c4_idx1 = c4_c_k;
      c4_idx2 = c4_c_k;
      c4_irow1 = c4_idx1 - 1;
      c4_irow2 = c4_idx2;
      c4_p = true;
      c4_v1 = c4_x->data[c4_irow1];
      c4_v2 = c4_x->data[c4_irow2];
      c4_v1eqv2 = (c4_v1 == c4_v2);
      if (!c4_v1eqv2) {
        c4_e_a = c4_v1;
        c4_f_b = c4_v2;
        c4_f_a = c4_e_a;
        c4_g_b = c4_f_b;
        c4_g_a = c4_f_a;
        c4_h_b = c4_g_b;
        c4_c_p = (c4_g_a <= c4_h_b);
        if (c4_c_p) {
          c4_d_p = true;
        } else {
          c4_d_p = false;
        }

        c4_p = c4_d_p;
      }

      if (c4_p) {
        c4_idx->data[c4_c_k - 1] = c4_c_k;
        c4_idx->data[c4_c_k] = c4_c_k + 1;
      } else {
        c4_idx->data[c4_c_k - 1] = c4_c_k + 1;
        c4_idx->data[c4_c_k] = c4_c_k;
      }
    }

    if ((c4_b_n & 1) != 0) {
      c4_idx->data[c4_b_n - 1] = c4_b_n;
    }

    c4_b_i = 2;
    while (c4_b_i < c4_b_n) {
      c4_d_a = c4_b_i;
      c4_b_i2 = c4_d_a << 1;
      c4_j = 1;
      for (c4_pEnd = 1 + c4_b_i; c4_pEnd < c4_np1; c4_pEnd = c4_qEnd + c4_b_i) {
        c4_b_p = c4_j - 1;
        c4_q = c4_pEnd - 1;
        c4_qEnd = c4_j + c4_b_i2;
        if (c4_qEnd > c4_np1) {
          c4_qEnd = c4_np1;
        }

        c4_d_k = 0;
        c4_kEnd = c4_qEnd - c4_j;
        while (c4_d_k + 1 <= c4_kEnd) {
          c4_b_idx1 = c4_idx->data[c4_b_p];
          c4_b_idx2 = c4_idx->data[c4_q];
          c4_b_irow1 = c4_b_idx1 - 1;
          c4_b_irow2 = c4_b_idx2 - 1;
          c4_e_p = true;
          c4_b_v1 = c4_x->data[c4_b_irow1];
          c4_b_v2 = c4_x->data[c4_b_irow2];
          c4_b_v1eqv2 = (c4_b_v1 == c4_b_v2);
          if (!c4_b_v1eqv2) {
            c4_h_a = c4_b_v1;
            c4_k_b = c4_b_v2;
            c4_i_a = c4_h_a;
            c4_l_b = c4_k_b;
            c4_j_a = c4_i_a;
            c4_m_b = c4_l_b;
            c4_f_p = (c4_j_a <= c4_m_b);
            if (c4_f_p) {
              c4_g_p = true;
            } else {
              c4_g_p = false;
            }

            c4_e_p = c4_g_p;
          }

          if (c4_e_p) {
            c4_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
            c4_b_p++;
            if (c4_b_p + 1 == c4_pEnd) {
              while (c4_q + 1 < c4_qEnd) {
                c4_d_k++;
                c4_iwork->data[c4_d_k] = c4_idx->data[c4_q];
                c4_q++;
              }
            }
          } else {
            c4_iwork->data[c4_d_k] = c4_idx->data[c4_q];
            c4_q++;
            if (c4_q + 1 == c4_qEnd) {
              while (c4_b_p + 1 < c4_pEnd) {
                c4_d_k++;
                c4_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
                c4_b_p++;
              }
            }
          }

          c4_d_k++;
        }

        c4_b_p = c4_j - 2;
        c4_c_st.site = &c4_dd_emlrtRSI;
        c4_i_b = c4_kEnd;
        c4_j_b = c4_i_b;
        if (c4_j_b < 1) {
          c4_c_overflow = false;
        } else {
          c4_c_overflow = (c4_j_b > 2147483646);
        }

        if (c4_c_overflow) {
          c4_d_st.site = &c4_fb_emlrtRSI;
          c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
        }

        for (c4_e_k = 0; c4_e_k < c4_kEnd; c4_e_k++) {
          c4_d_k = c4_e_k;
          c4_idx->data[(c4_b_p + c4_d_k) + 1] = c4_iwork->data[c4_d_k];
        }

        c4_j = c4_qEnd;
      }

      c4_b_i = c4_b_i2;
    }

    c4_emxFree_int32_T(chartInstance, &c4_iwork);
  }

  c4_emxFree_real_T(chartInstance, &c4_x);
  c4_st.site = &c4_ad_emlrtRSI;
  c4_b_apply_row_permutation(chartInstance, &c4_st, c4_y, c4_idx);
  c4_emxFree_int32_T(chartInstance, &c4_idx);
}

static void c4_b_apply_row_permutation(SFc4_waypointControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y,
  c4_emxArray_int32_T *c4_idx)
{
  c4_emxArray_real_T *c4_ycol;
  emlrtStack c4_b_st;
  emlrtStack c4_st;
  int32_T c4_iv[2];
  int32_T c4_b;
  int32_T c4_b_b;
  int32_T c4_b_i;
  int32_T c4_b_j;
  int32_T c4_c_b;
  int32_T c4_c_i;
  int32_T c4_d_b;
  int32_T c4_d_i;
  int32_T c4_i;
  int32_T c4_j;
  int32_T c4_m;
  boolean_T c4_b_overflow;
  boolean_T c4_overflow;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_m = c4_y->size[0];
  c4_iv[0] = c4_m;
  c4_emxInit_real_T1(chartInstance, c4_sp, &c4_ycol, 1, &c4_wb_emlrtRTEI);
  c4_i = c4_ycol->size[0];
  c4_ycol->size[0] = c4_iv[0];
  c4_st.site = &c4_ae_emlrtRSI;
  c4_emxEnsureCapacity_real_T1(chartInstance, &c4_st, c4_ycol, c4_i,
    &c4_ub_emlrtRTEI);
  for (c4_j = 0; c4_j < 2; c4_j++) {
    c4_b_j = c4_j;
    c4_st.site = &c4_ed_emlrtRSI;
    c4_b = c4_m;
    c4_b_b = c4_b;
    if (c4_b_b < 1) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_b_b > 2147483646);
    }

    if (c4_overflow) {
      c4_b_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_b_i = 0; c4_b_i < c4_m; c4_b_i++) {
      c4_c_i = c4_b_i;
      c4_ycol->data[c4_c_i] = c4_y->data[(c4_idx->data[c4_c_i] + c4_y->size[0] *
        c4_b_j) - 1];
    }

    c4_st.site = &c4_fd_emlrtRSI;
    c4_c_b = c4_m;
    c4_d_b = c4_c_b;
    if (c4_d_b < 1) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_d_b > 2147483646);
    }

    if (c4_b_overflow) {
      c4_b_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_b_st);
    }

    for (c4_d_i = 0; c4_d_i < c4_m; c4_d_i++) {
      c4_c_i = c4_d_i;
      c4_y->data[c4_c_i + c4_y->size[0] * c4_b_j] = c4_ycol->data[c4_c_i];
    }
  }

  c4_emxFree_real_T(chartInstance, &c4_ycol);
}

static void c4_f_sortrows(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_y)
{
  c4_emxArray_int32_T *c4_idx;
  c4_emxArray_int32_T *c4_iwork;
  c4_emxArray_real_T *c4_x;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_b_v1;
  real_T c4_b_v2;
  real_T c4_e_a;
  real_T c4_f_a;
  real_T c4_f_b;
  real_T c4_g_a;
  real_T c4_g_b;
  real_T c4_h_a;
  real_T c4_h_b;
  real_T c4_i_a;
  real_T c4_j_a;
  real_T c4_k_b;
  real_T c4_l_b;
  real_T c4_m_b;
  real_T c4_v1;
  real_T c4_v2;
  int32_T c4_iv[1];
  int32_T c4_b_b;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_i2;
  int32_T c4_b_idx1;
  int32_T c4_b_idx2;
  int32_T c4_b_irow1;
  int32_T c4_b_irow2;
  int32_T c4_b_k;
  int32_T c4_b_loop_ub;
  int32_T c4_b_n;
  int32_T c4_b_p;
  int32_T c4_c_b;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_b;
  int32_T c4_d_k;
  int32_T c4_e_b;
  int32_T c4_e_k;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i_b;
  int32_T c4_idx1;
  int32_T c4_idx2;
  int32_T c4_irow1;
  int32_T c4_irow2;
  int32_T c4_j;
  int32_T c4_j_b;
  int32_T c4_k;
  int32_T c4_kEnd;
  int32_T c4_len;
  int32_T c4_loop_ub;
  int32_T c4_n;
  int32_T c4_np1;
  int32_T c4_pEnd;
  int32_T c4_q;
  int32_T c4_qEnd;
  boolean_T c4_b;
  boolean_T c4_b_overflow;
  boolean_T c4_b_v1eqv2;
  boolean_T c4_c_overflow;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_f_p;
  boolean_T c4_g_p;
  boolean_T c4_overflow;
  boolean_T c4_p;
  boolean_T c4_v1eqv2;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_yc_emlrtRSI;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_emxInit_real_T(chartInstance, &c4_st, &c4_x, 2, &c4_pb_emlrtRTEI);
  c4_i = c4_x->size[0] * c4_x->size[1];
  c4_x->size[0] = c4_y->size[0];
  c4_x->size[1] = 2;
  c4_b_st.site = &c4_yc_emlrtRSI;
  c4_emxEnsureCapacity_real_T(chartInstance, &c4_b_st, c4_x, c4_i,
    &c4_pb_emlrtRTEI);
  c4_loop_ub = (c4_y->size[0] << 1) - 1;
  for (c4_b_i1 = 0; c4_b_i1 <= c4_loop_ub; c4_b_i1++) {
    c4_x->data[c4_b_i1] = c4_y->data[c4_b_i1];
  }

  c4_n = c4_x->size[0];
  c4_emxInit_int32_T1(chartInstance, &c4_st, &c4_idx, 1, &c4_qb_emlrtRTEI);
  c4_i2 = c4_idx->size[0];
  c4_idx->size[0] = c4_x->size[0];
  c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_st, c4_idx, c4_i2,
    &c4_qb_emlrtRTEI);
  c4_b_loop_ub = c4_x->size[0] - 1;
  for (c4_i3 = 0; c4_i3 <= c4_b_loop_ub; c4_i3++) {
    c4_idx->data[c4_i3] = 0;
  }

  c4_b = (c4_x->size[0] == 0);
  if (c4_b) {
    c4_b_st.site = &c4_nd_emlrtRSI;
    c4_b_b = c4_n;
    c4_c_b = c4_b_b;
    if (c4_c_b < 1) {
      c4_overflow = false;
    } else {
      c4_overflow = (c4_c_b > 2147483646);
    }

    if (c4_overflow) {
      c4_c_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_c_st);
    }

    for (c4_k = 0; c4_k < c4_n; c4_k++) {
      c4_b_k = c4_k;
      c4_idx->data[c4_b_k] = c4_b_k + 1;
    }
  } else {
    c4_b_st.site = &c4_bd_emlrtRSI;
    c4_b_n = c4_n;
    c4_emxInit_int32_T1(chartInstance, &c4_b_st, &c4_iwork, 1, &c4_tb_emlrtRTEI);
    c4_len = c4_idx->size[0];
    c4_i4 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_len;
    c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i4,
      &c4_sb_emlrtRTEI);
    c4_iv[0] = c4_iwork->size[0];
    c4_i5 = c4_iwork->size[0];
    c4_iwork->size[0] = c4_iv[0];
    c4_emxEnsureCapacity_int32_T1(chartInstance, &c4_b_st, c4_iwork, c4_i5,
      &c4_tb_emlrtRTEI);
    c4_np1 = c4_b_n + 1;
    c4_i6 = c4_b_n - 1;
    c4_c_st.site = &c4_cd_emlrtRSI;
    c4_d_b = c4_i6;
    c4_e_b = c4_d_b;
    if (c4_e_b < 1) {
      c4_b_overflow = false;
    } else {
      c4_b_overflow = (c4_e_b > 2147483645);
    }

    if (c4_b_overflow) {
      c4_d_st.site = &c4_fb_emlrtRSI;
      c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
    }

    for (c4_c_k = 1; c4_c_k <= c4_i6; c4_c_k += 2) {
      c4_idx1 = c4_c_k;
      c4_idx2 = c4_c_k;
      c4_irow1 = c4_idx1 - 1;
      c4_irow2 = c4_idx2;
      c4_p = true;
      c4_v1 = c4_x->data[c4_irow1 + c4_x->size[0]];
      c4_v2 = c4_x->data[c4_irow2 + c4_x->size[0]];
      c4_v1eqv2 = (c4_v1 == c4_v2);
      if (!c4_v1eqv2) {
        c4_e_a = c4_v1;
        c4_f_b = c4_v2;
        c4_f_a = c4_e_a;
        c4_g_b = c4_f_b;
        c4_g_a = c4_f_a;
        c4_h_b = c4_g_b;
        c4_c_p = (c4_g_a <= c4_h_b);
        if (c4_c_p) {
          c4_d_p = true;
        } else {
          c4_d_p = false;
        }

        c4_p = c4_d_p;
      }

      if (c4_p) {
        c4_idx->data[c4_c_k - 1] = c4_c_k;
        c4_idx->data[c4_c_k] = c4_c_k + 1;
      } else {
        c4_idx->data[c4_c_k - 1] = c4_c_k + 1;
        c4_idx->data[c4_c_k] = c4_c_k;
      }
    }

    if ((c4_b_n & 1) != 0) {
      c4_idx->data[c4_b_n - 1] = c4_b_n;
    }

    c4_b_i = 2;
    while (c4_b_i < c4_b_n) {
      c4_d_a = c4_b_i;
      c4_b_i2 = c4_d_a << 1;
      c4_j = 1;
      for (c4_pEnd = 1 + c4_b_i; c4_pEnd < c4_np1; c4_pEnd = c4_qEnd + c4_b_i) {
        c4_b_p = c4_j - 1;
        c4_q = c4_pEnd - 1;
        c4_qEnd = c4_j + c4_b_i2;
        if (c4_qEnd > c4_np1) {
          c4_qEnd = c4_np1;
        }

        c4_d_k = 0;
        c4_kEnd = c4_qEnd - c4_j;
        while (c4_d_k + 1 <= c4_kEnd) {
          c4_b_idx1 = c4_idx->data[c4_b_p];
          c4_b_idx2 = c4_idx->data[c4_q];
          c4_b_irow1 = c4_b_idx1 - 1;
          c4_b_irow2 = c4_b_idx2 - 1;
          c4_e_p = true;
          c4_b_v1 = c4_x->data[c4_b_irow1 + c4_x->size[0]];
          c4_b_v2 = c4_x->data[c4_b_irow2 + c4_x->size[0]];
          c4_b_v1eqv2 = (c4_b_v1 == c4_b_v2);
          if (!c4_b_v1eqv2) {
            c4_h_a = c4_b_v1;
            c4_k_b = c4_b_v2;
            c4_i_a = c4_h_a;
            c4_l_b = c4_k_b;
            c4_j_a = c4_i_a;
            c4_m_b = c4_l_b;
            c4_f_p = (c4_j_a <= c4_m_b);
            if (c4_f_p) {
              c4_g_p = true;
            } else {
              c4_g_p = false;
            }

            c4_e_p = c4_g_p;
          }

          if (c4_e_p) {
            c4_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
            c4_b_p++;
            if (c4_b_p + 1 == c4_pEnd) {
              while (c4_q + 1 < c4_qEnd) {
                c4_d_k++;
                c4_iwork->data[c4_d_k] = c4_idx->data[c4_q];
                c4_q++;
              }
            }
          } else {
            c4_iwork->data[c4_d_k] = c4_idx->data[c4_q];
            c4_q++;
            if (c4_q + 1 == c4_qEnd) {
              while (c4_b_p + 1 < c4_pEnd) {
                c4_d_k++;
                c4_iwork->data[c4_d_k] = c4_idx->data[c4_b_p];
                c4_b_p++;
              }
            }
          }

          c4_d_k++;
        }

        c4_b_p = c4_j - 2;
        c4_c_st.site = &c4_dd_emlrtRSI;
        c4_i_b = c4_kEnd;
        c4_j_b = c4_i_b;
        if (c4_j_b < 1) {
          c4_c_overflow = false;
        } else {
          c4_c_overflow = (c4_j_b > 2147483646);
        }

        if (c4_c_overflow) {
          c4_d_st.site = &c4_fb_emlrtRSI;
          c4_check_forloop_overflow_error(chartInstance, &c4_d_st);
        }

        for (c4_e_k = 0; c4_e_k < c4_kEnd; c4_e_k++) {
          c4_d_k = c4_e_k;
          c4_idx->data[(c4_b_p + c4_d_k) + 1] = c4_iwork->data[c4_d_k];
        }

        c4_j = c4_qEnd;
      }

      c4_b_i = c4_b_i2;
    }

    c4_emxFree_int32_T(chartInstance, &c4_iwork);
  }

  c4_emxFree_real_T(chartInstance, &c4_x);
  c4_st.site = &c4_ad_emlrtRSI;
  c4_b_apply_row_permutation(chartInstance, &c4_st, c4_y, c4_idx);
  c4_emxFree_int32_T(chartInstance, &c4_idx);
}

static void c4_emxEnsureCapacity_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T *c4_emxArray,
  int32_T c4_oldNumel, const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real_T1
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_real_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_s52BVvgcaqgLKaYLjO15CeF
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_s52BVvgcaqgLKaYLjO15Ce **c4_pEmxArray, int32_T
   c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *)emlrtMallocMex(sizeof
    (c4_emxArray_s52BVvgcaqgLKaYLjO15Ce));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (c4_s52BVvgcaqgLKaYLjO15CeF *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real_T1(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real_T *)emlrtMallocMex(sizeof(c4_emxArray_real_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_s52BVvgcaqgLKaYLjO15CeF
  (SFc4_waypointControlSystemInstanceStruct *chartInstance,
   c4_emxArray_s52BVvgcaqgLKaYLjO15Ce **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *)NULL) {
    if (((*c4_pEmxArray)->data != (c4_s52BVvgcaqgLKaYLjO15CeF *)NULL) &&
        (*c4_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *)NULL;
  }
}

static void c4_emxFree_real_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_real_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real_T *)NULL;
  }
}

static void c4_emxEnsureCapacity_int32_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_real32_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_real32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(real32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(real32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (real32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_int32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int32_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_int32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxInit_real32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_real32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_real32_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_real32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (real32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_int32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_int32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_int32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (int32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_int32_T *)NULL;
  }
}

static void c4_emxFree_real32_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_real32_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_real32_T *)NULL) {
    if (((*c4_pEmxArray)->data != (real32_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_real32_T *)NULL;
  }
}

static void c4_emxEnsureCapacity_boolean_T
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_boolean_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(boolean_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (boolean_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxEnsureCapacity_s52BVvgcaqgLK
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_s52BVvgcaqgLKaYLjO15Ce *c4_emxArray, int32_T c4_oldNumel,
   const emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof
      (c4_s52BVvgcaqgLKaYLjO15CeF));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(c4_s52BVvgcaqgLKaYLjO15CeF) *
             (uint32_T)c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (c4_s52BVvgcaqgLKaYLjO15CeF *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_boolean_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_boolean_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_boolean_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c4_emxArray_boolean_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (boolean_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void c4_emxFree_boolean_T(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, c4_emxArray_boolean_T **c4_pEmxArray)
{
  (void)chartInstance;
  if (*c4_pEmxArray != (c4_emxArray_boolean_T *)NULL) {
    if (((*c4_pEmxArray)->data != (boolean_T *)NULL) && (*c4_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c4_pEmxArray)->data);
    }

    emlrtFreeMex((*c4_pEmxArray)->size);
    emlrtFreeMex(*c4_pEmxArray);
    *c4_pEmxArray = (c4_emxArray_boolean_T *)NULL;
  }
}

static void c4_emxEnsureCapacity_int32_T1
  (SFc4_waypointControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c4_sp, c4_emxArray_int32_T *c4_emxArray, int32_T c4_oldNumel, const
   emlrtRTEInfo *c4_srcLocation)
{
  int32_T c4_i;
  int32_T c4_newCapacity;
  int32_T c4_newNumel;
  void *c4_newData;
  (void)chartInstance;
  if (c4_oldNumel < 0) {
    c4_oldNumel = 0;
  }

  c4_newNumel = 1;
  for (c4_i = 0; c4_i < c4_emxArray->numDimensions; c4_i++) {
    c4_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c4_newNumel,
      (size_t)(uint32_T)c4_emxArray->size[c4_i], c4_srcLocation, (void *)c4_sp);
  }

  if (c4_newNumel > c4_emxArray->allocatedSize) {
    c4_newCapacity = c4_emxArray->allocatedSize;
    if (c4_newCapacity < 16) {
      c4_newCapacity = 16;
    }

    while (c4_newCapacity < c4_newNumel) {
      if (c4_newCapacity > 1073741823) {
        c4_newCapacity = MAX_int32_T;
      } else {
        c4_newCapacity <<= 1;
      }
    }

    c4_newData = emlrtCallocMex((uint32_T)c4_newCapacity, sizeof(int32_T));
    if (c4_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
    }

    if (c4_emxArray->data != NULL) {
      memcpy(c4_newData, c4_emxArray->data, sizeof(int32_T) * (uint32_T)
             c4_oldNumel);
      if (c4_emxArray->canFreeData) {
        emlrtFreeMex(c4_emxArray->data);
      }
    }

    c4_emxArray->data = (int32_T *)c4_newData;
    c4_emxArray->allocatedSize = c4_newCapacity;
    c4_emxArray->canFreeData = true;
  }
}

static void c4_emxInit_int32_T1(SFc4_waypointControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, c4_emxArray_int32_T **c4_pEmxArray,
  int32_T c4_numDimensions, const emlrtRTEInfo *c4_srcLocation)
{
  c4_emxArray_int32_T *c4_emxArray;
  int32_T c4_i;
  (void)chartInstance;
  *c4_pEmxArray = (c4_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c4_emxArray_int32_T));
  if ((void *)*c4_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray = *c4_pEmxArray;
  c4_emxArray->data = (int32_T *)NULL;
  c4_emxArray->numDimensions = c4_numDimensions;
  c4_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c4_numDimensions);
  if ((void *)c4_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c4_srcLocation, (void *)c4_sp);
  }

  c4_emxArray->allocatedSize = 0;
  c4_emxArray->canFreeData = true;
  for (c4_i = 0; c4_i < c4_numDimensions; c4_i++) {
    c4_emxArray->size[c4_i] = 0;
  }
}

static void init_dsm_address_info(SFc4_waypointControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_waypointControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_I = (uint8_T (*)[57600])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_waypointX = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_waypointY = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_waypointControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2071603210U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2086716924U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1148685721U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3149803584U);
}

mxArray *sf_c4_waypointControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,6);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_waypointControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2gray_tbb_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_waypointControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_waypointControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB+wMTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPQ7IOlnwaKfE0m/AJRfnlhZkJ+ZVxIBFe"
    "dDogfOPxIU+yeSqv5RcKBMP8T+CAL+UULzD4ifWRyfmFySWZYan2wSD/Occ35eSVF+TnBlcUlqL"
    "qo/AWQ3KBU="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_waypointControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s6LKaLSopeCbWO41Cx5FjVC";
}

static void sf_opaque_initialize_c4_waypointControlSystem(void *chartInstanceVar)
{
  initialize_params_c4_waypointControlSystem
    ((SFc4_waypointControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c4_waypointControlSystem((SFc4_waypointControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_waypointControlSystem(void *chartInstanceVar)
{
  enable_c4_waypointControlSystem((SFc4_waypointControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_waypointControlSystem(void *chartInstanceVar)
{
  disable_c4_waypointControlSystem((SFc4_waypointControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_waypointControlSystem(void *chartInstanceVar)
{
  sf_gateway_c4_waypointControlSystem((SFc4_waypointControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_waypointControlSystem(SimStruct*
  S)
{
  return get_sim_state_c4_waypointControlSystem
    ((SFc4_waypointControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_waypointControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_waypointControlSystem
    ((SFc4_waypointControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_waypointControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_waypointControlSystemInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_waypointControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_waypointControlSystem
      ((SFc4_waypointControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_waypointControlSystem(void *chartInstanceVar)
{
  mdl_start_c4_waypointControlSystem((SFc4_waypointControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo
      (((SFc4_waypointControlSystemInstanceStruct*)chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_waypointControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c4_waypointControlSystem
    ((SFc4_waypointControlSystemInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_waypointControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_waypointControlSystem
      ((SFc4_waypointControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc4_waypointControlSystem
      ((SFc4_waypointControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_waypointControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWMuP20QYn32wYkW36gGJCiFR9cQFqS0t9IDo7joJRGTZBWe3hctqYn+Jh4xn3HnkgfgjuCD",
    "+G+78Bxw5Ik4cOXDgG8dJI2+a9STQl7Dk9U7s3/f4+XuNyUbziOBxFc/R24Ts4PV1PDfJ5HitWG",
    "/MnZPft8nHxfr7NwiJZAw9EKHtdtmI+B3CpidU0VQT/0PQFL4CLbk1TIqm6MrqWCa6oEBEKCCTy",
    "njp1Sy1nIl+w4rIadYPExYlYSItjw9RII2PBR8/TW9mzQlqrDEFkWkAxCZR0vaSBqe95SwoMwwS",
    "iPrapt5caTChzZyr+shywzIO9RFETaENRRb0Jf6GhhoIzMiPZOevDqdomWacUVGd64TqEDKMDgO",
    "nWYx/j61B9ipho4QqcwgJHYBusX6uXQqopJ1pfLrDBDVSMcrrKQ+ctIr+nnD08QhTgvu+I/T3UA",
    "HtZ5IJ45kQYQN5rgva4VCDju156g3hsXXZcMZgCMrv/XYDOQBFe3As/GzO31F9lAflLJcqYg1L4",
    "YyqgwhjV0PsVzcw6XRIMRyhjWK8sJBT3NRtxQYYG761runSf6VaZ9NJ9OuVsLne+gC842qmtxGJ",
    "gHKu/bBtmbVgADzXX6OGroCd6PcAa83itsTocNXGs2JZwTATCmwgRcyqR+WghMob2xfYpCrAWer",
    "SAGKkeWb6TNBleWS1kWmAJafWalXUdxHbFAZUl0ZQuccoyjSgwXlceeqNmXaJhGhkyeReVpYwyc",
    "GVoER3ragNpeojx77N7AlXLhP80BD3sDAbyItcHaP7jHJb0eZU9zB/MDxONVZZP72IdfmzEjiiU",
    "QKx65yMwxHWWRRQ9RVr1/IP0NsBM+Ma6EixrGomWSzo2HQdS+1xBqeiL+RQNJRMw2LyWhJXAFg1",
    "qBJM9A6xhatxA42vZrWCx+28uvsOOY5najjtuNj4FAR2Q+ermxpohFlVFzgio0HrYEP2HQ4xQjN",
    "tsFGPJ61+0vfc/P4ZeTK/by+Y36/Pze/XinV093xIx/m0gZKNkjwco/TUybs1J+9Khf3A1I5lOH",
    "IBR2a46fW9OfzGAr1k7lrWt7u53M5N/G+jwO3P4fZKerZLuJ2Cs/tbf/y09/ODX7a//HFP/P7R3",
    "+vo/2HLb791tVi/M52bZlV6cKGQVYmHt0rx4Nb6w9bntBXKDILOw+O7t4PRvca3Z0Eu77fN5fZu",
    "leyd/n7DzWqYxHlNUFEzLvZtbk3tZD/h5N+fs3fnEj525+KJkD8frId/c78cD4v42i3x5dbT5Hm",
    "0II6fnz/X1/bn63/Vnxv76+En+h9d4s/Nkj83873JOXUdCM6fVuku+rlqPvviyDPGvSx2/s/Lf+",
    "9flX6+Km5zRRx5xrh1/fOdU172528tqb+k9Py1F9iPZfXeZ1590fz6lfjNk+8W609m30uChPF4w",
    "Y6tuI2bqu6iu69IfP/lyd90fq47/ooP6998cCAoH+MWbbIFLn4+Ue776OyWAqoX74OfRz8hC/ZD",
    "i+arK6X8dushE7Ec6vdv37l3Z53+9A9jhSnW",
    ""
  };

  static char newstr [1537] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_waypointControlSystem(SimStruct *S)
{
  const char* newstr = sf_c4_waypointControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2548695864U));
  ssSetChecksum1(S,(3376397837U));
  ssSetChecksum2(S,(227889412U));
  ssSetChecksum3(S,(4231522414U));
}

static void mdlRTW_c4_waypointControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_waypointControlSystem(SimStruct *S)
{
  SFc4_waypointControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc4_waypointControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc4_waypointControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_waypointControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_waypointControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_waypointControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c4_waypointControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_waypointControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_waypointControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_waypointControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_waypointControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_waypointControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_waypointControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_waypointControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_waypointControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_waypointControlSystem;
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
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_waypointControlSystem(chartInstance);
}

void c4_waypointControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_waypointControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_waypointControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_waypointControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_waypointControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
