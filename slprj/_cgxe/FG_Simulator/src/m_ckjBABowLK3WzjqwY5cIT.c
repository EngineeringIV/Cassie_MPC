/* Include files */

#include "modelInterface.h"
#include "m_ckjBABowLK3WzjqwY5cIT.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 3,     /* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\SampleTime.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 66,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 76,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 77,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 78,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 79,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 80,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 81,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 82,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 83,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 84,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 85,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 86,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 87,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 88,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 89,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 90,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 91,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 92,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 93,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 94, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 95, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 96, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 97, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 98, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 99, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 100,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 101,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 102,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 103,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 104,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 105,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 106,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 107,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 108,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 109,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 110,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 111,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 112,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 113,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 114,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 115,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 116,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 117,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 118,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 119,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 120,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 121,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 122,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 123,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 124,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 125,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 126,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 127,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 128,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 129,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 130,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 131,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 132,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 133,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 134,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 135,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 140,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 142,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 149,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 152,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 155,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 158,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 161,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 164,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 167,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 170,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 173,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 176,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 179,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 182,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 185,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 188,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 191,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 194,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 197,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 200,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 203,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 206,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 209,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 212,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 215,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 218,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 221,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 224,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 227,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 230,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 233,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 236,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 239,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 242,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 245,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 248,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 251,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 254,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 257,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 260,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 263,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 266,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 269,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 272,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 275,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 278,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 281,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 284,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 287,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 290,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 293,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 296,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 299,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 302,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 305,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 308,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 311,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 314,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 317,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 320,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 323,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 326,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 329,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 219,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 224,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 249,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 251,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 259,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 261,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 263,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 289,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 299,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 300,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 307,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 308,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 364,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 368,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 374,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 391,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 435,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 442,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 443,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 445,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 446,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 448,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 449,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 451,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 452,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 499,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 506,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 519,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 520,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 531,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 533,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 540,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 541,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 542,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 543,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 544,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 545,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 546,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 547,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 548,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 549,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 550,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 551,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 557,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 558,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 578,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 614,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 615,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 623,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 689,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 690,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 691,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 692,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 705,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 708,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 714,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 757,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 12, /* lineNo */
  "IMU_to_Euler_v2",                   /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\IMU_to_Euler_v2.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 14, /* lineNo */
  "IMU_to_Euler_v2",                   /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\IMU_to_Euler_v2.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 19, /* lineNo */
  "IMU_to_Euler_v2",                   /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\IMU_to_Euler_v2.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 20, /* lineNo */
  "IMU_to_Euler_v2",                   /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\IMU_to_Euler_v2.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 13, /* lineNo */
  "Quaternion_to_Matrix",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Quaternion_to_Matri"
  "x.m"                                /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 14, /* lineNo */
  "Quaternion_to_Matrix",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Quaternion_to_Matri"
  "x.m"                                /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 15, /* lineNo */
  "Quaternion_to_Matrix",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Quaternion_to_Matri"
  "x.m"                                /* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 16, /* lineNo */
  "Quaternion_to_Matrix",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Quaternion_to_Matri"
  "x.m"                                /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 61, /* lineNo */
  "power",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 15, /* lineNo */
  "Matrix_to_Euler",                   /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Matrix_to_Euler.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 13, /* lineNo */
  "asin",                              /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 24, /* lineNo */
  "dMatrix_to_dEuler",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 25, /* lineNo */
  "dMatrix_to_dEuler",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 30, /* lineNo */
  "dMatrix_to_dEuler",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 39, /* lineNo */
  "dMatrix_to_dEuler",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 40, /* lineNo */
  "dMatrix_to_dEuler",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 929,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 948,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 949,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 950,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 951,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 12, /* lineNo */
  "Forward_Kinematics_p",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
  "s_p.m"                              /* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 14, /* lineNo */
  "Forward_Kinematics_p",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
  "s_p.m"                              /* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 13, /* lineNo */
  "acos",                              /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 14, /* lineNo */
  "Forward_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 15, /* lineNo */
  "Forward_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 903,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 904,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 905,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 908,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 909,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 44, /* lineNo */
  "mpower",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 73, /* lineNo */
  "mpower",                            /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 13, /* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 63, /* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 75, /* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 28, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 871,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 872,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 873,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 874,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 39, /* lineNo */
  "interp1",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 184,/* lineNo */
  "interp1",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 222,/* lineNo */
  "interp1",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 588,/* lineNo */
  "interp1",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 642,/* lineNo */
  "interp1",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\polyfun\\interp1.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 79, /* lineNo */
  "bsearch",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\bsearch.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 10, /* lineNo */
  "bezier",                            /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\bezier.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 18, /* lineNo */
  "bezier",                            /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\bezier.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 20, /* lineNo */
  "bezier",                            /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\bezier.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 22, /* lineNo */
  "bezier",                            /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\bezier.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 39, /* lineNo */
  "nchoosek",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 45, /* lineNo */
  "nchoosek",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 116,/* lineNo */
  "nchoosek",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 4,  /* lineNo */
  "dbezier",                           /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\dbezier.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 3,  /* lineNo */
  "dbezier",                           /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\dbezier.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 7,  /* lineNo */
  "diff_coeff",                        /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\diff_coeff.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 8,  /* lineNo */
  "diff_coeff",                        /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\diff_coeff.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 890,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 892,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 895,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 2,  /* lineNo */
  "get_feet_velocity",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_velocity.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 3,  /* lineNo */
  "get_feet_velocity",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_velocity.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 2,  /* lineNo */
  "get_feet_position",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_position.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 3,  /* lineNo */
  "get_feet_position",                 /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_position.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 932,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 939,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 940,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 941,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 942,/* lineNo */
  "FG_Controller",                     /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 8,  /* lineNo */
  "Inverse_Kinematics_p",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_p.m"                              /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 9,  /* lineNo */
  "Inverse_Kinematics_p",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_p.m"                              /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 11, /* lineNo */
  "Inverse_Kinematics_p",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_p.m"                              /* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 8,  /* lineNo */
  "Inverse_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 9,  /* lineNo */
  "Inverse_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 11, /* lineNo */
  "Inverse_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 14, /* lineNo */
  "Inverse_Kinematics_v",              /* fcnName */
  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
  "s_v.m"                              /* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 144,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 145,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 52,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 25,  /* lineNo */
  15,                                  /* colNo */
  "nchoosek",                          /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 103, /* lineNo */
  21,                                  /* colNo */
  "nchoosek",                          /* fName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pName */
};

static emlrtRSInfo vk_emlrtRSI = { 19, /* lineNo */
  "error",                             /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 25, /* lineNo */
  "nchoosek",                          /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\specfun\\nchoosek.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 52, /* lineNo */
  "flt2str",                           /* fcnName */
  "D:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static void mw__internal__system__init__fcn(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance);
static FG_Controller *FG_Controller_FG_Controller
  (InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, FG_Controller *obj);
static boolean_T isequal(real_T varargin_1, real_T varargin_2);
static void FG_Controller_stepImpl(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T b_t, real_T
  cassieOutputs_pelvis_radio_channel[16], real_T
  cassieOutputs_pelvis_vectorNav_angularVelocity[3], real_T
  cassieOutputs_pelvis_vectorNav_orientation[4], real_T
  cassieOutputs_leftLeg_hipRollDrive_position, real_T
  cassieOutputs_leftLeg_hipRollDrive_velocity, real_T
  cassieOutputs_leftLeg_hipYawDrive_position, real_T
  cassieOutputs_leftLeg_hipYawDrive_velocity, real_T
  cassieOutputs_leftLeg_hipPitchDrive_position, real_T
  cassieOutputs_leftLeg_hipPitchDrive_velocity, real_T
  cassieOutputs_leftLeg_kneeDrive_position, real_T
  cassieOutputs_leftLeg_kneeDrive_velocity, real_T
  cassieOutputs_leftLeg_footDrive_position, real_T
  cassieOutputs_leftLeg_footDrive_velocity, real_T
  cassieOutputs_leftLeg_shinJoint_position, real_T
  cassieOutputs_leftLeg_shinJoint_velocity, real_T
  cassieOutputs_leftLeg_tarsusJoint_position, real_T
  cassieOutputs_leftLeg_tarsusJoint_velocity, real_T
  cassieOutputs_leftLeg_footJoint_position, real_T
  cassieOutputs_leftLeg_footJoint_velocity, real_T
  cassieOutputs_rightLeg_hipRollDrive_position, real_T
  cassieOutputs_rightLeg_hipRollDrive_velocity, real_T
  cassieOutputs_rightLeg_hipYawDrive_position, real_T
  cassieOutputs_rightLeg_hipYawDrive_velocity, real_T
  cassieOutputs_rightLeg_hipPitchDrive_position, real_T
  cassieOutputs_rightLeg_hipPitchDrive_velocity, real_T
  cassieOutputs_rightLeg_kneeDrive_position, real_T
  cassieOutputs_rightLeg_kneeDrive_velocity, real_T
  cassieOutputs_rightLeg_footDrive_position, real_T
  cassieOutputs_rightLeg_footDrive_velocity, real_T
  cassieOutputs_rightLeg_shinJoint_position, real_T
  cassieOutputs_rightLeg_shinJoint_velocity, real_T
  cassieOutputs_rightLeg_tarsusJoint_position, real_T
  cassieOutputs_rightLeg_tarsusJoint_velocity, real_T
  cassieOutputs_rightLeg_footJoint_position, real_T
  cassieOutputs_rightLeg_footJoint_velocity, boolean_T
  cassieOutputs_isCalibrated, boolean_T isSim, real_T
  GaitLibrary_RightStance_HAlpha[540], real_T GaitLibrary_LeftStance_HAlpha[540],
  real_T GaitLibrary_ct[9], real_T GaitLibrary_Velocity[18], real_T
  b_encoder_fil[14], real_T userInputs_torque[10], int16_T userInputs_telemetry
  [9], real_T Data_hd[10], real_T Data_dhd[10], real_T Data_h0[10], real_T
  Data_dh0[10], real_T Data_hd_fix[10], real_T Data_dhd_fix[10], real_T
  Data_h0_fix[10], real_T Data_dh0_fix[10], real_T Data_hd_joint[10], real_T
  Data_dhd_joint[10], real_T Data_h0_joint[10], real_T Data_dh0_joint[10],
  real_T Data_y[10], real_T Data_dy[10], real_T Data_y_joint[10], real_T
  Data_dy_joint[10], real_T *Data_y1_joint, real_T *Data_y2_joint, real_T
  *Data_y3_joint, real_T *Data_y4_joint, real_T *Data_y5_joint, real_T
  *Data_y6_joint, real_T *Data_y7_joint, real_T *Data_y8_joint, real_T
  *Data_y9_joint, real_T *Data_y10_joint, real_T Data_y_knee[2], real_T
  Data_dy_knee[2], real_T *Data_LLd, real_T *Data_dLLd, real_T *Data_qKnee_d,
  real_T *Data_dqKnee_d, real_T *Data_qknee_d_L, real_T *Data_qknee_d_R, real_T *
  Data_left_tune, real_T *Data_right_tune, real_T *Data_LL0_R, real_T
  *Data_LL0_L, real_T Data_y_output[4], real_T Data_dy_output[4], real_T
  Data_u_output[4], real_T *Data_lateral_mid_p, real_T *Data_lateral_mid_v,
  real_T *Data_LL_des_fil, real_T *Data_test, real_T *Data_task, real_T *Data_t,
  real_T Data_q[26], real_T Data_dq[26], real_T Data_u[10], real_T Data_u_sat[10],
  real_T Data_u_fil[10], real_T *Data_stanceLeg, real_T *Data_s_sw, real_T
  *Data_s_st, real_T *Data_s, real_T *Data_ds, real_T Data_encoder_fil[14],
  real_T Data_d_torso_angle_fil[3], real_T *Data_tp_last, real_T
  *Data_avg_v_last_1, real_T *Data_avg_v_last_2, real_T *Data_theta, real_T
  *Data_dtheta, real_T *Data_theta_d, real_T *Data_dtheta_d, real_T Data_GRF[2],
  real_T *Data_t0, real_T *Data_Switch, real_T Data_spring_force_R[2], real_T
  Data_spring_force_L[2], real_T Data_torso_angle[3], real_T Data_d_torso_angle
  [3], real_T Data_id_torso_angle[3], real_T Data_dd_torso_angle[3], real_T
  Data_torso_position[3], real_T Data_torso_velocity[3], real_T
  Data_torso_velocity_fil[3], real_T *Data_torso_vx, real_T *Data_torso_vy,
  real_T *Data_torso_vz, real_T *Data_torso_vx_fil, real_T *Data_torso_vy_fil,
  real_T *Data_torso_vz_fil, real_T *Data_torso_vx_b, real_T *Data_torso_vy_b,
  real_T *Data_torso_vz_b, real_T *Data_torso_vx_b_fil, real_T
  *Data_torso_vy_b_fil, real_T *Data_torso_vz_b_fil, real_T *Data_tg_velocity_x,
  real_T Data_com_pos[3], real_T Data_com_vel[3], real_T *Data_com_vel_x, real_T
  *Data_com_vel_y, real_T *Data_com_vel_z, real_T *Data_com_vel_x_fil, real_T
  *Data_com_vel_y_fil, real_T *Data_com_vel_z_fil, real_T *Data_com_pos_x_fil,
  real_T *Data_com_pos_y_fil, real_T *Data_com_pos_z_fil, real_T
  Data_com_pos_fil[3], real_T *Data_torso_vx_test, real_T *Data_torso_vy_test,
  real_T *Data_torso_vz_test, real_T *Data_torso_vx_b_test, real_T
  *Data_torso_vy_b_test, real_T *Data_torso_vz_b_test, real_T
  *Data_torso_vx_test_2, real_T *Data_torso_vy_test_2, real_T
  *Data_torso_vz_test_2, real_T *Data_torso_vx_b_test_2, real_T
  *Data_torso_vy_b_test_2, real_T *Data_torso_vz_b_test_2, real_T
  *Data_torso_vx_fil_test, real_T *Data_torso_vy_fil_test, real_T
  *Data_torso_vz_fil_test, real_T *Data_torso_vx_b_fil_test, real_T
  *Data_torso_vy_b_fil_test, real_T *Data_torso_vz_b_fil_test, real_T
  *Data_l_abduction_vx, real_T *Data_l_abduction_vy, real_T *Data_l_abduction_vz,
  real_T *Data_l_foot_vx, real_T *Data_l_foot_vy, real_T *Data_l_foot_vz, real_T
  *Data_l_foot_vx_b, real_T *Data_l_foot_vy_b, real_T *Data_l_foot_vz_b, real_T
  Data_r_foot_v[3], real_T Data_l_foot_v[3], real_T Data_r_foot_p[3], real_T
  Data_l_foot_p[3], real_T Data_s_LR[2], real_T *Data_orient, real_T
  *Data_d_orient_test, real_T *Data_d_orient, real_T Data_step_end_dx_fil_seq[3],
  real_T Data_step_end_dy_fil_seq[3], real_T *Data_q_abduction_R, real_T
  *Data_q_rotation_R, real_T *Data_q_thigh_R, real_T *Data_q_thigh_knee_R,
  real_T *Data_q_knee_shin_R, real_T *Data_q_thigh_shin_R, real_T
  *Data_q_shin_tarsus_R, real_T *Data_q_toe_R, real_T *Data_q_abduction_L,
  real_T *Data_q_rotation_L, real_T *Data_q_thigh_L, real_T *Data_q_thigh_knee_L,
  real_T *Data_q_knee_shin_L, real_T *Data_q_thigh_shin_L, real_T
  *Data_q_shin_tarsus_L, real_T *Data_q_toe_L, real_T *Data_dq_abduction_R,
  real_T *Data_dq_rotation_R, real_T *Data_dq_thigh_R, real_T
  *Data_dq_thigh_knee_R, real_T *Data_dq_knee_shin_R, real_T
  *Data_dq_thigh_shin_R, real_T *Data_dq_shin_tarsus_R, real_T *Data_dq_toe_R,
  real_T *Data_dq_abduction_L, real_T *Data_dq_rotation_L, real_T
  *Data_dq_thigh_L, real_T *Data_dq_thigh_knee_L, real_T *Data_dq_knee_shin_L,
  real_T *Data_dq_thigh_shin_L, real_T *Data_dq_shin_tarsus_L, real_T
  *Data_dq_toe_L, real_T Data_qall[20], real_T Data_dqall[20], real_T Data_qq[4],
  real_T Data_qaR[5], real_T Data_qjR[2], real_T Data_qsR[2], real_T Data_qaL[5],
  real_T Data_qjL[2], real_T Data_qsL[2], real_T Data_dqq[3], real_T Data_dqaR[5],
  real_T Data_dqjR[2], real_T Data_dqsR[2], real_T Data_dqaL[5], real_T
  Data_dqjL[2], real_T Data_dqsL[2], real_T Data_u_P[10], real_T Data_u_D[10],
  real_T *Data_computer_time);
static void Construct_Data(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T Data_hd[10], real_T Data_dhd[10], real_T Data_h0[10], real_T Data_dh0
  [10], real_T Data_hd_fix[10], real_T Data_dhd_fix[10], real_T Data_h0_fix[10],
  real_T Data_dh0_fix[10], real_T Data_hd_joint[10], real_T Data_dhd_joint[10],
  real_T Data_h0_joint[10], real_T Data_dh0_joint[10], real_T Data_y[10], real_T
  Data_dy[10], real_T Data_y_joint[10], real_T Data_dy_joint[10], real_T
  *Data_y1_joint, real_T *Data_y2_joint, real_T *Data_y3_joint, real_T
  *Data_y4_joint, real_T *Data_y5_joint, real_T *Data_y6_joint, real_T
  *Data_y7_joint, real_T *Data_y8_joint, real_T *Data_y9_joint, real_T
  *Data_y10_joint, real_T Data_y_knee[2], real_T Data_dy_knee[2], real_T
  *Data_LLd, real_T *Data_dLLd, real_T *Data_qKnee_d, real_T *Data_dqKnee_d,
  real_T *Data_qknee_d_L, real_T *Data_qknee_d_R, real_T *Data_left_tune, real_T
  *Data_right_tune, real_T *Data_LL0_R, real_T *Data_LL0_L, real_T
  Data_y_output[4], real_T Data_dy_output[4], real_T Data_u_output[4], real_T
  *Data_lateral_mid_p, real_T *Data_lateral_mid_v, real_T *Data_LL_des_fil,
  real_T *Data_test, real_T *Data_task, real_T *Data_t, real_T Data_q[26],
  real_T Data_dq[26], real_T Data_u[10], real_T Data_u_sat[10], real_T
  Data_u_fil[10], real_T *Data_stanceLeg, real_T *Data_s_sw, real_T *Data_s_st,
  real_T *Data_s, real_T *Data_ds, real_T Data_encoder_fil[14], real_T
  Data_d_torso_angle_fil[3], real_T *Data_tp_last, real_T *Data_avg_v_last_1,
  real_T *Data_avg_v_last_2, real_T *Data_theta, real_T *Data_dtheta, real_T
  *Data_theta_d, real_T *Data_dtheta_d, real_T Data_GRF[2], real_T *Data_t0,
  real_T *Data_Switch, real_T Data_spring_force_R[2], real_T
  Data_spring_force_L[2], real_T Data_torso_angle[3], real_T Data_d_torso_angle
  [3], real_T Data_id_torso_angle[3], real_T Data_dd_torso_angle[3], real_T
  Data_torso_position[3], real_T Data_torso_velocity[3], real_T
  Data_torso_velocity_fil[3], real_T *Data_torso_vx, real_T *Data_torso_vy,
  real_T *Data_torso_vz, real_T *Data_torso_vx_fil, real_T *Data_torso_vy_fil,
  real_T *Data_torso_vz_fil, real_T *Data_torso_vx_b, real_T *Data_torso_vy_b,
  real_T *Data_torso_vz_b, real_T *Data_torso_vx_b_fil, real_T
  *Data_torso_vy_b_fil, real_T *Data_torso_vz_b_fil, real_T *Data_tg_velocity_x,
  real_T Data_com_pos[3], real_T Data_com_vel[3], real_T *Data_com_vel_x, real_T
  *Data_com_vel_y, real_T *Data_com_vel_z, real_T *Data_com_vel_x_fil, real_T
  *Data_com_vel_y_fil, real_T *Data_com_vel_z_fil, real_T *Data_com_pos_x_fil,
  real_T *Data_com_pos_y_fil, real_T *Data_com_pos_z_fil, real_T
  Data_com_pos_fil[3], real_T *Data_torso_vx_test, real_T *Data_torso_vy_test,
  real_T *Data_torso_vz_test, real_T *Data_torso_vx_b_test, real_T
  *Data_torso_vy_b_test, real_T *Data_torso_vz_b_test, real_T
  *Data_torso_vx_test_2, real_T *Data_torso_vy_test_2, real_T
  *Data_torso_vz_test_2, real_T *Data_torso_vx_b_test_2, real_T
  *Data_torso_vy_b_test_2, real_T *Data_torso_vz_b_test_2, real_T
  *Data_torso_vx_fil_test, real_T *Data_torso_vy_fil_test, real_T
  *Data_torso_vz_fil_test, real_T *Data_torso_vx_b_fil_test, real_T
  *Data_torso_vy_b_fil_test, real_T *Data_torso_vz_b_fil_test, real_T
  *Data_l_abduction_vx, real_T *Data_l_abduction_vy, real_T *Data_l_abduction_vz,
  real_T *Data_l_foot_vx, real_T *Data_l_foot_vy, real_T *Data_l_foot_vz, real_T
  *Data_l_foot_vx_b, real_T *Data_l_foot_vy_b, real_T *Data_l_foot_vz_b, real_T
  Data_r_foot_v[3], real_T Data_l_foot_v[3], real_T Data_r_foot_p[3], real_T
  Data_l_foot_p[3], real_T Data_s_LR[2], real_T *Data_orient, real_T
  *Data_d_orient_test, real_T *Data_d_orient, real_T Data_step_end_dx_fil_seq[3],
  real_T Data_step_end_dy_fil_seq[3], real_T *Data_q_abduction_R, real_T
  *Data_q_rotation_R, real_T *Data_q_thigh_R, real_T *Data_q_thigh_knee_R,
  real_T *Data_q_knee_shin_R, real_T *Data_q_thigh_shin_R, real_T
  *Data_q_shin_tarsus_R, real_T *Data_q_toe_R, real_T *Data_q_abduction_L,
  real_T *Data_q_rotation_L, real_T *Data_q_thigh_L, real_T *Data_q_thigh_knee_L,
  real_T *Data_q_knee_shin_L, real_T *Data_q_thigh_shin_L, real_T
  *Data_q_shin_tarsus_L, real_T *Data_q_toe_L, real_T *Data_dq_abduction_R,
  real_T *Data_dq_rotation_R, real_T *Data_dq_thigh_R, real_T
  *Data_dq_thigh_knee_R, real_T *Data_dq_knee_shin_R, real_T
  *Data_dq_thigh_shin_R, real_T *Data_dq_shin_tarsus_R, real_T *Data_dq_toe_R,
  real_T *Data_dq_abduction_L, real_T *Data_dq_rotation_L, real_T
  *Data_dq_thigh_L, real_T *Data_dq_thigh_knee_L, real_T *Data_dq_knee_shin_L,
  real_T *Data_dq_thigh_shin_L, real_T *Data_dq_shin_tarsus_L, real_T
  *Data_dq_toe_L, real_T Data_qall[20], real_T Data_dqall[20], real_T Data_qq[4],
  real_T Data_qaR[5], real_T Data_qjR[2], real_T Data_qsR[2], real_T Data_qaL[5],
  real_T Data_qjL[2], real_T Data_qsL[2], real_T Data_dqq[3], real_T Data_dqaR[5],
  real_T Data_dqjR[2], real_T Data_dqsR[2], real_T Data_dqaL[5], real_T
  Data_dqjL[2], real_T Data_dqsL[2], real_T Data_u_P[10], real_T Data_u_D[10],
  real_T *Data_computer_time);
static void RadioChannelToButton(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T RadioChannel[16], real_T *RadioButton_LVA, real_T
  *RadioButton_LHA, real_T *RadioButton_RVA, real_T *RadioButton_RHA, real_T
  *RadioButton_S1A, real_T *RadioButton_S2A, real_T *RadioButton_LSA, real_T
  *RadioButton_RSA, real_T *RadioButton_SAA, real_T *RadioButton_SBA, real_T
  *RadioButton_SCA, real_T *RadioButton_SDA, real_T *RadioButton_SEA, real_T
  *RadioButton_SFA, real_T *RadioButton_SGA, real_T *RadioButton_SHA);
static void repmat(real_T a[5], real_T b[10]);
static real_T first_order_filter(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T prev, real_T new, real_T para);
static real_T median(real_T x[3]);
static void IMU_to_Euler_v2(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T b_q[4], real_T w[3], real_T *yaw, real_T *pitch,
  real_T *roll, real_T *dyaw, real_T *dpitch, real_T *droll);
static void error(const emlrtStack *sp);
static void b_error(const emlrtStack *sp);
static void c_error(const emlrtStack *sp);
static void getSpringDeflectionAngle(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T knee_motor, real_T knee_joint, real_T ankle_joint,
  real_T qs[2]);
static void getSpringDeflectionRate(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T knee_motor, real_T knee_joint, real_T ankle_joint,
  real_T dqs[2]);
static void FG_Controller_get_FK(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T b_hd_joint[10], real_T
  b_dhd_joint[10], real_T hd_output[10], real_T dhd_output[10]);
static void Forward_Kinematics_p(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T qFlexion, real_T qKnee, real_T
  *LA, real_T *LL);
static void d_error(const emlrtStack *sp);
static void Forward_Kinematics_v(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T qKnee, real_T dqFlexion, real_T
  dqKnee, real_T *dLA, real_T *dLL);
static real_T norm(real_T x[4]);
static void warning(const emlrtStack *sp);
static void FG_Controller_get_GRF(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T b_qall[20], real_T b_qsR[2],
  real_T b_qsL[2], real_T GRF_L[2], real_T GRF_R[2]);
static void mpower(const emlrtStack *sp, real_T a[4], real_T c[4]);
static void b_warning(const emlrtStack *sp, char_T varargin_1[14]);
static void FG_Controller_get_s_LR(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, FG_Controller *obj, real_T GRF_v[2], real_T *s_L, real_T *s_R);
static void FG_Controller_ControlPolicy(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T
  GaitLibrary_RightStance_HAlpha[540], real_T GaitLibrary_LeftStance_HAlpha[540],
  real_T GaitLibrary_ct[9], real_T GaitLibrary_Velocity[18], real_T phi, real_T
  gaitparams_HAlpha[60], real_T *gaitparams_ct);
static void interp1(const emlrtStack *sp, real_T varargin_1[9], real_T
                    varargin_2[540], real_T varargin_3, real_T Vq[60]);
static void e_error(const emlrtStack *sp);
static int32_T b_bsearch(real_T x[9], real_T xi);
static real_T b_interp1(const emlrtStack *sp, real_T varargin_1[9], real_T
  varargin_2[9], real_T varargin_3);
static real_T bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, const
                     emlrtStack *sp, real_T coeff[22], real_T b_s);
static void f_error(const emlrtStack *sp);
static real_T nCk(const emlrtStack *sp, real_T n, real_T k);
static void c_warning(const emlrtStack *sp);
static real_T dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      const emlrtStack *sp, real_T b_s);
static real_T b_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[21], real_T b_s);
static real_T c_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[6], real_T b_s);
static real_T singleterm_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T k, real_T b_s);
static real_T b_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T b_s);
static real_T d_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[5], real_T b_s);
static real_T b_singleterm_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T k, real_T b_s);
static real_T c_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[6], real_T b_s);
static real_T d_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[22], real_T b_s);
static void FG_Controller_get_velocity_v3(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T b_q[20],
  real_T b_dq[20], real_T *dqx, real_T *dqy, real_T *dqz);
static real_T b_norm(real_T x[9]);
static void Rz(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, real_T
               b_theta, real_T R[9]);
static void get_feet_velocity(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T b_q[20], real_T b_dq[20], real_T b_l_foot_v[3], real_T
  b_r_foot_v[3]);
static void get_feet_position(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T b_q[20], real_T b_l_foot_p[3], real_T b_r_foot_p[3]);
static void ComPosition(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T var1[20], real_T output1[3]);
static void ComVelocity(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T var1[20], real_T var2[20], real_T output1[3]);
static void e_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, const
                     emlrtStack *sp, real_T coeff[60], real_T b_s, real_T fcn[10]);
static void e_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      const emlrtStack *sp, real_T coeff[60], real_T b_s, real_T
                      fcn[10]);
static real_T wrap2Pi(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      real_T angle);
static void FG_Controller_get_IK(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T hd_output[10], real_T
  dhd_output[10], real_T b_hd_joint[10], real_T b_dhd_joint[10]);
static void Inverse_Kinematics_p(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T LA, real_T LL, real_T *qFlexion,
  real_T *qKnee);
static void Inverse_Kinematics_v(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T LL, real_T dLA, real_T dLL,
  real_T *dqFlexion, real_T *dqKnee);
static void clamp(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, real_T
                  a[2], real_T lim1, real_T lim2, real_T b[2]);
static void vector_saturate(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T b_u[10], real_T b1[10], real_T b2[10], real_T b_u_sat[10]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T b_y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T b_y[14]);
static void cgxe_mdl_start(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance);
static const mxArray *emlrt_marshallOut(const int32_T b_u);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, FG_Controller *b_y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, FG_Controller *b_y);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[10]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, stYHKfUCpUZzNx4MhyRPhnG *b_y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[60]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[2]);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[10]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[60]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void b_FG_Controller_FG_Controller(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, FG_Controller **obj);
static void init_simulink_io_address(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance);

/* Function Definitions */
static void mw__internal__system__init__fcn(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance)
{
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 0, 0 };

  int32_T cond_starts_0_0[4] = { 6423, 6437, 6447, 6461 };

  int32_T cond_ends_0_0[4] = { 6433, 6441, 6457, 6466 };

  int32_T postfix_exprs_0_0[7] = { 0, 1, -3, 2, 3, -3, -2 };

  int32_T cond_starts_0_1[2] = { 8654, 8675 };

  int32_T cond_ends_0_1[2] = { 8671, 8685 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -3 };

  int32_T cond_starts_0_2[2] = { 8803, 8825 };

  int32_T cond_ends_0_2[2] = { 8821, 8837 };

  int32_T postfix_exprs_0_2[3] = { 0, 1, -3 };

  int32_T cond_starts_0_3[2] = { 9050, 9061 };

  int32_T cond_ends_0_3[2] = { 9057, 9074 };

  int32_T postfix_exprs_0_3[3] = { 0, 1, -3 };

  int32_T cond_starts_0_4[2] = { 13912, 13929 };

  int32_T cond_ends_0_4[2] = { 13925, 13945 };

  int32_T postfix_exprs_0_4[3] = { 0, 1, -3 };

  int32_T cond_starts_0_5[3] = { 14365, 14384, 14410 };

  int32_T cond_ends_0_5[3] = { 14380, 14405, 14423 };

  int32_T postfix_exprs_0_5[5] = { 0, 1, -3, 2, -2 };

  int32_T cond_starts_0_6[4] = { 14589, 14609, 14643, 14667 };

  int32_T cond_ends_0_6[4] = { 14605, 14638, 14663, 14706 };

  int32_T postfix_exprs_0_6[7] = { 0, 1, -3, 2, -2, 3, -2 };

  int32_T cond_starts_0_7[3] = { 16114, 16136, 16158 };

  int32_T cond_ends_0_7[3] = { 16132, 16154, 16189 };

  int32_T postfix_exprs_0_7[5] = { 0, 1, -3, 2, -3 };

  int32_T cond_starts_0_8[2] = { 16341, 16363 };

  int32_T cond_ends_0_8[2] = { 16359, 16376 };

  int32_T postfix_exprs_0_8[3] = { 0, 1, -3 };

  int32_T cond_starts_0_9[2] = { 25074, 25093 };

  int32_T cond_ends_0_9[2] = { 25089, 25111 };

  int32_T postfix_exprs_0_9[3] = { 0, 1, -3 };

  int32_T cond_starts_0_10[2] = { 26637, 26660 };

  int32_T cond_ends_0_10[2] = { 26656, 26690 };

  int32_T postfix_exprs_0_10[3] = { 0, 1, -3 };

  int32_T cond_starts_0_11[2] = { 27244, 27266 };

  int32_T cond_ends_0_11[2] = { 27262, 27296 };

  int32_T postfix_exprs_0_11[3] = { 0, 1, -3 };

  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m0);
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtAssignP(&eml_mx, m0);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\FG_Controller.m",
                  0U, 11U, 73U, 37U, 0U, 0U, 0U, 0U, 0U, 30U, 12U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "FG_Controller_FG_Controller", 29, -1, 42);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "FG_Controller_stepImpl", 5583, -1, 40675);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
               "FG_Controller_ControlPolicy", 40730, -1, 41857);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
               "FG_Controller_get_velocity_v3", 41866, -1, 42313);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
               "FG_Controller_get_GRF", 42331, -1, 42751);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
               "FG_Controller_get_spring_force", 42769, -1, 42998);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
               "FG_Controller_get_s_LR", 43016, -1, 43323);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
               "FG_Controller_get_FK", 43358, -1, 43512);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U,
               "FG_Controller_get_IK", 43521, -1, 43675);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U,
               "FG_Controller_get_IK_v1", 43684, -1, 44366);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U,
               "FG_Controller_get_FK_v1", 44384, -1, 44960);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 29,
                      -1, 42);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 59U,
                      34948, -1, 40571);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 58U,
                      31718, -1, 34851);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 57U,
                      31458, -1, 31475);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 56U,
                      31246, -1, 31407);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 55U,
                      30719, -1, 30979);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 54U,
                      30487, -1, 30615);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 53U,
                      30197, -1, 30345);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 52U,
                      30009, -1, 30090);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 51U,
                      29759, -1, 29963);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 50U,
                      29465, -1, 29657);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 49U,
                      29197, -1, 29303);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 48U,
                      28988, -1, 29096);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 47U,
                      28276, -1, 28910);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 46U,
                      28058, -1, 28149);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 45U,
                      27661, -1, 27914);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 44U,
                      27321, -1, 27556);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 43U,
                      26715, -1, 27195);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 42U,
                      25916, -1, 26543);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 41U,
                      25552, -1, 25767);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 40U,
                      25140, -1, 25465);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 39U,
                      24603, -1, 24925);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 38U,
                      24506, -1, 24535);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 37U,
                      24442, -1, 24447);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 36U,
                      23510, -1, 24343);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 35U,
                      23160, -1, 23302);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 34U,
                      19484, -1, 22888);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 33U,
                      18742, -1, 19408);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 32U,
                      17981, -1, 18699);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 31U,
                      16722, -1, 17790);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 30U,
                      16545, -1, 16572);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 29U,
                      16401, -1, 16454);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 28U,
                      16214, -1, 16230);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 27U,
                      14950, -1, 15890);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 26U,
                      14827, -1, 14845);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 25U,
                      14727, -1, 14757);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 24U,
                      14444, -1, 14461);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 23U,
                      13966, -1, 14187);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 22U,
                      13678, -1, 13741);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 21U,
                      13572, -1, 13635);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 20U,
                      13305, -1, 13511);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 19U,
                      13219, -1, 13267);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 18U,
                      13130, -1, 13176);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 17U,
                      12964, -1, 13024);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 16U,
                      12867, -1, 12926);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 15U,
                      9121, -1, 12757);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 14U,
                      8854, -1, 8968);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 13U,
                      8702, -1, 8770);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U,
                      8577, -1, 8615);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U,
                      8486, -1, 8503);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U,
                      8434, -1, 8451);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U,
                      7853, -1, 8294);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U,
                      7808, -1, 7823);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
                      7757, -1, 7773);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
                      7324, -1, 7699);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
                      7289, -1, 7294);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
                      7247, -1, 7254);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
                      6658, -1, 7087);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
                      6484, -1, 6497);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
                      5850, -1, 6405);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 62U,
                      41602, -1, 41828);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 61U,
                      41341, -1, 41567);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 60U,
                      40844, -1, 41289);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 65U,
                      42146, -1, 42300);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 64U,
                      42060, -1, 42116);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 63U,
                      41967, -1, 42025);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 66U,
                      42400, -1, 42738);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 67U,
                      42847, -1, 42985);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 68U,
                      43071, -1, 43310);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 69U,
                      43438, -1, 43499);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 70U,
                      43601, -1, 43662);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 71U,
                      43767, -1, 44353);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 72U,
                      44467, -1, 44947);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 6419, 6467,
              -1, 6514);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 6628, 6641,
              -1, 7104);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 7169, 7191,
              7268, 7311);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U, 7713, 7740,
              7787, 7840);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U, 8394, 8417,
              8465, 8520);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U, 8539, 8560,
              -1, 8632);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U, 8651, 8685,
              -1, 8787);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U, 8800, 8837,
              -1, 8985);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U, 9044, 9074,
              -1, 40588);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U, 12775,
              12806, -1, 12947);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U, 13075,
              13109, 13194, 13288);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U, 13530,
              13551, 13653, 13762);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U, 13909,
              13945, -1, 14208);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 13U, 14361,
              14423, -1, 14482);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 14U, 14585,
              14706, -1, 16621);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 15U, 14779,
              14802, -1, 14929);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 16U, 16111,
              16189, -1, 16256);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 17U, 16338,
              16376, -1, 16479);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 18U, 16500,
              16520, -1, 16597);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 19U, 17921,
              17942, 18717, 19429);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 20U, 22933,
              22949, -1, 31002);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 21U, 23371,
              23396, -1, 25821);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 22U, 24369,
              24413, 24473, 24564);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 23U, 25071,
              25111, 25519, 25796);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 24U, 26634,
              26690, -1, 27220);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 25U, 27241,
              27296, -1, 27581);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 26U, 28007,
              28033, -1, 28174);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 27U, 28932,
              28963, -1, 29121);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 28U, 29142,
              29172, -1, 29328);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 29U, 29415,
              29440, -1, 29682);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 30U, 29703,
              29734, -1, 29988);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 31U, 30152,
              30172, -1, 30370);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 32U, 30432,
              30462, -1, 30640);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 33U, 31047,
              31063, -1, 34872);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 34U, 31200,
              31221, 31429, 31500);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 35U, 41303,
              41324, 41581, 41845);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 36U, 41929,
              41950, 42039, 42133);

  /* Initialize MCDC Information */
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 6422,
                6467, 4, 0, cond_starts_0_0, cond_ends_0_0, 7, postfix_exprs_0_0);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 8654,
                8685, 2, 4, cond_starts_0_1, cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 8803,
                8837, 2, 6, cond_starts_0_2, cond_ends_0_2, 3, postfix_exprs_0_2);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U, 9050,
                9074, 2, 8, cond_starts_0_3, cond_ends_0_3, 3, postfix_exprs_0_3);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U, 13912,
                13945, 2, 10, cond_starts_0_4, cond_ends_0_4, 3,
                postfix_exprs_0_4);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U, 14364,
                14423, 3, 12, cond_starts_0_5, cond_ends_0_5, 5,
                postfix_exprs_0_5);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U, 14588,
                14706, 4, 15, cond_starts_0_6, cond_ends_0_6, 7,
                postfix_exprs_0_6);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U, 16114,
                16189, 3, 19, cond_starts_0_7, cond_ends_0_7, 5,
                postfix_exprs_0_7);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U, 16341,
                16376, 2, 22, cond_starts_0_8, cond_ends_0_8, 3,
                postfix_exprs_0_8);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U, 25074,
                25111, 2, 24, cond_starts_0_9, cond_ends_0_9, 3,
                postfix_exprs_0_9);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U, 26637,
                26690, 2, 26, cond_starts_0_10, cond_ends_0_10, 3,
                postfix_exprs_0_10);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U, 27244,
                27296, 2, 28, cond_starts_0_11, cond_ends_0_11, 3,
                postfix_exprs_0_11);

  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+PreFunctions\\Construct_Data.m",
                  1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U,
               "Construct_Data", 0, -1, 4740);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U, 44,
                      -1, 4735);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\RadioChannelToButton.m",
                  2U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 0U,
               "RadioChannelToButton", 0, -1, 629);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 0U, 58,
                      -1, 623);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\first_order_filter.m",
                  3U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 0U,
               "first_order_filter", 0, -1, 88);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 0U, 52,
                      -1, 83);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\IMU_to_Euler_v2.m",
                  4U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 0U,
               "IMU_to_Euler_v2", 0, -1, 596);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 0U, 201,
                      -1, 591);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Quaternion_to_Matri"
                  "x.m", 5U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 0U,
               "Quaternion_to_Matrix", 0, -1, 510);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 0U, 199,
                      -1, 508);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\AngularVelocity_to_"
                  "dMatrix.m", 6U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 0U,
               "AngularVelocity_to_dMatrix", 0, -1, 598);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 0U, 227,
                      -1, 596);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Matrix_to_Euler.m",
                  7U, 1U, 3U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 0U,
               "Matrix_to_Euler", 0, -1, 413);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 2U, 380,
                      -1, 407);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 1U, 336,
                      -1, 355);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 0U, 214,
                      -1, 315);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 0U, 317, 331,
              -1, 360);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U, 1U, 361, 375,
              -1, 412);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\dMatrix_to_dEuler.m",
                  8U, 1U, 3U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 0U,
               "dMatrix_to_dEuler", 0, -1, 904);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 2U, 657,
                      -1, 898);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 1U, 592,
                      -1, 632);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 0U, 234,
                      -1, 571);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 0U, 573, 587,
              -1, 637);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U, 1U, 638, 652,
              -1, 903);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\getSpringDeflectionAngle.m",
                  9U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 9U, 0U,
               "getSpringDeflectionAngle", 0, -1, 175);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 9U, 0U, 74,
                      -1, 170);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 9U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\getSpringDeflectionRate.m",
                  10U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 10U, 0U,
               "getSpringDeflectionRate", 0, -1, 165);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 10U, 0U, 75,
                      -1, 160);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 10U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
                  "s_p.m", 11U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11U, 0U,
               "Forward_Kinematics_p", 0, -1, 451);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11U, 1U,
                      432, -1, 445);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11U, 0U,
                      233, -1, 411);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11U, 0U, 413, 427,
              -1, 450);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Forward_Kinematic"
                  "s_v.m", 12U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12U, 0U,
               "Forward_Kinematics_v", 0, -1, 618);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12U, 1U,
                      579, -1, 612);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12U, 0U,
                      271, -1, 558);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12U, 0U, 560, 574,
              -1, 617);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\J_RightToeJoint.m",
                  13U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13U, 0U,
               "J_RightToeJoint", 0, -1, 356);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13U, 1U,
                      137, -1, 343);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13U, 0U, 81,
                      -1, 118);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13U, 0U, 47, 72,
              124, 352);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\J_LeftToeJoint.m",
                  14U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14U, 0U,
               "J_LeftToeJoint", 0, -1, 352);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14U, 1U,
                      135, -1, 339);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14U, 0U, 80,
                      -1, 116);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14U, 0U, 46, 71,
              122, 348);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\bezier.m",
                  15U, 2U, 7U, 2U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 0U, "bezier",
               0, -1, 305);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 1U,
               "singleterm_bezier", 305, -1, 509);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 2U,
                      293, -1, 299);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 1U,
                      237, -1, 286);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 0U,
                      107, -1, 217);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 6U,
                      503, -1, 509);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 5U,
                      456, -1, 496);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 4U,
                      419, -1, 445);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 3U,
                      364, -1, 397);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 0U, 348, 359,
              399, 501);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 1U, 399, 414,
              447, 501);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U, 0U, 219, 233,
               291);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\dbezier.m",
                  16U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16U, 0U, "dbezier",
               0, -1, 107);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16U, 0U, 35,
                      -1, 106);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\diff_coeff.m",
                  17U, 1U, 3U, 0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U, 0U,
               "diff_coeff", 0, -1, 253);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U, 2U,
                      208, -1, 252);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U, 1U, 95,
                      -1, 198);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U, 0U, 36,
                      -1, 74);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U, 0U, 79, 93,
               204);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\J_RightToeBottomBack.m",
                  18U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18U, 0U,
               "J_RightToeBottomBack", 0, -1, 376);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18U, 1U,
                      147, -1, 363);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18U, 0U, 86,
                      -1, 128);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18U, 0U, 52, 77,
              134, 372);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\J_LeftToeBottomBack.m",
                  19U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19U, 0U,
               "J_LeftToeBottomBack", 0, -1, 372);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19U, 1U,
                      145, -1, 359);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19U, 0U, 85,
                      -1, 126);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19U, 0U, 51, 76,
              132, 368);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\+Angles\\Rz.m",
                  20U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 20U, 0U, "Rz", 0,
               -1, 170);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 20U, 0U, 65,
                      -1, 165);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 20U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_velocity.m",
                  21U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 21U, 0U,
               "get_feet_velocity", 0, -1, 147);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 21U, 0U, 55,
                      -1, 142);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 21U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\get_feet_position.m",
                  22U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 22U, 0U,
               "get_feet_position", 0, -1, 115);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 22U, 0U, 55,
                      -1, 110);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 22U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\RightToeJoint.m",
                  23U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23U, 0U,
               "RightToeJoint", 0, -1, 347);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23U, 1U,
                      133, -1, 334);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23U, 0U, 79,
                      -1, 114);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23U, 0U, 45, 70,
              120, 343);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\LeftToeJoint.m",
                  24U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24U, 0U,
               "LeftToeJoint", 0, -1, 343);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24U, 1U,
                      131, -1, 330);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24U, 0U, 78,
                      -1, 112);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24U, 0U, 44, 69,
              118, 339);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\ComPosition.m",
                  25U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25U, 0U,
               "ComPosition", 0, -1, 339);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25U, 1U,
                      129, -1, 326);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25U, 0U, 77,
                      -1, 110);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25U, 0U, 43, 68,
              116, 335);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\kin\\m\\ComVelocity.m",
                  26U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26U, 0U,
               "ComVelocity", 0, -1, 367);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26U, 1U,
                      139, -1, 354);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26U, 0U, 82,
                      -1, 120);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26U, 0U, 48, 73,
              126, 363);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\wrap2Pi.m",
                  27U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27U, 0U, "wrap2Pi",
               0, -1, 234);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27U, 1U,
                      147, -1, 219);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27U, 0U, 64,
                      -1, 136);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27U, 0U, 46, 58,
              138, 224);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
                  "s_p.m", 28U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28U, 0U,
               "Inverse_Kinematics_p", 0, -1, 418);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28U, 1U,
                      347, -1, 412);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28U, 0U,
                      233, -1, 326);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28U, 0U, 328, 342,
              -1, 417);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\funcs\\Kinematics_Con\\Inverse_Kinematic"
                  "s_v.m", 29U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29U, 0U,
               "Inverse_Kinematics_v", 0, -1, 566);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29U, 1U,
                      452, -1, 560);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29U, 0U,
                      253, -1, 431);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29U, 0U, 433, 447,
              -1, 565);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\clamp.m",
                  30U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 30U, 0U, "clamp",
               0, -1, 228);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 30U, 0U,
                      111, -1, 223);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 30U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\zhong\\Downloads\\Cassie_FlatGround_Controller-master\\Controllers\\Flatground\\utils\\+YToolkits\\vector_saturate.m",
                  31U, 1U, 2U, 0U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31U, 0U,
               "vector_saturate", 0, -1, 221);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31U, 1U,
                      174, -1, 211);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31U, 0U,
                      121, -1, 147);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31U, 0U, 150, 170,
               216);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31U);
}

static FG_Controller *FG_Controller_FG_Controller
  (InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, FG_Controller *obj)
{
  FG_Controller *b_obj;
  b_obj = obj;
  b_FG_Controller_FG_Controller(moduleInstance, &b_obj);
  return b_obj;
}

static boolean_T isequal(real_T varargin_1, real_T varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  p = false;
  b_p = true;
  if (!(varargin_1 == varargin_2)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static void FG_Controller_stepImpl(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T b_t, real_T
  cassieOutputs_pelvis_radio_channel[16], real_T
  cassieOutputs_pelvis_vectorNav_angularVelocity[3], real_T
  cassieOutputs_pelvis_vectorNav_orientation[4], real_T
  cassieOutputs_leftLeg_hipRollDrive_position, real_T
  cassieOutputs_leftLeg_hipRollDrive_velocity, real_T
  cassieOutputs_leftLeg_hipYawDrive_position, real_T
  cassieOutputs_leftLeg_hipYawDrive_velocity, real_T
  cassieOutputs_leftLeg_hipPitchDrive_position, real_T
  cassieOutputs_leftLeg_hipPitchDrive_velocity, real_T
  cassieOutputs_leftLeg_kneeDrive_position, real_T
  cassieOutputs_leftLeg_kneeDrive_velocity, real_T
  cassieOutputs_leftLeg_footDrive_position, real_T
  cassieOutputs_leftLeg_footDrive_velocity, real_T
  cassieOutputs_leftLeg_shinJoint_position, real_T
  cassieOutputs_leftLeg_shinJoint_velocity, real_T
  cassieOutputs_leftLeg_tarsusJoint_position, real_T
  cassieOutputs_leftLeg_tarsusJoint_velocity, real_T
  cassieOutputs_leftLeg_footJoint_position, real_T
  cassieOutputs_leftLeg_footJoint_velocity, real_T
  cassieOutputs_rightLeg_hipRollDrive_position, real_T
  cassieOutputs_rightLeg_hipRollDrive_velocity, real_T
  cassieOutputs_rightLeg_hipYawDrive_position, real_T
  cassieOutputs_rightLeg_hipYawDrive_velocity, real_T
  cassieOutputs_rightLeg_hipPitchDrive_position, real_T
  cassieOutputs_rightLeg_hipPitchDrive_velocity, real_T
  cassieOutputs_rightLeg_kneeDrive_position, real_T
  cassieOutputs_rightLeg_kneeDrive_velocity, real_T
  cassieOutputs_rightLeg_footDrive_position, real_T
  cassieOutputs_rightLeg_footDrive_velocity, real_T
  cassieOutputs_rightLeg_shinJoint_position, real_T
  cassieOutputs_rightLeg_shinJoint_velocity, real_T
  cassieOutputs_rightLeg_tarsusJoint_position, real_T
  cassieOutputs_rightLeg_tarsusJoint_velocity, real_T
  cassieOutputs_rightLeg_footJoint_position, real_T
  cassieOutputs_rightLeg_footJoint_velocity, boolean_T
  cassieOutputs_isCalibrated, boolean_T isSim, real_T
  GaitLibrary_RightStance_HAlpha[540], real_T GaitLibrary_LeftStance_HAlpha[540],
  real_T GaitLibrary_ct[9], real_T GaitLibrary_Velocity[18], real_T
  b_encoder_fil[14], real_T userInputs_torque[10], int16_T userInputs_telemetry
  [9], real_T Data_hd[10], real_T Data_dhd[10], real_T Data_h0[10], real_T
  Data_dh0[10], real_T Data_hd_fix[10], real_T Data_dhd_fix[10], real_T
  Data_h0_fix[10], real_T Data_dh0_fix[10], real_T Data_hd_joint[10], real_T
  Data_dhd_joint[10], real_T Data_h0_joint[10], real_T Data_dh0_joint[10],
  real_T Data_y[10], real_T Data_dy[10], real_T Data_y_joint[10], real_T
  Data_dy_joint[10], real_T *Data_y1_joint, real_T *Data_y2_joint, real_T
  *Data_y3_joint, real_T *Data_y4_joint, real_T *Data_y5_joint, real_T
  *Data_y6_joint, real_T *Data_y7_joint, real_T *Data_y8_joint, real_T
  *Data_y9_joint, real_T *Data_y10_joint, real_T Data_y_knee[2], real_T
  Data_dy_knee[2], real_T *Data_LLd, real_T *Data_dLLd, real_T *Data_qKnee_d,
  real_T *Data_dqKnee_d, real_T *Data_qknee_d_L, real_T *Data_qknee_d_R, real_T *
  Data_left_tune, real_T *Data_right_tune, real_T *Data_LL0_R, real_T
  *Data_LL0_L, real_T Data_y_output[4], real_T Data_dy_output[4], real_T
  Data_u_output[4], real_T *Data_lateral_mid_p, real_T *Data_lateral_mid_v,
  real_T *Data_LL_des_fil, real_T *Data_test, real_T *Data_task, real_T *Data_t,
  real_T Data_q[26], real_T Data_dq[26], real_T Data_u[10], real_T Data_u_sat[10],
  real_T Data_u_fil[10], real_T *Data_stanceLeg, real_T *Data_s_sw, real_T
  *Data_s_st, real_T *Data_s, real_T *Data_ds, real_T Data_encoder_fil[14],
  real_T Data_d_torso_angle_fil[3], real_T *Data_tp_last, real_T
  *Data_avg_v_last_1, real_T *Data_avg_v_last_2, real_T *Data_theta, real_T
  *Data_dtheta, real_T *Data_theta_d, real_T *Data_dtheta_d, real_T Data_GRF[2],
  real_T *Data_t0, real_T *Data_Switch, real_T Data_spring_force_R[2], real_T
  Data_spring_force_L[2], real_T Data_torso_angle[3], real_T Data_d_torso_angle
  [3], real_T Data_id_torso_angle[3], real_T Data_dd_torso_angle[3], real_T
  Data_torso_position[3], real_T Data_torso_velocity[3], real_T
  Data_torso_velocity_fil[3], real_T *Data_torso_vx, real_T *Data_torso_vy,
  real_T *Data_torso_vz, real_T *Data_torso_vx_fil, real_T *Data_torso_vy_fil,
  real_T *Data_torso_vz_fil, real_T *Data_torso_vx_b, real_T *Data_torso_vy_b,
  real_T *Data_torso_vz_b, real_T *Data_torso_vx_b_fil, real_T
  *Data_torso_vy_b_fil, real_T *Data_torso_vz_b_fil, real_T *Data_tg_velocity_x,
  real_T Data_com_pos[3], real_T Data_com_vel[3], real_T *Data_com_vel_x, real_T
  *Data_com_vel_y, real_T *Data_com_vel_z, real_T *Data_com_vel_x_fil, real_T
  *Data_com_vel_y_fil, real_T *Data_com_vel_z_fil, real_T *Data_com_pos_x_fil,
  real_T *Data_com_pos_y_fil, real_T *Data_com_pos_z_fil, real_T
  Data_com_pos_fil[3], real_T *Data_torso_vx_test, real_T *Data_torso_vy_test,
  real_T *Data_torso_vz_test, real_T *Data_torso_vx_b_test, real_T
  *Data_torso_vy_b_test, real_T *Data_torso_vz_b_test, real_T
  *Data_torso_vx_test_2, real_T *Data_torso_vy_test_2, real_T
  *Data_torso_vz_test_2, real_T *Data_torso_vx_b_test_2, real_T
  *Data_torso_vy_b_test_2, real_T *Data_torso_vz_b_test_2, real_T
  *Data_torso_vx_fil_test, real_T *Data_torso_vy_fil_test, real_T
  *Data_torso_vz_fil_test, real_T *Data_torso_vx_b_fil_test, real_T
  *Data_torso_vy_b_fil_test, real_T *Data_torso_vz_b_fil_test, real_T
  *Data_l_abduction_vx, real_T *Data_l_abduction_vy, real_T *Data_l_abduction_vz,
  real_T *Data_l_foot_vx, real_T *Data_l_foot_vy, real_T *Data_l_foot_vz, real_T
  *Data_l_foot_vx_b, real_T *Data_l_foot_vy_b, real_T *Data_l_foot_vz_b, real_T
  Data_r_foot_v[3], real_T Data_l_foot_v[3], real_T Data_r_foot_p[3], real_T
  Data_l_foot_p[3], real_T Data_s_LR[2], real_T *Data_orient, real_T
  *Data_d_orient_test, real_T *Data_d_orient, real_T Data_step_end_dx_fil_seq[3],
  real_T Data_step_end_dy_fil_seq[3], real_T *Data_q_abduction_R, real_T
  *Data_q_rotation_R, real_T *Data_q_thigh_R, real_T *Data_q_thigh_knee_R,
  real_T *Data_q_knee_shin_R, real_T *Data_q_thigh_shin_R, real_T
  *Data_q_shin_tarsus_R, real_T *Data_q_toe_R, real_T *Data_q_abduction_L,
  real_T *Data_q_rotation_L, real_T *Data_q_thigh_L, real_T *Data_q_thigh_knee_L,
  real_T *Data_q_knee_shin_L, real_T *Data_q_thigh_shin_L, real_T
  *Data_q_shin_tarsus_L, real_T *Data_q_toe_L, real_T *Data_dq_abduction_R,
  real_T *Data_dq_rotation_R, real_T *Data_dq_thigh_R, real_T
  *Data_dq_thigh_knee_R, real_T *Data_dq_knee_shin_R, real_T
  *Data_dq_thigh_shin_R, real_T *Data_dq_shin_tarsus_R, real_T *Data_dq_toe_R,
  real_T *Data_dq_abduction_L, real_T *Data_dq_rotation_L, real_T
  *Data_dq_thigh_L, real_T *Data_dq_thigh_knee_L, real_T *Data_dq_knee_shin_L,
  real_T *Data_dq_thigh_shin_L, real_T *Data_dq_shin_tarsus_L, real_T
  *Data_dq_toe_L, real_T Data_qall[20], real_T Data_dqall[20], real_T Data_qq[4],
  real_T Data_qaR[5], real_T Data_qjR[2], real_T Data_qsR[2], real_T Data_qaL[5],
  real_T Data_qjL[2], real_T Data_qsL[2], real_T Data_dqq[3], real_T Data_dqaR[5],
  real_T Data_dqjR[2], real_T Data_dqsR[2], real_T Data_dqaL[5], real_T
  Data_dqjL[2], real_T Data_dqsL[2], real_T Data_u_P[10], real_T Data_u_D[10],
  real_T *Data_computer_time)
{
  emlrtStack st;
  int32_T i;
  real_T b_u[10];
  real_T RadioButton_LVA;
  real_T RadioButton_LHA;
  real_T RadioButton_RVA;
  real_T RadioButton_RHA;
  real_T swing_grf;
  real_T p;
  real_T RadioButton_LSA;
  real_T expl_temp;
  real_T b_expl_temp;
  real_T RadioButton_SBA;
  real_T s_slow;
  real_T ds_slow;
  real_T s_fast;
  real_T c_expl_temp;
  real_T d_expl_temp;
  real_T s_unsat;
  real_T b_qaR[5];
  real_T x[10];
  real_T b_com_pos[3];
  real_T qa[10];
  real_T dqa[10];
  real_T qj[6];
  real_T dqj[6];
  real_T b_qaL[5];
  real_T b_qsL[2];
  real_T b_qsR[2];
  real_T b_dqaL[5];
  real_T b_dqaR[5];
  real_T b_dqsL[2];
  real_T b_dqsR[2];
  real_T b_qall[20];
  real_T b_dqall[20];
  static int8_T iv2[6] = { 2, 3, 4, 7, 8, 9 };

  real_T GRF_L[2];
  real_T c_qall[20];
  real_T GRF_R[2];
  real_T GRF_v[2];
  real_T b_s_LR[2];
  real_T dv0[60];
  static real_T dv1[22] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T dv2[6] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T dv3[6] = { 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 };

  static real_T dv4[22] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 };

  int32_T st_abduction;
  int32_T st_thigh;
  int32_T st_knee;
  int32_T st_toe;
  int32_T sw_abduction;
  int32_T sw_rotation;
  int32_T sw_thigh;
  int32_T sw_knee;
  int32_T sw_toe;
  int32_T abduction_direction;
  int32_T st_LA;
  int32_T sw_LA;
  real_T b_Rz[9];
  real_T dqall_g[20];
  real_T dq_b[3];
  int32_T i0;
  real_T b_l_foot_v[3];
  real_T b_r_foot_v[3];
  real_T b_com_vel[3];
  real_T b_r_foot_p[3];
  real_T b_l_foot_p[3];
  real_T c_Rz[3];
  real_T c_com_pos[3];
  int16_T i1;
  static real_T dv5[20] = { -0.2618, -0.3927, -0.8727, -2.8623, -2.4435, -0.3927,
    -0.3927, -0.8727, -2.8623, -2.4435, 0.3927, 0.3927, 1.3963, -0.733, -0.5236,
    0.2618, 0.3927, 1.3963, -0.733, -0.5236 };

  real_T y_thigh[2];
  real_T dy_thigh[2];
  real_T b_y_knee[2];
  real_T b_dy_knee[2];
  real_T b[2];
  real_T b_b[2];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);

  /*  PROTECTED PROPERTIES ==================================================== */
  /*  PRIVATE PROPERTIES ==================================================== */
  /*  if switching stance leg */
  /*  0 is do nothing; 1 is walking; 2 is standing up; 3 is test */
  /*  the time when starting a step */
  /*  transition time for stand to walk */
  /*  transition time for walk to stand */
  /*  u in previous iteration */
  /*  u in last step  */
  /*  for swing leg */
  /*  how long does last step take */
  /*  properties */
  /*  PROTECTED METHODS ===================================================== */
  /* STEPIMPL System output and state update equations. */
  /*             %% Initialize -------------------------------------------------------- */
  st.site = &ff_emlrtRSI;
  Construct_Data(moduleInstance, Data_hd, Data_dhd, Data_h0, Data_dh0,
                 Data_hd_fix, Data_dhd_fix, Data_h0_fix, Data_dh0_fix,
                 Data_hd_joint, Data_dhd_joint, Data_h0_joint, Data_dh0_joint,
                 Data_y, Data_dy, Data_y_joint, Data_dy_joint, Data_y1_joint,
                 Data_y2_joint, Data_y3_joint, Data_y4_joint, Data_y5_joint,
                 Data_y6_joint, Data_y7_joint, Data_y8_joint, Data_y9_joint,
                 Data_y10_joint, Data_y_knee, Data_dy_knee, Data_LLd, Data_dLLd,
                 Data_qKnee_d, Data_dqKnee_d, Data_qknee_d_L, Data_qknee_d_R,
                 Data_left_tune, Data_right_tune, Data_LL0_R, Data_LL0_L,
                 Data_y_output, Data_dy_output, Data_u_output,
                 Data_lateral_mid_p, Data_lateral_mid_v, Data_LL_des_fil,
                 Data_test, Data_task, Data_t, Data_q, Data_dq, Data_u,
                 Data_u_sat, Data_u_fil, Data_stanceLeg, Data_s_sw, Data_s_st,
                 Data_s, Data_ds, Data_encoder_fil, Data_d_torso_angle_fil,
                 Data_tp_last, Data_avg_v_last_1, Data_avg_v_last_2, Data_theta,
                 Data_dtheta, Data_theta_d, Data_dtheta_d, Data_GRF, Data_t0,
                 Data_Switch, Data_spring_force_R, Data_spring_force_L,
                 Data_torso_angle, Data_d_torso_angle, Data_id_torso_angle,
                 Data_dd_torso_angle, Data_torso_position, Data_torso_velocity,
                 Data_torso_velocity_fil, Data_torso_vx, Data_torso_vy,
                 Data_torso_vz, Data_torso_vx_fil, Data_torso_vy_fil,
                 Data_torso_vz_fil, Data_torso_vx_b, Data_torso_vy_b,
                 Data_torso_vz_b, Data_torso_vx_b_fil, Data_torso_vy_b_fil,
                 Data_torso_vz_b_fil, Data_tg_velocity_x, Data_com_pos,
                 Data_com_vel, Data_com_vel_x, Data_com_vel_y, Data_com_vel_z,
                 Data_com_vel_x_fil, Data_com_vel_y_fil, Data_com_vel_z_fil,
                 Data_com_pos_x_fil, Data_com_pos_y_fil, Data_com_pos_z_fil,
                 Data_com_pos_fil, Data_torso_vx_test, Data_torso_vy_test,
                 Data_torso_vz_test, Data_torso_vx_b_test, Data_torso_vy_b_test,
                 Data_torso_vz_b_test, Data_torso_vx_test_2,
                 Data_torso_vy_test_2, Data_torso_vz_test_2,
                 Data_torso_vx_b_test_2, Data_torso_vy_b_test_2,
                 Data_torso_vz_b_test_2, Data_torso_vx_fil_test,
                 Data_torso_vy_fil_test, Data_torso_vz_fil_test,
                 Data_torso_vx_b_fil_test, Data_torso_vy_b_fil_test,
                 Data_torso_vz_b_fil_test, Data_l_abduction_vx,
                 Data_l_abduction_vy, Data_l_abduction_vz, Data_l_foot_vx,
                 Data_l_foot_vy, Data_l_foot_vz, Data_l_foot_vx_b,
                 Data_l_foot_vy_b, Data_l_foot_vz_b, Data_r_foot_v,
                 Data_l_foot_v, Data_r_foot_p, Data_l_foot_p, Data_s_LR,
                 Data_orient, Data_d_orient_test, Data_d_orient,
                 Data_step_end_dx_fil_seq, Data_step_end_dy_fil_seq,
                 Data_q_abduction_R, Data_q_rotation_R, Data_q_thigh_R,
                 Data_q_thigh_knee_R, Data_q_knee_shin_R, Data_q_thigh_shin_R,
                 Data_q_shin_tarsus_R, Data_q_toe_R, Data_q_abduction_L,
                 Data_q_rotation_L, Data_q_thigh_L, Data_q_thigh_knee_L,
                 Data_q_knee_shin_L, Data_q_thigh_shin_L, Data_q_shin_tarsus_L,
                 Data_q_toe_L, Data_dq_abduction_R, Data_dq_rotation_R,
                 Data_dq_thigh_R, Data_dq_thigh_knee_R, Data_dq_knee_shin_R,
                 Data_dq_thigh_shin_R, Data_dq_shin_tarsus_R, Data_dq_toe_R,
                 Data_dq_abduction_L, Data_dq_rotation_L, Data_dq_thigh_L,
                 Data_dq_thigh_knee_L, Data_dq_knee_shin_L, Data_dq_thigh_shin_L,
                 Data_dq_shin_tarsus_L, Data_dq_toe_L, Data_qall, Data_dqall,
                 Data_qq, Data_qaR, Data_qjR, Data_qsR, Data_qaL, Data_qjL,
                 Data_qsL, Data_dqq, Data_dqaR, Data_dqjR, Data_dqsR, Data_dqaL,
                 Data_dqjL, Data_dqsL, Data_u_P, Data_u_D, Data_computer_time);

  /*  Reset the desired motor torques to zero in case they aren't defined */
  for (i = 0; i < 10; i++) {
    userInputs_torque[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    userInputs_telemetry[i] = 0;
  }

  for (i = 0; i < 10; i++) {
    b_u[i] = 0.0;
  }

  /*  Update the Cassie outputs data structure */
  st.site = &gf_emlrtRSI;
  RadioChannelToButton(moduleInstance, cassieOutputs_pelvis_radio_channel,
                       &RadioButton_LVA, &RadioButton_LHA, &RadioButton_RVA,
                       &RadioButton_RHA, &swing_grf, &p, &RadioButton_LSA,
                       &expl_temp, &b_expl_temp, &RadioButton_SBA, &s_slow,
                       &ds_slow, &s_fast, &c_expl_temp, &d_expl_temp, &s_unsat);
  b_qaR[0] = obj->Kp_abduction;
  b_qaR[1] = obj->Kp_rotation;
  b_qaR[2] = obj->Kp_thigh;
  b_qaR[3] = obj->Kp_knee;
  b_qaR[4] = obj->Kp_toe;
  repmat(b_qaR, x);
  for (i = 0; i < 10; i++) {
    obj->Kp[i] = x[i];
  }

  b_qaR[0] = obj->Kd_abduction;
  b_qaR[1] = obj->Kd_rotation;
  b_qaR[2] = obj->Kd_thigh;
  b_qaR[3] = obj->Kd_knee;
  b_qaR[4] = obj->Kd_toe;
  repmat(b_qaR, x);
  for (i = 0; i < 10; i++) {
    obj->Kd[i] = x[i];
  }

  if ((covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0,
                    !isSim) && covrtLogCond
       (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, b_t > 10.0)) ||
      (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2,
                    isSim) && covrtLogCond
       (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3, b_t > 0.1))) {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, true);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, true);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 2);
    obj->begin = 1.0;
  } else {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
  }

  /*             %% Read Commands */
  /*  In experiment some settings are different from simulation */
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, !isSim))
  {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);
    obj->pitch_torso_control = 1.0;
    obj->knee_com = 1.0;
    obj->abduction_com = 1.0;
    obj->foot_placement = 1.0;
    obj->lateral_offset = obj->lateral_offset_exp;
    obj->sagittal_offset = obj->sagittal_offset_exp - 0.02 * swing_grf;
    obj->turning_offset = obj->turning_offset_exp;
    obj->stand_offset = obj->stand_offset_exp + p * 0.1;
  }

  /*  Receive command signal from RC radio */
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2,
                 RadioButton_LVA < 0.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);

    /*  To prevent walking backward too fast */
    p = 0.5;
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 5);
    p = 1.0;
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 6);
  obj->tg_velocity_x = p * RadioButton_LVA;
  st.site = &hf_emlrtRSI;
  obj->tg_velocity_x_fil = first_order_filter(moduleInstance,
    obj->tg_velocity_x_fil, obj->tg_velocity_x, 0.0003);
  obj->lateral_move = 0.015 * RadioButton_LHA;
  st.site = &if_emlrtRSI;
  obj->lateral_move_fil = first_order_filter(moduleInstance,
    obj->lateral_move_fil, obj->lateral_move, 0.0003);
  obj->rotation_move = -0.2 * RadioButton_RHA;
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3,
                 muDoubleScalarAbs(RadioButton_RHA) < 0.1)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 7);
    obj->to_turn = -1.0;
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);
    obj->to_turn = 1.0;
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 9);
  b_com_pos[0] = RadioButton_RVA;
  b_com_pos[1] = -0.5;
  b_com_pos[2] = 0.5;
  st.site = &jf_emlrtRSI;
  obj->pitch_des_fil = first_order_filter(moduleInstance, obj->pitch_des_fil,
    median(b_com_pos), 0.0005);
  st.site = &kf_emlrtRSI;
  obj->LL_des_fil = first_order_filter(moduleInstance, obj->LL_des_fil, 0.68 +
    RadioButton_LSA * 0.2, obj->fil_para_4);
  st.site = &lf_emlrtRSI;
  obj->roll_des_fil = first_order_filter(moduleInstance, obj->roll_des_fil,
    RadioButton_RHA * 0.1, 0.0003);

  /*  cutoff frequency 0.1 Hz; */
  /*             %% state machine ( walk or stand) */
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4,
                 RadioButton_SBA == 1.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 10);
    obj->task_next = 1.0;
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 11);
    obj->task_next = 2.0;
  }

  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5,
                 obj->task_next == 2.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 12);
    obj->t1 = 0.0;
    obj->s1 = 0.0;
  }

  if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4,
                   obj->task_next == 1.0) && covrtLogCond
      (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5, obj->s1 > 1.0)) {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, true);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6, true);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 13);
    obj->task = obj->task_next;
    obj->P_feedback_toe_fil = 0.0;
  } else {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6, false);
  }

  if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6,
                   obj->task_next == 2.0) && covrtLogCond
      (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7, obj->step_end !=
       0.0)) {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2, true);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7, true);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 14);
    obj->task = 2.0;
    obj->step_end = 0.0;
    obj->t2 = 0.0;
    for (i = 0; i < 10; i++) {
      obj->u_last[i] = obj->u_prev[i];
    }
  } else {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7, false);
  }

  /*             %% begin calculation */
  if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8, b_t >
                   0.1) && covrtLogCond
      (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9, obj->begin == 1.0))
  {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3, true);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8, true);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 15);

    /*                 %% get values */
    st.site = &mf_emlrtRSI;
    IMU_to_Euler_v2(moduleInstance, &st,
                    cassieOutputs_pelvis_vectorNav_orientation,
                    cassieOutputs_pelvis_vectorNav_angularVelocity,
                    &RadioButton_LVA, &RadioButton_LHA, &RadioButton_RVA,
                    &RadioButton_RHA, &RadioButton_LSA, &RadioButton_SBA);
    qa[0] = cassieOutputs_leftLeg_hipRollDrive_position;
    qa[1] = cassieOutputs_leftLeg_hipYawDrive_position;
    qa[2] = cassieOutputs_leftLeg_hipPitchDrive_position;
    qa[3] = cassieOutputs_leftLeg_kneeDrive_position;
    qa[4] = cassieOutputs_leftLeg_footDrive_position;
    qa[5] = cassieOutputs_rightLeg_hipRollDrive_position;
    qa[6] = cassieOutputs_rightLeg_hipYawDrive_position;
    qa[7] = cassieOutputs_rightLeg_hipPitchDrive_position;
    qa[8] = cassieOutputs_rightLeg_kneeDrive_position;
    qa[9] = cassieOutputs_rightLeg_footDrive_position;
    dqa[0] = cassieOutputs_leftLeg_hipRollDrive_velocity;
    dqa[1] = cassieOutputs_leftLeg_hipYawDrive_velocity;
    dqa[2] = cassieOutputs_leftLeg_hipPitchDrive_velocity;
    dqa[3] = cassieOutputs_leftLeg_kneeDrive_velocity;
    dqa[4] = cassieOutputs_leftLeg_footDrive_velocity;
    dqa[5] = cassieOutputs_rightLeg_hipRollDrive_velocity;
    dqa[6] = cassieOutputs_rightLeg_hipYawDrive_velocity;
    dqa[7] = cassieOutputs_rightLeg_hipPitchDrive_velocity;
    dqa[8] = cassieOutputs_rightLeg_kneeDrive_velocity;
    dqa[9] = cassieOutputs_rightLeg_footDrive_velocity;
    qj[0] = cassieOutputs_leftLeg_shinJoint_position;
    qj[1] = cassieOutputs_leftLeg_tarsusJoint_position;
    qj[2] = cassieOutputs_leftLeg_footJoint_position;
    qj[3] = cassieOutputs_rightLeg_shinJoint_position;
    qj[4] = cassieOutputs_rightLeg_tarsusJoint_position;
    qj[5] = cassieOutputs_rightLeg_footJoint_position;
    dqj[0] = cassieOutputs_leftLeg_shinJoint_velocity;
    dqj[1] = cassieOutputs_leftLeg_tarsusJoint_velocity;
    dqj[2] = cassieOutputs_leftLeg_footJoint_velocity;
    dqj[3] = cassieOutputs_rightLeg_shinJoint_velocity;
    dqj[4] = cassieOutputs_rightLeg_tarsusJoint_velocity;
    dqj[5] = cassieOutputs_rightLeg_footJoint_velocity;
    for (i = 0; i < 5; i++) {
      b_qaL[i] = qa[i];
      b_qaR[i] = qa[i + 5];
    }

    st.site = &nf_emlrtRSI;
    getSpringDeflectionAngle(moduleInstance,
      cassieOutputs_leftLeg_kneeDrive_position,
      cassieOutputs_leftLeg_shinJoint_position,
      cassieOutputs_leftLeg_tarsusJoint_position, b_qsL);
    st.site = &of_emlrtRSI;
    getSpringDeflectionAngle(moduleInstance,
      cassieOutputs_rightLeg_kneeDrive_position,
      cassieOutputs_rightLeg_shinJoint_position,
      cassieOutputs_rightLeg_tarsusJoint_position, b_qsR);

    /*  Get current velocities */
    for (i = 0; i < 5; i++) {
      b_dqaL[i] = dqa[i];
      b_dqaR[i] = dqa[i + 5];
    }

    st.site = &pf_emlrtRSI;
    getSpringDeflectionRate(moduleInstance,
      cassieOutputs_leftLeg_kneeDrive_velocity,
      cassieOutputs_leftLeg_shinJoint_velocity,
      cassieOutputs_leftLeg_tarsusJoint_velocity, b_dqsL);
    st.site = &qf_emlrtRSI;
    getSpringDeflectionRate(moduleInstance,
      cassieOutputs_rightLeg_kneeDrive_velocity,
      cassieOutputs_rightLeg_shinJoint_velocity,
      cassieOutputs_rightLeg_tarsusJoint_velocity, b_dqsR);

    /*  assign the value */
    b_qall[0] = 0.0;
    b_qall[1] = 0.0;
    b_qall[2] = 0.0;
    b_qall[3] = RadioButton_LVA;
    b_qall[4] = RadioButton_LHA;
    b_qall[5] = RadioButton_RVA;
    b_qall[6] = cassieOutputs_leftLeg_hipRollDrive_position;
    b_qall[7] = cassieOutputs_leftLeg_hipYawDrive_position;
    b_qall[8] = cassieOutputs_leftLeg_hipPitchDrive_position;
    b_qall[9] = cassieOutputs_leftLeg_kneeDrive_position;
    b_qall[10] = cassieOutputs_leftLeg_shinJoint_position;
    b_qall[11] = cassieOutputs_leftLeg_tarsusJoint_position;
    b_qall[12] = cassieOutputs_leftLeg_footDrive_position;
    b_qall[13] = cassieOutputs_rightLeg_hipRollDrive_position;
    b_qall[14] = cassieOutputs_rightLeg_hipYawDrive_position;
    b_qall[15] = cassieOutputs_rightLeg_hipPitchDrive_position;
    b_qall[16] = cassieOutputs_rightLeg_kneeDrive_position;
    b_qall[17] = cassieOutputs_rightLeg_shinJoint_position;
    b_qall[18] = cassieOutputs_rightLeg_tarsusJoint_position;
    b_qall[19] = cassieOutputs_rightLeg_footDrive_position;
    b_dqall[0] = 0.0;
    b_dqall[1] = 0.0;
    b_dqall[2] = 0.0;
    b_dqall[3] = RadioButton_RHA;
    b_dqall[4] = RadioButton_LSA;
    b_dqall[5] = RadioButton_SBA;
    b_dqall[6] = cassieOutputs_leftLeg_hipRollDrive_velocity;
    b_dqall[7] = cassieOutputs_leftLeg_hipYawDrive_velocity;
    b_dqall[8] = cassieOutputs_leftLeg_hipPitchDrive_velocity;
    b_dqall[9] = cassieOutputs_leftLeg_kneeDrive_velocity;
    b_dqall[10] = cassieOutputs_leftLeg_shinJoint_velocity;
    b_dqall[11] = cassieOutputs_leftLeg_tarsusJoint_velocity;
    b_dqall[12] = cassieOutputs_leftLeg_footDrive_velocity;
    b_dqall[13] = cassieOutputs_rightLeg_hipRollDrive_velocity;
    b_dqall[14] = cassieOutputs_rightLeg_hipYawDrive_velocity;
    b_dqall[15] = cassieOutputs_rightLeg_hipPitchDrive_velocity;
    b_dqall[16] = cassieOutputs_rightLeg_kneeDrive_velocity;
    b_dqall[17] = cassieOutputs_rightLeg_shinJoint_velocity;
    b_dqall[18] = cassieOutputs_rightLeg_tarsusJoint_velocity;
    b_dqall[19] = cassieOutputs_rightLeg_footDrive_velocity;

    /*                 %% process Data */
    /*  get current h0_joint and h0 */
    for (i = 0; i < 5; i++) {
      obj->h0_joint[i] = b_qaL[i];
    }

    for (i = 0; i < 5; i++) {
      obj->h0_joint[i + 5] = b_qaR[i];
    }

    for (i = 0; i < 5; i++) {
      obj->dh0_joint[i] = b_dqaL[i];
    }

    for (i = 0; i < 5; i++) {
      obj->dh0_joint[i + 5] = b_dqaR[i];
    }

    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9,
                   obj->joint_filter_choice == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 16);

      /*  Use AR joint filter or custom filter. */
      for (i = 0; i < 6; i++) {
        obj->dh0_joint[iv2[i]] = b_encoder_fil[iv2[i]];
      }
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 17);
    st.site = &rf_emlrtRSI;
    FG_Controller_get_FK(moduleInstance, &st, obj->h0_joint, obj->dh0_joint, x,
                         qa);
    for (i = 0; i < 10; i++) {
      obj->h0[i] = x[i];
    }

    for (i = 0; i < 10; i++) {
      obj->dh0[i] = qa[i];
    }

    /*  get GRF and s */
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10,
                   cassieOutputs_isCalibrated)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 18);
      for (i = 0; i < 20; i++) {
        c_qall[i] = b_qall[i];
      }

      st.site = &sf_emlrtRSI;
      FG_Controller_get_GRF(moduleInstance, &st, c_qall, b_qsR, b_qsL, GRF_L,
                            GRF_R);
    } else {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 19);
      for (i = 0; i < 2; i++) {
        GRF_L[i] = 0.0;
        GRF_R[i] = 0.0;
      }
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 20);
    GRF_v[0] = GRF_L[1];
    GRF_v[1] = GRF_R[1];
    st.site = &tf_emlrtRSI;
    FG_Controller_get_s_LR(moduleInstance, obj, GRF_v, &c_expl_temp,
      &d_expl_temp);

    /*  s is normalized between 0 and 1, 0 means the leg is in air and 1 means leg is on ground. */
    b_s_LR[0] = c_expl_temp;
    b_s_LR[1] = d_expl_temp;
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11,
                   obj->stanceLeg == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 21);
      swing_grf = GRF_L[1];
    } else {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 22);
      swing_grf = GRF_R[1];
    }

    /*  if not walking in previous moment, reset the current hd */
    /*  to smooth the torque */
    if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10,
                     obj->task == 1.0) && covrtLogCond
        (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11, obj->task_prev
         != 1.0)) {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4, true);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 12, true);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 23);
      obj->walking_ini = 0.0;
      for (i = 0; i < 10; i++) {
        x[i] = obj->u_prev[i];
      }

      for (i = 0; i < 10; i++) {
        qa[i] = obj->Kp[i];
      }

      for (i = 0; i < 10; i++) {
        obj->hd_joint[i] = obj->h0_joint[i] + x[i] / qa[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dhd_joint[i] = obj->dh0_joint[i];
      }

      st.site = &uf_emlrtRSI;
      FG_Controller_get_FK(moduleInstance, &st, obj->hd_joint, obj->dhd_joint, x,
                           qa);
      for (i = 0; i < 10; i++) {
        obj->hd[i] = x[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dhd[i] = qa[i];
      }
    } else {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4, false);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 12, false);
    }

    /*  If Cassie is standing or turning, swing leg is NOT commanded to maintain the direction of the robot. */
    if ((covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 12,
                      obj->to_turn != 1.0) && covrtLogCond
         (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 13,
          obj->to_turn_prev == 1.0)) || covrtLogCond
        (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 14, obj->task ==
         2.0)) {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5, true);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 13, true);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 24);
      obj->tg_yaw = RadioButton_LVA;
    } else {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5, false);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 13, false);
    }

    /*  what happens when a step end and a new step begin. */
    if ((covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 15,
                      obj->s_prev >= 0.5) && covrtLogCond
         (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 16, swing_grf >
          obj->stance_thre_ub)) || covrtLogCond
        (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 17,
         obj->walking_ini == 0.0) || covrtLogCond
        (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 18,
         obj->s_unsat_prev > obj->force_step_end_s)) {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6, true);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 14, true);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 25);
      obj->stanceLeg = -obj->stanceLeg;
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 15,
                     obj->walking_ini == 0.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 26);
        obj->stanceLeg = -1.0;

        /*  At the beginning of a step. stanceLeg is always left leg */
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 27);
      obj->tp_last = b_t - obj->t0;
      obj->t0 = b_t;
      obj->t_prev = obj->t0;
      obj->s_prev = 0.0;
      obj->s_unsat_prev = 0.0;
      obj->walking_ini = 1.0;
      for (i = 0; i < 10; i++) {
        obj->u_last[i] = obj->u_prev[i];
      }

      /*  u_prev is the torque command in previous iteration, u_last is the torque command at the end of last step */
      /*  save the velocity data at the end of a step. */
      obj->v_final[0] = obj->dqx_b_fil;
      obj->v_final[1] = obj->dqy_b_fil;
      obj->v_final_avgy = obj->lateral_velocity_weight * obj->dqy_b_fil + (1.0 -
        obj->lateral_velocity_weight) * obj->dqy_b_start;
      obj->dqy_b_start = obj->dqy_b_fil;
      for (i = 0; i < 10; i++) {
        obj->hd_last[i] = obj->hd[i];
      }

      /*  save the desired output at the end of a step. It is used to reset the first 2 bezier coefficient in next step to smooth the torque. */
      for (i = 0; i < 10; i++) {
        obj->dhd_last[i] = obj->dhd[i];
      }

      /*  if command to stand, decide if should stand ( stand if the last step is left stance and the command is not made during this step or the previous step)  */
      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 19,
                       obj->task_next == 2.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 20,
           obj->stanceLeg == 1.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 21,
           obj->to_stand_step_count >= 1.99)) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 16, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 28);
        obj->step_end = 1.0;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 16,
                   false);
      }

      /*  count the steps after command to stand */
      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 22,
                       obj->task_next == 2.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 23, obj->task !=
           2.0)) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 17, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 29);
        obj->to_stand_step_count++;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 17,
                   false);
      }

      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 18,
                     obj->step_end == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 30);
        obj->to_stand_step_count = 0.0;
      }
    } else {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6, false);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 14, false);
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 31);

    /*  Get bezier coefficient for gait from Gaitlibrary */
    st.site = &vf_emlrtRSI;
    FG_Controller_ControlPolicy(moduleInstance, &st, obj,
      GaitLibrary_RightStance_HAlpha, GaitLibrary_LeftStance_HAlpha,
      GaitLibrary_ct, GaitLibrary_Velocity, obj->dqx_b_fil, dv0, &swing_grf);
    obj->gaitparams.ct = swing_grf;
    for (i = 0; i < 60; i++) {
      obj->gaitparams.HAlpha[i] = dv0[i];
    }

    s_unsat = obj->s_unsat_prev + (b_t - obj->t_prev) * obj->gaitparams.ct;
    *Data_s = muDoubleScalarMin(s_unsat, 1.05);

    /*  here s indicates the phase, 0 is the beginning of a step and 1 is the end of a step. */
    /*  Generate some bezier curve that can be used later. */
    st.site = &wf_emlrtRSI;
    s_fast = bezier(moduleInstance, &st, dv1, *Data_s);
    st.site = &xf_emlrtRSI;
    dbezier(moduleInstance, &st, *Data_s);
    st.site = &yf_emlrtRSI;
    s_slow = c_bezier(moduleInstance, &st, dv2, *Data_s);
    st.site = &ag_emlrtRSI;
    ds_slow = b_dbezier(moduleInstance, &st, *Data_s) * obj->gaitparams.ct;
    st.site = &bg_emlrtRSI;
    c_bezier(moduleInstance, &st, dv3, *Data_s);
    st.site = &cg_emlrtRSI;
    c_dbezier(moduleInstance, &st, dv3, *Data_s);
    st.site = &dg_emlrtRSI;
    bezier(moduleInstance, &st, dv4, *Data_s);
    st.site = &eg_emlrtRSI;
    d_dbezier(moduleInstance, &st, dv4, *Data_s);

    /*  order the index of stance leg and swing leg */
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 19,
                   obj->stanceLeg == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 32);

      /*  right stanceleg */
      st_abduction = 5;
      st_thigh = 7;
      st_knee = 8;
      st_toe = 9;
      sw_abduction = 0;
      sw_rotation = 1;
      sw_thigh = 2;
      sw_knee = 3;
      sw_toe = 4;
      i = 1;
      abduction_direction = -1;

      /*  when the hip abduct outside, the sign is negative */
      st_LA = 7;
      sw_LA = 2;
    } else {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 33);
      st_abduction = 0;
      st_thigh = 2;
      st_knee = 3;
      st_toe = 4;
      sw_abduction = 5;
      sw_rotation = 6;
      sw_thigh = 7;
      sw_knee = 8;
      sw_toe = 9;
      i = 0;
      abduction_direction = 1;
      st_LA = 2;
      sw_LA = 7;
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 34);

    /*  estimating velocity */
    st.site = &fg_emlrtRSI;
    FG_Controller_get_velocity_v3(moduleInstance, &st, obj, b_qall, b_dqall,
      &swing_grf, &p, &expl_temp);

    /*  v1 toe joint; v2 toe bottom; v3 toe back; v4 toe front */
    /*  if the stance leg is off ground, set the velocity be 0 and let the velocity filter do the work */
    *Data_torso_vx = b_s_LR[i] * swing_grf;
    *Data_torso_vy = b_s_LR[i] * p;
    *Data_torso_vz = b_s_LR[i] * expl_temp;

    /*  rotate the velocity to the torso frame ( YAW only!!!) */
    st.site = &gg_emlrtRSI;
    Rz(moduleInstance, RadioButton_LVA, b_Rz);
    b_com_pos[0] = *Data_torso_vx;
    b_com_pos[1] = *Data_torso_vy;
    b_com_pos[2] = *Data_torso_vz;
    for (i = 0; i < 3; i++) {
      dq_b[i] = 0.0;
      for (i0 = 0; i0 < 3; i0++) {
        dq_b[i] += b_Rz[i0 + 3 * i] * b_com_pos[i0];
      }
    }

    dqall_g[0] = *Data_torso_vx;
    dqall_g[1] = *Data_torso_vy;
    dqall_g[2] = *Data_torso_vz;
    dqall_g[3] = RadioButton_RHA;
    dqall_g[4] = RadioButton_LSA;
    dqall_g[5] = RadioButton_SBA;
    dqall_g[6] = cassieOutputs_leftLeg_hipRollDrive_velocity;
    dqall_g[7] = cassieOutputs_leftLeg_hipYawDrive_velocity;
    dqall_g[8] = cassieOutputs_leftLeg_hipPitchDrive_velocity;
    dqall_g[9] = cassieOutputs_leftLeg_kneeDrive_velocity;
    dqall_g[10] = cassieOutputs_leftLeg_shinJoint_velocity;
    dqall_g[11] = cassieOutputs_leftLeg_tarsusJoint_velocity;
    dqall_g[12] = cassieOutputs_leftLeg_footDrive_velocity;
    dqall_g[13] = cassieOutputs_rightLeg_hipRollDrive_velocity;
    dqall_g[14] = cassieOutputs_rightLeg_hipYawDrive_velocity;
    dqall_g[15] = cassieOutputs_rightLeg_hipPitchDrive_velocity;
    dqall_g[16] = cassieOutputs_rightLeg_kneeDrive_velocity;
    dqall_g[17] = cassieOutputs_rightLeg_shinJoint_velocity;
    dqall_g[18] = cassieOutputs_rightLeg_tarsusJoint_velocity;
    dqall_g[19] = cassieOutputs_rightLeg_footDrive_velocity;

    /*  These foot velocitiy and position has the assumption that torso xyz is */
    /*  fixed at [0;0;0](but torso velocity is not 0). foot position is the toe joint position. IN THE BODY FRAME! */
    st.site = &hg_emlrtRSI;
    get_feet_velocity(moduleInstance, b_qall, dqall_g, b_l_foot_v, b_r_foot_v);
    st.site = &ig_emlrtRSI;
    get_feet_position(moduleInstance, b_qall, b_com_vel, b_com_pos);
    for (i = 0; i < 3; i++) {
      b_r_foot_p[i] = 0.0;
      b_l_foot_p[i] = 0.0;
      for (i0 = 0; i0 < 3; i0++) {
        b_r_foot_p[i] += b_Rz[i0 + 3 * i] * b_com_pos[i0];
        b_l_foot_p[i] += b_Rz[i0 + 3 * i] * b_com_vel[i0];
      }
    }

    /*  position and velocity of COM has the assumption that */
    /*  torso position is at origion but velocity is not 0. */
    st.site = &jg_emlrtRSI;
    ComPosition(moduleInstance, b_qall, b_com_pos);
    st.site = &kg_emlrtRSI;
    ComVelocity(moduleInstance, b_qall, dqall_g, b_com_vel);
    for (i = 0; i < 3; i++) {
      c_com_pos[i] = 0.0;
      c_Rz[i] = 0.0;
      for (i0 = 0; i0 < 3; i0++) {
        c_com_pos[i] += b_Rz[i0 + 3 * i] * b_com_pos[i0];
        c_Rz[i] += b_Rz[i0 + 3 * i] * b_com_vel[i0];
      }
    }

    for (i = 0; i < 3; i++) {
      b_com_vel[i] = c_Rz[i];
    }

    /*  filter the velocity */
    st.site = &lg_emlrtRSI;
    obj->dqx_fil = first_order_filter(moduleInstance, obj->dqx_fil,
      *Data_torso_vx, obj->fil_para_x);
    st.site = &mg_emlrtRSI;
    obj->dqy_fil = first_order_filter(moduleInstance, obj->dqy_fil,
      *Data_torso_vy, obj->fil_para_y);
    st.site = &ng_emlrtRSI;
    obj->dqz_fil = first_order_filter(moduleInstance, obj->dqz_fil,
      *Data_torso_vz, obj->fil_para_x);
    st.site = &og_emlrtRSI;
    obj->dqx_b_fil = first_order_filter(moduleInstance, obj->dqx_b_fil, dq_b[0],
      obj->fil_para_x);
    st.site = &pg_emlrtRSI;
    obj->dqy_b_fil = first_order_filter(moduleInstance, obj->dqy_b_fil, dq_b[1],
      obj->fil_para_y);
    st.site = &qg_emlrtRSI;
    obj->dqz_b_fil = first_order_filter(moduleInstance, obj->dqz_b_fil, dq_b[2],
      obj->fil_para_x);
    st.site = &rg_emlrtRSI;
    obj->com_vel_x_fil = first_order_filter(moduleInstance, obj->com_vel_x_fil,
      b_com_vel[0], obj->fil_para_2);
    st.site = &sg_emlrtRSI;
    obj->com_vel_y_fil = first_order_filter(moduleInstance, obj->com_vel_y_fil,
      b_com_vel[1], obj->fil_para_2);
    st.site = &tg_emlrtRSI;
    obj->com_vel_z_fil = first_order_filter(moduleInstance, obj->com_vel_z_fil,
      b_com_vel[2], obj->fil_para_2);
    st.site = &ug_emlrtRSI;
    obj->com_pos_x_fil = first_order_filter(moduleInstance, obj->com_pos_x_fil,
      c_com_pos[0], obj->fil_para_3);
    st.site = &vg_emlrtRSI;
    obj->com_pos_y_fil = first_order_filter(moduleInstance, obj->com_pos_y_fil,
      c_com_pos[1], obj->fil_para_3);
    st.site = &wg_emlrtRSI;
    obj->com_pos_z_fil = first_order_filter(moduleInstance, obj->com_pos_z_fil,
      c_com_pos[2], obj->fil_para_3);

    /*                 %% walking */
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 20,
                   obj->task == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 35);

      /*  walking */
      /*  Compute desired outputs ( here the outputs dose not */
      /*  include torso orientation. the outputs will be */
      /*  modified later */
      st.site = &xg_emlrtRSI;
      e_bezier(moduleInstance, &st, obj->gaitparams.HAlpha, *Data_s, x);
      for (i = 0; i < 10; i++) {
        obj->hd[i] = x[i];
      }

      st.site = &yg_emlrtRSI;
      e_dbezier(moduleInstance, &st, obj->gaitparams.HAlpha, *Data_s, x);
      swing_grf = obj->gaitparams.ct;
      for (i = 0; i < 10; i++) {
        obj->dhd[i] = x[i] * swing_grf;
      }

      /*  swing leg foot placement */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 21,
                     obj->foot_placement == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 36);

        /*  foot placement in saggital plane + add pitch angle in outputs  */
        obj->hd[sw_LA] = (obj->hd[sw_LA] + ((obj->Kfs_p * (obj->dqx_b_fil -
          obj->tg_velocity_x_fil) + obj->sagittal_offset) + obj->Kfs_d *
          (obj->dqx_b_fil - obj->v_final[0])) * s_slow) + RadioButton_LHA *
          s_slow;
        obj->dhd[sw_LA] = ((obj->dhd[sw_LA] + ((obj->Kfs_p * (obj->dqx_b_fil -
          obj->tg_velocity_x_fil) + obj->sagittal_offset) + obj->Kfs_d *
          (obj->dqx_b_fil - obj->v_final[0])) * ds_slow) + RadioButton_LHA *
                           ds_slow) + RadioButton_LSA * s_slow;

        /*  foot placement in frontal plane + add roll angle in outputs  */
        swing_grf = obj->lateral_velocity_weight * obj->dqy_b_fil + (1.0 -
          obj->lateral_velocity_weight) * obj->dqy_b_start;
        b_com_pos[0] = 0.0;
        b_com_pos[1] = 1.0;
        b_com_pos[2] = obj->dqx_b_fil;
        swing_grf = ((obj->Kfl_p * swing_grf + obj->Kfl_d * (swing_grf -
          obj->v_final_avgy)) + (real_T)abduction_direction *
                     obj->init_lateral_velocity * median(b_com_pos)) *
          muDoubleScalarMin(1.5 * *Data_s, 1.0);
        if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 22,
                       muDoubleScalarSign(swing_grf) == (real_T)
                       abduction_direction)) {
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             37);
          p = 1.0;
        } else {
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             38);
          p = obj->abduction_inward_gain;
        }

        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 39);
        obj->hd[sw_abduction] = ((obj->hd[sw_abduction] + p * swing_grf * s_slow)
          + (obj->lateral_offset + obj->lateral_move) * s_slow) -
          RadioButton_RVA * s_slow;
        obj->dhd[sw_abduction] = (((obj->dhd[sw_abduction] + p * swing_grf *
          ds_slow) + (obj->lateral_offset + obj->lateral_move) * ds_slow) -
          RadioButton_RVA * ds_slow) - RadioButton_SBA * s_slow;

        /*  use hip yaw motor on swing leg to maintain the direction ( or not).  */
        if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 24,
                         obj->to_turn != 1.0) && covrtLogCond
            (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 25,
             obj->keep_direction != 0.0)) {
          covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9,
                       true);
          covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 23,
                     true);
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             40);
          st.site = &ah_emlrtRSI;
          swing_grf = wrap2Pi(moduleInstance, obj->tg_yaw - RadioButton_LVA);
          b_com_pos[0] = -0.2;
          b_com_pos[1] = 0.2;
          b_com_pos[2] = swing_grf;
          swing_grf = median(b_com_pos);
          obj->hd[sw_rotation] += (swing_grf + obj->turning_offset) * s_slow;
          obj->dhd[sw_rotation] += (swing_grf + obj->turning_offset) * ds_slow;
        } else {
          covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9,
                       false);
          covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 23,
                     false);
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             41);
          obj->hd[sw_rotation] += (obj->rotation_move + obj->turning_offset) *
            s_slow;
          obj->dhd[sw_rotation] += (obj->rotation_move + obj->turning_offset) *
            ds_slow;
        }
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 42);

      /*  prevent sw abduction from hitting AR's safety bound */
      b_com_pos[0] = dv5[sw_abduction] + 0.1;
      b_com_pos[1] = obj->hd[sw_abduction];
      b_com_pos[2] = dv5[10 + sw_abduction] - 0.1;
      obj->hd[sw_abduction] = median(b_com_pos);

      /*  flat the toe ( tilt a little bit) */
      obj->hd[sw_toe] = (-obj->h0_joint[sw_thigh] - 0.22689280275926285) -
        0.87266462599716477;

      /*  13 is the angle between tarsus and thihg, 50 is the angle of transforming frame on foot. */
      obj->hd[sw_toe] += obj->toe_tilt_angle * s_fast;
      obj->dhd[sw_toe] = 0.0;
      obj->hd[st_toe] = obj->h0[st_toe];
      obj->dhd[st_toe] = obj->dh0[st_toe];

      /*  Preparation for standing */
      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 26,
                       obj->stanceLeg == -1.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 27,
           obj->to_stand_step_count >= 1.99)) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 24, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 43);
        obj->hd[sw_abduction] -= (real_T)abduction_direction *
          obj->final_sw_abduction * s_slow;
        obj->dhd[sw_abduction] -= (real_T)abduction_direction *
          obj->final_sw_abduction * ds_slow;
        obj->hd[st_abduction] += (real_T)abduction_direction *
          obj->final_st_abduction * s_slow;
        obj->dhd[st_abduction] += (real_T)abduction_direction *
          obj->final_st_abduction * ds_slow;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 24,
                   false);
      }

      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 28,
                       obj->stanceLeg == 1.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 29,
           obj->to_stand_step_count >= 0.99)) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 25, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 44);
        obj->hd[sw_abduction] -= (real_T)abduction_direction *
          obj->pre_final_sw_abduction * s_slow;
        obj->dhd[sw_abduction] -= (real_T)abduction_direction *
          obj->pre_final_sw_abduction * ds_slow;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 25,
                   false);
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 45);

      /*  compute torque  */
      for (i = 0; i < 10; i++) {
        obj->y[i] = obj->h0[i] - obj->hd[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dy[i] = obj->dh0[i] - obj->dhd[i];
      }

      st.site = &bh_emlrtRSI;
      FG_Controller_get_IK(moduleInstance, &st, obj->hd, obj->dhd, x, qa);
      for (i = 0; i < 10; i++) {
        obj->hd_joint[i] = x[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dhd_joint[i] = qa[i];
      }

      st.site = &ch_emlrtRSI;
      FG_Controller_get_IK(moduleInstance, &st, obj->h0, obj->dh0, x, qa);
      for (i = 0; i < 10; i++) {
        obj->h0_joint[i] = x[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dh0_joint[i] = qa[i];
      }

      /*  make the stance leg passive */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 26,
                     obj->stance_passive == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 46);
        obj->hd_joint[st_LA] = obj->h0_joint[st_LA];
        obj->dhd_joint[st_LA] = 0.0;
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 47);

      /*  Save it for resetting bezier ( for the passive stance Leg) */
      st.site = &dh_emlrtRSI;
      FG_Controller_get_FK(moduleInstance, &st, obj->hd_joint, obj->dhd_joint, x,
                           qa);
      for (i = 0; i < 10; i++) {
        obj->hd[i] = x[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dhd[i] = qa[i];
      }

      for (i = 0; i < 10; i++) {
        obj->y_joint[i] = obj->h0_joint[i] - obj->hd_joint[i];
      }

      for (i = 0; i < 10; i++) {
        obj->dy_joint[i] = obj->dh0_joint[i] - obj->dhd_joint[i];
      }

      for (i = 0; i < 10; i++) {
        b_u[i] = -obj->Kp[i] * obj->y_joint[i] - obj->Kd[i] * obj->dy_joint[i];
      }

      /* not final torque, some compensation for gravity will be added, the torque on stance hip roll and stance hip pitch will be replaced. */
      /*  Torso Control */
      swing_grf = -obj->Kp_pitch * RadioButton_LHA - obj->Kd_pitch *
        RadioButton_LSA;
      p = obj->Kp_roll * RadioButton_RVA + obj->Kd_roll * RadioButton_SBA;
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 27,
                     obj->pitch_torso_control == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 48);
        b_u[2] = (1.0 - c_expl_temp) * b_u[2] + c_expl_temp * swing_grf;
        b_u[7] = (1.0 - d_expl_temp) * b_u[7] + d_expl_temp * swing_grf;
      }

      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 28,
                     obj->roll_torso_control == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 49);
        b_u[0] = (1.0 - c_expl_temp) * b_u[0] + c_expl_temp * p;
        b_u[5] = (1.0 - d_expl_temp) * b_u[5] + d_expl_temp * p;
      }

      /*  abduction compensation */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 29,
                     obj->abduction_com == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 50);
        b_u[st_abduction] += (real_T)abduction_direction * obj->u_abduction_cp *
          s_fast;
        b_u[sw_abduction] -= (real_T)abduction_direction * obj->u_abduction_cp *
          (1.0 - s_fast);
      }

      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 30,
                     obj->abduction_swing_com == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 51);
        b_u[st_abduction] += (real_T)abduction_direction *
          obj->u_abduction_swing_cp * (1.0 - s_fast);
        b_u[sw_abduction] -= (real_T)abduction_direction *
          obj->u_abduction_swing_cp * s_fast;
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 52);
      b_u[sw_abduction] -= (real_T)abduction_direction * obj->uHip_gravity_2 *
        s_fast;

      /*  knee compensation */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 31,
                     obj->knee_com == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 53);
        swing_grf = obj->h0[st_thigh];
        b_u[st_knee] += obj->u_knee_cp * s_fast * muDoubleScalarCos(swing_grf);
        b_u[sw_knee] += obj->u_knee_cp * (1.0 - s_fast);
      }

      /*  thigh_compensation */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 32,
                     obj->thigh_compensation == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 54);
        b_u[st_thigh] += obj->u_thigh_cp * s_fast;
        b_u[sw_thigh] += obj->u_thigh_cp * (1.0 - s_fast);
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 55);

      /*  Construct Data */
      for (i = 0; i < 10; i++) {
        Data_y_joint[i] = obj->y_joint[i];
      }

      for (i = 0; i < 10; i++) {
        Data_dy_joint[i] = obj->dy_joint[i];
      }
    }

    /*                 %% stand up */
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 33,
                   obj->task == 2.0)) {
      /*  If next task is to walk, shift the center of mass to */
      /*  left */
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 34,
                     obj->task_next == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 56);
        obj->t1 += b_t - obj->t_prev;
        swing_grf = obj->t1;
        p = obj->shift_time;
        obj->s1 = swing_grf / p;
        swing_grf = obj->shift_distance * obj->s1;
      } else {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 57);
        swing_grf = 0.0;
      }

      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 58);

      /*  Based on the commanded roll angle, and lateral_shift, */
      /*  decide the Leg Length Difference in right and left */
      /*  leg. */
      p = c_expl_temp;
      if (d_expl_temp > c_expl_temp) {
        p = d_expl_temp;
      }

      *Data_left_tune = -obj->s2 * p * (obj->Kp_lateral_stand *
        ((RadioButton_RVA - obj->roll_des_fil) - (-swing_grf)) +
        obj->Kd_lateral_stand * RadioButton_SBA);
      p = c_expl_temp;
      if (d_expl_temp > c_expl_temp) {
        p = d_expl_temp;
      }

      *Data_right_tune = obj->s2 * p * (obj->Kp_lateral_stand *
        ((RadioButton_RVA - obj->roll_des_fil) - (-swing_grf)) +
        obj->Kd_lateral_stand * RadioButton_SBA);

      /*  Inverse kinematics */
      swing_grf = obj->LL_des_fil + *Data_left_tune;
      st.site = &eh_emlrtRSI;
      Inverse_Kinematics_p(moduleInstance, &st, obj->pitch_des_fil,
                           muDoubleScalarMin(swing_grf, 0.9), &p, Data_qknee_d_L);
      swing_grf = obj->LL_des_fil + *Data_right_tune;
      st.site = &fh_emlrtRSI;
      Inverse_Kinematics_p(moduleInstance, &st, obj->pitch_des_fil,
                           muDoubleScalarMin(swing_grf, 0.9), &expl_temp,
                           Data_qknee_d_R);
      swing_grf = obj->LL_des_fil + *Data_left_tune;
      st.site = &gh_emlrtRSI;
      Inverse_Kinematics_v(moduleInstance, &st, muDoubleScalarMin(swing_grf, 0.9),
                           0.0, 0.0, &s_slow, &ds_slow);
      swing_grf = obj->LL_des_fil + *Data_right_tune;
      st.site = &hh_emlrtRSI;
      Inverse_Kinematics_v(moduleInstance, &st, muDoubleScalarMin(swing_grf, 0.9),
                           0.0, 0.0, &s_fast, &b_expl_temp);
      y_thigh[0] = obj->h0_joint[2] - p;
      y_thigh[1] = obj->h0_joint[7] - expl_temp;
      dy_thigh[0] = obj->dh0_joint[2] - s_slow;
      dy_thigh[1] = obj->dh0_joint[7] - s_fast;
      b_y_knee[0] = obj->h0_joint[3] - *Data_qknee_d_L;
      b_y_knee[1] = obj->h0_joint[8] - *Data_qknee_d_R;
      b_dy_knee[0] = obj->dh0_joint[3] - ds_slow;
      b_dy_knee[1] = obj->dh0_joint[8] - b_expl_temp;

      /*  calculate the torque ( except toe). */
      swing_grf = obj->Kp_abduction_stand;
      b[0] = obj->h0_joint[0] - obj->standing_abduction_offset;
      b[1] = obj->h0_joint[5] - (-obj->standing_abduction_offset);
      p = obj->Kd_abduction_stand;
      b_b[0] = obj->dh0_joint[0];
      b_b[1] = obj->dh0_joint[5];
      for (i = 0; i < 2; i++) {
        b_u[5 * i] = -(swing_grf * b[i] + p * b_b[i]);
      }

      swing_grf = obj->Kp_rotation_stand;
      b[0] = obj->h0_joint[1];
      b[1] = obj->h0_joint[6];
      p = obj->Kd_rotation_stand;
      b_b[0] = obj->dh0_joint[1];
      b_b[1] = obj->dh0_joint[6];
      for (i = 0; i < 2; i++) {
        b_u[1 + 5 * i] = -(swing_grf * b[i] + p * b_b[i]);
      }

      for (i = 0; i < 2; i++) {
        b_u[2 + 5 * i] = -(obj->Kp_thigh_stand * y_thigh[i] +
                           obj->Kd_thigh_stand * dy_thigh[i]);
      }

      swing_grf = obj->Kp_knee_stand;
      p = obj->Kd_knee_stand;
      for (i = 0; i < 2; i++) {
        b_u[3 + 5 * i] = -(swing_grf * b_y_knee[i] + p * b_dy_knee[i]);
      }

      /*  calculate the toe torque */
      swing_grf = (c_com_pos[0] - obj->stand_offset) - (b_r_foot_p[0] +
        b_l_foot_p[0]) / 2.0;
      st.site = &ih_emlrtRSI;
      obj->P_feedback_toe_fil = first_order_filter(moduleInstance,
        obj->P_feedback_toe_fil, swing_grf, obj->fil_para_3);
      p = -(obj->Kp_toe_stand * obj->P_feedback_toe_fil + obj->Kd_toe_stand *
            obj->com_vel_x_fil);
      swing_grf = muDoubleScalarMin(c_expl_temp, d_expl_temp);
      for (i = 0; i < 2; i++) {
        b_u[4 + 5 * i] = swing_grf * p;
        GRF_v[i] = b_u[4 + 5 * i];
      }

      st.site = &jh_emlrtRSI;
      clamp(moduleInstance, GRF_v, -15.0, 15.0, y_thigh);
      for (i = 0; i < 2; i++) {
        b_u[4 + 5 * i] = y_thigh[i];
      }

      /*  from walking to stand ( to make torque smooth in transition) */
      obj->t2 += b_t - obj->t_prev;
      swing_grf = obj->t2;
      p = obj->standing_switch_time;
      obj->s2 = muDoubleScalarMin(swing_grf / p, 1.0);
      st.site = &kh_emlrtRSI;
      swing_grf = bezier(moduleInstance, &st, dv1, obj->s2);
      for (i = 0; i < 10; i++) {
        x[i] = obj->u_last[i];
      }

      for (i = 0; i < 10; i++) {
        b_u[i] = swing_grf * b_u[i] + (1.0 - swing_grf) * x[i];
      }

      *Data_LL_des_fil = obj->LL_des_fil;
      for (i = 0; i < 2; i++) {
        Data_y_knee[i] = b_y_knee[i];
        Data_dy_knee[i] = b_dy_knee[i];
      }
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 59);

    /*                 %% log object properties */
    obj->t_prev = b_t;
    obj->s_prev = *Data_s;
    obj->s_unsat_prev = s_unsat;
    obj->task_prev = obj->task;
    for (i = 0; i < 10; i++) {
      obj->u_prev[i] = b_u[i];
    }

    obj->to_turn_prev = obj->to_turn;

    /*                 %% Return                 */
    swing_grf = muDoubleScalarRound(b_qsL[0] * 1000.0);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[0] = i1;
    swing_grf = muDoubleScalarRound(b_qsL[1] * 1000.0);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[1] = i1;
    swing_grf = muDoubleScalarRound(b_qsR[0] * 1000.0);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[2] = i1;
    swing_grf = muDoubleScalarRound(b_qsR[1] * 1000.0);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[3] = i1;
    swing_grf = muDoubleScalarRound(RadioButton_RHA * 180.0 / 3.1415926535897931);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[4] = i1;
    swing_grf = muDoubleScalarRound(b_u[4]);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[5] = i1;
    swing_grf = muDoubleScalarRound(b_u[9]);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[6] = i1;
    swing_grf = muDoubleScalarRound(GRF_L[1]);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[7] = i1;
    swing_grf = muDoubleScalarRound(GRF_R[1]);
    if (swing_grf < 32768.0) {
      if (swing_grf >= -32768.0) {
        i1 = (int16_T)swing_grf;
      } else {
        i1 = MIN_int16_T;
      }
    } else if (swing_grf >= 32768.0) {
      i1 = MAX_int16_T;
    } else {
      i1 = 0;
    }

    userInputs_telemetry[8] = i1;
    for (i = 0; i < 10; i++) {
      x[i] = -obj->safe_TorqueLimits[i];
    }

    for (i = 0; i < 10; i++) {
      qa[i] = b_u[i];
    }

    st.site = &lh_emlrtRSI;
    vector_saturate(moduleInstance, qa, obj->safe_TorqueLimits, x, b_u);
    for (i = 0; i < 10; i++) {
      userInputs_torque[i] = b_u[i];
    }

    /*                 %% log Data */
    *Data_stanceLeg = obj->stanceLeg;
    *Data_task = obj->task;
    Data_GRF[0] = GRF_L[1];
    Data_GRF[1] = GRF_R[1];
    for (i = 0; i < 2; i++) {
      Data_s_LR[i] = b_s_LR[i];
    }

    *Data_tp_last = obj->tp_last;
    for (i = 0; i < 10; i++) {
      Data_h0[i] = obj->h0[i];
    }

    for (i = 0; i < 10; i++) {
      Data_dh0[i] = obj->dh0[i];
    }

    for (i = 0; i < 10; i++) {
      Data_h0_joint[i] = obj->h0_joint[i];
    }

    for (i = 0; i < 10; i++) {
      Data_dh0_joint[i] = obj->dh0_joint[i];
    }

    for (i = 0; i < 10; i++) {
      Data_hd[i] = obj->hd[i];
    }

    for (i = 0; i < 10; i++) {
      Data_dhd[i] = obj->dhd[i];
    }

    for (i = 0; i < 10; i++) {
      Data_hd_joint[i] = obj->hd_joint[i];
    }

    for (i = 0; i < 10; i++) {
      Data_dhd_joint[i] = obj->dhd_joint[i];
    }

    for (i = 0; i < 10; i++) {
      Data_u[i] = b_u[i];
    }

    Data_torso_angle[0] = RadioButton_LVA;
    Data_torso_angle[1] = RadioButton_LHA;
    Data_torso_angle[2] = RadioButton_RVA;
    Data_d_torso_angle[0] = RadioButton_RHA;
    Data_d_torso_angle[1] = RadioButton_LSA;
    Data_d_torso_angle[2] = RadioButton_SBA;
    *Data_torso_vx_b = dq_b[0];
    *Data_torso_vy_b = dq_b[1];
    *Data_torso_vz_b = dq_b[2];
    *Data_torso_vx_fil = obj->dqx_fil;
    *Data_torso_vy_fil = obj->dqy_fil;
    *Data_torso_vz_fil = obj->dqz_fil;
    *Data_torso_vx_b_fil = obj->dqx_b_fil;
    *Data_torso_vy_b_fil = obj->dqy_b_fil;
    *Data_torso_vz_b_fil = obj->dqz_b_fil;
    *Data_com_vel_x_fil = obj->com_vel_x_fil;
    *Data_com_vel_y_fil = obj->com_vel_y_fil;
    *Data_com_vel_z_fil = obj->com_vel_z_fil;
    Data_com_pos_fil[0] = obj->com_vel_x_fil;
    Data_com_pos_fil[1] = obj->com_vel_y_fil;
    Data_com_pos_fil[2] = obj->com_vel_z_fil;
    *Data_tg_velocity_x = obj->tg_velocity_x;
    for (i = 0; i < 3; i++) {
      c_Rz[i] = 0.0;
      for (i0 = 0; i0 < 3; i0++) {
        c_Rz[i] += b_Rz[i0 + 3 * i] * b_r_foot_v[i0];
      }

      Data_r_foot_v[i] = c_Rz[i];
      b_com_pos[i] = 0.0;
      for (i0 = 0; i0 < 3; i0++) {
        b_com_pos[i] += b_Rz[i0 + 3 * i] * b_l_foot_v[i0];
      }

      Data_l_foot_v[i] = b_com_pos[i];
      Data_r_foot_p[i] = b_r_foot_p[i];
      Data_l_foot_p[i] = b_l_foot_p[i];
      Data_com_pos[i] = c_com_pos[i];
      Data_com_vel[i] = b_com_vel[i];
    }

    for (i = 0; i < 14; i++) {
      Data_encoder_fil[i] = b_encoder_fil[i];
    }

    *Data_q_abduction_R = cassieOutputs_rightLeg_hipRollDrive_position;
    *Data_q_rotation_R = cassieOutputs_rightLeg_hipYawDrive_position;
    *Data_q_thigh_R = cassieOutputs_rightLeg_hipPitchDrive_position;
    *Data_q_thigh_knee_R = cassieOutputs_rightLeg_kneeDrive_position;
    *Data_q_knee_shin_R = cassieOutputs_rightLeg_shinJoint_position;
    *Data_q_thigh_shin_R = cassieOutputs_rightLeg_kneeDrive_position +
      cassieOutputs_rightLeg_shinJoint_position;
    *Data_q_shin_tarsus_R = cassieOutputs_rightLeg_tarsusJoint_position;
    *Data_q_toe_R = cassieOutputs_rightLeg_footDrive_position;
    *Data_q_abduction_L = cassieOutputs_leftLeg_hipRollDrive_position;
    *Data_q_rotation_L = cassieOutputs_leftLeg_hipYawDrive_position;
    *Data_q_thigh_L = cassieOutputs_leftLeg_hipPitchDrive_position;
    *Data_q_thigh_knee_L = cassieOutputs_leftLeg_kneeDrive_position;
    *Data_q_knee_shin_L = cassieOutputs_leftLeg_shinJoint_position;
    *Data_q_thigh_shin_L = cassieOutputs_leftLeg_kneeDrive_position +
      cassieOutputs_leftLeg_shinJoint_position;
    *Data_q_shin_tarsus_L = cassieOutputs_leftLeg_tarsusJoint_position;
    *Data_q_toe_L = cassieOutputs_leftLeg_footDrive_position;
    *Data_dq_abduction_R = cassieOutputs_rightLeg_hipRollDrive_velocity;
    *Data_dq_rotation_R = cassieOutputs_rightLeg_hipYawDrive_velocity;
    *Data_dq_thigh_R = cassieOutputs_rightLeg_hipPitchDrive_velocity;
    *Data_dq_thigh_knee_R = cassieOutputs_rightLeg_kneeDrive_velocity;
    *Data_dq_knee_shin_R = cassieOutputs_rightLeg_shinJoint_velocity;
    *Data_dq_thigh_shin_R = cassieOutputs_rightLeg_kneeDrive_velocity +
      cassieOutputs_rightLeg_shinJoint_velocity;
    *Data_dq_shin_tarsus_R = cassieOutputs_rightLeg_tarsusJoint_velocity;
    *Data_dq_toe_R = cassieOutputs_rightLeg_footDrive_velocity;
    *Data_dq_abduction_L = cassieOutputs_leftLeg_hipRollDrive_velocity;
    *Data_dq_rotation_L = cassieOutputs_leftLeg_hipYawDrive_velocity;
    *Data_dq_thigh_L = cassieOutputs_leftLeg_hipPitchDrive_velocity;
    *Data_dq_thigh_knee_L = cassieOutputs_leftLeg_kneeDrive_velocity;
    *Data_dq_knee_shin_L = cassieOutputs_leftLeg_shinJoint_velocity;
    *Data_dq_thigh_shin_L = cassieOutputs_leftLeg_kneeDrive_velocity +
      cassieOutputs_leftLeg_shinJoint_velocity;
    *Data_dq_shin_tarsus_L = cassieOutputs_leftLeg_tarsusJoint_velocity;
    *Data_dq_toe_L = cassieOutputs_leftLeg_footDrive_velocity;
    for (i = 0; i < 20; i++) {
      Data_qall[i] = b_qall[i];
      Data_dqall[i] = b_dqall[i];
    }

    for (i = 0; i < 4; i++) {
      Data_qq[i] = cassieOutputs_pelvis_vectorNav_orientation[i];
    }

    for (i = 0; i < 5; i++) {
      Data_qaR[i] = b_qaR[i];
    }

    for (i = 0; i < 2; i++) {
      Data_qjR[i] = qj[3 + i];
      Data_qsR[i] = b_qsR[i];
    }

    for (i = 0; i < 5; i++) {
      Data_qaL[i] = b_qaL[i];
    }

    for (i = 0; i < 2; i++) {
      Data_qjL[i] = qj[i];
      Data_qsL[i] = b_qsL[i];
    }

    for (i = 0; i < 5; i++) {
      Data_dqaR[i] = b_dqaR[i];
    }

    for (i = 0; i < 2; i++) {
      Data_dqjR[i] = dqj[3 + i];
      Data_dqsR[i] = b_dqsR[i];
    }

    for (i = 0; i < 5; i++) {
      Data_dqaL[i] = b_dqaL[i];
    }

    for (i = 0; i < 2; i++) {
      Data_dqjL[i] = dqj[i];
      Data_dqsL[i] = b_dqsL[i];
    }
  } else {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8, false);
  }

  /*  Return the updated Cassie inputs data structure */
}

static void Construct_Data(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T Data_hd[10], real_T Data_dhd[10], real_T Data_h0[10], real_T Data_dh0
  [10], real_T Data_hd_fix[10], real_T Data_dhd_fix[10], real_T Data_h0_fix[10],
  real_T Data_dh0_fix[10], real_T Data_hd_joint[10], real_T Data_dhd_joint[10],
  real_T Data_h0_joint[10], real_T Data_dh0_joint[10], real_T Data_y[10], real_T
  Data_dy[10], real_T Data_y_joint[10], real_T Data_dy_joint[10], real_T
  *Data_y1_joint, real_T *Data_y2_joint, real_T *Data_y3_joint, real_T
  *Data_y4_joint, real_T *Data_y5_joint, real_T *Data_y6_joint, real_T
  *Data_y7_joint, real_T *Data_y8_joint, real_T *Data_y9_joint, real_T
  *Data_y10_joint, real_T Data_y_knee[2], real_T Data_dy_knee[2], real_T
  *Data_LLd, real_T *Data_dLLd, real_T *Data_qKnee_d, real_T *Data_dqKnee_d,
  real_T *Data_qknee_d_L, real_T *Data_qknee_d_R, real_T *Data_left_tune, real_T
  *Data_right_tune, real_T *Data_LL0_R, real_T *Data_LL0_L, real_T
  Data_y_output[4], real_T Data_dy_output[4], real_T Data_u_output[4], real_T
  *Data_lateral_mid_p, real_T *Data_lateral_mid_v, real_T *Data_LL_des_fil,
  real_T *Data_test, real_T *Data_task, real_T *Data_t, real_T Data_q[26],
  real_T Data_dq[26], real_T Data_u[10], real_T Data_u_sat[10], real_T
  Data_u_fil[10], real_T *Data_stanceLeg, real_T *Data_s_sw, real_T *Data_s_st,
  real_T *Data_s, real_T *Data_ds, real_T Data_encoder_fil[14], real_T
  Data_d_torso_angle_fil[3], real_T *Data_tp_last, real_T *Data_avg_v_last_1,
  real_T *Data_avg_v_last_2, real_T *Data_theta, real_T *Data_dtheta, real_T
  *Data_theta_d, real_T *Data_dtheta_d, real_T Data_GRF[2], real_T *Data_t0,
  real_T *Data_Switch, real_T Data_spring_force_R[2], real_T
  Data_spring_force_L[2], real_T Data_torso_angle[3], real_T Data_d_torso_angle
  [3], real_T Data_id_torso_angle[3], real_T Data_dd_torso_angle[3], real_T
  Data_torso_position[3], real_T Data_torso_velocity[3], real_T
  Data_torso_velocity_fil[3], real_T *Data_torso_vx, real_T *Data_torso_vy,
  real_T *Data_torso_vz, real_T *Data_torso_vx_fil, real_T *Data_torso_vy_fil,
  real_T *Data_torso_vz_fil, real_T *Data_torso_vx_b, real_T *Data_torso_vy_b,
  real_T *Data_torso_vz_b, real_T *Data_torso_vx_b_fil, real_T
  *Data_torso_vy_b_fil, real_T *Data_torso_vz_b_fil, real_T *Data_tg_velocity_x,
  real_T Data_com_pos[3], real_T Data_com_vel[3], real_T *Data_com_vel_x, real_T
  *Data_com_vel_y, real_T *Data_com_vel_z, real_T *Data_com_vel_x_fil, real_T
  *Data_com_vel_y_fil, real_T *Data_com_vel_z_fil, real_T *Data_com_pos_x_fil,
  real_T *Data_com_pos_y_fil, real_T *Data_com_pos_z_fil, real_T
  Data_com_pos_fil[3], real_T *Data_torso_vx_test, real_T *Data_torso_vy_test,
  real_T *Data_torso_vz_test, real_T *Data_torso_vx_b_test, real_T
  *Data_torso_vy_b_test, real_T *Data_torso_vz_b_test, real_T
  *Data_torso_vx_test_2, real_T *Data_torso_vy_test_2, real_T
  *Data_torso_vz_test_2, real_T *Data_torso_vx_b_test_2, real_T
  *Data_torso_vy_b_test_2, real_T *Data_torso_vz_b_test_2, real_T
  *Data_torso_vx_fil_test, real_T *Data_torso_vy_fil_test, real_T
  *Data_torso_vz_fil_test, real_T *Data_torso_vx_b_fil_test, real_T
  *Data_torso_vy_b_fil_test, real_T *Data_torso_vz_b_fil_test, real_T
  *Data_l_abduction_vx, real_T *Data_l_abduction_vy, real_T *Data_l_abduction_vz,
  real_T *Data_l_foot_vx, real_T *Data_l_foot_vy, real_T *Data_l_foot_vz, real_T
  *Data_l_foot_vx_b, real_T *Data_l_foot_vy_b, real_T *Data_l_foot_vz_b, real_T
  Data_r_foot_v[3], real_T Data_l_foot_v[3], real_T Data_r_foot_p[3], real_T
  Data_l_foot_p[3], real_T Data_s_LR[2], real_T *Data_orient, real_T
  *Data_d_orient_test, real_T *Data_d_orient, real_T Data_step_end_dx_fil_seq[3],
  real_T Data_step_end_dy_fil_seq[3], real_T *Data_q_abduction_R, real_T
  *Data_q_rotation_R, real_T *Data_q_thigh_R, real_T *Data_q_thigh_knee_R,
  real_T *Data_q_knee_shin_R, real_T *Data_q_thigh_shin_R, real_T
  *Data_q_shin_tarsus_R, real_T *Data_q_toe_R, real_T *Data_q_abduction_L,
  real_T *Data_q_rotation_L, real_T *Data_q_thigh_L, real_T *Data_q_thigh_knee_L,
  real_T *Data_q_knee_shin_L, real_T *Data_q_thigh_shin_L, real_T
  *Data_q_shin_tarsus_L, real_T *Data_q_toe_L, real_T *Data_dq_abduction_R,
  real_T *Data_dq_rotation_R, real_T *Data_dq_thigh_R, real_T
  *Data_dq_thigh_knee_R, real_T *Data_dq_knee_shin_R, real_T
  *Data_dq_thigh_shin_R, real_T *Data_dq_shin_tarsus_R, real_T *Data_dq_toe_R,
  real_T *Data_dq_abduction_L, real_T *Data_dq_rotation_L, real_T
  *Data_dq_thigh_L, real_T *Data_dq_thigh_knee_L, real_T *Data_dq_knee_shin_L,
  real_T *Data_dq_thigh_shin_L, real_T *Data_dq_shin_tarsus_L, real_T
  *Data_dq_toe_L, real_T Data_qall[20], real_T Data_dqall[20], real_T Data_qq[4],
  real_T Data_qaR[5], real_T Data_qjR[2], real_T Data_qsR[2], real_T Data_qaL[5],
  real_T Data_qjL[2], real_T Data_qsL[2], real_T Data_dqq[3], real_T Data_dqaR[5],
  real_T Data_dqjR[2], real_T Data_dqsR[2], real_T Data_dqaL[5], real_T
  Data_dqjL[2], real_T Data_dqsL[2], real_T Data_u_P[10], real_T Data_u_D[10],
  real_T *Data_computer_time)
{
  int32_T i2;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);

  /*  walking */
  for (i2 = 0; i2 < 10; i2++) {
    Data_hd[i2] = 0.0;
    Data_dhd[i2] = 0.0;
    Data_h0[i2] = 0.0;
    Data_dh0[i2] = 0.0;
    Data_hd_fix[i2] = 0.0;
    Data_dhd_fix[i2] = 0.0;
    Data_h0_fix[i2] = 0.0;
    Data_dh0_fix[i2] = 0.0;
    Data_hd_joint[i2] = 0.0;
    Data_dhd_joint[i2] = 0.0;
    Data_h0_joint[i2] = 0.0;
    Data_dh0_joint[i2] = 0.0;
    Data_y[i2] = 0.0;
    Data_dy[i2] = 0.0;
    Data_y_joint[i2] = 0.0;
    Data_dy_joint[i2] = 0.0;
  }

  *Data_y1_joint = 0.0;
  *Data_y2_joint = 0.0;
  *Data_y3_joint = 0.0;
  *Data_y4_joint = 0.0;
  *Data_y5_joint = 0.0;
  *Data_y6_joint = 0.0;
  *Data_y7_joint = 0.0;
  *Data_y8_joint = 0.0;
  *Data_y9_joint = 0.0;
  *Data_y10_joint = 0.0;

  /*  standing up */
  for (i2 = 0; i2 < 2; i2++) {
    Data_y_knee[i2] = 0.0;
    Data_dy_knee[i2] = 0.0;
  }

  *Data_LLd = 0.0;
  *Data_dLLd = 0.0;
  *Data_qKnee_d = 0.0;
  *Data_dqKnee_d = 0.0;
  *Data_qknee_d_L = 0.0;
  *Data_qknee_d_R = 0.0;
  *Data_left_tune = 0.0;
  *Data_right_tune = 0.0;
  *Data_LL0_R = 0.0;
  *Data_LL0_L = 0.0;
  for (i2 = 0; i2 < 4; i2++) {
    Data_y_output[i2] = 0.0;
    Data_dy_output[i2] = 0.0;
    Data_u_output[i2] = 0.0;
  }

  *Data_lateral_mid_p = 0.0;
  *Data_lateral_mid_v = 0.0;
  *Data_LL_des_fil = 0.0;

  /*  temp */
  *Data_test = 0.0;

  /*  general */
  *Data_task = 0.0;
  *Data_t = 0.0;
  for (i2 = 0; i2 < 26; i2++) {
    Data_q[i2] = 0.0;
    Data_dq[i2] = 0.0;
  }

  for (i2 = 0; i2 < 10; i2++) {
    Data_u[i2] = 0.0;
    Data_u_sat[i2] = 0.0;
    Data_u_fil[i2] = 0.0;
  }

  *Data_stanceLeg = 0.0;
  *Data_s_sw = 0.0;
  *Data_s_st = 0.0;
  *Data_s = 0.0;
  *Data_ds = 0.0;
  for (i2 = 0; i2 < 14; i2++) {
    Data_encoder_fil[i2] = 0.0;
  }

  *Data_tp_last = 0.0;
  *Data_avg_v_last_1 = 0.0;
  *Data_avg_v_last_2 = 0.0;
  *Data_theta = 0.0;
  *Data_dtheta = 0.0;
  *Data_theta_d = 0.0;
  *Data_dtheta_d = 0.0;
  *Data_t0 = 0.0;
  *Data_Switch = 0.0;
  for (i2 = 0; i2 < 2; i2++) {
    Data_GRF[i2] = 0.0;
    Data_spring_force_R[i2] = 0.0;
    Data_spring_force_L[i2] = 0.0;
  }

  *Data_torso_vx = 0.0;
  *Data_torso_vy = 0.0;
  *Data_torso_vz = 0.0;
  *Data_torso_vx_fil = 0.0;
  *Data_torso_vy_fil = 0.0;
  *Data_torso_vz_fil = 0.0;
  *Data_torso_vx_b = 0.0;
  *Data_torso_vy_b = 0.0;
  *Data_torso_vz_b = 0.0;
  *Data_torso_vx_b_fil = 0.0;
  *Data_torso_vy_b_fil = 0.0;
  *Data_torso_vz_b_fil = 0.0;
  *Data_tg_velocity_x = 0.0;
  *Data_com_vel_x = 0.0;
  *Data_com_vel_y = 0.0;
  *Data_com_vel_z = 0.0;
  *Data_com_vel_x_fil = 0.0;
  *Data_com_vel_y_fil = 0.0;
  *Data_com_vel_z_fil = 0.0;
  *Data_com_pos_x_fil = 0.0;
  *Data_com_pos_y_fil = 0.0;
  *Data_com_pos_z_fil = 0.0;
  *Data_torso_vx_test = 0.0;
  *Data_torso_vy_test = 0.0;
  *Data_torso_vz_test = 0.0;
  *Data_torso_vx_b_test = 0.0;
  *Data_torso_vy_b_test = 0.0;
  *Data_torso_vz_b_test = 0.0;
  *Data_torso_vx_test_2 = 0.0;
  *Data_torso_vy_test_2 = 0.0;
  *Data_torso_vz_test_2 = 0.0;
  *Data_torso_vx_b_test_2 = 0.0;
  *Data_torso_vy_b_test_2 = 0.0;
  *Data_torso_vz_b_test_2 = 0.0;
  *Data_torso_vx_fil_test = 0.0;
  *Data_torso_vy_fil_test = 0.0;
  *Data_torso_vz_fil_test = 0.0;
  *Data_torso_vx_b_fil_test = 0.0;
  *Data_torso_vy_b_fil_test = 0.0;
  *Data_torso_vz_b_fil_test = 0.0;
  *Data_l_abduction_vx = 0.0;
  *Data_l_abduction_vy = 0.0;
  *Data_l_abduction_vz = 0.0;
  *Data_l_foot_vx = 0.0;
  *Data_l_foot_vy = 0.0;
  *Data_l_foot_vz = 0.0;
  *Data_l_foot_vx_b = 0.0;
  *Data_l_foot_vy_b = 0.0;
  *Data_l_foot_vz_b = 0.0;
  for (i2 = 0; i2 < 3; i2++) {
    Data_torso_angle[i2] = 0.0;
    Data_d_torso_angle[i2] = 0.0;
    Data_id_torso_angle[i2] = 0.0;
    Data_dd_torso_angle[i2] = 0.0;
    Data_d_torso_angle_fil[i2] = 0.0;
    Data_torso_position[i2] = 0.0;
    Data_torso_velocity[i2] = 0.0;
    Data_torso_velocity_fil[i2] = 0.0;
    Data_com_pos[i2] = 0.0;
    Data_com_vel[i2] = 0.0;
    Data_com_pos_fil[i2] = 0.0;
    Data_r_foot_v[i2] = 0.0;
    Data_l_foot_v[i2] = 0.0;
    Data_r_foot_p[i2] = 0.0;
    Data_l_foot_p[i2] = 0.0;
  }

  for (i2 = 0; i2 < 2; i2++) {
    Data_s_LR[i2] = 0.0;
  }

  *Data_orient = 0.0;
  *Data_d_orient_test = 0.0;
  *Data_d_orient = 0.0;
  for (i2 = 0; i2 < 3; i2++) {
    Data_step_end_dx_fil_seq[i2] = 0.0;
    Data_step_end_dy_fil_seq[i2] = 0.0;
  }

  /*  Data.lateral_mid_p = 0; */
  /*  Data.left_tune = 0; */
  *Data_q_abduction_R = 0.0;
  *Data_q_rotation_R = 0.0;
  *Data_q_thigh_R = 0.0;
  *Data_q_thigh_knee_R = 0.0;
  *Data_q_knee_shin_R = 0.0;
  *Data_q_thigh_shin_R = 0.0;
  *Data_q_shin_tarsus_R = 0.0;
  *Data_q_toe_R = 0.0;
  *Data_q_abduction_L = 0.0;
  *Data_q_rotation_L = 0.0;
  *Data_q_thigh_L = 0.0;
  *Data_q_thigh_knee_L = 0.0;
  *Data_q_knee_shin_L = 0.0;
  *Data_q_thigh_shin_L = 0.0;
  *Data_q_shin_tarsus_L = 0.0;
  *Data_q_toe_L = 0.0;
  *Data_dq_abduction_R = 0.0;
  *Data_dq_rotation_R = 0.0;
  *Data_dq_thigh_R = 0.0;
  *Data_dq_thigh_knee_R = 0.0;
  *Data_dq_knee_shin_R = 0.0;
  *Data_dq_thigh_shin_R = 0.0;
  *Data_dq_shin_tarsus_R = 0.0;
  *Data_dq_toe_R = 0.0;
  *Data_dq_abduction_L = 0.0;
  *Data_dq_rotation_L = 0.0;
  *Data_dq_thigh_L = 0.0;
  *Data_dq_thigh_knee_L = 0.0;
  *Data_dq_knee_shin_L = 0.0;
  *Data_dq_thigh_shin_L = 0.0;
  *Data_dq_shin_tarsus_L = 0.0;
  *Data_dq_toe_L = 0.0;
  for (i2 = 0; i2 < 20; i2++) {
    Data_qall[i2] = 0.0;
    Data_dqall[i2] = 0.0;
  }

  for (i2 = 0; i2 < 4; i2++) {
    Data_qq[i2] = 0.0;
  }

  for (i2 = 0; i2 < 5; i2++) {
    Data_qaR[i2] = 0.0;
  }

  for (i2 = 0; i2 < 2; i2++) {
    Data_qjR[i2] = 0.0;
    Data_qsR[i2] = 0.0;
  }

  for (i2 = 0; i2 < 5; i2++) {
    Data_qaL[i2] = 0.0;
  }

  for (i2 = 0; i2 < 2; i2++) {
    Data_qjL[i2] = 0.0;
    Data_qsL[i2] = 0.0;
  }

  for (i2 = 0; i2 < 3; i2++) {
    Data_dqq[i2] = 0.0;
  }

  for (i2 = 0; i2 < 5; i2++) {
    Data_dqaR[i2] = 0.0;
  }

  for (i2 = 0; i2 < 2; i2++) {
    Data_dqjR[i2] = 0.0;
    Data_dqsR[i2] = 0.0;
  }

  for (i2 = 0; i2 < 5; i2++) {
    Data_dqaL[i2] = 0.0;
  }

  for (i2 = 0; i2 < 2; i2++) {
    Data_dqjL[i2] = 0.0;
    Data_dqsL[i2] = 0.0;
  }

  for (i2 = 0; i2 < 10; i2++) {
    Data_u_P[i2] = 0.0;
    Data_u_D[i2] = 0.0;
  }

  *Data_computer_time = 0.0;
}

static void RadioChannelToButton(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T RadioChannel[16], real_T *RadioButton_LVA, real_T
  *RadioButton_LHA, real_T *RadioButton_RVA, real_T *RadioButton_RHA, real_T
  *RadioButton_S1A, real_T *RadioButton_S2A, real_T *RadioButton_LSA, real_T
  *RadioButton_RSA, real_T *RadioButton_SAA, real_T *RadioButton_SBA, real_T
  *RadioButton_SCA, real_T *RadioButton_SDA, real_T *RadioButton_SEA, real_T
  *RadioButton_SFA, real_T *RadioButton_SGA, real_T *RadioButton_SHA)
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0);
  *RadioButton_LVA = RadioChannel[0];
  *RadioButton_LHA = RadioChannel[1];
  *RadioButton_RVA = RadioChannel[2];
  *RadioButton_RHA = RadioChannel[3];
  *RadioButton_S1A = RadioChannel[4];
  *RadioButton_S2A = RadioChannel[5];
  *RadioButton_LSA = RadioChannel[6];
  *RadioButton_RSA = RadioChannel[7];
  *RadioButton_SAA = RadioChannel[8];
  *RadioButton_SBA = RadioChannel[9];
  *RadioButton_SCA = RadioChannel[10];
  *RadioButton_SDA = RadioChannel[11];
  *RadioButton_SEA = RadioChannel[12];
  *RadioButton_SFA = RadioChannel[13];
  *RadioButton_SGA = RadioChannel[14];
  *RadioButton_SHA = RadioChannel[15];
}

static void repmat(real_T a[5], real_T b[10])
{
  int32_T itilerow;
  int32_T ibcol;
  int32_T k;
  for (itilerow = 0; itilerow < 2; itilerow++) {
    ibcol = itilerow * 5;
    for (k = 0; k < 5; k++) {
      b[ibcol + k] = a[k];
    }
  }
}

static real_T first_order_filter(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T prev, real_T new, real_T para)
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3, 0);
  return prev * (1.0 - para) + new * para;
}

static real_T median(real_T x[3])
{
  int32_T j2;
  if (x[0] < x[1]) {
    if (x[1] < x[2]) {
      j2 = 1;
    } else if (x[0] < x[2]) {
      j2 = 2;
    } else {
      j2 = 0;
    }
  } else if (x[0] < x[2]) {
    j2 = 0;
  } else if (x[1] < x[2]) {
    j2 = 2;
  } else {
    j2 = 1;
  }

  return x[j2];
}

static void IMU_to_Euler_v2(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T b_q[4], real_T w[3], real_T *yaw, real_T *pitch,
  real_T *roll, real_T *dyaw, real_T *dpitch, real_T *droll)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T b_t3[9];
  real_T R[9];
  int32_T i3;
  int32_T i4;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4, 0);

  /*  convert the quaternion angle and angular velocity to euler and euler */
  /*  rates */
  /*  need further refined for different quadrant */
  /*  q is measured when z is pointing down. Move it back */
  st.site = &mh_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0);

  /* QUATERNION_TO_MATRIX */
  /*     R = QUATERNION_TO_MATRIX(IN1) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     12-Jul-2017 19:16:39 */
  b_t2 = b_q[1] * b_q[2] * 2.0;
  b_st.site = &qh_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t3 = b_q[0] * b_q[0];
  b_st.site = &rh_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t4 = b_q[1] * b_q[1];
  b_st.site = &sh_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t5 = b_q[2] * b_q[2];
  b_st.site = &th_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t6 = b_q[3] * b_q[3];
  t7 = b_q[0] * b_q[2] * 2.0;
  t8 = b_q[1] * b_q[3] * 2.0;
  t9 = b_q[2] * b_q[3] * 2.0;
  b_t3[0] = ((t3 + t4) - t5) - t6;
  b_t3[1] = b_t2 + b_q[0] * b_q[3] * 2.0;
  b_t3[2] = -t7 + t8;
  b_t3[3] = b_t2 - b_q[0] * b_q[3] * 2.0;
  b_t3[4] = ((t3 - t4) + t5) - t6;
  b_t3[5] = t9 + b_q[0] * b_q[1] * 2.0;
  b_t3[6] = t7 + t8;
  b_t3[7] = t9 - b_q[0] * b_q[1] * 2.0;
  b_t3[8] = ((t3 - t4) - t5) + t6;
  for (i3 = 0; i3 < 3; i3++) {
    for (i4 = 0; i4 < 3; i4++) {
      R[i4 + 3 * i3] = b_t3[i4 + 3 * i3];
    }
  }

  st.site = &nh_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0);

  /* ANGULARVELOCITY_TO_DMATRIX */
  /*     DR = ANGULARVELOCITY_TO_DMATRIX(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     12-Jul-2017 19:16:39 */
  /*  R = R_fix * R * R_fix'; */
  /*  dR = R_fix * dR * R_fix'; */
  st.site = &oh_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 0);

  /* MATRIX_TO_EULER */
  /*     [YAW,PITCH,ROLL] = MATRIX_TO_EULER(IN1) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     12-Jul-2017 19:16:39 */
  b_t2 = -t7 + t8;
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 1);
  b_st.site = &wh_emlrtRSI;
  if ((b_t2 < -1.0) || (b_t2 > 1.0)) {
    c_st.site = &xh_emlrtRSI;
    b_error(&c_st);
  }

  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 0, 1, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 7, 2);
  *yaw = muDoubleScalarAtan2(R[1], R[0]);
  *pitch = -muDoubleScalarAsin(R[2]);
  *roll = muDoubleScalarAtan2(R[5], R[8]);
  st.site = &ph_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 0);

  /* DMATRIX_TO_DEULER */
  /*     [DYAW,DPITCH,DROLL] = DMATRIX_TO_DEULER(IN1,IN2) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     12-Jul-2017 19:16:40 */
  b_st.site = &yh_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  b_st.site = &ai_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  b_t2 = 1.0 / (R[1] * R[1] + (0.0 - R[0]) * (0.0 - R[0]));
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 1);
  b_st.site = &bi_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t7 = R[2] * R[2];
  b_st.site = &bi_emlrtRSI;
  if (-t7 + 1.0 < 0.0) {
    c_st.site = &ei_emlrtRSI;
    c_error(&c_st);
  }

  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 0, 1, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 8, 2);
  b_st.site = &ci_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  b_st.site = &di_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  t8 = 1.0 / (R[5] * R[5] + (0.0 - R[8]) * (0.0 - R[8]));
  *dyaw = -(-R[6] * w[1] + R[3] * w[2]) * R[1] * b_t2 - (-R[7] * w[1] + R[4] *
    w[2]) * (0.0 - R[0]) * b_t2;
  *dpitch = -(-(((t3 - t4) - t5) + t6) * w[1] + (t9 + b_q[0] * b_q[1] * 2.0) *
              w[2]) / muDoubleScalarSqrt(-t7 + 1.0);
  *droll = -(R[8] * w[0] - R[2] * w[2]) * (0.0 - R[8]) * t8 - (-R[5] * w[0] + R
    [2] * w[1]) * R[5] * t8;
}

static void error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv3[2] = { 1, 31 };

  static char_T b_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 31, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  st.site = &vk_emlrtRSI;
  g_error(&st, b_message(&st, b_y, &b_emlrtMCI), &b_emlrtMCI);
}

static void b_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m2;
  static const int32_T iv4[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 4 };

  static char_T c_u[4] = { 'a', 's', 'i', 'n' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 30, m2, &b_u[0]);
  emlrtAssign(&b_y, m2);
  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 4, m2, &c_u[0]);
  emlrtAssign(&c_y, m2);
  st.site = &vk_emlrtRSI;
  g_error(&st, message(&st, b_y, c_y, &b_emlrtMCI), &b_emlrtMCI);
}

static void c_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m3;
  static const int32_T iv6[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c_y;
  static const int32_T iv7[2] = { 1, 4 };

  static char_T c_u[4] = { 's', 'q', 'r', 't' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 30, m3, &b_u[0]);
  emlrtAssign(&b_y, m3);
  c_y = NULL;
  m3 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 4, m3, &c_u[0]);
  emlrtAssign(&c_y, m3);
  st.site = &vk_emlrtRSI;
  g_error(&st, message(&st, b_y, c_y, &b_emlrtMCI), &b_emlrtMCI);
}

static void getSpringDeflectionAngle(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T knee_motor, real_T knee_joint, real_T ankle_joint,
  real_T qs[2])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 9, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 9, 0);
  qs[0] = knee_joint;
  qs[1] = ((knee_motor + knee_joint) + ankle_joint) - 0.22689280275926285;
}

static void getSpringDeflectionRate(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T knee_motor, real_T knee_joint, real_T ankle_joint,
  real_T dqs[2])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 10, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 10, 0);
  dqs[0] = knee_joint;
  dqs[1] = (knee_motor + knee_joint) + ankle_joint;
}

static void FG_Controller_get_FK(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T b_hd_joint[10], real_T
  b_dhd_joint[10], real_T hd_output[10], real_T dhd_output[10])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  real_T d0;
  real_T d1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 69);
  st.site = &fi_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 10);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 72);
  for (i = 0; i < 10; i++) {
    hd_output[i] = b_hd_joint[i];
    dhd_output[i] = b_dhd_joint[i];
  }

  b_st.site = &gi_emlrtRSI;
  Forward_Kinematics_p(moduleInstance, &b_st, b_hd_joint[2], b_hd_joint[3], &d0,
                       &d1);
  hd_output[2] = d0;
  hd_output[3] = d1;
  b_st.site = &hi_emlrtRSI;
  Forward_Kinematics_p(moduleInstance, &b_st, b_hd_joint[7], b_hd_joint[8], &d0,
                       &d1);
  hd_output[7] = d0;
  hd_output[8] = d1;
  b_st.site = &ii_emlrtRSI;
  Forward_Kinematics_v(moduleInstance, &b_st, b_hd_joint[3], b_dhd_joint[2],
                       b_dhd_joint[3], &d0, &d1);
  dhd_output[2] = d0;
  dhd_output[3] = d1;
  b_st.site = &ji_emlrtRSI;
  Forward_Kinematics_v(moduleInstance, &b_st, b_hd_joint[8], b_dhd_joint[7],
                       b_dhd_joint[8], &d0, &d1);
  dhd_output[7] = d0;
  dhd_output[8] = d1;
}

static void Forward_Kinematics_p(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T qFlexion, real_T qKnee, real_T
  *LA, real_T *LL)
{
  emlrtStack st;
  emlrtStack b_st;
  real_T t4;
  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11, 0);

  /* FORWARD_KINEMATICS_P */
  /*     [LA,LL] = FORWARD_KINEMATICS_P(QFLEXION,QKNEE) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     25-Jul-2017 14:38:55 */
  t4 = muDoubleScalarCos(qKnee + 0.035) * 0.5292;
  st.site = &ki_emlrtRSI;
  if (t4 + 0.53005264000000007 < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  st.site = &ki_emlrtRSI;
  x = 1.0 / muDoubleScalarSqrt(t4 + 0.53005264000000007) * (t4 +
    0.56010528000000015) * 0.944822373393802;
  if ((x < -1.0) || (x > 1.0)) {
    b_st.site = &mi_emlrtRSI;
    d_error(&b_st);
  }

  *LA = (qFlexion - muDoubleScalarAcos(x)) + 0.1;
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 11, 1);
  st.site = &li_emlrtRSI;
  if (t4 + 0.53005264000000007 < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  *LL = muDoubleScalarSqrt(t4 + 0.53005264000000007);
}

static void d_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m4;
  static const int32_T iv8[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c_y;
  static const int32_T iv9[2] = { 1, 4 };

  static char_T c_u[4] = { 'a', 'c', 'o', 's' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m4 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 30, m4, &b_u[0]);
  emlrtAssign(&b_y, m4);
  c_y = NULL;
  m4 = emlrtCreateCharArray(2, iv9);
  emlrtInitCharArrayR2013a(sp, 4, m4, &c_u[0]);
  emlrtAssign(&c_y, m4);
  st.site = &vk_emlrtRSI;
  g_error(&st, message(&st, b_y, c_y, &b_emlrtMCI), &b_emlrtMCI);
}

static void Forward_Kinematics_v(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T qKnee, real_T dqFlexion, real_T
  dqKnee, real_T *dLA, real_T *dLL)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T t3;
  real_T t5;
  real_T t8;
  real_T z;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12, 0);

  /* FORWARD_KINEMATICS_V */
  /*     [DLA,DLL] = FORWARD_KINEMATICS_V(QFLEXION,QKNEE,DQFLEXION,DQKNEE) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     25-Jul-2017 14:38:55 */
  t3 = muDoubleScalarSin(qKnee + 0.035);
  t5 = muDoubleScalarCos(qKnee + 0.035) * 0.5292;
  st.site = &ni_emlrtRSI;
  if (t5 + 0.53005264000000007 < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  t8 = 1.0 / muDoubleScalarSqrt(t5 + 0.53005264000000007);
  st.site = &oi_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  z = (t5 + 0.56010528000000015) * (t5 + 0.56010528000000015) *
    -0.89268931726549694 / (t5 + 0.53005264000000007);
  st.site = &oi_emlrtRSI;
  if (z + 1.0 < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  st.site = &oi_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  if (t5 + 0.53005264000000007 < 0.0) {
    c_st.site = &vh_emlrtRSI;
    error(&c_st);
  }

  *dLA = dqFlexion - dqKnee / muDoubleScalarSqrt(z + 1.0) * (t3 * t8 * 0.5 - t3 /
    muDoubleScalarPower(t5 + 0.53005264000000007, 1.5) * (t5 +
    0.56010528000000015) * 0.25);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 12, 1);
  *dLL = dqKnee * t3 * t8 * -0.2646;
}

static real_T norm(real_T x[4])
{
  real_T b_y;
  int32_T j;
  real_T b_s;
  int32_T i;
  b_y = 0.0;
  for (j = 0; j < 2; j++) {
    b_s = 0.0;
    for (i = 0; i < 2; i++) {
      b_s += muDoubleScalarAbs(x[i + (j << 1)]);
    }

    if (b_s > b_y) {
      b_y = b_s;
    }
  }

  return b_y;
}

static void warning(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m5;
  static const int32_T iv10[2] = { 1, 7 };

  static char_T b_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 7 };

  static char_T c_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *d_y;
  static const int32_T iv12[2] = { 1, 27 };

  static char_T msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r',
    'i', 'x' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 7, m5, &b_u[0]);
  emlrtAssign(&b_y, m5);
  c_y = NULL;
  m5 = emlrtCreateCharArray(2, iv11);
  emlrtInitCharArrayR2013a(sp, 7, m5, &c_u[0]);
  emlrtAssign(&c_y, m5);
  d_y = NULL;
  m5 = emlrtCreateCharArray(2, iv12);
  emlrtInitCharArrayR2013a(sp, 27, m5, &msgID[0]);
  emlrtAssign(&d_y, m5);
  st.site = &xk_emlrtRSI;
  b_feval(&st, b_y, feval(&st, c_y, d_y, &c_emlrtMCI), &d_emlrtMCI);
}

static void FG_Controller_get_GRF(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T b_qall[20], real_T b_qsR[2],
  real_T b_qsL[2], real_T GRF_L[2], real_T GRF_R[2])
{
  emlrtStack st;
  real_T JR[60];
  real_T JL[60];
  real_T Fs2R;
  real_T Fs2L;
  real_T b_JR[4];
  int32_T i5;
  real_T a[4];
  int32_T i6;
  real_T dv6[2];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 66);
  b_qall[3] = 0.0;
  st.site = &pi_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 1);
  J_RightToeJoint_src(JR, b_qall);
  st.site = &qi_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 1);
  J_LeftToeJoint_src(JL, b_qall);
  st.site = &ri_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 5);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 67);
  Fs2R = -1600.0 * b_qsR[1];
  Fs2L = -1600.0 * b_qsL[1];
  for (i5 = 0; i5 < 2; i5++) {
    for (i6 = 0; i6 < 2; i6++) {
      b_JR[i6 + (i5 << 1)] = -JR[(i5 << 1) + 3 * (17 + i6)];
    }
  }

  st.site = &si_emlrtRSI;
  mpower(&st, b_JR, a);
  dv6[0] = -1800.0 * b_qsR[0] + Fs2R;
  dv6[1] = Fs2R;
  for (i5 = 0; i5 < 2; i5++) {
    GRF_R[i5] = 0.0;
    for (i6 = 0; i6 < 2; i6++) {
      b_JR[i6 + (i5 << 1)] = -JL[(i5 << 1) + 3 * (10 + i6)];
      GRF_R[i5] += a[i5 + (i6 << 1)] * dv6[i6];
    }
  }

  st.site = &ti_emlrtRSI;
  mpower(&st, b_JR, a);
  dv6[0] = -1800.0 * b_qsL[0] + Fs2L;
  dv6[1] = Fs2L;
  for (i5 = 0; i5 < 2; i5++) {
    GRF_L[i5] = 0.0;
    for (i6 = 0; i6 < 2; i6++) {
      GRF_L[i5] += a[i5 + (i6 << 1)] * dv6[i6];
    }
  }
}

static void mpower(const emlrtStack *sp, real_T a[4], real_T c[4])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  real_T r;
  real_T b_t;
  real_T rc;
  const mxArray *b_y;
  const mxArray *m6;
  static const int32_T iv13[2] = { 1, 6 };

  static char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c_y;
  char_T cv0[14];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ui_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  b_st.site = &vi_emlrtRSI;
  c_st.site = &wi_emlrtRSI;
  d_st.site = &xi_emlrtRSI;
  d_st.site = &yi_emlrtRSI;
  if (muDoubleScalarAbs(a[1]) > muDoubleScalarAbs(a[0])) {
    r = a[0] / a[1];
    b_t = 1.0 / (r * a[3] - a[2]);
    c[0] = a[3] / a[1] * b_t;
    c[1] = -b_t;
    c[2] = -a[2] / a[1] * b_t;
    c[3] = r * b_t;
  } else {
    r = a[1] / a[0];
    b_t = 1.0 / (a[3] - r * a[2]);
    c[0] = a[3] / a[0] * b_t;
    c[1] = -r * b_t;
    c[2] = -a[2] / a[0] * b_t;
    c[3] = b_t;
  }

  e_st.site = &aj_emlrtRSI;
  r = norm(a);
  b_t = norm(c);
  rc = 1.0 / (r * b_t);
  if ((r == 0.0) || (b_t == 0.0) || (rc == 0.0)) {
    f_st.site = &bj_emlrtRSI;
    warning(&f_st);
  } else {
    if (rc < 2.2204460492503131E-16) {
      f_st.site = &cj_emlrtRSI;
      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&f_st, 6, m6, &rfmt[0]);
      emlrtAssign(&b_y, m6);
      c_y = NULL;
      m6 = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m6);
      g_st.site = &yk_emlrtRSI;
      emlrt_marshallIn(&g_st, b_sprintf(&g_st, b_y, c_y, &e_emlrtMCI), "sprintf",
                       cv0);
      f_st.site = &cj_emlrtRSI;
      b_warning(&f_st, cv0);
    }
  }
}

static void b_warning(const emlrtStack *sp, char_T varargin_1[14])
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m7;
  static const int32_T iv14[2] = { 1, 7 };

  static char_T b_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c_y;
  static const int32_T iv15[2] = { 1, 7 };

  static char_T c_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 33 };

  static char_T msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 14 };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m7 = emlrtCreateCharArray(2, iv14);
  emlrtInitCharArrayR2013a(sp, 7, m7, &b_u[0]);
  emlrtAssign(&b_y, m7);
  c_y = NULL;
  m7 = emlrtCreateCharArray(2, iv15);
  emlrtInitCharArrayR2013a(sp, 7, m7, &c_u[0]);
  emlrtAssign(&c_y, m7);
  d_y = NULL;
  m7 = emlrtCreateCharArray(2, iv16);
  emlrtInitCharArrayR2013a(sp, 33, m7, &msgID[0]);
  emlrtAssign(&d_y, m7);
  e_y = NULL;
  m7 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(sp, 14, m7, &varargin_1[0]);
  emlrtAssign(&e_y, m7);
  st.site = &xk_emlrtRSI;
  b_feval(&st, b_y, c_feval(&st, c_y, d_y, e_y, &c_emlrtMCI), &d_emlrtMCI);
}

static void FG_Controller_get_s_LR(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, FG_Controller *obj, real_T GRF_v[2], real_T *s_L, real_T *s_R)
{
  real_T A;
  real_T B;
  real_T b_A;
  real_T b_B;
  real_T dv7[3];
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 6);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 68);
  A = GRF_v[0] - obj->stance_thre_lb;
  B = obj->stance_thre_ub - obj->stance_thre_lb;
  b_A = GRF_v[1] - obj->stance_thre_lb;
  b_B = obj->stance_thre_ub - obj->stance_thre_lb;
  dv7[0] = 0.0;
  dv7[1] = 1.0;
  dv7[2] = A / B;
  *s_L = median(dv7);
  dv7[0] = 0.0;
  dv7[1] = 1.0;
  dv7[2] = b_A / b_B;
  *s_R = median(dv7);
}

static void FG_Controller_ControlPolicy(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T
  GaitLibrary_RightStance_HAlpha[540], real_T GaitLibrary_LeftStance_HAlpha[540],
  real_T GaitLibrary_ct[9], real_T GaitLibrary_Velocity[18], real_T phi, real_T
  gaitparams_HAlpha[60], real_T *gaitparams_ct)
{
  emlrtStack st;
  real_T b_GaitLibrary_Velocity[9];
  int32_T i;
  real_T HAlpha_R[60];
  real_T HAlpha_L[60];
  real_T ct_R;
  real_T A[10];
  real_T B;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 60);

  /*  stepImpl */
  /*         %% util functions */
  /*  Saturate interpolation value */
  phi = muDoubleScalarMax(muDoubleScalarMin(phi, muDoubleScalarMax
    (GaitLibrary_Velocity[0], GaitLibrary_Velocity[16])), muDoubleScalarMin
    (GaitLibrary_Velocity[0], GaitLibrary_Velocity[16]));

  /*  Interpolate gaits */
  for (i = 0; i < 9; i++) {
    b_GaitLibrary_Velocity[i] = GaitLibrary_Velocity[i << 1];
  }

  st.site = &dj_emlrtRSI;
  interp1(&st, b_GaitLibrary_Velocity, GaitLibrary_RightStance_HAlpha, phi,
          HAlpha_R);
  for (i = 0; i < 9; i++) {
    b_GaitLibrary_Velocity[i] = GaitLibrary_Velocity[i << 1];
  }

  st.site = &ej_emlrtRSI;
  interp1(&st, b_GaitLibrary_Velocity, GaitLibrary_LeftStance_HAlpha, phi,
          HAlpha_L);
  for (i = 0; i < 9; i++) {
    b_GaitLibrary_Velocity[i] = GaitLibrary_Velocity[i << 1];
  }

  st.site = &fj_emlrtRSI;
  ct_R = b_interp1(&st, b_GaitLibrary_Velocity, GaitLibrary_ct, phi);
  for (i = 0; i < 9; i++) {
    b_GaitLibrary_Velocity[i] = GaitLibrary_Velocity[i << 1];
  }

  st.site = &gj_emlrtRSI;
  *gaitparams_ct = b_interp1(&st, b_GaitLibrary_Velocity, GaitLibrary_ct, phi);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 35,
                 obj->stanceLeg == 1.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 61);
    for (i = 0; i < 60; i++) {
      gaitparams_HAlpha[i] = HAlpha_R[i];
    }

    for (i = 0; i < 10; i++) {
      gaitparams_HAlpha[i] = obj->hd_last[i];
    }

    for (i = 0; i < 10; i++) {
      A[i] = obj->dhd_last[i];
    }

    B = obj->bezier_degree;
    for (i = 0; i < 10; i++) {
      gaitparams_HAlpha[10 + i] = obj->hd_last[i] + A[i] / ct_R / B;
    }

    *gaitparams_ct = ct_R;
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 62);
    for (i = 0; i < 60; i++) {
      gaitparams_HAlpha[i] = HAlpha_L[i];
    }

    for (i = 0; i < 10; i++) {
      gaitparams_HAlpha[i] = obj->hd_last[i];
    }

    for (i = 0; i < 10; i++) {
      A[i] = obj->dhd_last[i];
    }

    B = obj->bezier_degree;
    for (i = 0; i < 10; i++) {
      gaitparams_HAlpha[10 + i] = obj->hd_last[i] + A[i] / *gaitparams_ct / B;
    }
  }
}

static void interp1(const emlrtStack *sp, real_T varargin_1[9], real_T
                    varargin_2[540], real_T varargin_3, real_T Vq[60])
{
  emlrtStack st;
  emlrtStack b_st;
  real_T b_y[540];
  int32_T n;
  real_T x[9];
  int32_T j;
  real_T r;
  emlrtStack c_st;
  int32_T offset;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (n = 0; n < 540; n++) {
    b_y[n] = varargin_2[n];
  }

  for (n = 0; n < 9; n++) {
    x[n] = varargin_1[n];
  }

  if (varargin_1[1] < varargin_1[0]) {
    for (n = 0; n < 4; n++) {
      r = x[n];
      x[n] = x[8 - n];
      x[8 - n] = r;
    }

    for (j = 0; j < 60; j++) {
      offset = j * 9;
      for (n = 0; n < 4; n++) {
        r = b_y[offset + n];
        b_y[offset + n] = b_y[(offset - n) + 8];
        b_y[(offset - n) + 8] = r;
      }
    }
  }

  for (n = 0; n < 8; n++) {
    if (x[n + 1] <= x[n]) {
      b_st.site = &ij_emlrtRSI;
      e_error(&b_st);
    }
  }

  b_st.site = &jj_emlrtRSI;
  c_st.site = &kj_emlrtRSI;
  for (n = 0; n < 60; n++) {
    Vq[n] = 0.0;
  }

  if ((!(varargin_3 > x[8])) && (!(varargin_3 < x[0]))) {
    d_st.site = &lj_emlrtRSI;
    n = b_bsearch(x, varargin_3) - 1;
    r = (varargin_3 - x[n]) / (x[n + 1] - x[n]);
    if (r == 0.0) {
      for (j = 0; j < 60; j++) {
        Vq[j] = b_y[n + j * 9];
      }
    } else if (r == 1.0) {
      for (j = 0; j < 60; j++) {
        Vq[j] = b_y[(n + j * 9) + 1];
      }
    } else {
      for (j = 0; j < 60; j++) {
        if (b_y[n + j * 9] == b_y[(n + j * 9) + 1]) {
          Vq[j] = b_y[n + j * 9];
        } else {
          Vq[j] = (1.0 - r) * b_y[n + j * 9] + r * b_y[(n + j * 9) + 1];
        }
      }
    }
  }
}

static void e_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m8;
  static const int32_T iv18[2] = { 1, 35 };

  static char_T b_u[35] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', 'e', 'r', 'p', '1', '_', 'n', 'o', 'n',
    'M', 'o', 'n', 'o', 't', 'o', 'n', 'i', 'c', 'X' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m8 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(sp, 35, m8, &b_u[0]);
  emlrtAssign(&b_y, m8);
  st.site = &vk_emlrtRSI;
  g_error(&st, b_message(&st, b_y, &b_emlrtMCI), &b_emlrtMCI);
}

static int32_T b_bsearch(real_T x[9], real_T xi)
{
  int32_T n;
  int32_T low_ip1;
  int32_T high_i;
  emlrtStack st;
  int32_T mid_i;
  n = 1;
  low_ip1 = 1;
  high_i = 9;
  while (high_i > low_ip1 + 1) {
    st.site = &mj_emlrtRSI;
    mid_i = (n + high_i) >> 1;
    if (xi >= x[mid_i - 1]) {
      n = mid_i;
      low_ip1 = mid_i;
    } else {
      high_i = mid_i;
    }
  }

  return n;
}

static real_T b_interp1(const emlrtStack *sp, real_T varargin_1[9], real_T
  varargin_2[9], real_T varargin_3)
{
  real_T Vq;
  emlrtStack st;
  emlrtStack b_st;
  real_T b_y[9];
  real_T x[9];
  int32_T n;
  real_T r;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (n = 0; n < 9; n++) {
    b_y[n] = varargin_2[n];
    x[n] = varargin_1[n];
  }

  if (varargin_1[1] < varargin_1[0]) {
    for (n = 0; n < 4; n++) {
      r = x[n];
      x[n] = x[8 - n];
      x[8 - n] = r;
      r = b_y[n];
      b_y[n] = b_y[8 - n];
      b_y[8 - n] = r;
    }
  }

  for (n = 0; n < 8; n++) {
    if (x[n + 1] <= x[n]) {
      b_st.site = &ij_emlrtRSI;
      e_error(&b_st);
    }
  }

  b_st.site = &jj_emlrtRSI;
  c_st.site = &kj_emlrtRSI;
  Vq = 0.0;
  if ((!(varargin_3 > x[8])) && (!(varargin_3 < x[0]))) {
    d_st.site = &lj_emlrtRSI;
    n = b_bsearch(x, varargin_3) - 1;
    r = (varargin_3 - x[n]) / (x[n + 1] - x[n]);
    if (r == 0.0) {
      Vq = b_y[n];
    } else if (r == 1.0) {
      Vq = b_y[n + 1];
    } else if (b_y[n] == b_y[n + 1]) {
      Vq = b_y[n];
    } else {
      Vq = (1.0 - r) * b_y[n] + r * b_y[n + 1];
    }
  }

  return Vq;
}

static real_T bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, const
                     emlrtStack *sp, real_T coeff[22], real_T b_s)
{
  real_T fcn;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T k;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  fcn = 0.0;
  for (k = 0; k < 22; k++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    st.site = &nj_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, k ==
                   0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 3);
      b_st.site = &oj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 21.0, 0.0);
      b_st.site = &oj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y *= muDoubleScalarPower(1.0 - b_s, 21.0);
    } else if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0,
                          1, 21 == k)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 4);
      b_st.site = &pj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 21.0, 21.0);
      b_st.site = &pj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y *= muDoubleScalarPower(b_s, 21.0);
    } else {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 5);
      b_st.site = &qj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 21.0, (real_T)k);
      b_st.site = &qj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_st.site = &qj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y = b_y * muDoubleScalarPower(b_s, (real_T)k) * muDoubleScalarPower(1.0
        - b_s, 21.0 - (real_T)k);
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 6);
    fcn += coeff[k] * b_y;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
  return fcn;
}

static void f_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m9;
  static const int32_T iv19[2] = { 1, 27 };

  static char_T b_u[27] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'c', 'h',
    'o', 'o', 's', 'e', 'k', ':', 'K', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n',
    'g', 'e' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m9 = emlrtCreateCharArray(2, iv19);
  emlrtInitCharArrayR2013a(sp, 27, m9, &b_u[0]);
  emlrtAssign(&b_y, m9);
  st.site = &vk_emlrtRSI;
  g_error(&st, b_message(&st, b_y, &b_emlrtMCI), &b_emlrtMCI);
}

static real_T nCk(const emlrtStack *sp, real_T n, real_T k)
{
  real_T b_y;
  emlrtStack st;
  real_T nmk;
  int32_T j;
  st.prev = sp;
  st.tls = sp->tls;
  if (k > n / 2.0) {
    k = n - k;
  }

  if (k > 1000.0) {
    b_y = 1.7976931348623157E+308;
  } else {
    b_y = 1.0;
    nmk = n - k;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, k, mxDOUBLE_CLASS, (int32_T)k,
      &emlrtRTEI, sp);
    for (j = 0; j < (int32_T)k; j++) {
      b_y *= ((1.0 + (real_T)j) + nmk) / (1.0 + (real_T)j);
    }

    b_y = muDoubleScalarRound(b_y);
  }

  if (!(b_y <= 9.007199254740992E+15)) {
    st.site = &tj_emlrtRSI;
    c_warning(&st);
  }

  return b_y;
}

static void c_warning(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m10;
  static const int32_T iv20[2] = { 1, 7 };

  static char_T b_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c_y;
  static const int32_T iv21[2] = { 1, 7 };

  static char_T c_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *d_y;
  static const int32_T iv22[2] = { 1, 38 };

  static char_T msgID[38] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'n', 'c', 'h', 'o', 'o', 's', 'e', 'k', '_', 'L', 'a', 'r',
    'g', 'e', 'C', 'o', 'e', 'f', 'f', 'i', 'c', 'i', 'e', 'n', 't' };

  st.prev = sp;
  st.tls = sp->tls;
  b_y = NULL;
  m10 = emlrtCreateCharArray(2, iv20);
  emlrtInitCharArrayR2013a(sp, 7, m10, &b_u[0]);
  emlrtAssign(&b_y, m10);
  c_y = NULL;
  m10 = emlrtCreateCharArray(2, iv21);
  emlrtInitCharArrayR2013a(sp, 7, m10, &c_u[0]);
  emlrtAssign(&c_y, m10);
  d_y = NULL;
  m10 = emlrtCreateCharArray(2, iv22);
  emlrtInitCharArrayR2013a(sp, 38, m10, &msgID[0]);
  emlrtAssign(&d_y, m10);
  st.site = &xk_emlrtRSI;
  b_feval(&st, b_y, feval(&st, c_y, d_y, &c_emlrtMCI), &d_emlrtMCI);
}

static real_T dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      const emlrtStack *sp, real_T b_s)
{
  emlrtStack st;
  static real_T dv8[21] = { 0.0, 21.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  st.site = &uj_emlrtRSI;
  return b_bezier(moduleInstance, &st, dv8, b_s);
}

static real_T b_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[21], real_T b_s)
{
  real_T fcn;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T k;
  real_T b_y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  fcn = 0.0;
  for (k = 0; k < 21; k++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    st.site = &nj_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, k ==
                   0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 3);
      b_st.site = &oj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 20.0, 0.0);
      b_st.site = &oj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y *= muDoubleScalarPower(1.0 - b_s, 20.0);
    } else if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0,
                          1, 20 == k)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 4);
      b_st.site = &pj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 20.0, 20.0);
      b_st.site = &pj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y *= muDoubleScalarPower(b_s, 20.0);
    } else {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 5);
      b_st.site = &qj_emlrtRSI;
      c_st.site = &sj_emlrtRSI;
      b_y = nCk(&c_st, 20.0, (real_T)k);
      b_st.site = &qj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_st.site = &qj_emlrtRSI;
      c_st.site = &uh_emlrtRSI;
      b_y = b_y * muDoubleScalarPower(b_s, (real_T)k) * muDoubleScalarPower(1.0
        - b_s, 20.0 - (real_T)k);
    }

    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 6);
    fcn += coeff[k] * b_y;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
  return fcn;
}

static real_T c_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[6], real_T b_s)
{
  real_T fcn;
  emlrtStack st;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  fcn = 0.0;
  for (k = 0; k < 6; k++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    st.site = &nj_emlrtRSI;
    fcn += coeff[k] * singleterm_bezier(moduleInstance, &st, (real_T)k, b_s);
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
  return fcn;
}

static real_T singleterm_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T k, real_T b_s)
{
  real_T val;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_y;
  boolean_T p;
  const mxArray *c_y;
  const mxArray *m11;
  static const int32_T iv23[2] = { 1, 27 };

  static char_T b_u[27] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'c', 'h',
    'o', 'o', 's', 'e', 'k', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'A', 'r',
    'g', '2' };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, k ==
                 0.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 3);
    st.site = &oj_emlrtRSI;
    b_st.site = &sj_emlrtRSI;
    b_y = nCk(&b_st, 5.0, k);
    st.site = &oj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    val = b_y * muDoubleScalarPower(1.0 - b_s, 5.0);
  } else if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 1,
                        5.0 == k)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 4);
    st.site = &pj_emlrtRSI;
    b_st.site = &sj_emlrtRSI;
    b_y = nCk(&b_st, 5.0, 5.0);
    st.site = &pj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    val = b_y * muDoubleScalarPower(b_s, 5.0);
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 5);
    st.site = &qj_emlrtRSI;
    if ((k >= 0.0) && (k == muDoubleScalarFloor(k))) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      c_y = NULL;
      m11 = emlrtCreateCharArray(2, iv23);
      emlrtInitCharArrayR2013a(&st, 27, m11, &b_u[0]);
      emlrtAssign(&c_y, m11);
      b_st.site = &wk_emlrtRSI;
      g_error(&b_st, b_message(&b_st, c_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    if (k > 5.0) {
      b_st.site = &rj_emlrtRSI;
      f_error(&b_st);
    } else {
      b_st.site = &sj_emlrtRSI;
      b_y = nCk(&b_st, 5.0, k);
    }

    st.site = &qj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    if ((b_s < 0.0) && (muDoubleScalarFloor(k) != k)) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      c_st.site = &vh_emlrtRSI;
      error(&c_st);
    }

    st.site = &qj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    if ((1.0 - b_s < 0.0) && (muDoubleScalarFloor(5.0 - k) != 5.0 - k)) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      c_st.site = &vh_emlrtRSI;
      error(&c_st);
    }

    val = b_y * muDoubleScalarPower(b_s, k) * muDoubleScalarPower(1.0 - b_s, 5.0
      - k);
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 6);
  return val;
}

static real_T b_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T b_s)
{
  emlrtStack st;
  static real_T dv9[5] = { 0.0, 5.0, 0.0, 0.0, 0.0 };

  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  st.site = &uj_emlrtRSI;
  return d_bezier(moduleInstance, &st, dv9, b_s);
}

static real_T d_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[5], real_T b_s)
{
  real_T fcn;
  emlrtStack st;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  fcn = 0.0;
  for (k = 0; k < 5; k++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    st.site = &nj_emlrtRSI;
    fcn += coeff[k] * b_singleterm_bezier(moduleInstance, &st, (real_T)k, b_s);
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
  return fcn;
}

static real_T b_singleterm_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T k, real_T b_s)
{
  real_T val;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_y;
  boolean_T p;
  const mxArray *c_y;
  const mxArray *m12;
  static const int32_T iv24[2] = { 1, 27 };

  static char_T b_u[27] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'c', 'h',
    'o', 'o', 's', 'e', 'k', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'A', 'r',
    'g', '2' };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, k ==
                 0.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 3);
    st.site = &oj_emlrtRSI;
    b_st.site = &sj_emlrtRSI;
    b_y = nCk(&b_st, 4.0, k);
    st.site = &oj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    val = b_y * muDoubleScalarPower(1.0 - b_s, 4.0);
  } else if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 1,
                        4.0 == k)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 4);
    st.site = &pj_emlrtRSI;
    b_st.site = &sj_emlrtRSI;
    b_y = nCk(&b_st, 4.0, 4.0);
    st.site = &pj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    val = b_y * muDoubleScalarPower(b_s, 4.0);
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 5);
    st.site = &qj_emlrtRSI;
    if ((k >= 0.0) && (k == muDoubleScalarFloor(k))) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      c_y = NULL;
      m12 = emlrtCreateCharArray(2, iv24);
      emlrtInitCharArrayR2013a(&st, 27, m12, &b_u[0]);
      emlrtAssign(&c_y, m12);
      b_st.site = &wk_emlrtRSI;
      g_error(&b_st, b_message(&b_st, c_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    if (k > 4.0) {
      b_st.site = &rj_emlrtRSI;
      f_error(&b_st);
    } else {
      b_st.site = &sj_emlrtRSI;
      b_y = nCk(&b_st, 4.0, k);
    }

    st.site = &qj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    if ((b_s < 0.0) && (muDoubleScalarFloor(k) != k)) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      c_st.site = &vh_emlrtRSI;
      error(&c_st);
    }

    st.site = &qj_emlrtRSI;
    b_st.site = &uh_emlrtRSI;
    if ((1.0 - b_s < 0.0) && (muDoubleScalarFloor(4.0 - k) != 4.0 - k)) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      c_st.site = &vh_emlrtRSI;
      error(&c_st);
    }

    val = b_y * muDoubleScalarPower(b_s, k) * muDoubleScalarPower(1.0 - b_s, 4.0
      - k);
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 6);
  return val;
}

static real_T c_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[6], real_T b_s)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T A[30];
  int32_T i;
  real_T b_coeff[5];
  real_T b_y;
  real_T c_y;
  int32_T i7;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  st.site = &vj_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  for (i = 0; i < 30; i++) {
    A[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 1);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 5.0, (real_T)i);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    c_y = nCk(&c_st, 4.0, (real_T)i);
    A[i + 5 * i] = -(5.0 - (real_T)i) * b_y / c_y;
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 5.0, (real_T)i + 1.0);
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    c_y = nCk(&c_st, 4.0, (real_T)i);
    A[i + 5 * (i + 1)] = ((real_T)i + 1.0) * b_y / c_y;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 2);
  A[29] = 5.0;
  for (i = 0; i < 5; i++) {
    b_coeff[i] = 0.0;
    for (i7 = 0; i7 < 6; i7++) {
      b_coeff[i] += coeff[i7] * A[i + 5 * i7];
    }
  }

  st.site = &uj_emlrtRSI;
  return d_bezier(moduleInstance, &st, b_coeff, b_s);
}

static real_T d_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  const emlrtStack *sp, real_T coeff[22], real_T b_s)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T A[462];
  int32_T i;
  real_T b_coeff[21];
  real_T b_y;
  real_T c_y;
  int32_T i8;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  st.site = &vj_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  for (i = 0; i < 462; i++) {
    A[i] = 0.0;
  }

  for (i = 0; i < 21; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 1);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 21.0, (real_T)i);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    c_y = nCk(&c_st, 20.0, (real_T)i);
    A[i + 21 * i] = -(21.0 - (real_T)i) * b_y / c_y;
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 21.0, (real_T)i + 1.0);
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    c_y = nCk(&c_st, 20.0, (real_T)i);
    A[i + 21 * (i + 1)] = ((real_T)i + 1.0) * b_y / c_y;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 2);
  A[461] = 21.0;
  for (i = 0; i < 21; i++) {
    b_coeff[i] = 0.0;
    for (i8 = 0; i8 < 22; i8++) {
      b_coeff[i] += coeff[i8] * A[i + 21 * i8];
    }
  }

  st.site = &uj_emlrtRSI;
  return b_bezier(moduleInstance, &st, b_coeff, b_s);
}

static void FG_Controller_get_velocity_v3(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, FG_Controller *obj, real_T b_q[20],
  real_T b_dq[20], real_T *dqx, real_T *dqy, real_T *dqz)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  int8_T range[7];
  int32_T p1;
  real_T J[60];
  real_T c[9];
  real_T a[9];
  int32_T p2;
  real_T x[9];
  int32_T p3;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  const mxArray *b_y;
  real_T b_J[21];
  const mxArray *m13;
  static const int32_T iv25[2] = { 1, 6 };

  real_T c_dq[7];
  static char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c_y;
  real_T c_J[3];
  char_T cv1[14];
  real_T d_J[3];
  real_T e_J[3];
  real_T v_torso[3];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 36,
                 obj->stanceLeg == 1.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 63);
    for (p1 = 0; p1 < 7; p1++) {
      range[p1] = (int8_T)(14 + p1);
    }

    st.site = &yj_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 18, 1);
    J_RightToeBottomBack_src(J, b_q);
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 64);
    st.site = &ak_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 19, 1);
    J_LeftToeBottomBack_src(J, b_q);
    for (p1 = 0; p1 < 7; p1++) {
      range[p1] = (int8_T)(7 + p1);
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 65);
  st.site = &bk_emlrtRSI;
  for (p1 = 0; p1 < 3; p1++) {
    for (p2 = 0; p2 < 3; p2++) {
      a[p2 + 3 * p1] = J[p2 + 3 * p1];
    }
  }

  b_st.site = &ui_emlrtRSI;
  c_st.site = &vi_emlrtRSI;
  d_st.site = &wi_emlrtRSI;
  e_st.site = &xi_emlrtRSI;
  e_st.site = &yi_emlrtRSI;
  for (p1 = 0; p1 < 9; p1++) {
    x[p1] = a[p1];
  }

  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(J[0]);
  absx21 = muDoubleScalarAbs(J[1]);
  absx31 = muDoubleScalarAbs(J[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    x[0] = J[1];
    x[1] = J[0];
    x[3] = J[4];
    x[4] = J[3];
    x[6] = J[7];
    x[7] = J[6];
  } else {
    if (absx31 > absx11) {
      p1 = 7;
      p3 = 0;
      x[0] = J[2];
      x[2] = J[0];
      x[3] = J[5];
      x[5] = J[3];
      x[6] = J[8];
      x[8] = J[6];
    }
  }

  absx11 = x[1] / x[0];
  x[1] /= x[0];
  absx21 = x[2] / x[0];
  x[2] /= x[0];
  x[4] -= absx11 * x[3];
  x[5] -= absx21 * x[3];
  x[7] -= absx11 * x[6];
  x[8] -= absx21 * x[6];
  if (muDoubleScalarAbs(x[5]) > muDoubleScalarAbs(x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    x[1] = absx21;
    x[2] = absx11;
    absx11 = x[4];
    x[4] = x[5];
    x[5] = absx11;
    absx11 = x[7];
    x[7] = x[8];
    x[8] = absx11;
  }

  absx11 = x[5] / x[4];
  x[5] /= x[4];
  x[8] -= absx11 * x[7];
  absx11 = (x[5] * x[1] - x[2]) / x[8];
  absx21 = -(x[1] + x[7] * absx11) / x[4];
  c[p1 - 1] = ((1.0 - x[3] * absx21) - x[6] * absx11) / x[0];
  c[p1] = absx21;
  c[p1 + 1] = absx11;
  absx11 = -x[5] / x[8];
  absx21 = (1.0 - x[7] * absx11) / x[4];
  c[p2] = -(x[3] * absx21 + x[6] * absx11) / x[0];
  c[p2 + 1] = absx21;
  c[p2 + 2] = absx11;
  absx11 = 1.0 / x[8];
  absx21 = -x[7] * absx11 / x[4];
  c[p3] = -(x[3] * absx21 + x[6] * absx11) / x[0];
  c[p3 + 1] = absx21;
  c[p3 + 2] = absx11;
  f_st.site = &ck_emlrtRSI;
  absx11 = b_norm(a);
  absx21 = b_norm(c);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    g_st.site = &bj_emlrtRSI;
    warning(&g_st);
  } else {
    if (absx31 < 2.2204460492503131E-16) {
      g_st.site = &cj_emlrtRSI;
      b_y = NULL;
      m13 = emlrtCreateCharArray(2, iv25);
      emlrtInitCharArrayR2013a(&g_st, 6, m13, &rfmt[0]);
      emlrtAssign(&b_y, m13);
      c_y = NULL;
      m13 = emlrtCreateDoubleScalar(absx31);
      emlrtAssign(&c_y, m13);
      h_st.site = &yk_emlrtRSI;
      emlrt_marshallIn(&h_st, b_sprintf(&h_st, b_y, c_y, &e_emlrtMCI), "sprintf",
                       cv1);
      g_st.site = &cj_emlrtRSI;
      b_warning(&g_st, cv1);
    }
  }

  for (p1 = 0; p1 < 7; p1++) {
    for (p2 = 0; p2 < 3; p2++) {
      b_J[p2 + 3 * p1] = J[p2 + 3 * (range[p1] - 1)];
    }

    c_dq[p1] = b_dq[range[p1] - 1];
  }

  for (p1 = 0; p1 < 3; p1++) {
    c_J[p1] = 0.0;
    for (p2 = 0; p2 < 3; p2++) {
      c_J[p1] += J[p1 + 3 * (3 + p2)] * b_dq[3 + p2];
    }

    d_J[p1] = 0.0;
    for (p2 = 0; p2 < 7; p2++) {
      d_J[p1] += b_J[p1 + 3 * p2] * c_dq[p2];
    }

    for (p2 = 0; p2 < 3; p2++) {
      a[p2 + 3 * p1] = -c[p2 + 3 * p1];
    }

    e_J[p1] = c_J[p1] + d_J[p1];
  }

  for (p1 = 0; p1 < 3; p1++) {
    v_torso[p1] = 0.0;
    for (p2 = 0; p2 < 3; p2++) {
      v_torso[p1] += a[p1 + 3 * p2] * e_J[p2];
    }
  }

  *dqx = v_torso[0];
  *dqy = v_torso[1];
  *dqz = v_torso[2];
}

static real_T b_norm(real_T x[9])
{
  real_T b_y;
  int32_T j;
  real_T b_s;
  int32_T i;
  b_y = 0.0;
  for (j = 0; j < 3; j++) {
    b_s = 0.0;
    for (i = 0; i < 3; i++) {
      b_s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (b_s > b_y) {
      b_y = b_s;
    }
  }

  return b_y;
}

static void Rz(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, real_T
               b_theta, real_T R[9])
{
  int32_T i9;
  static int8_T iv26[3] = { 0, 0, 1 };

  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 20, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 20, 0);

  /*  Rotate theta radians about the z-axis */
  R[0] = muDoubleScalarCos(b_theta);
  R[3] = -muDoubleScalarSin(b_theta);
  R[6] = 0.0;
  R[1] = muDoubleScalarSin(b_theta);
  R[4] = muDoubleScalarCos(b_theta);
  R[7] = 0.0;
  for (i9 = 0; i9 < 3; i9++) {
    R[2 + 3 * i9] = (real_T)iv26[i9];
  }
}

static void get_feet_velocity(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T b_q[20], real_T b_dq[20], real_T b_l_foot_v[3], real_T
  b_r_foot_v[3])
{
  emlrtStack st;
  real_T JR[60];
  real_T JL[60];
  int32_T i10;
  int32_T i11;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 21, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 21, 0);
  st.site = &dk_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 13, 1);
  J_RightToeJoint_src(JR, b_q);
  st.site = &ek_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 14, 1);
  J_LeftToeJoint_src(JL, b_q);
  for (i10 = 0; i10 < 3; i10++) {
    b_r_foot_v[i10] = 0.0;
    b_l_foot_v[i10] = 0.0;
    for (i11 = 0; i11 < 20; i11++) {
      b_r_foot_v[i10] += JR[i10 + 3 * i11] * b_dq[i11];
      b_l_foot_v[i10] += JL[i10 + 3 * i11] * b_dq[i11];
    }
  }
}

static void get_feet_position(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, real_T b_q[20], real_T b_l_foot_p[3], real_T b_r_foot_p[3])
{
  emlrtStack st;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 22, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 22, 0);
  st.site = &fk_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 23, 1);
  RightToeJoint_src(b_r_foot_p, b_q);
  st.site = &gk_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 24, 1);
  LeftToeJoint_src(b_l_foot_p, b_q);
}

static void ComPosition(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T var1[20], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 25, 1);
  ComPosition_src(output1, var1);
}

static void ComVelocity(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T var1[20], real_T var2[20], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 26, 1);
  ComVelocity_src(output1, var1, var2);
}

static void e_bezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, const
                     emlrtStack *sp, real_T coeff[60], real_T b_s, real_T fcn[10])
{
  emlrtStack st;
  int32_T i;
  real_T b;
  int32_T i12;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  for (i = 0; i < 10; i++) {
    fcn[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    st.site = &nj_emlrtRSI;
    b = singleterm_bezier(moduleInstance, &st, (real_T)i, b_s);
    for (i12 = 0; i12 < 10; i12++) {
      fcn[i12] += coeff[i12 + 10 * i] * b;
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
}

static void e_dbezier(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      const emlrtStack *sp, real_T coeff[60], real_T b_s, real_T
                      fcn[10])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T A[30];
  int32_T i13;
  int32_T i;
  real_T b;
  real_T b_y;
  real_T dcoeff[50];
  int32_T i14;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 16, 0);
  st.site = &vj_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0);
  for (i13 = 0; i13 < 30; i13++) {
    A[i13] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 1);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b = nCk(&c_st, 5.0, (real_T)i);
    b_st.site = &wj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 4.0, (real_T)i);
    A[i + 5 * i] = -(5.0 - (real_T)i) * b / b_y;
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b = nCk(&c_st, 5.0, (real_T)i + 1.0);
    b_st.site = &xj_emlrtRSI;
    c_st.site = &sj_emlrtRSI;
    b_y = nCk(&c_st, 4.0, (real_T)i);
    A[i + 5 * (i + 1)] = ((real_T)i + 1.0) * b / b_y;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 17, 2);
  A[29] = 5.0;
  for (i13 = 0; i13 < 10; i13++) {
    for (i = 0; i < 5; i++) {
      dcoeff[i13 + 10 * i] = 0.0;
      for (i14 = 0; i14 < 6; i14++) {
        dcoeff[i13 + 10 * i] += coeff[i13 + 10 * i14] * A[i + 5 * i14];
      }
    }
  }

  st.site = &uj_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0);

  /* accepts S in row or column and returns an array of the same orientation */
  /* Bezier polynomials have m terms for m-1 order */
  for (i = 0; i < 10; i++) {
    fcn[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 1);
    b_st.site = &nj_emlrtRSI;
    b = b_singleterm_bezier(moduleInstance, &b_st, (real_T)i, b_s);
    for (i13 = 0; i13 < 10; i13++) {
      fcn[i13] += dcoeff[i13 + 10 * i] * b;
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 15, 2);
}

static real_T wrap2Pi(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
                      real_T angle)
{
  real_T wrapped_angle;
  real_T b_y;
  real_T c_y;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27, 0);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27, 0, 0, angle >
                 0.0)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27, 0);
    wrapped_angle = angle - 6.2831853071795862 * muDoubleScalarFloor((angle +
      3.1415926535897931) / 6.2831853071795862);
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 27, 1);
    b_y = (angle - 3.1415926535897931) / 6.2831853071795862;
    if (b_y < 0.0) {
      c_y = muDoubleScalarCeil(b_y);
    } else {
      c_y = rtNaN;
    }

    wrapped_angle = angle - 6.2831853071795862 * c_y;
  }

  return wrapped_angle;
}

static void FG_Controller_get_IK(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T hd_output[10], real_T
  dhd_output[10], real_T b_hd_joint[10], real_T b_dhd_joint[10])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  real_T minval;
  real_T b_minval;
  real_T d2;
  real_T d3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 70);
  st.site = &hk_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 9);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 71);
  for (i = 0; i < 10; i++) {
    b_hd_joint[i] = hd_output[i];
    b_dhd_joint[i] = dhd_output[i];
  }

  minval = muDoubleScalarMin(hd_output[3], 1.02);
  b_minval = muDoubleScalarMin(hd_output[8], 1.02);
  b_st.site = &ik_emlrtRSI;
  Inverse_Kinematics_p(moduleInstance, &b_st, hd_output[2], minval, &d2, &d3);
  b_hd_joint[2] = d2;
  b_hd_joint[3] = d3;
  b_st.site = &jk_emlrtRSI;
  Inverse_Kinematics_p(moduleInstance, &b_st, hd_output[7], b_minval, &d2, &d3);
  b_hd_joint[7] = d2;
  b_hd_joint[8] = d3;
  b_st.site = &kk_emlrtRSI;
  Inverse_Kinematics_v(moduleInstance, &b_st, minval, dhd_output[2], dhd_output
                       [3], &d2, &d3);
  b_dhd_joint[2] = d2;
  b_dhd_joint[3] = d3;
  b_st.site = &lk_emlrtRSI;
  Inverse_Kinematics_v(moduleInstance, &b_st, b_minval, dhd_output[7],
                       dhd_output[8], &d2, &d3);
  b_dhd_joint[7] = d2;
  b_dhd_joint[8] = d3;
}

static void Inverse_Kinematics_p(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T LA, real_T LL, real_T *qFlexion,
  real_T *qKnee)
{
  emlrtStack st;
  emlrtStack b_st;
  real_T b_t2;
  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28, 0);

  /* INVERSE_KINEMATICS_P */
  /*     [QFLEXION,QKNEE] = INVERSE_KINEMATICS_P(LA,LL) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     25-Jul-2017 14:50:50 */
  st.site = &mk_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  b_t2 = LL * LL;
  x = (b_t2 * 0.944822373393802 + 0.02839440665154953) / LL;
  st.site = &nk_emlrtRSI;
  if ((x < -1.0) || (x > 1.0)) {
    b_st.site = &mi_emlrtRSI;
    d_error(&b_st);
  }

  *qFlexion = (LA + muDoubleScalarAcos(x)) - 0.1;
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 28, 1);
  st.site = &ok_emlrtRSI;
  x = b_t2 * 1.8896447467876041 - 1.0016111866969011;
  if ((x < -1.0) || (x > 1.0)) {
    b_st.site = &mi_emlrtRSI;
    d_error(&b_st);
  }

  *qKnee = -muDoubleScalarAcos(x) - 0.035;
}

static void Inverse_Kinematics_v(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const emlrtStack *sp, real_T LL, real_T dLA, real_T dLL,
  real_T *dqFlexion, real_T *dqKnee)
{
  emlrtStack st;
  emlrtStack b_st;
  real_T b_t2;
  real_T t3;
  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29, 0);

  /* INVERSE_KINEMATICS_V */
  /*     [DQFLEXION,DQKNEE] = INVERSE_KINEMATICS_V(LA,LL,DLA,DLL) */
  /*     This function was generated by the Symbolic Math Toolbox version 7.1. */
  /*     25-Jul-2017 14:50:50 */
  st.site = &pk_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  b_t2 = 1.0 / (LL * LL);
  st.site = &qk_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  t3 = LL * LL;
  st.site = &rk_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  st.site = &rk_emlrtRSI;
  x = b_t2 * ((t3 + 0.030052640000000019) * (t3 + 0.030052640000000019)) *
    -0.89268931726549694 + 1.0;
  if (x < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  *dqFlexion = dLA + dLL / muDoubleScalarSqrt(x) * (b_t2 * (t3 +
    0.030052640000000019) * 0.944822373393802 - 1.8896447467876041);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29, 0, 0, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 29, 1);
  b_t2 = t3 * 1.8896447467876041 - 1.0016111866969011;
  st.site = &sk_emlrtRSI;
  b_st.site = &uh_emlrtRSI;
  b_t2 *= b_t2;
  st.site = &sk_emlrtRSI;
  if (-b_t2 + 1.0 < 0.0) {
    b_st.site = &ei_emlrtRSI;
    c_error(&b_st);
  }

  *dqKnee = LL * dLL / muDoubleScalarSqrt(-b_t2 + 1.0) * 3.7792894935752082;
}

static void clamp(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance, real_T
                  a[2], real_T lim1, real_T lim2, real_T b[2])
{
  real_T a_min;
  real_T a_max;
  int32_T k;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 30, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 30, 0);

  /* CLAMP Clamp value between two bounds. */
  /*  Find which limit is min and max */
  a_min = muDoubleScalarMin(lim1, lim2);
  a_max = muDoubleScalarMax(lim1, lim2);

  /*  Clamp value between limits */
  for (k = 0; k < 2; k++) {
    b[k] = muDoubleScalarMax(muDoubleScalarMin(a[k], a_max), a_min);
  }

  /*  clamp */
}

static void vector_saturate(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance,
  real_T b_u[10], real_T b1[10], real_T b2[10], real_T b_u_sat[10])
{
  int32_T i;
  real_T c_u[3];
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31, 0);

  /*  b1 < = > b2 are all fine, there is no specific lower bound or upper bound  */
  for (i = 0; i < 10; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31, 1);
    c_u[0] = b_u[i];
    c_u[1] = b1[i];
    c_u[2] = b2[i];
    b_u_sat[i] = median(c_u);
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 31, 0, 0, 0);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T b_y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, b_y);
  emlrtDestroyArray(&c_sprintf);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T b_y[14])
{
  m_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, b_y);
  emlrtDestroyArray(&b_u);
}

static void cgxe_mdl_start(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  FG_Controller *obj;
  const mxArray *b_y;
  boolean_T flag;
  const mxArray *m14;
  static const int32_T iv27[2] = { 1, 51 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv28[2] = { 1, 5 };

  static char_T c_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv29[2] = { 1, 44 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  real_T *b_Kp_pitch;
  real_T *b_Kd_pitch;
  real_T *b_Kp_roll;
  real_T *b_Kd_roll;
  real_T *b_Kp_yaw;
  real_T *b_Kd_yaw;
  real_T *b_Kp_abduction;
  real_T *b_Kp_rotation;
  real_T *b_Kp_thigh;
  real_T *b_Kp_knee;
  real_T *b_Kp_toe;
  real_T *b_Kd_abduction;
  real_T *b_Kd_rotation;
  real_T *b_Kd_thigh;
  real_T *b_Kd_knee;
  real_T *b_Kd_toe;
  real_T *b_Kfs_p;
  real_T *b_Kfl_p;
  real_T *b_Kfs_d;
  real_T *b_Kfl_d;
  real_T *b_Kp_toe_stand;
  real_T *b_Kd_toe_stand;
  real_T *b_Kp_lateral_stand;
  real_T *b_Kd_lateral_stand;
  real_T *b_Kp_abduction_stand;
  real_T *b_Kd_abduction_stand;
  real_T *b_Kp_thigh_stand;
  real_T *b_Kd_thigh_stand;
  real_T *b_Kp_knee_stand;
  real_T *b_Kd_knee_stand;
  real_T *b_Kp_rotation_stand;
  real_T *b_Kd_rotation_stand;
  real_T *b_fil_para_x;
  real_T *b_fil_para_y;
  real_T *b_stance_thre_ub;
  real_T *b_stance_thre_lb;
  real_T *b_lateral_velocity_weight;
  real_T *b_init_lateral_velocity;
  real_T *b_abduction_inward_gain;
  real_T *b_joint_filter_choice;
  real_T *b_shift_time;
  real_T *b_shift_distance;
  real_T *b_standing_switch_time;
  real_T *b_toe_tilt_angle;
  real_T *b_final_sw_abduction;
  real_T *b_final_st_abduction;
  real_T *b_pre_final_sw_abduction;
  real_T *b_sagittal_offset_exp;
  real_T *b_lateral_offset_exp;
  real_T *b_turning_offset_exp;
  real_T *b_stand_offset_exp;
  real_T *b_u_abduction_cp;
  real_T *b_u_abduction_swing_cp;
  real_T *b_u_thigh_cp;
  real_T *b_u_knee_cp;
  real_T *b_fil_para_2;
  real_T *b_fil_para_3;
  real_T *b_fil_para_4;
  real_T *b_fil_para_5;
  real_T *b_force_step_end_s;
  init_simulink_io_address(moduleInstance);
  b_force_step_end_s = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    59);
  b_fil_para_5 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 58);
  b_fil_para_4 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 57);
  b_fil_para_3 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 56);
  b_fil_para_2 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 55);
  b_u_knee_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 54);
  b_u_thigh_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 53);
  b_u_abduction_swing_cp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 52);
  b_u_abduction_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    51);
  b_stand_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    50);
  b_turning_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 49);
  b_lateral_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 48);
  b_sagittal_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 47);
  b_pre_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 46);
  b_final_st_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 45);
  b_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 44);
  b_toe_tilt_angle = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    43);
  b_standing_switch_time = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 42);
  b_shift_distance = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    41);
  b_shift_time = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 40);
  b_joint_filter_choice = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 39);
  b_abduction_inward_gain = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 38);
  b_init_lateral_velocity = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 37);
  b_lateral_velocity_weight = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 36);
  b_stance_thre_lb = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    35);
  b_stance_thre_ub = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    34);
  b_fil_para_y = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 33);
  b_fil_para_x = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 32);
  b_Kd_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 31);
  b_Kp_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 30);
  b_Kd_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    29);
  b_Kp_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    28);
  b_Kd_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    27);
  b_Kp_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    26);
  b_Kd_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 25);
  b_Kp_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 24);
  b_Kd_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    23);
  b_Kp_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    22);
  b_Kd_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 21);
  b_Kp_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 20);
  b_Kfl_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 19);
  b_Kfs_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 18);
  b_Kfl_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 17);
  b_Kfs_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 16);
  b_Kd_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 15);
  b_Kd_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 14);
  b_Kd_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 13);
  b_Kd_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 12);
  b_Kd_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 11);
  b_Kp_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  b_Kp_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  b_Kp_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  b_Kp_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  b_Kp_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  b_Kd_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  b_Kp_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  b_Kd_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  b_Kp_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  b_Kd_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_Kp_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    FG_Controller_FG_Controller(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_pitch = *b_Kp_pitch;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_pitch = *b_Kd_pitch;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_roll = *b_Kp_roll;
    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_roll = *b_Kd_roll;
    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_yaw = *b_Kp_yaw;
    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_yaw = *b_Kd_yaw;
    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction = *b_Kp_abduction;
    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation = *b_Kp_rotation;
    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh = *b_Kp_thigh;
    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee = *b_Kp_knee;
    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe = *b_Kp_toe;
    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction = *b_Kd_abduction;
    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation = *b_Kd_rotation;
    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh = *b_Kd_thigh;
    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee = *b_Kd_knee;
    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe = *b_Kd_toe;
    b_st.site = &x_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_p = *b_Kfs_p;
    b_st.site = &y_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_p = *b_Kfl_p;
    b_st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_d = *b_Kfs_d;
    b_st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_d = *b_Kfl_d;
    b_st.site = &cb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe_stand = *b_Kp_toe_stand;
    b_st.site = &db_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe_stand = *b_Kd_toe_stand;
    b_st.site = &eb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_lateral_stand = *b_Kp_lateral_stand;
    b_st.site = &fb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_lateral_stand = *b_Kd_lateral_stand;
    b_st.site = &gb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction_stand = *b_Kp_abduction_stand;
    b_st.site = &hb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction_stand = *b_Kd_abduction_stand;
    b_st.site = &ib_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh_stand = *b_Kp_thigh_stand;
    b_st.site = &jb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh_stand = *b_Kd_thigh_stand;
    b_st.site = &kb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee_stand = *b_Kp_knee_stand;
    b_st.site = &lb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee_stand = *b_Kd_knee_stand;
    b_st.site = &mb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation_stand = *b_Kp_rotation_stand;
    b_st.site = &nb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation_stand = *b_Kd_rotation_stand;
    b_st.site = &ob_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_x = *b_fil_para_x;
    b_st.site = &pb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_y = *b_fil_para_y;
    b_st.site = &qb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_ub = *b_stance_thre_ub;
    b_st.site = &rb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_lb = *b_stance_thre_lb;
    b_st.site = &sb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_velocity_weight = *b_lateral_velocity_weight;
    b_st.site = &tb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.init_lateral_velocity = *b_init_lateral_velocity;
    b_st.site = &ub_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.abduction_inward_gain = *b_abduction_inward_gain;
    b_st.site = &vb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.joint_filter_choice = *b_joint_filter_choice;
    b_st.site = &wb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_time = *b_shift_time;
    b_st.site = &xb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_distance = *b_shift_distance;
    b_st.site = &yb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.standing_switch_time = *b_standing_switch_time;
    b_st.site = &ac_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.toe_tilt_angle = *b_toe_tilt_angle;
    b_st.site = &bc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_sw_abduction = *b_final_sw_abduction;
    b_st.site = &cc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_st_abduction = *b_final_st_abduction;
    b_st.site = &dc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.pre_final_sw_abduction = *b_pre_final_sw_abduction;
    b_st.site = &ec_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.sagittal_offset_exp = *b_sagittal_offset_exp;
    b_st.site = &fc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_offset_exp = *b_lateral_offset_exp;
    b_st.site = &gc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.turning_offset_exp = *b_turning_offset_exp;
    b_st.site = &hc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stand_offset_exp = *b_stand_offset_exp;
    b_st.site = &ic_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_cp = *b_u_abduction_cp;
    b_st.site = &jc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_swing_cp = *b_u_abduction_swing_cp;
    b_st.site = &kc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_thigh_cp = *b_u_thigh_cp;
    b_st.site = &lc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_knee_cp = *b_u_knee_cp;
    b_st.site = &mc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_2 = *b_fil_para_2;
    b_st.site = &nc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_3 = *b_fil_para_3;
    b_st.site = &oc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_4 = *b_fil_para_4;
    b_st.site = &pc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_5 = *b_fil_para_5;
    b_st.site = &qc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.force_step_end_s = *b_force_step_end_s;
  }

  b_st.site = &rc_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    b_y = NULL;
    m14 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(&b_st, 51, m14, &b_u[0]);
    emlrtAssign(&b_y, m14);
    c_y = NULL;
    m14 = emlrtCreateCharArray(2, iv28);
    emlrtInitCharArrayR2013a(&b_st, 5, m14, &c_u[0]);
    emlrtAssign(&c_y, m14);
    g_error(&b_st, message(&b_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;

  /*         %% Default functions */
  /* SETUPIMPL Initialize System object. */
  c_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    b_y = NULL;
    m14 = emlrtCreateCharArray(2, iv29);
    emlrtInitCharArrayR2013a(&c_st, 44, m14, &d_u[0]);
    emlrtAssign(&b_y, m14);
    g_error(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  FG_Controller *obj;
  const mxArray *b_y;
  boolean_T tunablePropChangedBeforeResetImpl;
  const mxArray *m15;
  static const int32_T iv30[2] = { 1, 45 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv31[2] = { 1, 44 };

  const mxArray *c_y;
  static char_T c_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv32[2] = { 1, 5 };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  real_T *b_Kp_pitch;
  real_T *b_Kd_pitch;
  real_T *b_Kp_roll;
  real_T *b_Kd_roll;
  real_T *b_Kp_yaw;
  real_T *b_Kd_yaw;
  real_T *b_Kp_abduction;
  real_T *b_Kp_rotation;
  real_T *b_Kp_thigh;
  real_T *b_Kp_knee;
  real_T *b_Kp_toe;
  real_T *b_Kd_abduction;
  real_T *b_Kd_rotation;
  real_T *b_Kd_thigh;
  real_T *b_Kd_knee;
  real_T *b_Kd_toe;
  real_T *b_Kfs_p;
  real_T *b_Kfl_p;
  real_T *b_Kfs_d;
  real_T *b_Kfl_d;
  real_T *b_Kp_toe_stand;
  real_T *b_Kd_toe_stand;
  real_T *b_Kp_lateral_stand;
  real_T *b_Kd_lateral_stand;
  real_T *b_Kp_abduction_stand;
  real_T *b_Kd_abduction_stand;
  real_T *b_Kp_thigh_stand;
  real_T *b_Kd_thigh_stand;
  real_T *b_Kp_knee_stand;
  real_T *b_Kd_knee_stand;
  real_T *b_Kp_rotation_stand;
  real_T *b_Kd_rotation_stand;
  real_T *b_fil_para_x;
  real_T *b_fil_para_y;
  real_T *b_stance_thre_ub;
  real_T *b_stance_thre_lb;
  real_T *b_lateral_velocity_weight;
  real_T *b_init_lateral_velocity;
  real_T *b_abduction_inward_gain;
  real_T *b_joint_filter_choice;
  real_T *b_shift_time;
  real_T *b_shift_distance;
  real_T *b_standing_switch_time;
  real_T *b_toe_tilt_angle;
  real_T *b_final_sw_abduction;
  real_T *b_final_st_abduction;
  real_T *b_pre_final_sw_abduction;
  real_T *b_sagittal_offset_exp;
  real_T *b_lateral_offset_exp;
  real_T *b_turning_offset_exp;
  real_T *b_stand_offset_exp;
  real_T *b_u_abduction_cp;
  real_T *b_u_abduction_swing_cp;
  real_T *b_u_thigh_cp;
  real_T *b_u_knee_cp;
  real_T *b_fil_para_2;
  real_T *b_fil_para_3;
  real_T *b_fil_para_4;
  real_T *b_fil_para_5;
  real_T *b_force_step_end_s;
  b_force_step_end_s = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    59);
  b_fil_para_5 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 58);
  b_fil_para_4 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 57);
  b_fil_para_3 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 56);
  b_fil_para_2 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 55);
  b_u_knee_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 54);
  b_u_thigh_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 53);
  b_u_abduction_swing_cp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 52);
  b_u_abduction_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    51);
  b_stand_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    50);
  b_turning_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 49);
  b_lateral_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 48);
  b_sagittal_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 47);
  b_pre_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 46);
  b_final_st_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 45);
  b_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 44);
  b_toe_tilt_angle = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    43);
  b_standing_switch_time = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 42);
  b_shift_distance = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    41);
  b_shift_time = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 40);
  b_joint_filter_choice = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 39);
  b_abduction_inward_gain = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 38);
  b_init_lateral_velocity = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 37);
  b_lateral_velocity_weight = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 36);
  b_stance_thre_lb = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    35);
  b_stance_thre_ub = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    34);
  b_fil_para_y = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 33);
  b_fil_para_x = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 32);
  b_Kd_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 31);
  b_Kp_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 30);
  b_Kd_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    29);
  b_Kp_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    28);
  b_Kd_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    27);
  b_Kp_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    26);
  b_Kd_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 25);
  b_Kp_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 24);
  b_Kd_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    23);
  b_Kp_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    22);
  b_Kd_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 21);
  b_Kp_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 20);
  b_Kfl_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 19);
  b_Kfs_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 18);
  b_Kfl_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 17);
  b_Kfs_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 16);
  b_Kd_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 15);
  b_Kd_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 14);
  b_Kd_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 13);
  b_Kd_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 12);
  b_Kd_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 11);
  b_Kp_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  b_Kp_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  b_Kp_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  b_Kp_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  b_Kp_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  b_Kd_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  b_Kp_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  b_Kd_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  b_Kp_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  b_Kd_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_Kp_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    FG_Controller_FG_Controller(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_pitch = *b_Kp_pitch;
    b_st.site = &i_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_pitch = *b_Kd_pitch;
    b_st.site = &j_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_roll = *b_Kp_roll;
    b_st.site = &k_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_roll = *b_Kd_roll;
    b_st.site = &l_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_yaw = *b_Kp_yaw;
    b_st.site = &m_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_yaw = *b_Kd_yaw;
    b_st.site = &n_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction = *b_Kp_abduction;
    b_st.site = &o_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation = *b_Kp_rotation;
    b_st.site = &p_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh = *b_Kp_thigh;
    b_st.site = &q_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee = *b_Kp_knee;
    b_st.site = &r_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe = *b_Kp_toe;
    b_st.site = &s_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction = *b_Kd_abduction;
    b_st.site = &t_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation = *b_Kd_rotation;
    b_st.site = &u_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh = *b_Kd_thigh;
    b_st.site = &v_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee = *b_Kd_knee;
    b_st.site = &w_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe = *b_Kd_toe;
    b_st.site = &x_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_p = *b_Kfs_p;
    b_st.site = &y_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_p = *b_Kfl_p;
    b_st.site = &ab_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_d = *b_Kfs_d;
    b_st.site = &bb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_d = *b_Kfl_d;
    b_st.site = &cb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe_stand = *b_Kp_toe_stand;
    b_st.site = &db_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe_stand = *b_Kd_toe_stand;
    b_st.site = &eb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_lateral_stand = *b_Kp_lateral_stand;
    b_st.site = &fb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_lateral_stand = *b_Kd_lateral_stand;
    b_st.site = &gb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction_stand = *b_Kp_abduction_stand;
    b_st.site = &hb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction_stand = *b_Kd_abduction_stand;
    b_st.site = &ib_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh_stand = *b_Kp_thigh_stand;
    b_st.site = &jb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh_stand = *b_Kd_thigh_stand;
    b_st.site = &kb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee_stand = *b_Kp_knee_stand;
    b_st.site = &lb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee_stand = *b_Kd_knee_stand;
    b_st.site = &mb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation_stand = *b_Kp_rotation_stand;
    b_st.site = &nb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation_stand = *b_Kd_rotation_stand;
    b_st.site = &ob_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_x = *b_fil_para_x;
    b_st.site = &pb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_y = *b_fil_para_y;
    b_st.site = &qb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_ub = *b_stance_thre_ub;
    b_st.site = &rb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_lb = *b_stance_thre_lb;
    b_st.site = &sb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_velocity_weight = *b_lateral_velocity_weight;
    b_st.site = &tb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.init_lateral_velocity = *b_init_lateral_velocity;
    b_st.site = &ub_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.abduction_inward_gain = *b_abduction_inward_gain;
    b_st.site = &vb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.joint_filter_choice = *b_joint_filter_choice;
    b_st.site = &wb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_time = *b_shift_time;
    b_st.site = &xb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_distance = *b_shift_distance;
    b_st.site = &yb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.standing_switch_time = *b_standing_switch_time;
    b_st.site = &ac_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.toe_tilt_angle = *b_toe_tilt_angle;
    b_st.site = &bc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_sw_abduction = *b_final_sw_abduction;
    b_st.site = &cc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_st_abduction = *b_final_st_abduction;
    b_st.site = &dc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.pre_final_sw_abduction = *b_pre_final_sw_abduction;
    b_st.site = &ec_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.sagittal_offset_exp = *b_sagittal_offset_exp;
    b_st.site = &fc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_offset_exp = *b_lateral_offset_exp;
    b_st.site = &gc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.turning_offset_exp = *b_turning_offset_exp;
    b_st.site = &hc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stand_offset_exp = *b_stand_offset_exp;
    b_st.site = &ic_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_cp = *b_u_abduction_cp;
    b_st.site = &jc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_swing_cp = *b_u_abduction_swing_cp;
    b_st.site = &kc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_thigh_cp = *b_u_thigh_cp;
    b_st.site = &lc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_knee_cp = *b_u_knee_cp;
    b_st.site = &mc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_2 = *b_fil_para_2;
    b_st.site = &nc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_3 = *b_fil_para_3;
    b_st.site = &oc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_4 = *b_fil_para_4;
    b_st.site = &pc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_5 = *b_fil_para_5;
    b_st.site = &qc_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.force_step_end_s = *b_force_step_end_s;
  }

  b_st.site = &sc_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    b_y = NULL;
    m15 = emlrtCreateCharArray(2, iv30);
    emlrtInitCharArrayR2013a(&b_st, 45, m15, &b_u[0]);
    emlrtAssign(&b_y, m15);
    c_y = NULL;
    m15 = emlrtCreateCharArray(2, iv32);
    emlrtInitCharArrayR2013a(&b_st, 5, m15, &d_u[0]);
    emlrtAssign(&c_y, m15);
    g_error(&b_st, message(&b_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    b_y = NULL;
    m15 = emlrtCreateCharArray(2, iv31);
    emlrtInitCharArrayR2013a(&b_st, 44, m15, &c_u[0]);
    emlrtAssign(&b_y, m15);
    g_error(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI);
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  real_T varargin_61;
  real_T varargin_62_pelvis_radio_channel[16];
  int32_T i15;
  real_T varargin_62_pelvis_vectorNav_angularVelocity[3];
  real_T varargin_62_pelvis_vectorNav_orientation[4];
  real_T varargin_62_leftLeg_hipRollDrive_position;
  real_T varargin_62_leftLeg_hipRollDrive_velocity;
  real_T varargin_62_leftLeg_hipYawDrive_position;
  real_T varargin_62_leftLeg_hipYawDrive_velocity;
  real_T varargin_62_leftLeg_hipPitchDrive_position;
  real_T varargin_62_leftLeg_hipPitchDrive_velocity;
  real_T varargin_62_leftLeg_kneeDrive_position;
  real_T varargin_62_leftLeg_kneeDrive_velocity;
  real_T varargin_62_leftLeg_footDrive_position;
  real_T varargin_62_leftLeg_footDrive_velocity;
  real_T varargin_62_leftLeg_shinJoint_position;
  real_T varargin_62_leftLeg_shinJoint_velocity;
  real_T varargin_62_leftLeg_tarsusJoint_position;
  real_T varargin_62_leftLeg_tarsusJoint_velocity;
  real_T varargin_62_leftLeg_footJoint_position;
  real_T varargin_62_leftLeg_footJoint_velocity;
  real_T varargin_62_rightLeg_hipRollDrive_position;
  real_T varargin_62_rightLeg_hipRollDrive_velocity;
  real_T varargin_62_rightLeg_hipYawDrive_position;
  real_T varargin_62_rightLeg_hipYawDrive_velocity;
  real_T varargin_62_rightLeg_hipPitchDrive_position;
  real_T varargin_62_rightLeg_hipPitchDrive_velocity;
  real_T varargin_62_rightLeg_kneeDrive_position;
  real_T varargin_62_rightLeg_kneeDrive_velocity;
  real_T varargin_62_rightLeg_footDrive_position;
  real_T varargin_62_rightLeg_footDrive_velocity;
  real_T varargin_62_rightLeg_shinJoint_position;
  real_T varargin_62_rightLeg_shinJoint_velocity;
  real_T varargin_62_rightLeg_tarsusJoint_position;
  real_T varargin_62_rightLeg_tarsusJoint_velocity;
  real_T varargin_62_rightLeg_footJoint_position;
  real_T varargin_62_rightLeg_footJoint_velocity;
  boolean_T varargin_62_isCalibrated;
  boolean_T varargin_63;
  real_T varargin_64_RightStance_HAlpha[540];
  real_T varargin_64_LeftStance_HAlpha[540];
  real_T varargin_64_ct[9];
  real_T varargin_64_Velocity[18];
  real_T varargin_65[14];
  boolean_T flag;
  FG_Controller *obj;
  const mxArray *b_y;
  const mxArray *m16;
  static const int32_T iv33[2] = { 1, 45 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv34[2] = { 1, 4 };

  static const int32_T iv35[2] = { 1, 51 };

  static char_T c_u[4] = { 's', 't', 'e', 'p' };

  real_T varargout_1_torque[10];
  int16_T varargout_1_telemetry[9];
  real_T varargout_2_hd[10];
  real_T varargout_2_dhd[10];
  real_T varargout_2_h0[10];
  real_T varargout_2_dh0[10];
  real_T varargout_2_hd_fix[10];
  real_T varargout_2_dhd_fix[10];
  real_T varargout_2_h0_fix[10];
  real_T varargout_2_dh0_fix[10];
  real_T varargout_2_hd_joint[10];
  real_T varargout_2_dhd_joint[10];
  real_T varargout_2_h0_joint[10];
  real_T varargout_2_dh0_joint[10];
  real_T varargout_2_y[10];
  real_T varargout_2_dy[10];
  real_T varargout_2_y_joint[10];
  real_T varargout_2_dy_joint[10];
  real_T varargout_2_y1_joint;
  real_T varargout_2_y2_joint;
  real_T varargout_2_y3_joint;
  real_T varargout_2_y4_joint;
  real_T varargout_2_y5_joint;
  real_T varargout_2_y6_joint;
  real_T varargout_2_y7_joint;
  real_T varargout_2_y8_joint;
  real_T varargout_2_y9_joint;
  real_T varargout_2_y10_joint;
  real_T varargout_2_y_knee[2];
  real_T varargout_2_dy_knee[2];
  real_T varargout_2_LLd;
  real_T varargout_2_dLLd;
  real_T varargout_2_qKnee_d;
  real_T varargout_2_dqKnee_d;
  real_T varargout_2_qknee_d_L;
  real_T varargout_2_qknee_d_R;
  real_T varargout_2_left_tune;
  real_T varargout_2_right_tune;
  real_T varargout_2_LL0_R;
  real_T varargout_2_LL0_L;
  real_T varargout_2_y_output[4];
  real_T varargout_2_dy_output[4];
  real_T varargout_2_u_output[4];
  real_T varargout_2_lateral_mid_p;
  real_T varargout_2_lateral_mid_v;
  real_T varargout_2_LL_des_fil;
  real_T varargout_2_test;
  real_T varargout_2_task;
  real_T varargout_2_t;
  real_T varargout_2_q[26];
  real_T varargout_2_dq[26];
  real_T varargout_2_u[10];
  real_T varargout_2_u_sat[10];
  real_T varargout_2_u_fil[10];
  real_T varargout_2_stanceLeg;
  real_T varargout_2_s_sw;
  real_T varargout_2_s_st;
  real_T varargout_2_s;
  real_T varargout_2_ds;
  real_T varargout_2_encoder_fil[14];
  real_T varargout_2_d_torso_angle_fil[3];
  real_T varargout_2_tp_last;
  real_T varargout_2_avg_v_last_1;
  real_T varargout_2_avg_v_last_2;
  real_T varargout_2_theta;
  real_T varargout_2_dtheta;
  real_T varargout_2_theta_d;
  real_T varargout_2_dtheta_d;
  real_T varargout_2_GRF[2];
  real_T varargout_2_t0;
  real_T varargout_2_Switch;
  real_T varargout_2_spring_force_R[2];
  real_T varargout_2_spring_force_L[2];
  real_T varargout_2_torso_angle[3];
  real_T varargout_2_d_torso_angle[3];
  real_T varargout_2_id_torso_angle[3];
  real_T varargout_2_dd_torso_angle[3];
  real_T varargout_2_torso_position[3];
  real_T varargout_2_torso_velocity[3];
  real_T varargout_2_torso_velocity_fil[3];
  real_T varargout_2_torso_vx;
  real_T varargout_2_torso_vy;
  real_T varargout_2_torso_vz;
  real_T varargout_2_torso_vx_fil;
  real_T varargout_2_torso_vy_fil;
  real_T varargout_2_torso_vz_fil;
  real_T varargout_2_torso_vx_b;
  real_T varargout_2_torso_vy_b;
  real_T varargout_2_torso_vz_b;
  real_T varargout_2_torso_vx_b_fil;
  real_T varargout_2_torso_vy_b_fil;
  real_T varargout_2_torso_vz_b_fil;
  real_T varargout_2_tg_velocity_x;
  real_T varargout_2_com_pos[3];
  real_T varargout_2_com_vel[3];
  real_T varargout_2_com_vel_x;
  real_T varargout_2_com_vel_y;
  real_T varargout_2_com_vel_z;
  real_T varargout_2_com_vel_x_fil;
  real_T varargout_2_com_vel_y_fil;
  real_T varargout_2_com_vel_z_fil;
  real_T varargout_2_com_pos_x_fil;
  real_T varargout_2_com_pos_y_fil;
  real_T varargout_2_com_pos_z_fil;
  real_T varargout_2_com_pos_fil[3];
  real_T varargout_2_torso_vx_test;
  real_T varargout_2_torso_vy_test;
  real_T varargout_2_torso_vz_test;
  real_T varargout_2_torso_vx_b_test;
  real_T varargout_2_torso_vy_b_test;
  real_T varargout_2_torso_vz_b_test;
  real_T varargout_2_torso_vx_test_2;
  real_T varargout_2_torso_vy_test_2;
  real_T varargout_2_torso_vz_test_2;
  real_T varargout_2_torso_vx_b_test_2;
  real_T varargout_2_torso_vy_b_test_2;
  real_T varargout_2_torso_vz_b_test_2;
  real_T varargout_2_torso_vx_fil_test;
  real_T varargout_2_torso_vy_fil_test;
  real_T varargout_2_torso_vz_fil_test;
  real_T varargout_2_torso_vx_b_fil_test;
  real_T varargout_2_torso_vy_b_fil_test;
  real_T varargout_2_torso_vz_b_fil_test;
  real_T varargout_2_l_abduction_vx;
  real_T varargout_2_l_abduction_vy;
  real_T varargout_2_l_abduction_vz;
  real_T varargout_2_l_foot_vx;
  real_T varargout_2_l_foot_vy;
  real_T varargout_2_l_foot_vz;
  real_T varargout_2_l_foot_vx_b;
  real_T varargout_2_l_foot_vy_b;
  real_T varargout_2_l_foot_vz_b;
  real_T varargout_2_r_foot_v[3];
  real_T varargout_2_l_foot_v[3];
  real_T varargout_2_r_foot_p[3];
  real_T varargout_2_l_foot_p[3];
  real_T varargout_2_s_LR[2];
  real_T varargout_2_orient;
  real_T varargout_2_d_orient_test;
  real_T varargout_2_d_orient;
  real_T varargout_2_step_end_dx_fil_seq[3];
  real_T varargout_2_step_end_dy_fil_seq[3];
  real_T varargout_2_q_abduction_R;
  real_T varargout_2_q_rotation_R;
  real_T varargout_2_q_thigh_R;
  real_T varargout_2_q_thigh_knee_R;
  real_T varargout_2_q_knee_shin_R;
  real_T varargout_2_q_thigh_shin_R;
  real_T varargout_2_q_shin_tarsus_R;
  real_T varargout_2_q_toe_R;
  real_T varargout_2_q_abduction_L;
  real_T varargout_2_q_rotation_L;
  real_T varargout_2_q_thigh_L;
  real_T varargout_2_q_thigh_knee_L;
  real_T varargout_2_q_knee_shin_L;
  real_T varargout_2_q_thigh_shin_L;
  real_T varargout_2_q_shin_tarsus_L;
  real_T varargout_2_q_toe_L;
  real_T varargout_2_dq_abduction_R;
  real_T varargout_2_dq_rotation_R;
  real_T varargout_2_dq_thigh_R;
  real_T varargout_2_dq_thigh_knee_R;
  real_T varargout_2_dq_knee_shin_R;
  real_T varargout_2_dq_thigh_shin_R;
  real_T varargout_2_dq_shin_tarsus_R;
  real_T varargout_2_dq_toe_R;
  real_T varargout_2_dq_abduction_L;
  real_T varargout_2_dq_rotation_L;
  real_T varargout_2_dq_thigh_L;
  real_T varargout_2_dq_thigh_knee_L;
  real_T varargout_2_dq_knee_shin_L;
  real_T varargout_2_dq_thigh_shin_L;
  real_T varargout_2_dq_shin_tarsus_L;
  real_T varargout_2_dq_toe_L;
  real_T varargout_2_qall[20];
  real_T varargout_2_dqall[20];
  real_T varargout_2_qq[4];
  real_T varargout_2_qaR[5];
  real_T varargout_2_qjR[2];
  real_T varargout_2_qsR[2];
  real_T varargout_2_qaL[5];
  real_T varargout_2_qjL[2];
  real_T varargout_2_qsL[2];
  real_T varargout_2_dqq[3];
  real_T varargout_2_dqaR[5];
  real_T varargout_2_dqjR[2];
  real_T varargout_2_dqsR[2];
  real_T varargout_2_dqaL[5];
  real_T varargout_2_dqjL[2];
  real_T varargout_2_dqsL[2];
  real_T varargout_2_u_P[10];
  real_T varargout_2_u_D[10];
  real_T varargout_2_computer_time;
  static char_T d_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv36[2] = { 1, 5 };

  static const int32_T iv37[2] = { 1, 44 };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T f_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv38[2] = { 1, 44 };

  real_T *b_Kp_pitch;
  real_T *b_Kd_pitch;
  real_T *b_Kp_roll;
  real_T *b_Kd_roll;
  real_T *b_Kp_yaw;
  real_T *b_Kd_yaw;
  real_T *b_Kp_abduction;
  real_T *b_Kp_rotation;
  real_T *b_Kp_thigh;
  real_T *b_Kp_knee;
  real_T *b_Kp_toe;
  real_T *b_Kd_abduction;
  real_T *b_Kd_rotation;
  real_T *b_Kd_thigh;
  real_T *b_Kd_knee;
  real_T *b_Kd_toe;
  real_T *b_Kfs_p;
  real_T *b_Kfl_p;
  real_T *b_Kfs_d;
  real_T *b_Kfl_d;
  real_T *b_Kp_toe_stand;
  real_T *b_Kd_toe_stand;
  real_T *b_Kp_lateral_stand;
  real_T *b_Kd_lateral_stand;
  real_T *b_Kp_abduction_stand;
  real_T *b_Kd_abduction_stand;
  real_T *b_Kp_thigh_stand;
  real_T *b_Kd_thigh_stand;
  real_T *b_Kp_knee_stand;
  real_T *b_Kd_knee_stand;
  real_T *b_Kp_rotation_stand;
  real_T *b_Kd_rotation_stand;
  real_T *b_fil_para_x;
  real_T *b_fil_para_y;
  real_T *b_stance_thre_ub;
  real_T *b_stance_thre_lb;
  real_T *b_lateral_velocity_weight;
  real_T *b_init_lateral_velocity;
  real_T *b_abduction_inward_gain;
  real_T *b_joint_filter_choice;
  real_T *b_shift_time;
  real_T *b_shift_distance;
  real_T *b_standing_switch_time;
  real_T *b_toe_tilt_angle;
  real_T *b_final_sw_abduction;
  real_T *b_final_st_abduction;
  real_T *b_pre_final_sw_abduction;
  real_T *b_sagittal_offset_exp;
  real_T *b_lateral_offset_exp;
  real_T *b_turning_offset_exp;
  real_T *b_stand_offset_exp;
  real_T *b_u_abduction_cp;
  real_T *b_u_abduction_swing_cp;
  real_T *b_u_thigh_cp;
  real_T *b_u_knee_cp;
  real_T *b_fil_para_2;
  real_T *b_fil_para_3;
  real_T *b_fil_para_4;
  real_T *b_fil_para_5;
  real_T *b_force_step_end_s;
  b_force_step_end_s = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    59);
  b_fil_para_5 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 58);
  b_fil_para_4 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 57);
  b_fil_para_3 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 56);
  b_fil_para_2 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 55);
  b_u_knee_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 54);
  b_u_thigh_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 53);
  b_u_abduction_swing_cp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 52);
  b_u_abduction_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    51);
  b_stand_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    50);
  b_turning_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 49);
  b_lateral_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 48);
  b_sagittal_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 47);
  b_pre_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 46);
  b_final_st_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 45);
  b_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 44);
  b_toe_tilt_angle = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    43);
  b_standing_switch_time = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 42);
  b_shift_distance = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    41);
  b_shift_time = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 40);
  b_joint_filter_choice = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 39);
  b_abduction_inward_gain = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 38);
  b_init_lateral_velocity = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 37);
  b_lateral_velocity_weight = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 36);
  b_stance_thre_lb = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    35);
  b_stance_thre_ub = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    34);
  b_fil_para_y = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 33);
  b_fil_para_x = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 32);
  b_Kd_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 31);
  b_Kp_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 30);
  b_Kd_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    29);
  b_Kp_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    28);
  b_Kd_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    27);
  b_Kp_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    26);
  b_Kd_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 25);
  b_Kp_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 24);
  b_Kd_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    23);
  b_Kp_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    22);
  b_Kd_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 21);
  b_Kp_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 20);
  b_Kfl_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 19);
  b_Kfs_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 18);
  b_Kfl_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 17);
  b_Kfs_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 16);
  b_Kd_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 15);
  b_Kd_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 14);
  b_Kd_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 13);
  b_Kd_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 12);
  b_Kd_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 11);
  b_Kp_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  b_Kp_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  b_Kp_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  b_Kp_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  b_Kp_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  b_Kd_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  b_Kp_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  b_Kd_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  b_Kp_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  b_Kd_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_Kp_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  varargin_61 = *moduleInstance->u0;
  for (i15 = 0; i15 < 16; i15++) {
    varargin_62_pelvis_radio_channel[i15] = ((real_T *)&((char_T *)(RadioOutBus *)
      &((char_T *)(CassiePelvisOutBus *)&((char_T *)moduleInstance->u1)[0])[288])
      [8])[i15];
  }

  for (i15 = 0; i15 < 3; i15++) {
    varargin_62_pelvis_vectorNav_angularVelocity[i15] = ((real_T *)&((char_T *)
      (VectorNavOutBus *)&((char_T *)(CassiePelvisOutBus *)&((char_T *)
      moduleInstance->u1)[0])[424])[48])[i15];
  }

  for (i15 = 0; i15 < 4; i15++) {
    varargin_62_pelvis_vectorNav_orientation[i15] = ((real_T *)&((char_T *)
      (VectorNavOutBus *)&((char_T *)(CassiePelvisOutBus *)&((char_T *)
      moduleInstance->u1)[0])[424])[96])[i15];
  }

  varargin_62_leftLeg_hipRollDrive_position = *(real_T *)&((char_T *)(ElmoOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[0])[8];
  varargin_62_leftLeg_hipRollDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[0])
    [16];
  varargin_62_leftLeg_hipYawDrive_position = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[64])[8];
  varargin_62_leftLeg_hipYawDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[64])[16];
  varargin_62_leftLeg_hipPitchDrive_position = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [568])[128])[8];
  varargin_62_leftLeg_hipPitchDrive_velocity = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [568])[128])[16];
  varargin_62_leftLeg_kneeDrive_position = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[192])[8];
  varargin_62_leftLeg_kneeDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[192])
    [16];
  varargin_62_leftLeg_footDrive_position = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[256])[8];
  varargin_62_leftLeg_footDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[256])
    [16];
  varargin_62_leftLeg_shinJoint_position = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[320])[0];
  varargin_62_leftLeg_shinJoint_velocity = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[320])[8];
  varargin_62_leftLeg_tarsusJoint_position = *(real_T *)&((char_T *)(JointOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[336])
    [0];
  varargin_62_leftLeg_tarsusJoint_velocity = *(real_T *)&((char_T *)(JointOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[336])
    [8];
  varargin_62_leftLeg_footJoint_position = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[352])[0];
  varargin_62_leftLeg_footJoint_velocity = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[568])[352])[8];
  varargin_62_rightLeg_hipRollDrive_position = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [944])[0])[8];
  varargin_62_rightLeg_hipRollDrive_velocity = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [944])[0])[16];
  varargin_62_rightLeg_hipYawDrive_position = *(real_T *)&((char_T *)(ElmoOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[64])
    [8];
  varargin_62_rightLeg_hipYawDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus
    *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[64])
    [16];
  varargin_62_rightLeg_hipPitchDrive_position = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [944])[128])[8];
  varargin_62_rightLeg_hipPitchDrive_velocity = *(real_T *)&((char_T *)
    (ElmoOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                    [944])[128])[16];
  varargin_62_rightLeg_kneeDrive_position = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[192])[8];
  varargin_62_rightLeg_kneeDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[192])
    [16];
  varargin_62_rightLeg_footDrive_position = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[256])[8];
  varargin_62_rightLeg_footDrive_velocity = *(real_T *)&((char_T *)(ElmoOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[256])
    [16];
  varargin_62_rightLeg_shinJoint_position = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[320])[0];
  varargin_62_rightLeg_shinJoint_velocity = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[320])[8];
  varargin_62_rightLeg_tarsusJoint_position = *(real_T *)&((char_T *)
    (JointOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                     [944])[336])[0];
  varargin_62_rightLeg_tarsusJoint_velocity = *(real_T *)&((char_T *)
    (JointOutBus *)&((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)
                     [944])[336])[8];
  varargin_62_rightLeg_footJoint_position = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[352])[0];
  varargin_62_rightLeg_footJoint_velocity = *(real_T *)&((char_T *)(JointOutBus *)
    &((char_T *)(CassieLegOutBus *)&((char_T *)moduleInstance->u1)[944])[352])[8];
  varargin_62_isCalibrated = *(boolean_T *)&((char_T *)moduleInstance->u1)[1320];
  varargin_63 = *moduleInstance->u2;
  for (i15 = 0; i15 < 540; i15++) {
    varargin_64_RightStance_HAlpha[i15] = ((real_T *)&((char_T *)
      (slBus7_RightStance *)&((char_T *)moduleInstance->u3)[0])[0])[i15];
    varargin_64_LeftStance_HAlpha[i15] = ((real_T *)&((char_T *)
      (slBus8_LeftStance *)&((char_T *)moduleInstance->u3)[4320])[0])[i15];
  }

  for (i15 = 0; i15 < 9; i15++) {
    varargin_64_ct[i15] = ((real_T *)&((char_T *)moduleInstance->u3)[8784])[i15];
  }

  for (i15 = 0; i15 < 18; i15++) {
    varargin_64_Velocity[i15] = ((real_T *)&((char_T *)moduleInstance->u3)[8856])
      [i15];
  }

  for (i15 = 0; i15 < 14; i15++) {
    varargin_65[i15] = (*moduleInstance->u4)[i15];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    FG_Controller_FG_Controller(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_pitch = *b_Kp_pitch;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_pitch = *b_Kd_pitch;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_roll = *b_Kp_roll;
    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_roll = *b_Kd_roll;
    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_yaw = *b_Kp_yaw;
    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_yaw = *b_Kd_yaw;
    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction = *b_Kp_abduction;
    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation = *b_Kp_rotation;
    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh = *b_Kp_thigh;
    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee = *b_Kp_knee;
    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe = *b_Kp_toe;
    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction = *b_Kd_abduction;
    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation = *b_Kd_rotation;
    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh = *b_Kd_thigh;
    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee = *b_Kd_knee;
    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe = *b_Kd_toe;
    b_st.site = &x_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_p = *b_Kfs_p;
    b_st.site = &y_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_p = *b_Kfl_p;
    b_st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_d = *b_Kfs_d;
    b_st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_d = *b_Kfl_d;
    b_st.site = &cb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe_stand = *b_Kp_toe_stand;
    b_st.site = &db_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe_stand = *b_Kd_toe_stand;
    b_st.site = &eb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_lateral_stand = *b_Kp_lateral_stand;
    b_st.site = &fb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_lateral_stand = *b_Kd_lateral_stand;
    b_st.site = &gb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction_stand = *b_Kp_abduction_stand;
    b_st.site = &hb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction_stand = *b_Kd_abduction_stand;
    b_st.site = &ib_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh_stand = *b_Kp_thigh_stand;
    b_st.site = &jb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh_stand = *b_Kd_thigh_stand;
    b_st.site = &kb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee_stand = *b_Kp_knee_stand;
    b_st.site = &lb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee_stand = *b_Kd_knee_stand;
    b_st.site = &mb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation_stand = *b_Kp_rotation_stand;
    b_st.site = &nb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation_stand = *b_Kd_rotation_stand;
    b_st.site = &ob_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_x = *b_fil_para_x;
    b_st.site = &pb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_y = *b_fil_para_y;
    b_st.site = &qb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_ub = *b_stance_thre_ub;
    b_st.site = &rb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_lb = *b_stance_thre_lb;
    b_st.site = &sb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_velocity_weight = *b_lateral_velocity_weight;
    b_st.site = &tb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.init_lateral_velocity = *b_init_lateral_velocity;
    b_st.site = &ub_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.abduction_inward_gain = *b_abduction_inward_gain;
    b_st.site = &vb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.joint_filter_choice = *b_joint_filter_choice;
    b_st.site = &wb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_time = *b_shift_time;
    b_st.site = &xb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_distance = *b_shift_distance;
    b_st.site = &yb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.standing_switch_time = *b_standing_switch_time;
    b_st.site = &ac_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.toe_tilt_angle = *b_toe_tilt_angle;
    b_st.site = &bc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_sw_abduction = *b_final_sw_abduction;
    b_st.site = &cc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_st_abduction = *b_final_st_abduction;
    b_st.site = &dc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.pre_final_sw_abduction = *b_pre_final_sw_abduction;
    b_st.site = &ec_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.sagittal_offset_exp = *b_sagittal_offset_exp;
    b_st.site = &fc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_offset_exp = *b_lateral_offset_exp;
    b_st.site = &gc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.turning_offset_exp = *b_turning_offset_exp;
    b_st.site = &hc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stand_offset_exp = *b_stand_offset_exp;
    b_st.site = &ic_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_cp = *b_u_abduction_cp;
    b_st.site = &jc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_swing_cp = *b_u_abduction_swing_cp;
    b_st.site = &kc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_thigh_cp = *b_u_thigh_cp;
    b_st.site = &lc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_knee_cp = *b_u_knee_cp;
    b_st.site = &mc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_2 = *b_fil_para_2;
    b_st.site = &nc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_3 = *b_fil_para_3;
    b_st.site = &oc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_4 = *b_fil_para_4;
    b_st.site = &pc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_5 = *b_fil_para_5;
    b_st.site = &qc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.force_step_end_s = *b_force_step_end_s;
  }

  if (!isequal(moduleInstance->sysobj.Kp_pitch, *b_Kp_pitch)) {
    b_st.site = &tc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_pitch = *b_Kp_pitch;
  }

  if (!isequal(moduleInstance->sysobj.Kd_pitch, *b_Kd_pitch)) {
    b_st.site = &uc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_pitch = *b_Kd_pitch;
  }

  if (!isequal(moduleInstance->sysobj.Kp_roll, *b_Kp_roll)) {
    b_st.site = &vc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_roll = *b_Kp_roll;
  }

  if (!isequal(moduleInstance->sysobj.Kd_roll, *b_Kd_roll)) {
    b_st.site = &wc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_roll = *b_Kd_roll;
  }

  if (!isequal(moduleInstance->sysobj.Kp_yaw, *b_Kp_yaw)) {
    b_st.site = &xc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_yaw = *b_Kp_yaw;
  }

  if (!isequal(moduleInstance->sysobj.Kd_yaw, *b_Kd_yaw)) {
    b_st.site = &yc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_yaw = *b_Kd_yaw;
  }

  if (!isequal(moduleInstance->sysobj.Kp_abduction, *b_Kp_abduction)) {
    b_st.site = &ad_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction = *b_Kp_abduction;
  }

  if (!isequal(moduleInstance->sysobj.Kp_rotation, *b_Kp_rotation)) {
    b_st.site = &bd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation = *b_Kp_rotation;
  }

  if (!isequal(moduleInstance->sysobj.Kp_thigh, *b_Kp_thigh)) {
    b_st.site = &cd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh = *b_Kp_thigh;
  }

  if (!isequal(moduleInstance->sysobj.Kp_knee, *b_Kp_knee)) {
    b_st.site = &dd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee = *b_Kp_knee;
  }

  if (!isequal(moduleInstance->sysobj.Kp_toe, *b_Kp_toe)) {
    b_st.site = &ed_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe = *b_Kp_toe;
  }

  if (!isequal(moduleInstance->sysobj.Kd_abduction, *b_Kd_abduction)) {
    b_st.site = &fd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction = *b_Kd_abduction;
  }

  if (!isequal(moduleInstance->sysobj.Kd_rotation, *b_Kd_rotation)) {
    b_st.site = &gd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation = *b_Kd_rotation;
  }

  if (!isequal(moduleInstance->sysobj.Kd_thigh, *b_Kd_thigh)) {
    b_st.site = &hd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh = *b_Kd_thigh;
  }

  if (!isequal(moduleInstance->sysobj.Kd_knee, *b_Kd_knee)) {
    b_st.site = &id_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee = *b_Kd_knee;
  }

  if (!isequal(moduleInstance->sysobj.Kd_toe, *b_Kd_toe)) {
    b_st.site = &jd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe = *b_Kd_toe;
  }

  if (!isequal(moduleInstance->sysobj.Kfs_p, *b_Kfs_p)) {
    b_st.site = &kd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_p = *b_Kfs_p;
  }

  if (!isequal(moduleInstance->sysobj.Kfl_p, *b_Kfl_p)) {
    b_st.site = &ld_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_p = *b_Kfl_p;
  }

  if (!isequal(moduleInstance->sysobj.Kfs_d, *b_Kfs_d)) {
    b_st.site = &md_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_d = *b_Kfs_d;
  }

  if (!isequal(moduleInstance->sysobj.Kfl_d, *b_Kfl_d)) {
    b_st.site = &nd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_d = *b_Kfl_d;
  }

  if (!isequal(moduleInstance->sysobj.Kp_toe_stand, *b_Kp_toe_stand)) {
    b_st.site = &od_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe_stand = *b_Kp_toe_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_toe_stand, *b_Kd_toe_stand)) {
    b_st.site = &pd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe_stand = *b_Kd_toe_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kp_lateral_stand, *b_Kp_lateral_stand)) {
    b_st.site = &qd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_lateral_stand = *b_Kp_lateral_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_lateral_stand, *b_Kd_lateral_stand)) {
    b_st.site = &rd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_lateral_stand = *b_Kd_lateral_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kp_abduction_stand, *b_Kp_abduction_stand))
  {
    b_st.site = &sd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction_stand = *b_Kp_abduction_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_abduction_stand, *b_Kd_abduction_stand))
  {
    b_st.site = &td_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction_stand = *b_Kd_abduction_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kp_thigh_stand, *b_Kp_thigh_stand)) {
    b_st.site = &ud_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh_stand = *b_Kp_thigh_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_thigh_stand, *b_Kd_thigh_stand)) {
    b_st.site = &vd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh_stand = *b_Kd_thigh_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kp_knee_stand, *b_Kp_knee_stand)) {
    b_st.site = &wd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee_stand = *b_Kp_knee_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_knee_stand, *b_Kd_knee_stand)) {
    b_st.site = &xd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee_stand = *b_Kd_knee_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kp_rotation_stand, *b_Kp_rotation_stand))
  {
    b_st.site = &yd_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation_stand = *b_Kp_rotation_stand;
  }

  if (!isequal(moduleInstance->sysobj.Kd_rotation_stand, *b_Kd_rotation_stand))
  {
    b_st.site = &ae_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation_stand = *b_Kd_rotation_stand;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_x, *b_fil_para_x)) {
    b_st.site = &be_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_x = *b_fil_para_x;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_y, *b_fil_para_y)) {
    b_st.site = &ce_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_y = *b_fil_para_y;
  }

  if (!isequal(moduleInstance->sysobj.stance_thre_ub, *b_stance_thre_ub)) {
    b_st.site = &de_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_ub = *b_stance_thre_ub;
  }

  if (!isequal(moduleInstance->sysobj.stance_thre_lb, *b_stance_thre_lb)) {
    b_st.site = &ee_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_lb = *b_stance_thre_lb;
  }

  if (!isequal(moduleInstance->sysobj.lateral_velocity_weight,
               *b_lateral_velocity_weight)) {
    b_st.site = &fe_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_velocity_weight = *b_lateral_velocity_weight;
  }

  if (!isequal(moduleInstance->sysobj.init_lateral_velocity,
               *b_init_lateral_velocity)) {
    b_st.site = &ge_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.init_lateral_velocity = *b_init_lateral_velocity;
  }

  if (!isequal(moduleInstance->sysobj.abduction_inward_gain,
               *b_abduction_inward_gain)) {
    b_st.site = &he_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.abduction_inward_gain = *b_abduction_inward_gain;
  }

  if (!isequal(moduleInstance->sysobj.joint_filter_choice,
               *b_joint_filter_choice)) {
    b_st.site = &ie_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.joint_filter_choice = *b_joint_filter_choice;
  }

  if (!isequal(moduleInstance->sysobj.shift_time, *b_shift_time)) {
    b_st.site = &je_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_time = *b_shift_time;
  }

  if (!isequal(moduleInstance->sysobj.shift_distance, *b_shift_distance)) {
    b_st.site = &ke_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_distance = *b_shift_distance;
  }

  if (!isequal(moduleInstance->sysobj.standing_switch_time,
               *b_standing_switch_time)) {
    b_st.site = &le_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.standing_switch_time = *b_standing_switch_time;
  }

  if (!isequal(moduleInstance->sysobj.toe_tilt_angle, *b_toe_tilt_angle)) {
    b_st.site = &me_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.toe_tilt_angle = *b_toe_tilt_angle;
  }

  if (!isequal(moduleInstance->sysobj.final_sw_abduction, *b_final_sw_abduction))
  {
    b_st.site = &ne_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_sw_abduction = *b_final_sw_abduction;
  }

  if (!isequal(moduleInstance->sysobj.final_st_abduction, *b_final_st_abduction))
  {
    b_st.site = &oe_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_st_abduction = *b_final_st_abduction;
  }

  if (!isequal(moduleInstance->sysobj.pre_final_sw_abduction,
               *b_pre_final_sw_abduction)) {
    b_st.site = &pe_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.pre_final_sw_abduction = *b_pre_final_sw_abduction;
  }

  if (!isequal(moduleInstance->sysobj.sagittal_offset_exp,
               *b_sagittal_offset_exp)) {
    b_st.site = &qe_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.sagittal_offset_exp = *b_sagittal_offset_exp;
  }

  if (!isequal(moduleInstance->sysobj.lateral_offset_exp, *b_lateral_offset_exp))
  {
    b_st.site = &re_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_offset_exp = *b_lateral_offset_exp;
  }

  if (!isequal(moduleInstance->sysobj.turning_offset_exp, *b_turning_offset_exp))
  {
    b_st.site = &se_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.turning_offset_exp = *b_turning_offset_exp;
  }

  if (!isequal(moduleInstance->sysobj.stand_offset_exp, *b_stand_offset_exp)) {
    b_st.site = &te_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stand_offset_exp = *b_stand_offset_exp;
  }

  if (!isequal(moduleInstance->sysobj.u_abduction_cp, *b_u_abduction_cp)) {
    b_st.site = &ue_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_cp = *b_u_abduction_cp;
  }

  if (!isequal(moduleInstance->sysobj.u_abduction_swing_cp,
               *b_u_abduction_swing_cp)) {
    b_st.site = &ve_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_swing_cp = *b_u_abduction_swing_cp;
  }

  if (!isequal(moduleInstance->sysobj.u_thigh_cp, *b_u_thigh_cp)) {
    b_st.site = &we_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_thigh_cp = *b_u_thigh_cp;
  }

  if (!isequal(moduleInstance->sysobj.u_knee_cp, *b_u_knee_cp)) {
    b_st.site = &xe_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_knee_cp = *b_u_knee_cp;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_2, *b_fil_para_2)) {
    b_st.site = &ye_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_2 = *b_fil_para_2;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_3, *b_fil_para_3)) {
    b_st.site = &af_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_3 = *b_fil_para_3;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_4, *b_fil_para_4)) {
    b_st.site = &bf_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_4 = *b_fil_para_4;
  }

  if (!isequal(moduleInstance->sysobj.fil_para_5, *b_fil_para_5)) {
    b_st.site = &cf_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_5 = *b_fil_para_5;
  }

  if (!isequal(moduleInstance->sysobj.force_step_end_s, *b_force_step_end_s)) {
    b_st.site = &df_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.force_step_end_s = *b_force_step_end_s;
  }

  b_st.site = &ef_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    b_y = NULL;
    m16 = emlrtCreateCharArray(2, iv33);
    emlrtInitCharArrayR2013a(&b_st, 45, m16, &b_u[0]);
    emlrtAssign(&b_y, m16);
    c_y = NULL;
    m16 = emlrtCreateCharArray(2, iv34);
    emlrtInitCharArrayR2013a(&b_st, 4, m16, &c_u[0]);
    emlrtAssign(&c_y, m16);
    g_error(&b_st, message(&b_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    c_st.site = &d_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    if (obj->isInitialized != 0) {
      b_y = NULL;
      m16 = emlrtCreateCharArray(2, iv35);
      emlrtInitCharArrayR2013a(&d_st, 51, m16, &d_u[0]);
      emlrtAssign(&b_y, m16);
      c_y = NULL;
      m16 = emlrtCreateCharArray(2, iv36);
      emlrtInitCharArrayR2013a(&d_st, 5, m16, &e_u[0]);
      emlrtAssign(&c_y, m16);
      g_error(&d_st, message(&d_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;

    /*         %% Default functions */
    /* SETUPIMPL Initialize System object. */
    e_st.site = &d_emlrtRSI;
    if (obj->TunablePropsChanged) {
      b_y = NULL;
      m16 = emlrtCreateCharArray(2, iv38);
      emlrtInitCharArrayR2013a(&e_st, 44, m16, &f_u[0]);
      emlrtAssign(&b_y, m16);
      g_error(&e_st, b_message(&e_st, b_y, &emlrtMCI), &emlrtMCI);
    }

    obj->TunablePropsChanged = false;

    /*  setupImpl */
    /* RESETIMPL Reset System object states. */
  }

  c_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  c_st.site = &d_emlrtRSI;
  FG_Controller_stepImpl(moduleInstance, &c_st, obj, varargin_61,
    varargin_62_pelvis_radio_channel,
    varargin_62_pelvis_vectorNav_angularVelocity,
    varargin_62_pelvis_vectorNav_orientation,
    varargin_62_leftLeg_hipRollDrive_position,
    varargin_62_leftLeg_hipRollDrive_velocity,
    varargin_62_leftLeg_hipYawDrive_position,
    varargin_62_leftLeg_hipYawDrive_velocity,
    varargin_62_leftLeg_hipPitchDrive_position,
    varargin_62_leftLeg_hipPitchDrive_velocity,
    varargin_62_leftLeg_kneeDrive_position,
    varargin_62_leftLeg_kneeDrive_velocity,
    varargin_62_leftLeg_footDrive_position,
    varargin_62_leftLeg_footDrive_velocity,
    varargin_62_leftLeg_shinJoint_position,
    varargin_62_leftLeg_shinJoint_velocity,
    varargin_62_leftLeg_tarsusJoint_position,
    varargin_62_leftLeg_tarsusJoint_velocity,
    varargin_62_leftLeg_footJoint_position,
    varargin_62_leftLeg_footJoint_velocity,
    varargin_62_rightLeg_hipRollDrive_position,
    varargin_62_rightLeg_hipRollDrive_velocity,
    varargin_62_rightLeg_hipYawDrive_position,
    varargin_62_rightLeg_hipYawDrive_velocity,
    varargin_62_rightLeg_hipPitchDrive_position,
    varargin_62_rightLeg_hipPitchDrive_velocity,
    varargin_62_rightLeg_kneeDrive_position,
    varargin_62_rightLeg_kneeDrive_velocity,
    varargin_62_rightLeg_footDrive_position,
    varargin_62_rightLeg_footDrive_velocity,
    varargin_62_rightLeg_shinJoint_position,
    varargin_62_rightLeg_shinJoint_velocity,
    varargin_62_rightLeg_tarsusJoint_position,
    varargin_62_rightLeg_tarsusJoint_velocity,
    varargin_62_rightLeg_footJoint_position,
    varargin_62_rightLeg_footJoint_velocity, varargin_62_isCalibrated,
    varargin_63, varargin_64_RightStance_HAlpha, varargin_64_LeftStance_HAlpha,
    varargin_64_ct, varargin_64_Velocity, varargin_65, varargout_1_torque,
    varargout_1_telemetry, varargout_2_hd, varargout_2_dhd, varargout_2_h0,
    varargout_2_dh0, varargout_2_hd_fix, varargout_2_dhd_fix, varargout_2_h0_fix,
    varargout_2_dh0_fix, varargout_2_hd_joint, varargout_2_dhd_joint,
    varargout_2_h0_joint, varargout_2_dh0_joint, varargout_2_y, varargout_2_dy,
    varargout_2_y_joint, varargout_2_dy_joint, &varargout_2_y1_joint,
    &varargout_2_y2_joint, &varargout_2_y3_joint, &varargout_2_y4_joint,
    &varargout_2_y5_joint, &varargout_2_y6_joint, &varargout_2_y7_joint,
    &varargout_2_y8_joint, &varargout_2_y9_joint, &varargout_2_y10_joint,
    varargout_2_y_knee, varargout_2_dy_knee, &varargout_2_LLd, &varargout_2_dLLd,
    &varargout_2_qKnee_d, &varargout_2_dqKnee_d, &varargout_2_qknee_d_L,
    &varargout_2_qknee_d_R, &varargout_2_left_tune, &varargout_2_right_tune,
    &varargout_2_LL0_R, &varargout_2_LL0_L, varargout_2_y_output,
    varargout_2_dy_output, varargout_2_u_output, &varargout_2_lateral_mid_p,
    &varargout_2_lateral_mid_v, &varargout_2_LL_des_fil, &varargout_2_test,
    &varargout_2_task, &varargout_2_t, varargout_2_q, varargout_2_dq,
    varargout_2_u, varargout_2_u_sat, varargout_2_u_fil, &varargout_2_stanceLeg,
    &varargout_2_s_sw, &varargout_2_s_st, &varargout_2_s, &varargout_2_ds,
    varargout_2_encoder_fil, varargout_2_d_torso_angle_fil, &varargout_2_tp_last,
    &varargout_2_avg_v_last_1, &varargout_2_avg_v_last_2, &varargout_2_theta,
    &varargout_2_dtheta, &varargout_2_theta_d, &varargout_2_dtheta_d,
    varargout_2_GRF, &varargout_2_t0, &varargout_2_Switch,
    varargout_2_spring_force_R, varargout_2_spring_force_L,
    varargout_2_torso_angle, varargout_2_d_torso_angle,
    varargout_2_id_torso_angle, varargout_2_dd_torso_angle,
    varargout_2_torso_position, varargout_2_torso_velocity,
    varargout_2_torso_velocity_fil, &varargout_2_torso_vx, &varargout_2_torso_vy,
    &varargout_2_torso_vz, &varargout_2_torso_vx_fil, &varargout_2_torso_vy_fil,
    &varargout_2_torso_vz_fil, &varargout_2_torso_vx_b, &varargout_2_torso_vy_b,
    &varargout_2_torso_vz_b, &varargout_2_torso_vx_b_fil,
    &varargout_2_torso_vy_b_fil, &varargout_2_torso_vz_b_fil,
    &varargout_2_tg_velocity_x, varargout_2_com_pos, varargout_2_com_vel,
    &varargout_2_com_vel_x, &varargout_2_com_vel_y, &varargout_2_com_vel_z,
    &varargout_2_com_vel_x_fil, &varargout_2_com_vel_y_fil,
    &varargout_2_com_vel_z_fil, &varargout_2_com_pos_x_fil,
    &varargout_2_com_pos_y_fil, &varargout_2_com_pos_z_fil,
    varargout_2_com_pos_fil, &varargout_2_torso_vx_test,
    &varargout_2_torso_vy_test, &varargout_2_torso_vz_test,
    &varargout_2_torso_vx_b_test, &varargout_2_torso_vy_b_test,
    &varargout_2_torso_vz_b_test, &varargout_2_torso_vx_test_2,
    &varargout_2_torso_vy_test_2, &varargout_2_torso_vz_test_2,
    &varargout_2_torso_vx_b_test_2, &varargout_2_torso_vy_b_test_2,
    &varargout_2_torso_vz_b_test_2, &varargout_2_torso_vx_fil_test,
    &varargout_2_torso_vy_fil_test, &varargout_2_torso_vz_fil_test,
    &varargout_2_torso_vx_b_fil_test, &varargout_2_torso_vy_b_fil_test,
    &varargout_2_torso_vz_b_fil_test, &varargout_2_l_abduction_vx,
    &varargout_2_l_abduction_vy, &varargout_2_l_abduction_vz,
    &varargout_2_l_foot_vx, &varargout_2_l_foot_vy, &varargout_2_l_foot_vz,
    &varargout_2_l_foot_vx_b, &varargout_2_l_foot_vy_b, &varargout_2_l_foot_vz_b,
    varargout_2_r_foot_v, varargout_2_l_foot_v, varargout_2_r_foot_p,
    varargout_2_l_foot_p, varargout_2_s_LR, &varargout_2_orient,
    &varargout_2_d_orient_test, &varargout_2_d_orient,
    varargout_2_step_end_dx_fil_seq, varargout_2_step_end_dy_fil_seq,
    &varargout_2_q_abduction_R, &varargout_2_q_rotation_R,
    &varargout_2_q_thigh_R, &varargout_2_q_thigh_knee_R,
    &varargout_2_q_knee_shin_R, &varargout_2_q_thigh_shin_R,
    &varargout_2_q_shin_tarsus_R, &varargout_2_q_toe_R,
    &varargout_2_q_abduction_L, &varargout_2_q_rotation_L,
    &varargout_2_q_thigh_L, &varargout_2_q_thigh_knee_L,
    &varargout_2_q_knee_shin_L, &varargout_2_q_thigh_shin_L,
    &varargout_2_q_shin_tarsus_L, &varargout_2_q_toe_L,
    &varargout_2_dq_abduction_R, &varargout_2_dq_rotation_R,
    &varargout_2_dq_thigh_R, &varargout_2_dq_thigh_knee_R,
    &varargout_2_dq_knee_shin_R, &varargout_2_dq_thigh_shin_R,
    &varargout_2_dq_shin_tarsus_R, &varargout_2_dq_toe_R,
    &varargout_2_dq_abduction_L, &varargout_2_dq_rotation_L,
    &varargout_2_dq_thigh_L, &varargout_2_dq_thigh_knee_L,
    &varargout_2_dq_knee_shin_L, &varargout_2_dq_thigh_shin_L,
    &varargout_2_dq_shin_tarsus_L, &varargout_2_dq_toe_L, varargout_2_qall,
    varargout_2_dqall, varargout_2_qq, varargout_2_qaR, varargout_2_qjR,
    varargout_2_qsR, varargout_2_qaL, varargout_2_qjL, varargout_2_qsL,
    varargout_2_dqq, varargout_2_dqaR, varargout_2_dqjR, varargout_2_dqsR,
    varargout_2_dqaL, varargout_2_dqjL, varargout_2_dqsL, varargout_2_u_P,
    varargout_2_u_D, &varargout_2_computer_time);
  c_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    b_y = NULL;
    m16 = emlrtCreateCharArray(2, iv37);
    emlrtInitCharArrayR2013a(&c_st, 44, m16, &f_u[0]);
    emlrtAssign(&b_y, m16);
    g_error(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI);
  }

  for (i15 = 0; i15 < 10; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y0)[0])[i15] =
      varargout_1_torque[i15];
  }

  for (i15 = 0; i15 < 9; i15++) {
    ((int16_T *)&((char_T *)moduleInstance->b_y0)[80])[i15] =
      varargout_1_telemetry[i15];
  }

  for (i15 = 0; i15 < 10; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[0])[i15] = varargout_2_hd[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[80])[i15] = varargout_2_dhd[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[160])[i15] = varargout_2_h0[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[240])[i15] =
      varargout_2_dh0[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[320])[i15] =
      varargout_2_hd_fix[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[400])[i15] =
      varargout_2_dhd_fix[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[480])[i15] =
      varargout_2_h0_fix[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[560])[i15] =
      varargout_2_dh0_fix[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[640])[i15] =
      varargout_2_hd_joint[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[720])[i15] =
      varargout_2_dhd_joint[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[800])[i15] =
      varargout_2_h0_joint[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[880])[i15] =
      varargout_2_dh0_joint[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[960])[i15] = varargout_2_y[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1040])[i15] =
      varargout_2_dy[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1120])[i15] =
      varargout_2_y_joint[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1200])[i15] =
      varargout_2_dy_joint[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[1280] = varargout_2_y1_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1288] = varargout_2_y2_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1296] = varargout_2_y3_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1304] = varargout_2_y4_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1312] = varargout_2_y5_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1320] = varargout_2_y6_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1328] = varargout_2_y7_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1336] = varargout_2_y8_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1344] = varargout_2_y9_joint;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1352] = varargout_2_y10_joint;
  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1360])[i15] =
      varargout_2_y_knee[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1376])[i15] =
      varargout_2_dy_knee[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[1392] = varargout_2_LLd;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1400] = varargout_2_dLLd;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1408] = varargout_2_qKnee_d;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1416] = varargout_2_dqKnee_d;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1424] = varargout_2_qknee_d_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1432] = varargout_2_qknee_d_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1440] = varargout_2_left_tune;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1448] = varargout_2_right_tune;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1456] = varargout_2_LL0_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1464] = varargout_2_LL0_L;
  for (i15 = 0; i15 < 4; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1472])[i15] =
      varargout_2_y_output[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1504])[i15] =
      varargout_2_dy_output[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1536])[i15] =
      varargout_2_u_output[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[1568] = varargout_2_lateral_mid_p;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1576] = varargout_2_lateral_mid_v;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1584] = varargout_2_LL_des_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1592] = varargout_2_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1600] = varargout_2_task;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[1608] = varargout_2_t;
  for (i15 = 0; i15 < 26; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1616])[i15] = varargout_2_q[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[1824])[i15] =
      varargout_2_dq[i15];
  }

  for (i15 = 0; i15 < 10; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2032])[i15] = varargout_2_u[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2112])[i15] =
      varargout_2_u_sat[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2192])[i15] =
      varargout_2_u_fil[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[2272] = varargout_2_stanceLeg;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2280] = varargout_2_s_sw;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2288] = varargout_2_s_st;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2296] = varargout_2_s;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2304] = varargout_2_ds;
  for (i15 = 0; i15 < 14; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2312])[i15] =
      varargout_2_encoder_fil[i15];
  }

  for (i15 = 0; i15 < 3; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2424])[i15] =
      varargout_2_d_torso_angle_fil[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[2448] = varargout_2_tp_last;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2456] = varargout_2_avg_v_last_1;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2464] = varargout_2_avg_v_last_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2472] = varargout_2_theta;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2480] = varargout_2_dtheta;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2488] = varargout_2_theta_d;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2496] = varargout_2_dtheta_d;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2520] = varargout_2_t0;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2528] = varargout_2_Switch;
  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2504])[i15] =
      varargout_2_GRF[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2536])[i15] =
      varargout_2_spring_force_R[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2552])[i15] =
      varargout_2_spring_force_L[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[2736] = varargout_2_torso_vx;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2744] = varargout_2_torso_vy;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2752] = varargout_2_torso_vz;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2760] = varargout_2_torso_vx_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2768] = varargout_2_torso_vy_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2776] = varargout_2_torso_vz_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2784] = varargout_2_torso_vx_b;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2792] = varargout_2_torso_vy_b;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2800] = varargout_2_torso_vz_b;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2808] =
    varargout_2_torso_vx_b_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2816] =
    varargout_2_torso_vy_b_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2824] =
    varargout_2_torso_vz_b_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2832] = varargout_2_tg_velocity_x;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2888] = varargout_2_com_vel_x;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2896] = varargout_2_com_vel_y;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2904] = varargout_2_com_vel_z;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2912] = varargout_2_com_vel_x_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2920] = varargout_2_com_vel_y_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2928] = varargout_2_com_vel_z_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2936] = varargout_2_com_pos_x_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2944] = varargout_2_com_pos_y_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2952] = varargout_2_com_pos_z_fil;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2984] = varargout_2_torso_vx_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[2992] = varargout_2_torso_vy_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3000] = varargout_2_torso_vz_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3008] =
    varargout_2_torso_vx_b_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3016] =
    varargout_2_torso_vy_b_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3024] =
    varargout_2_torso_vz_b_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3032] =
    varargout_2_torso_vx_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3040] =
    varargout_2_torso_vy_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3048] =
    varargout_2_torso_vz_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3056] =
    varargout_2_torso_vx_b_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3064] =
    varargout_2_torso_vy_b_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3072] =
    varargout_2_torso_vz_b_test_2;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3080] =
    varargout_2_torso_vx_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3088] =
    varargout_2_torso_vy_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3096] =
    varargout_2_torso_vz_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3104] =
    varargout_2_torso_vx_b_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3112] =
    varargout_2_torso_vy_b_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3120] =
    varargout_2_torso_vz_b_fil_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3128] =
    varargout_2_l_abduction_vx;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3136] =
    varargout_2_l_abduction_vy;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3144] =
    varargout_2_l_abduction_vz;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3152] = varargout_2_l_foot_vx;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3160] = varargout_2_l_foot_vy;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3168] = varargout_2_l_foot_vz;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3176] = varargout_2_l_foot_vx_b;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3184] = varargout_2_l_foot_vy_b;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3192] = varargout_2_l_foot_vz_b;
  for (i15 = 0; i15 < 3; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2568])[i15] =
      varargout_2_torso_angle[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2592])[i15] =
      varargout_2_d_torso_angle[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2616])[i15] =
      varargout_2_id_torso_angle[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2640])[i15] =
      varargout_2_dd_torso_angle[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2664])[i15] =
      varargout_2_torso_position[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2688])[i15] =
      varargout_2_torso_velocity[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2712])[i15] =
      varargout_2_torso_velocity_fil[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2840])[i15] =
      varargout_2_com_pos[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2864])[i15] =
      varargout_2_com_vel[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[2960])[i15] =
      varargout_2_com_pos_fil[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3200])[i15] =
      varargout_2_r_foot_v[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3224])[i15] =
      varargout_2_l_foot_v[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3248])[i15] =
      varargout_2_r_foot_p[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3272])[i15] =
      varargout_2_l_foot_p[i15];
  }

  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3296])[i15] =
      varargout_2_s_LR[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[3312] = varargout_2_orient;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3320] = varargout_2_d_orient_test;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3328] = varargout_2_d_orient;
  for (i15 = 0; i15 < 3; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3336])[i15] =
      varargout_2_step_end_dx_fil_seq[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3360])[i15] =
      varargout_2_step_end_dy_fil_seq[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[3384] = varargout_2_q_abduction_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3392] = varargout_2_q_rotation_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3400] = varargout_2_q_thigh_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3408] =
    varargout_2_q_thigh_knee_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3416] = varargout_2_q_knee_shin_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3424] =
    varargout_2_q_thigh_shin_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3432] =
    varargout_2_q_shin_tarsus_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3440] = varargout_2_q_toe_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3448] = varargout_2_q_abduction_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3456] = varargout_2_q_rotation_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3464] = varargout_2_q_thigh_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3472] =
    varargout_2_q_thigh_knee_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3480] = varargout_2_q_knee_shin_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3488] =
    varargout_2_q_thigh_shin_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3496] =
    varargout_2_q_shin_tarsus_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3504] = varargout_2_q_toe_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3512] =
    varargout_2_dq_abduction_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3520] = varargout_2_dq_rotation_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3528] = varargout_2_dq_thigh_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3536] =
    varargout_2_dq_thigh_knee_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3544] =
    varargout_2_dq_knee_shin_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3552] =
    varargout_2_dq_thigh_shin_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3560] =
    varargout_2_dq_shin_tarsus_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3568] = varargout_2_dq_toe_R;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3576] =
    varargout_2_dq_abduction_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3584] = varargout_2_dq_rotation_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3592] = varargout_2_dq_thigh_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3600] =
    varargout_2_dq_thigh_knee_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3608] =
    varargout_2_dq_knee_shin_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3616] =
    varargout_2_dq_thigh_shin_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3624] =
    varargout_2_dq_shin_tarsus_L;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[3632] = varargout_2_dq_toe_L;
  for (i15 = 0; i15 < 20; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3640])[i15] =
      varargout_2_qall[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3800])[i15] =
      varargout_2_dqall[i15];
  }

  for (i15 = 0; i15 < 4; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3960])[i15] =
      varargout_2_qq[i15];
  }

  for (i15 = 0; i15 < 5; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[3992])[i15] =
      varargout_2_qaR[i15];
  }

  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4032])[i15] =
      varargout_2_qjR[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4048])[i15] =
      varargout_2_qsR[i15];
  }

  for (i15 = 0; i15 < 5; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4064])[i15] =
      varargout_2_qaL[i15];
  }

  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4104])[i15] =
      varargout_2_qjL[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4120])[i15] =
      varargout_2_qsL[i15];
  }

  for (i15 = 0; i15 < 3; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4136])[i15] =
      varargout_2_dqq[i15];
  }

  for (i15 = 0; i15 < 5; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4160])[i15] =
      varargout_2_dqaR[i15];
  }

  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4200])[i15] =
      varargout_2_dqjR[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4216])[i15] =
      varargout_2_dqsR[i15];
  }

  for (i15 = 0; i15 < 5; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4232])[i15] =
      varargout_2_dqaL[i15];
  }

  for (i15 = 0; i15 < 2; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4272])[i15] =
      varargout_2_dqjL[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4288])[i15] =
      varargout_2_dqsL[i15];
  }

  for (i15 = 0; i15 < 10; i15++) {
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4304])[i15] =
      varargout_2_u_P[i15];
    ((real_T *)&((char_T *)moduleInstance->b_y1)[4384])[i15] =
      varargout_2_u_D[i15];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[4464] = varargout_2_computer_time;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_terminate(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  FG_Controller *obj;
  const mxArray *b_y;
  boolean_T flag;
  const mxArray *m17;
  static const int32_T iv39[2] = { 1, 45 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *c_y;
  static const int32_T iv40[2] = { 1, 8 };

  static char_T c_u[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv41[2] = { 1, 45 };

  static const int32_T iv42[2] = { 1, 7 };

  static char_T d_u[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  real_T *b_Kp_pitch;
  real_T *b_Kd_pitch;
  real_T *b_Kp_roll;
  real_T *b_Kd_roll;
  real_T *b_Kp_yaw;
  real_T *b_Kd_yaw;
  real_T *b_Kp_abduction;
  real_T *b_Kp_rotation;
  real_T *b_Kp_thigh;
  real_T *b_Kp_knee;
  real_T *b_Kp_toe;
  real_T *b_Kd_abduction;
  real_T *b_Kd_rotation;
  real_T *b_Kd_thigh;
  real_T *b_Kd_knee;
  real_T *b_Kd_toe;
  real_T *b_Kfs_p;
  real_T *b_Kfl_p;
  real_T *b_Kfs_d;
  real_T *b_Kfl_d;
  real_T *b_Kp_toe_stand;
  real_T *b_Kd_toe_stand;
  real_T *b_Kp_lateral_stand;
  real_T *b_Kd_lateral_stand;
  real_T *b_Kp_abduction_stand;
  real_T *b_Kd_abduction_stand;
  real_T *b_Kp_thigh_stand;
  real_T *b_Kd_thigh_stand;
  real_T *b_Kp_knee_stand;
  real_T *b_Kd_knee_stand;
  real_T *b_Kp_rotation_stand;
  real_T *b_Kd_rotation_stand;
  real_T *b_fil_para_x;
  real_T *b_fil_para_y;
  real_T *b_stance_thre_ub;
  real_T *b_stance_thre_lb;
  real_T *b_lateral_velocity_weight;
  real_T *b_init_lateral_velocity;
  real_T *b_abduction_inward_gain;
  real_T *b_joint_filter_choice;
  real_T *b_shift_time;
  real_T *b_shift_distance;
  real_T *b_standing_switch_time;
  real_T *b_toe_tilt_angle;
  real_T *b_final_sw_abduction;
  real_T *b_final_st_abduction;
  real_T *b_pre_final_sw_abduction;
  real_T *b_sagittal_offset_exp;
  real_T *b_lateral_offset_exp;
  real_T *b_turning_offset_exp;
  real_T *b_stand_offset_exp;
  real_T *b_u_abduction_cp;
  real_T *b_u_abduction_swing_cp;
  real_T *b_u_thigh_cp;
  real_T *b_u_knee_cp;
  real_T *b_fil_para_2;
  real_T *b_fil_para_3;
  real_T *b_fil_para_4;
  real_T *b_fil_para_5;
  real_T *b_force_step_end_s;
  b_force_step_end_s = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    59);
  b_fil_para_5 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 58);
  b_fil_para_4 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 57);
  b_fil_para_3 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 56);
  b_fil_para_2 = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 55);
  b_u_knee_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 54);
  b_u_thigh_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 53);
  b_u_abduction_swing_cp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 52);
  b_u_abduction_cp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    51);
  b_stand_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    50);
  b_turning_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 49);
  b_lateral_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 48);
  b_sagittal_offset_exp = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 47);
  b_pre_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 46);
  b_final_st_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 45);
  b_final_sw_abduction = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 44);
  b_toe_tilt_angle = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    43);
  b_standing_switch_time = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 42);
  b_shift_distance = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    41);
  b_shift_time = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 40);
  b_joint_filter_choice = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 39);
  b_abduction_inward_gain = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 38);
  b_init_lateral_velocity = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 37);
  b_lateral_velocity_weight = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 36);
  b_stance_thre_lb = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    35);
  b_stance_thre_ub = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    34);
  b_fil_para_y = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 33);
  b_fil_para_x = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 32);
  b_Kd_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 31);
  b_Kp_rotation_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 30);
  b_Kd_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    29);
  b_Kp_knee_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    28);
  b_Kd_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    27);
  b_Kp_thigh_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    26);
  b_Kd_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 25);
  b_Kp_abduction_stand = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 24);
  b_Kd_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    23);
  b_Kp_lateral_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    22);
  b_Kd_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 21);
  b_Kp_toe_stand = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 20);
  b_Kfl_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 19);
  b_Kfs_d = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 18);
  b_Kfl_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 17);
  b_Kfs_p = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 16);
  b_Kd_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 15);
  b_Kd_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 14);
  b_Kd_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 13);
  b_Kd_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 12);
  b_Kd_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 11);
  b_Kp_toe = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  b_Kp_knee = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  b_Kp_thigh = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  b_Kp_rotation = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  b_Kp_abduction = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  b_Kd_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  b_Kp_yaw = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  b_Kd_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  b_Kp_roll = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  b_Kd_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  b_Kp_pitch = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    FG_Controller_FG_Controller(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_pitch = *b_Kp_pitch;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_pitch = *b_Kd_pitch;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_roll = *b_Kp_roll;
    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_roll = *b_Kd_roll;
    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_yaw = *b_Kp_yaw;
    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_yaw = *b_Kd_yaw;
    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction = *b_Kp_abduction;
    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation = *b_Kp_rotation;
    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh = *b_Kp_thigh;
    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee = *b_Kp_knee;
    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe = *b_Kp_toe;
    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction = *b_Kd_abduction;
    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation = *b_Kd_rotation;
    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh = *b_Kd_thigh;
    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee = *b_Kd_knee;
    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe = *b_Kd_toe;
    b_st.site = &x_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_p = *b_Kfs_p;
    b_st.site = &y_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_p = *b_Kfl_p;
    b_st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfs_d = *b_Kfs_d;
    b_st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kfl_d = *b_Kfl_d;
    b_st.site = &cb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_toe_stand = *b_Kp_toe_stand;
    b_st.site = &db_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_toe_stand = *b_Kd_toe_stand;
    b_st.site = &eb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_lateral_stand = *b_Kp_lateral_stand;
    b_st.site = &fb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_lateral_stand = *b_Kd_lateral_stand;
    b_st.site = &gb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_abduction_stand = *b_Kp_abduction_stand;
    b_st.site = &hb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_abduction_stand = *b_Kd_abduction_stand;
    b_st.site = &ib_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_thigh_stand = *b_Kp_thigh_stand;
    b_st.site = &jb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_thigh_stand = *b_Kd_thigh_stand;
    b_st.site = &kb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_knee_stand = *b_Kp_knee_stand;
    b_st.site = &lb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_knee_stand = *b_Kd_knee_stand;
    b_st.site = &mb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kp_rotation_stand = *b_Kp_rotation_stand;
    b_st.site = &nb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Kd_rotation_stand = *b_Kd_rotation_stand;
    b_st.site = &ob_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_x = *b_fil_para_x;
    b_st.site = &pb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_y = *b_fil_para_y;
    b_st.site = &qb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_ub = *b_stance_thre_ub;
    b_st.site = &rb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stance_thre_lb = *b_stance_thre_lb;
    b_st.site = &sb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_velocity_weight = *b_lateral_velocity_weight;
    b_st.site = &tb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.init_lateral_velocity = *b_init_lateral_velocity;
    b_st.site = &ub_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.abduction_inward_gain = *b_abduction_inward_gain;
    b_st.site = &vb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.joint_filter_choice = *b_joint_filter_choice;
    b_st.site = &wb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_time = *b_shift_time;
    b_st.site = &xb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.shift_distance = *b_shift_distance;
    b_st.site = &yb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.standing_switch_time = *b_standing_switch_time;
    b_st.site = &ac_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.toe_tilt_angle = *b_toe_tilt_angle;
    b_st.site = &bc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_sw_abduction = *b_final_sw_abduction;
    b_st.site = &cc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.final_st_abduction = *b_final_st_abduction;
    b_st.site = &dc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.pre_final_sw_abduction = *b_pre_final_sw_abduction;
    b_st.site = &ec_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.sagittal_offset_exp = *b_sagittal_offset_exp;
    b_st.site = &fc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.lateral_offset_exp = *b_lateral_offset_exp;
    b_st.site = &gc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.turning_offset_exp = *b_turning_offset_exp;
    b_st.site = &hc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.stand_offset_exp = *b_stand_offset_exp;
    b_st.site = &ic_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_cp = *b_u_abduction_cp;
    b_st.site = &jc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_abduction_swing_cp = *b_u_abduction_swing_cp;
    b_st.site = &kc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_thigh_cp = *b_u_thigh_cp;
    b_st.site = &lc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.u_knee_cp = *b_u_knee_cp;
    b_st.site = &mc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_2 = *b_fil_para_2;
    b_st.site = &nc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_3 = *b_fil_para_3;
    b_st.site = &oc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_4 = *b_fil_para_4;
    b_st.site = &pc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.fil_para_5 = *b_fil_para_5;
    b_st.site = &qc_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.force_step_end_s = *b_force_step_end_s;
  }

  b_st.site = &tk_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    b_y = NULL;
    m17 = emlrtCreateCharArray(2, iv39);
    emlrtInitCharArrayR2013a(&b_st, 45, m17, &b_u[0]);
    emlrtAssign(&b_y, m17);
    c_y = NULL;
    m17 = emlrtCreateCharArray(2, iv40);
    emlrtInitCharArrayR2013a(&b_st, 8, m17, &c_u[0]);
    emlrtAssign(&c_y, m17);
    g_error(&b_st, message(&b_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &uk_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      b_y = NULL;
      m17 = emlrtCreateCharArray(2, iv41);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &b_u[0]);
      emlrtAssign(&b_y, m17);
      c_y = NULL;
      m17 = emlrtCreateCharArray(2, iv42);
      emlrtInitCharArrayR2013a(&b_st, 7, m17, &d_u[0]);
      emlrtAssign(&c_y, m17);
      g_error(&b_st, message(&b_st, b_y, c_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static const mxArray *emlrt_marshallOut(const int32_T b_u)
{
  const mxArray *b_y;
  const mxArray *m18;
  b_y = NULL;
  m18 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m18) = b_u;
  emlrtAssign(&b_y, m18);
  return b_y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance)
{
  const mxArray *st;
  const mxArray *b_y;
  const mxArray *c_y;
  static const char * sv0[142] = { "isInitialized", "TunablePropsChanged",
    "Kp_pitch", "Kd_pitch", "Kp_roll", "Kd_roll", "Kp_yaw", "Kd_yaw",
    "Kp_abduction", "Kp_rotation", "Kp_thigh", "Kp_knee", "Kp_toe",
    "Kd_abduction", "Kd_rotation", "Kd_thigh", "Kd_knee", "Kd_toe", "Kfs_p",
    "Kfl_p", "Kfs_d", "Kfl_d", "Kp_toe_stand", "Kd_toe_stand",
    "Kp_lateral_stand", "Kd_lateral_stand", "Kp_abduction_stand",
    "Kd_abduction_stand", "Kp_thigh_stand", "Kd_thigh_stand", "Kp_knee_stand",
    "Kd_knee_stand", "Kp_rotation_stand", "Kd_rotation_stand", "fil_para_x",
    "fil_para_y", "stance_thre_ub", "stance_thre_lb", "lateral_velocity_weight",
    "init_lateral_velocity", "abduction_inward_gain", "joint_filter_choice",
    "shift_time", "shift_distance", "standing_switch_time", "toe_tilt_angle",
    "final_sw_abduction", "final_st_abduction", "pre_final_sw_abduction",
    "sagittal_offset_exp", "lateral_offset_exp", "turning_offset_exp",
    "stand_offset_exp", "u_abduction_cp", "u_abduction_swing_cp", "u_thigh_cp",
    "u_knee_cp", "fil_para_2", "fil_para_3", "fil_para_4", "fil_para_5",
    "force_step_end_s", "sagittal_offset", "lateral_offset", "turning_offset",
    "stand_offset", "safe_TorqueLimits", "standing_abduction_offset",
    "bezier_degree", "Kp", "Kd", "stanceLeg", "begin", "walking_ini", "step_end",
    "task", "task_prev", "task_next", "t0", "t_prev", "t1", "s1", "t2", "s2",
    "u_prev", "u_last", "s_prev", "s_unsat_prev", "dqy_b_start", "gaitparams",
    "foot_placement", "pitch_torso_control", "roll_torso_control",
    "stance_passive", "knee_com", "abduction_com", "thigh_compensation",
    "abduction_swing_com", "keep_direction", "to_turn", "to_turn_prev", "tg_yaw",
    "tg_velocity_x", "uHip_gravity_2", "dqx_b_fil", "dqy_b_fil", "dqz_b_fil",
    "dqx_fil", "dqy_fil", "dqz_fil", "com_vel_x_fil", "com_vel_y_fil",
    "com_vel_z_fil", "com_pos_x_fil", "com_pos_y_fil", "com_pos_z_fil",
    "pitch_des_fil", "tg_velocity_x_fil", "lateral_move_fil", "LL_des_fil",
    "roll_des_fil", "P_feedback_toe_fil", "hd", "dhd", "hd_joint", "dhd_joint",
    "h0", "dh0", "h0_joint", "dh0_joint", "y", "dy", "y_joint", "dy_joint",
    "hd_last", "dhd_last", "v_final", "v_final_avgy", "tp_last", "lateral_move",
    "rotation_move", "to_stand_step_count" };

  const mxArray *d_y;
  const mxArray *m19;
  static const int32_T iv43[1] = { 10 };

  real_T *pData;
  int32_T i;
  static const int32_T iv44[1] = { 10 };

  static const int32_T iv45[1] = { 10 };

  static const int32_T iv46[1] = { 10 };

  static const int32_T iv47[1] = { 10 };

  static const char * sv1[2] = { "HAlpha", "ct" };

  const mxArray *e_y;
  static const int32_T iv48[2] = { 10, 6 };

  real_T (*b_pData)[60];
  int32_T b_i;
  static const int32_T iv49[1] = { 10 };

  static const int32_T iv50[1] = { 10 };

  static const int32_T iv51[1] = { 10 };

  static const int32_T iv52[1] = { 10 };

  static const int32_T iv53[1] = { 10 };

  static const int32_T iv54[1] = { 10 };

  static const int32_T iv55[1] = { 10 };

  static const int32_T iv56[1] = { 10 };

  static const int32_T iv57[1] = { 10 };

  static const int32_T iv58[1] = { 10 };

  static const int32_T iv59[1] = { 10 };

  static const int32_T iv60[1] = { 10 };

  static const int32_T iv61[1] = { 10 };

  static const int32_T iv62[1] = { 10 };

  static const int32_T iv63[1] = { 2 };

  st = NULL;
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateCellMatrix(2, 1));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 142, sv0));
  emlrtSetFieldR2017b(c_y, 0, "isInitialized", emlrt_marshallOut
                      (moduleInstance->sysobj.isInitialized), 0);
  d_y = NULL;
  m19 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "TunablePropsChanged", d_y, 1);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_pitch);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_pitch", d_y, 2);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_pitch);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_pitch", d_y, 3);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_roll);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_roll", d_y, 4);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_roll);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_roll", d_y, 5);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_yaw);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_yaw", d_y, 6);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_yaw);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_yaw", d_y, 7);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_abduction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_abduction", d_y, 8);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_rotation);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_rotation", d_y, 9);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_thigh);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_thigh", d_y, 10);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_knee);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_knee", d_y, 11);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_toe);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_toe", d_y, 12);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_abduction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_abduction", d_y, 13);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_rotation);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_rotation", d_y, 14);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_thigh);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_thigh", d_y, 15);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_knee);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_knee", d_y, 16);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_toe);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_toe", d_y, 17);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kfs_p);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kfs_p", d_y, 18);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kfl_p);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kfl_p", d_y, 19);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kfs_d);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kfs_d", d_y, 20);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kfl_d);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kfl_d", d_y, 21);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_toe_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_toe_stand", d_y, 22);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_toe_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_toe_stand", d_y, 23);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_lateral_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_lateral_stand", d_y, 24);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_lateral_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_lateral_stand", d_y, 25);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_abduction_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_abduction_stand", d_y, 26);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_abduction_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_abduction_stand", d_y, 27);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_thigh_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_thigh_stand", d_y, 28);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_thigh_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_thigh_stand", d_y, 29);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_knee_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_knee_stand", d_y, 30);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_knee_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_knee_stand", d_y, 31);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kp_rotation_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp_rotation_stand", d_y, 32);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Kd_rotation_stand);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd_rotation_stand", d_y, 33);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_x);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_x", d_y, 34);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_y);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_y", d_y, 35);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stance_thre_ub);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stance_thre_ub", d_y, 36);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stance_thre_lb);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stance_thre_lb", d_y, 37);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.lateral_velocity_weight);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "lateral_velocity_weight", d_y, 38);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.init_lateral_velocity);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "init_lateral_velocity", d_y, 39);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.abduction_inward_gain);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "abduction_inward_gain", d_y, 40);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.joint_filter_choice);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "joint_filter_choice", d_y, 41);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.shift_time);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "shift_time", d_y, 42);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.shift_distance);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "shift_distance", d_y, 43);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.standing_switch_time);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "standing_switch_time", d_y, 44);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.toe_tilt_angle);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "toe_tilt_angle", d_y, 45);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.final_sw_abduction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "final_sw_abduction", d_y, 46);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.final_st_abduction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "final_st_abduction", d_y, 47);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pre_final_sw_abduction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "pre_final_sw_abduction", d_y, 48);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.sagittal_offset_exp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "sagittal_offset_exp", d_y, 49);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.lateral_offset_exp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "lateral_offset_exp", d_y, 50);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.turning_offset_exp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "turning_offset_exp", d_y, 51);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stand_offset_exp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stand_offset_exp", d_y, 52);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.u_abduction_cp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_abduction_cp", d_y, 53);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.u_abduction_swing_cp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_abduction_swing_cp", d_y, 54);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.u_thigh_cp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_thigh_cp", d_y, 55);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.u_knee_cp);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_knee_cp", d_y, 56);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_2);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_2", d_y, 57);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_3);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_3", d_y, 58);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_4);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_4", d_y, 59);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.fil_para_5);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "fil_para_5", d_y, 60);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.force_step_end_s);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "force_step_end_s", d_y, 61);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.sagittal_offset);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "sagittal_offset", d_y, 62);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.lateral_offset);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "lateral_offset", d_y, 63);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.turning_offset);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "turning_offset", d_y, 64);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stand_offset);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stand_offset", d_y, 65);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv43, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.safe_TorqueLimits[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "safe_TorqueLimits", d_y, 66);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.standing_abduction_offset);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "standing_abduction_offset", d_y, 67);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.bezier_degree);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "bezier_degree", d_y, 68);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv44, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.Kp[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kp", d_y, 69);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv45, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.Kd[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "Kd", d_y, 70);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stanceLeg);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stanceLeg", d_y, 71);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.begin);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "begin", d_y, 72);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.walking_ini);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "walking_ini", d_y, 73);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.step_end);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "step_end", d_y, 74);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.task);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "task", d_y, 75);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.task_prev);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "task_prev", d_y, 76);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.task_next);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "task_next", d_y, 77);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t0);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "t0", d_y, 78);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t_prev);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "t_prev", d_y, 79);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t1);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "t1", d_y, 80);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.s1);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "s1", d_y, 81);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t2);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "t2", d_y, 82);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.s2);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "s2", d_y, 83);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv46, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.u_prev[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_prev", d_y, 84);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv47, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.u_last[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "u_last", d_y, 85);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.s_prev);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "s_prev", d_y, 86);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.s_unsat_prev);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "s_unsat_prev", d_y, 87);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqy_b_start);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqy_b_start", d_y, 88);
  d_y = NULL;
  emlrtAssign(&d_y, emlrtCreateStructMatrix(1, 1, 2, sv1));
  e_y = NULL;
  m19 = emlrtCreateNumericArray(2, iv48, mxDOUBLE_CLASS, mxREAL);
  b_pData = (real_T (*)[60])emlrtMxGetPr(m19);
  for (i = 0; i < 6; i++) {
    for (b_i = 0; b_i < 10; b_i++) {
      (*b_pData)[b_i + 10 * i] = moduleInstance->sysobj.gaitparams.HAlpha[b_i +
        10 * i];
    }
  }

  emlrtAssign(&e_y, m19);
  emlrtSetFieldR2017b(d_y, 0, "HAlpha", e_y, 0);
  e_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.gaitparams.ct);
  emlrtAssign(&e_y, m19);
  emlrtSetFieldR2017b(d_y, 0, "ct", e_y, 1);
  emlrtSetFieldR2017b(c_y, 0, "gaitparams", d_y, 89);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.foot_placement);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "foot_placement", d_y, 90);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pitch_torso_control);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "pitch_torso_control", d_y, 91);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.roll_torso_control);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "roll_torso_control", d_y, 92);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.stance_passive);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "stance_passive", d_y, 93);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.knee_com);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "knee_com", d_y, 94);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.abduction_com);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "abduction_com", d_y, 95);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.thigh_compensation);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "thigh_compensation", d_y, 96);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.abduction_swing_com);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "abduction_swing_com", d_y, 97);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.keep_direction);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "keep_direction", d_y, 98);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.to_turn);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "to_turn", d_y, 99);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.to_turn_prev);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "to_turn_prev", d_y, 100);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.tg_yaw);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "tg_yaw", d_y, 101);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.tg_velocity_x);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "tg_velocity_x", d_y, 102);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.uHip_gravity_2);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "uHip_gravity_2", d_y, 103);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqx_b_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqx_b_fil", d_y, 104);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqy_b_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqy_b_fil", d_y, 105);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqz_b_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqz_b_fil", d_y, 106);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqx_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqx_fil", d_y, 107);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqy_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqy_fil", d_y, 108);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.dqz_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dqz_fil", d_y, 109);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_vel_x_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_vel_x_fil", d_y, 110);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_vel_y_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_vel_y_fil", d_y, 111);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_vel_z_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_vel_z_fil", d_y, 112);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_pos_x_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_pos_x_fil", d_y, 113);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_pos_y_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_pos_y_fil", d_y, 114);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.com_pos_z_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "com_pos_z_fil", d_y, 115);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.pitch_des_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "pitch_des_fil", d_y, 116);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.tg_velocity_x_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "tg_velocity_x_fil", d_y, 117);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.lateral_move_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "lateral_move_fil", d_y, 118);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.LL_des_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "LL_des_fil", d_y, 119);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.roll_des_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "roll_des_fil", d_y, 120);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.P_feedback_toe_fil);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "P_feedback_toe_fil", d_y, 121);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv49, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.hd[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "hd", d_y, 122);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv50, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dhd[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dhd", d_y, 123);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv51, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.hd_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "hd_joint", d_y, 124);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv52, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dhd_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dhd_joint", d_y, 125);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv53, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.h0[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "h0", d_y, 126);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv54, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dh0[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dh0", d_y, 127);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv55, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.h0_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "h0_joint", d_y, 128);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv56, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dh0_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dh0_joint", d_y, 129);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv57, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.y[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "y", d_y, 130);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv58, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dy[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dy", d_y, 131);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv59, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.y_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "y_joint", d_y, 132);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv60, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dy_joint[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dy_joint", d_y, 133);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv61, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.hd_last[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "hd_last", d_y, 134);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv62, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.dhd_last[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "dhd_last", d_y, 135);
  d_y = NULL;
  m19 = emlrtCreateNumericArray(1, iv63, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m19);
  for (i = 0; i < 2; i++) {
    pData[i] = moduleInstance->sysobj.v_final[i];
  }

  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "v_final", d_y, 136);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.v_final_avgy);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "v_final_avgy", d_y, 137);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.tp_last);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "tp_last", d_y, 138);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.lateral_move);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "lateral_move", d_y, 139);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.rotation_move);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "rotation_move", d_y, 140);
  d_y = NULL;
  m19 = emlrtCreateDoubleScalar(moduleInstance->sysobj.to_stand_step_count);
  emlrtAssign(&d_y, m19);
  emlrtSetFieldR2017b(c_y, 0, "to_stand_step_count", d_y, 141);
  emlrtSetCell(b_y, 0, c_y);
  c_y = NULL;
  m19 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&c_y, m19);
  emlrtSetCell(b_y, 1, c_y);
  emlrtAssign(&st, b_y);
  return st;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, FG_Controller *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, b_y);
  emlrtDestroyArray(&b_sysobj);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, FG_Controller *b_y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[142] = { "isInitialized", "TunablePropsChanged",
    "Kp_pitch", "Kd_pitch", "Kp_roll", "Kd_roll", "Kp_yaw", "Kd_yaw",
    "Kp_abduction", "Kp_rotation", "Kp_thigh", "Kp_knee", "Kp_toe",
    "Kd_abduction", "Kd_rotation", "Kd_thigh", "Kd_knee", "Kd_toe", "Kfs_p",
    "Kfl_p", "Kfs_d", "Kfl_d", "Kp_toe_stand", "Kd_toe_stand",
    "Kp_lateral_stand", "Kd_lateral_stand", "Kp_abduction_stand",
    "Kd_abduction_stand", "Kp_thigh_stand", "Kd_thigh_stand", "Kp_knee_stand",
    "Kd_knee_stand", "Kp_rotation_stand", "Kd_rotation_stand", "fil_para_x",
    "fil_para_y", "stance_thre_ub", "stance_thre_lb", "lateral_velocity_weight",
    "init_lateral_velocity", "abduction_inward_gain", "joint_filter_choice",
    "shift_time", "shift_distance", "standing_switch_time", "toe_tilt_angle",
    "final_sw_abduction", "final_st_abduction", "pre_final_sw_abduction",
    "sagittal_offset_exp", "lateral_offset_exp", "turning_offset_exp",
    "stand_offset_exp", "u_abduction_cp", "u_abduction_swing_cp", "u_thigh_cp",
    "u_knee_cp", "fil_para_2", "fil_para_3", "fil_para_4", "fil_para_5",
    "force_step_end_s", "sagittal_offset", "lateral_offset", "turning_offset",
    "stand_offset", "safe_TorqueLimits", "standing_abduction_offset",
    "bezier_degree", "Kp", "Kd", "stanceLeg", "begin", "walking_ini", "step_end",
    "task", "task_prev", "task_next", "t0", "t_prev", "t1", "s1", "t2", "s2",
    "u_prev", "u_last", "s_prev", "s_unsat_prev", "dqy_b_start", "gaitparams",
    "foot_placement", "pitch_torso_control", "roll_torso_control",
    "stance_passive", "knee_com", "abduction_com", "thigh_compensation",
    "abduction_swing_com", "keep_direction", "to_turn", "to_turn_prev", "tg_yaw",
    "tg_velocity_x", "uHip_gravity_2", "dqx_b_fil", "dqy_b_fil", "dqz_b_fil",
    "dqx_fil", "dqy_fil", "dqz_fil", "com_vel_x_fil", "com_vel_y_fil",
    "com_vel_z_fil", "com_pos_x_fil", "com_pos_y_fil", "com_pos_z_fil",
    "pitch_des_fil", "tg_velocity_x_fil", "lateral_move_fil", "LL_des_fil",
    "roll_des_fil", "P_feedback_toe_fil", "hd", "dhd", "hd_joint", "dhd_joint",
    "h0", "dh0", "h0_joint", "dh0_joint", "y", "dy", "y_joint", "dy_joint",
    "hd_last", "dhd_last", "v_final", "v_final_avgy", "tp_last", "lateral_move",
    "rotation_move", "to_stand_step_count" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, b_u, 142, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  b_y->isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  b_y->TunablePropsChanged = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "Kp_pitch";
  b_y->Kp_pitch = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 2, "Kp_pitch")), &thisId);
  thisId.fIdentifier = "Kd_pitch";
  b_y->Kd_pitch = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 3, "Kd_pitch")), &thisId);
  thisId.fIdentifier = "Kp_roll";
  b_y->Kp_roll = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 4, "Kp_roll")), &thisId);
  thisId.fIdentifier = "Kd_roll";
  b_y->Kd_roll = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 5, "Kd_roll")), &thisId);
  thisId.fIdentifier = "Kp_yaw";
  b_y->Kp_yaw = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    6, "Kp_yaw")), &thisId);
  thisId.fIdentifier = "Kd_yaw";
  b_y->Kd_yaw = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    7, "Kd_yaw")), &thisId);
  thisId.fIdentifier = "Kp_abduction";
  b_y->Kp_abduction = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 8, "Kp_abduction")), &thisId);
  thisId.fIdentifier = "Kp_rotation";
  b_y->Kp_rotation = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 9, "Kp_rotation")), &thisId);
  thisId.fIdentifier = "Kp_thigh";
  b_y->Kp_thigh = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 10, "Kp_thigh")), &thisId);
  thisId.fIdentifier = "Kp_knee";
  b_y->Kp_knee = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 11, "Kp_knee")), &thisId);
  thisId.fIdentifier = "Kp_toe";
  b_y->Kp_toe = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    12, "Kp_toe")), &thisId);
  thisId.fIdentifier = "Kd_abduction";
  b_y->Kd_abduction = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 13, "Kd_abduction")), &thisId);
  thisId.fIdentifier = "Kd_rotation";
  b_y->Kd_rotation = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 14, "Kd_rotation")), &thisId);
  thisId.fIdentifier = "Kd_thigh";
  b_y->Kd_thigh = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 15, "Kd_thigh")), &thisId);
  thisId.fIdentifier = "Kd_knee";
  b_y->Kd_knee = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 16, "Kd_knee")), &thisId);
  thisId.fIdentifier = "Kd_toe";
  b_y->Kd_toe = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    17, "Kd_toe")), &thisId);
  thisId.fIdentifier = "Kfs_p";
  b_y->Kfs_p = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    18, "Kfs_p")), &thisId);
  thisId.fIdentifier = "Kfl_p";
  b_y->Kfl_p = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    19, "Kfl_p")), &thisId);
  thisId.fIdentifier = "Kfs_d";
  b_y->Kfs_d = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    20, "Kfs_d")), &thisId);
  thisId.fIdentifier = "Kfl_d";
  b_y->Kfl_d = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    21, "Kfl_d")), &thisId);
  thisId.fIdentifier = "Kp_toe_stand";
  b_y->Kp_toe_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 22, "Kp_toe_stand")), &thisId);
  thisId.fIdentifier = "Kd_toe_stand";
  b_y->Kd_toe_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 23, "Kd_toe_stand")), &thisId);
  thisId.fIdentifier = "Kp_lateral_stand";
  b_y->Kp_lateral_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 24, "Kp_lateral_stand")), &thisId);
  thisId.fIdentifier = "Kd_lateral_stand";
  b_y->Kd_lateral_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 25, "Kd_lateral_stand")), &thisId);
  thisId.fIdentifier = "Kp_abduction_stand";
  b_y->Kp_abduction_stand = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 26, "Kp_abduction_stand")), &thisId);
  thisId.fIdentifier = "Kd_abduction_stand";
  b_y->Kd_abduction_stand = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 27, "Kd_abduction_stand")), &thisId);
  thisId.fIdentifier = "Kp_thigh_stand";
  b_y->Kp_thigh_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 28, "Kp_thigh_stand")), &thisId);
  thisId.fIdentifier = "Kd_thigh_stand";
  b_y->Kd_thigh_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 29, "Kd_thigh_stand")), &thisId);
  thisId.fIdentifier = "Kp_knee_stand";
  b_y->Kp_knee_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 30, "Kp_knee_stand")), &thisId);
  thisId.fIdentifier = "Kd_knee_stand";
  b_y->Kd_knee_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 31, "Kd_knee_stand")), &thisId);
  thisId.fIdentifier = "Kp_rotation_stand";
  b_y->Kp_rotation_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 32, "Kp_rotation_stand")), &thisId);
  thisId.fIdentifier = "Kd_rotation_stand";
  b_y->Kd_rotation_stand = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 33, "Kd_rotation_stand")), &thisId);
  thisId.fIdentifier = "fil_para_x";
  b_y->fil_para_x = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 34, "fil_para_x")), &thisId);
  thisId.fIdentifier = "fil_para_y";
  b_y->fil_para_y = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 35, "fil_para_y")), &thisId);
  thisId.fIdentifier = "stance_thre_ub";
  b_y->stance_thre_ub = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 36, "stance_thre_ub")), &thisId);
  thisId.fIdentifier = "stance_thre_lb";
  b_y->stance_thre_lb = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 37, "stance_thre_lb")), &thisId);
  thisId.fIdentifier = "lateral_velocity_weight";
  b_y->lateral_velocity_weight = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 38, "lateral_velocity_weight")), &thisId);
  thisId.fIdentifier = "init_lateral_velocity";
  b_y->init_lateral_velocity = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 39, "init_lateral_velocity")), &thisId);
  thisId.fIdentifier = "abduction_inward_gain";
  b_y->abduction_inward_gain = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 40, "abduction_inward_gain")), &thisId);
  thisId.fIdentifier = "joint_filter_choice";
  b_y->joint_filter_choice = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 41, "joint_filter_choice")), &thisId);
  thisId.fIdentifier = "shift_time";
  b_y->shift_time = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 42, "shift_time")), &thisId);
  thisId.fIdentifier = "shift_distance";
  b_y->shift_distance = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 43, "shift_distance")), &thisId);
  thisId.fIdentifier = "standing_switch_time";
  b_y->standing_switch_time = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 44, "standing_switch_time")), &thisId);
  thisId.fIdentifier = "toe_tilt_angle";
  b_y->toe_tilt_angle = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 45, "toe_tilt_angle")), &thisId);
  thisId.fIdentifier = "final_sw_abduction";
  b_y->final_sw_abduction = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 46, "final_sw_abduction")), &thisId);
  thisId.fIdentifier = "final_st_abduction";
  b_y->final_st_abduction = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 47, "final_st_abduction")), &thisId);
  thisId.fIdentifier = "pre_final_sw_abduction";
  b_y->pre_final_sw_abduction = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 48, "pre_final_sw_abduction")), &thisId);
  thisId.fIdentifier = "sagittal_offset_exp";
  b_y->sagittal_offset_exp = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 49, "sagittal_offset_exp")), &thisId);
  thisId.fIdentifier = "lateral_offset_exp";
  b_y->lateral_offset_exp = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 50, "lateral_offset_exp")), &thisId);
  thisId.fIdentifier = "turning_offset_exp";
  b_y->turning_offset_exp = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 51, "turning_offset_exp")), &thisId);
  thisId.fIdentifier = "stand_offset_exp";
  b_y->stand_offset_exp = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 52, "stand_offset_exp")), &thisId);
  thisId.fIdentifier = "u_abduction_cp";
  b_y->u_abduction_cp = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 53, "u_abduction_cp")), &thisId);
  thisId.fIdentifier = "u_abduction_swing_cp";
  b_y->u_abduction_swing_cp = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 54, "u_abduction_swing_cp")), &thisId);
  thisId.fIdentifier = "u_thigh_cp";
  b_y->u_thigh_cp = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 55, "u_thigh_cp")), &thisId);
  thisId.fIdentifier = "u_knee_cp";
  b_y->u_knee_cp = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 56, "u_knee_cp")), &thisId);
  thisId.fIdentifier = "fil_para_2";
  b_y->fil_para_2 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 57, "fil_para_2")), &thisId);
  thisId.fIdentifier = "fil_para_3";
  b_y->fil_para_3 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 58, "fil_para_3")), &thisId);
  thisId.fIdentifier = "fil_para_4";
  b_y->fil_para_4 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 59, "fil_para_4")), &thisId);
  thisId.fIdentifier = "fil_para_5";
  b_y->fil_para_5 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 60, "fil_para_5")), &thisId);
  thisId.fIdentifier = "force_step_end_s";
  b_y->force_step_end_s = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 61, "force_step_end_s")), &thisId);
  thisId.fIdentifier = "sagittal_offset";
  b_y->sagittal_offset = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 62, "sagittal_offset")), &thisId);
  thisId.fIdentifier = "lateral_offset";
  b_y->lateral_offset = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 63, "lateral_offset")), &thisId);
  thisId.fIdentifier = "turning_offset";
  b_y->turning_offset = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 64, "turning_offset")), &thisId);
  thisId.fIdentifier = "stand_offset";
  b_y->stand_offset = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 65, "stand_offset")), &thisId);
  thisId.fIdentifier = "safe_TorqueLimits";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 66,
    "safe_TorqueLimits")), &thisId, b_y->safe_TorqueLimits);
  thisId.fIdentifier = "standing_abduction_offset";
  b_y->standing_abduction_offset = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 67, "standing_abduction_offset")), &thisId);
  thisId.fIdentifier = "bezier_degree";
  b_y->bezier_degree = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 68, "bezier_degree")), &thisId);
  thisId.fIdentifier = "Kp";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 69, "Kp")),
                     &thisId, b_y->Kp);
  thisId.fIdentifier = "Kd";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 70, "Kd")),
                     &thisId, b_y->Kd);
  thisId.fIdentifier = "stanceLeg";
  b_y->stanceLeg = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 71, "stanceLeg")), &thisId);
  thisId.fIdentifier = "begin";
  b_y->begin = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    72, "begin")), &thisId);
  thisId.fIdentifier = "walking_ini";
  b_y->walking_ini = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 73, "walking_ini")), &thisId);
  thisId.fIdentifier = "step_end";
  b_y->step_end = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 74, "step_end")), &thisId);
  thisId.fIdentifier = "task";
  b_y->task = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    75, "task")), &thisId);
  thisId.fIdentifier = "task_prev";
  b_y->task_prev = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 76, "task_prev")), &thisId);
  thisId.fIdentifier = "task_next";
  b_y->task_next = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 77, "task_next")), &thisId);
  thisId.fIdentifier = "t0";
  b_y->t0 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 78,
    "t0")), &thisId);
  thisId.fIdentifier = "t_prev";
  b_y->t_prev = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    79, "t_prev")), &thisId);
  thisId.fIdentifier = "t1";
  b_y->t1 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 80,
    "t1")), &thisId);
  thisId.fIdentifier = "s1";
  b_y->s1 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 81,
    "s1")), &thisId);
  thisId.fIdentifier = "t2";
  b_y->t2 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 82,
    "t2")), &thisId);
  thisId.fIdentifier = "s2";
  b_y->s2 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 83,
    "s2")), &thisId);
  thisId.fIdentifier = "u_prev";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 84, "u_prev")),
                     &thisId, b_y->u_prev);
  thisId.fIdentifier = "u_last";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 85, "u_last")),
                     &thisId, b_y->u_last);
  thisId.fIdentifier = "s_prev";
  b_y->s_prev = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    86, "s_prev")), &thisId);
  thisId.fIdentifier = "s_unsat_prev";
  b_y->s_unsat_prev = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 87, "s_unsat_prev")), &thisId);
  thisId.fIdentifier = "dqy_b_start";
  b_y->dqy_b_start = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 88, "dqy_b_start")), &thisId);
  thisId.fIdentifier = "gaitparams";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 89,
    "gaitparams")), &thisId, &b_y->gaitparams);
  thisId.fIdentifier = "foot_placement";
  b_y->foot_placement = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 90, "foot_placement")), &thisId);
  thisId.fIdentifier = "pitch_torso_control";
  b_y->pitch_torso_control = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 91, "pitch_torso_control")), &thisId);
  thisId.fIdentifier = "roll_torso_control";
  b_y->roll_torso_control = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 92, "roll_torso_control")), &thisId);
  thisId.fIdentifier = "stance_passive";
  b_y->stance_passive = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 93, "stance_passive")), &thisId);
  thisId.fIdentifier = "knee_com";
  b_y->knee_com = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 94, "knee_com")), &thisId);
  thisId.fIdentifier = "abduction_com";
  b_y->abduction_com = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 95, "abduction_com")), &thisId);
  thisId.fIdentifier = "thigh_compensation";
  b_y->thigh_compensation = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 96, "thigh_compensation")), &thisId);
  thisId.fIdentifier = "abduction_swing_com";
  b_y->abduction_swing_com = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 97, "abduction_swing_com")), &thisId);
  thisId.fIdentifier = "keep_direction";
  b_y->keep_direction = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 98, "keep_direction")), &thisId);
  thisId.fIdentifier = "to_turn";
  b_y->to_turn = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 99, "to_turn")), &thisId);
  thisId.fIdentifier = "to_turn_prev";
  b_y->to_turn_prev = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 100, "to_turn_prev")), &thisId);
  thisId.fIdentifier = "tg_yaw";
  b_y->tg_yaw = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    101, "tg_yaw")), &thisId);
  thisId.fIdentifier = "tg_velocity_x";
  b_y->tg_velocity_x = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 102, "tg_velocity_x")), &thisId);
  thisId.fIdentifier = "uHip_gravity_2";
  b_y->uHip_gravity_2 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 103, "uHip_gravity_2")), &thisId);
  thisId.fIdentifier = "dqx_b_fil";
  b_y->dqx_b_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 104, "dqx_b_fil")), &thisId);
  thisId.fIdentifier = "dqy_b_fil";
  b_y->dqy_b_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 105, "dqy_b_fil")), &thisId);
  thisId.fIdentifier = "dqz_b_fil";
  b_y->dqz_b_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 106, "dqz_b_fil")), &thisId);
  thisId.fIdentifier = "dqx_fil";
  b_y->dqx_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 107, "dqx_fil")), &thisId);
  thisId.fIdentifier = "dqy_fil";
  b_y->dqy_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 108, "dqy_fil")), &thisId);
  thisId.fIdentifier = "dqz_fil";
  b_y->dqz_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 109, "dqz_fil")), &thisId);
  thisId.fIdentifier = "com_vel_x_fil";
  b_y->com_vel_x_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 110, "com_vel_x_fil")), &thisId);
  thisId.fIdentifier = "com_vel_y_fil";
  b_y->com_vel_y_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 111, "com_vel_y_fil")), &thisId);
  thisId.fIdentifier = "com_vel_z_fil";
  b_y->com_vel_z_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 112, "com_vel_z_fil")), &thisId);
  thisId.fIdentifier = "com_pos_x_fil";
  b_y->com_pos_x_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 113, "com_pos_x_fil")), &thisId);
  thisId.fIdentifier = "com_pos_y_fil";
  b_y->com_pos_y_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 114, "com_pos_y_fil")), &thisId);
  thisId.fIdentifier = "com_pos_z_fil";
  b_y->com_pos_z_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 115, "com_pos_z_fil")), &thisId);
  thisId.fIdentifier = "pitch_des_fil";
  b_y->pitch_des_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 116, "pitch_des_fil")), &thisId);
  thisId.fIdentifier = "tg_velocity_x_fil";
  b_y->tg_velocity_x_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 117, "tg_velocity_x_fil")), &thisId);
  thisId.fIdentifier = "lateral_move_fil";
  b_y->lateral_move_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, b_u, 0, 118, "lateral_move_fil")), &thisId);
  thisId.fIdentifier = "LL_des_fil";
  b_y->LL_des_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 119, "LL_des_fil")), &thisId);
  thisId.fIdentifier = "roll_des_fil";
  b_y->roll_des_fil = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 120, "roll_des_fil")), &thisId);
  thisId.fIdentifier = "P_feedback_toe_fil";
  b_y->P_feedback_toe_fil = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 121, "P_feedback_toe_fil")), &thisId);
  thisId.fIdentifier = "hd";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 122, "hd")),
                     &thisId, b_y->hd);
  thisId.fIdentifier = "dhd";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 123, "dhd")),
                     &thisId, b_y->dhd);
  thisId.fIdentifier = "hd_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 124,
    "hd_joint")), &thisId, b_y->hd_joint);
  thisId.fIdentifier = "dhd_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 125,
    "dhd_joint")), &thisId, b_y->dhd_joint);
  thisId.fIdentifier = "h0";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 126, "h0")),
                     &thisId, b_y->h0);
  thisId.fIdentifier = "dh0";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 127, "dh0")),
                     &thisId, b_y->dh0);
  thisId.fIdentifier = "h0_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 128,
    "h0_joint")), &thisId, b_y->h0_joint);
  thisId.fIdentifier = "dh0_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 129,
    "dh0_joint")), &thisId, b_y->dh0_joint);
  thisId.fIdentifier = "y";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 130, "y")),
                     &thisId, b_y->y);
  thisId.fIdentifier = "dy";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 131, "dy")),
                     &thisId, b_y->dy);
  thisId.fIdentifier = "y_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 132,
    "y_joint")), &thisId, b_y->y_joint);
  thisId.fIdentifier = "dy_joint";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 133,
    "dy_joint")), &thisId, b_y->dy_joint);
  thisId.fIdentifier = "hd_last";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 134,
    "hd_last")), &thisId, b_y->hd_last);
  thisId.fIdentifier = "dhd_last";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 135,
    "dhd_last")), &thisId, b_y->dhd_last);
  thisId.fIdentifier = "v_final";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 136,
    "v_final")), &thisId, b_y->v_final);
  thisId.fIdentifier = "v_final_avgy";
  b_y->v_final_avgy = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 137, "v_final_avgy")), &thisId);
  thisId.fIdentifier = "tp_last";
  b_y->tp_last = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u,
    0, 138, "tp_last")), &thisId);
  thisId.fIdentifier = "lateral_move";
  b_y->lateral_move = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 139, "lateral_move")), &thisId);
  thisId.fIdentifier = "rotation_move";
  b_y->rotation_move = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 140, "rotation_move")), &thisId);
  thisId.fIdentifier = "to_stand_step_count";
  b_y->to_stand_step_count = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 141, "to_stand_step_count")), &thisId);
  emlrtDestroyArray(&b_u);
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId)
{
  int32_T b_y;
  b_y = n_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return b_y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T b_y;
  b_y = o_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return b_y;
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId)
{
  real_T b_y;
  b_y = p_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return b_y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[10])
{
  q_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, b_y);
  emlrtDestroyArray(&b_u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, stYHKfUCpUZzNx4MhyRPhnG *b_y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "HAlpha", "ct" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, b_u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "HAlpha";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 0, "HAlpha")),
                     &thisId, b_y->HAlpha);
  thisId.fIdentifier = "ct";
  b_y->ct = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 1,
    "ct")), &thisId);
  emlrtDestroyArray(&b_u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[60])
{
  r_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, b_y);
  emlrtDestroyArray(&b_u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T b_y[2])
{
  s_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, b_y);
  emlrtDestroyArray(&b_u);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T b_y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_y = f_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return b_y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *b_u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_u = emlrtAlias(st);
  c_emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st, "sysobj", b_u, 0)),
                     "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = l_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", b_u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&b_u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m20;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m20, 2, pArrays, "message", true,
    location);
}

static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m21;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m21, 1, &pArray, "message", true,
    location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m22;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m22, 2, pArrays, "feval", true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m23;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m23, 2, pArrays, "sprintf", true,
    location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m24;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m24, 3, pArrays, "feval", true, location);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[10])
{
  static const int32_T dims[1] = { 10 };

  int32_T i16;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i16 = 0; i16 < 10; i16++) {
    ret[i16] = (*(real_T (*)[10])emlrtMxGetData(src))[i16];
  }

  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[60])
{
  static const int32_T dims[2] = { 10, 6 };

  int32_T i17;
  int32_T i18;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i17 = 0; i17 < 6; i17++) {
    for (i18 = 0; i18 < 10; i18++) {
      ret[i18 + 10 * i17] = (*(real_T (*)[60])emlrtMxGetData(src))[i18 + 10 *
        i17];
    }
  }

  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  int32_T i19;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i19 = 0; i19 < 2; i19++) {
    ret[i19] = (*(real_T (*)[2])emlrtMxGetData(src))[i19];
  }

  emlrtDestroyArray(&src);
}

static void b_FG_Controller_FG_Controller(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance, FG_Controller **obj)
{
  int32_T i;
  static uint8_T uv0[10] = { 80U, 60U, 80U, 190U, 45U, 80U, 60U, 80U, 190U, 45U
  };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (*obj)->sagittal_offset = -0.01;
  (*obj)->lateral_offset = 0.0;
  (*obj)->turning_offset = 0.0;
  (*obj)->stand_offset = -0.01;
  for (i = 0; i < 10; i++) {
    (*obj)->safe_TorqueLimits[i] = (real_T)uv0[i];
  }

  (*obj)->standing_abduction_offset = 0.08;
  (*obj)->bezier_degree = 5.0;
  (*obj)->stanceLeg = 1.0;
  (*obj)->begin = 0.0;
  (*obj)->walking_ini = 0.0;
  (*obj)->step_end = 0.0;
  (*obj)->task = 2.0;
  (*obj)->task_prev = 0.0;
  (*obj)->t0 = 0.0;
  (*obj)->t_prev = 0.0;
  (*obj)->t1 = 0.0;
  (*obj)->s1 = 0.0;
  (*obj)->t2 = 0.0;
  (*obj)->s2 = 0.0;
  for (i = 0; i < 10; i++) {
    (*obj)->u_prev[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->u_last[i] = 0.0;
  }

  (*obj)->s_prev = 0.0;
  (*obj)->s_unsat_prev = 0.0;
  (*obj)->dqy_b_start = 0.0;
  (*obj)->foot_placement = 1.0;
  (*obj)->pitch_torso_control = 1.0;
  (*obj)->roll_torso_control = 1.0;
  (*obj)->stance_passive = 1.0;
  (*obj)->knee_com = 1.0;
  (*obj)->abduction_com = 1.0;
  (*obj)->thigh_compensation = 1.0;
  (*obj)->abduction_swing_com = 0.0;
  (*obj)->keep_direction = 1.0;
  (*obj)->to_turn_prev = 1.0;
  (*obj)->tg_yaw = 0.0;
  (*obj)->uHip_gravity_2 = 1.2;
  (*obj)->dqx_b_fil = 0.0;
  (*obj)->dqy_b_fil = 0.0;
  (*obj)->dqz_b_fil = 0.0;
  (*obj)->dqx_fil = 0.0;
  (*obj)->dqy_fil = 0.0;
  (*obj)->dqz_fil = 0.0;
  (*obj)->com_vel_x_fil = 0.0;
  (*obj)->com_vel_y_fil = 0.0;
  (*obj)->com_vel_z_fil = 0.0;
  (*obj)->com_pos_x_fil = 0.0;
  (*obj)->com_pos_y_fil = 0.0;
  (*obj)->com_pos_z_fil = 0.0;
  (*obj)->pitch_des_fil = 0.0;
  (*obj)->tg_velocity_x_fil = 0.0;
  (*obj)->lateral_move_fil = 0.0;
  (*obj)->LL_des_fil = 0.7;
  (*obj)->roll_des_fil = 0.0;
  (*obj)->P_feedback_toe_fil = 0.0;
  for (i = 0; i < 10; i++) {
    (*obj)->hd[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->dhd[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->hd_joint[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->dhd_joint[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->y[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->dy[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->y_joint[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->dy_joint[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->hd_last[i] = 0.0;
  }

  for (i = 0; i < 10; i++) {
    (*obj)->dhd_last[i] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    (*obj)->v_final[i] = 0.0;
  }

  (*obj)->v_final_avgy = 0.0;
  (*obj)->tp_last = 0.0;
  (*obj)->to_stand_step_count = 0.0;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  (*obj)->isInitialized = 0;
  (*obj)->TunablePropsChanged = false;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
}

static void init_simulink_io_address(InstanceStruct_ckjBABowLK3WzjqwY5cIT
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->u1 = (CassieOutBus *)cgxertGetInputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->u2 = (boolean_T *)cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->u3 = (cassieGaitLibraryBus *)cgxertGetInputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->u4 = (real_T (*)[14])cgxertGetInputPortSignal
    (moduleInstance->S, 4);
  moduleInstance->b_y0 = (CassieUserInBus *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (cassieDataBus *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_ckjBABowLK3WzjqwY5cIT(SimStruct *S, int_T tid)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_ckjBABowLK3WzjqwY5cIT(SimStruct *S)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_ckjBABowLK3WzjqwY5cIT(SimStruct *S, int_T tid)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_ckjBABowLK3WzjqwY5cIT(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_ckjBABowLK3WzjqwY5cIT(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_ckjBABowLK3WzjqwY5cIT(SimStruct *S)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_ckjBABowLK3WzjqwY5cIT(SimStruct *S)
{
  InstanceStruct_ckjBABowLK3WzjqwY5cIT *moduleInstance =
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT *)calloc(1, sizeof
    (InstanceStruct_ckjBABowLK3WzjqwY5cIT));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_ckjBABowLK3WzjqwY5cIT);
  ssSetmdlInitializeConditions(S, mdlInitialize_ckjBABowLK3WzjqwY5cIT);
  ssSetmdlUpdate(S, mdlUpdate_ckjBABowLK3WzjqwY5cIT);
  ssSetmdlTerminate(S, mdlTerminate_ckjBABowLK3WzjqwY5cIT);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_ckjBABowLK3WzjqwY5cIT(SimStruct *S)
{
}

void method_dispatcher_ckjBABowLK3WzjqwY5cIT(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_ckjBABowLK3WzjqwY5cIT(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_ckjBABowLK3WzjqwY5cIT(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_ckjBABowLK3WzjqwY5cIT(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_ckjBABowLK3WzjqwY5cIT(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: ckjBABowLK3WzjqwY5cIT.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_ckjBABowLK3WzjqwY5cIT_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxArray * elem_30;
  mxArray * elem_31;
  mxArray * elem_32;
  mxArray * elem_33;
  mxArray * elem_34;
  mxArray * elem_35;
  mxArray * elem_36;
  mxArray * elem_37;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,8);
  elem_6 = mxCreateString("ComPosition_src.h");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("ComVelocity_src.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("J_LeftToeBottomBack_src.h");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("J_LeftToeJoint_src.h");
  mxSetCell(elem_5,3,elem_9);
  elem_10 = mxCreateString("J_RightToeBottomBack_src.h");
  mxSetCell(elem_5,4,elem_10);
  elem_11 = mxCreateString("J_RightToeJoint_src.h");
  mxSetCell(elem_5,5,elem_11);
  elem_12 = mxCreateString("LeftToeJoint_src.h");
  mxSetCell(elem_5,6,elem_12);
  elem_13 = mxCreateString("RightToeJoint_src.h");
  mxSetCell(elem_5,7,elem_13);
  mxSetCell(elem_3,1,elem_5);
  elem_14 = mxCreateCellMatrix(1,8);
  elem_15 = mxCreateString("");
  mxSetCell(elem_14,0,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_14,1,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_14,2,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_14,3,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_14,4,elem_19);
  elem_20 = mxCreateString("");
  mxSetCell(elem_14,5,elem_20);
  elem_21 = mxCreateString("");
  mxSetCell(elem_14,6,elem_21);
  elem_22 = mxCreateString("");
  mxSetCell(elem_14,7,elem_22);
  mxSetCell(elem_3,2,elem_14);
  elem_23 = mxCreateCellMatrix(1,8);
  elem_24 = mxCreateString("");
  mxSetCell(elem_23,0,elem_24);
  elem_25 = mxCreateString("");
  mxSetCell(elem_23,1,elem_25);
  elem_26 = mxCreateString("");
  mxSetCell(elem_23,2,elem_26);
  elem_27 = mxCreateString("");
  mxSetCell(elem_23,3,elem_27);
  elem_28 = mxCreateString("");
  mxSetCell(elem_23,4,elem_28);
  elem_29 = mxCreateString("");
  mxSetCell(elem_23,5,elem_29);
  elem_30 = mxCreateString("");
  mxSetCell(elem_23,6,elem_30);
  elem_31 = mxCreateString("");
  mxSetCell(elem_23,7,elem_31);
  mxSetCell(elem_3,3,elem_23);
  mxSetCell(elem_1,1,elem_3);
  elem_32 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_32);
  elem_33 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_33);
  elem_34 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_34);
  elem_35 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_35);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_36 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_36);
  mxSetCell(mxBIArgs,1,elem_36);
  elem_37 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_37);
  return mxBIArgs;
}

mxArray *cgxe_ckjBABowLK3WzjqwY5cIT_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("ComPosition_src.h");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
