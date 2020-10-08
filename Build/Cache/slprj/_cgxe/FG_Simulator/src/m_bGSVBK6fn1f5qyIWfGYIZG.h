#ifndef __bGSVBK6fn1f5qyIWfGYIZG_h__
#define __bGSVBK6fn1f5qyIWfGYIZG_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"

/* Type Definitions */
#ifndef struct_ElmoOutBus_tag
#define struct_ElmoOutBus_tag

struct ElmoOutBus_tag
{
  uint16_T statusWord;
  real_T position;
  real_T velocity;
  real_T torque;
  real_T driveTemperature;
  real_T dcLinkVoltage;
  real_T torqueLimit;
  real_T gearRatio;
};

#endif                                 /*struct_ElmoOutBus_tag*/

#ifndef typedef_ElmoOutBus
#define typedef_ElmoOutBus

typedef struct ElmoOutBus_tag ElmoOutBus;

#endif                                 /*typedef_ElmoOutBus*/

#ifndef struct_JointOutBus_tag
#define struct_JointOutBus_tag

struct JointOutBus_tag
{
  real_T position;
  real_T velocity;
};

#endif                                 /*struct_JointOutBus_tag*/

#ifndef typedef_JointOutBus
#define typedef_JointOutBus

typedef struct JointOutBus_tag JointOutBus;

#endif                                 /*typedef_JointOutBus*/

#ifndef struct_CassieLegOutBus_tag
#define struct_CassieLegOutBus_tag

struct CassieLegOutBus_tag
{
  ElmoOutBus hipRollDrive;
  ElmoOutBus hipYawDrive;
  ElmoOutBus hipPitchDrive;
  ElmoOutBus kneeDrive;
  ElmoOutBus footDrive;
  JointOutBus shinJoint;
  JointOutBus tarsusJoint;
  JointOutBus footJoint;
  uint8_T medullaCounter;
  uint16_T medullaCpuLoad;
  boolean_T reedSwitchState;
};

#endif                                 /*struct_CassieLegOutBus_tag*/

#ifndef typedef_CassieLegOutBus
#define typedef_CassieLegOutBus

typedef struct CassieLegOutBus_tag CassieLegOutBus;

#endif                                 /*typedef_CassieLegOutBus*/

#ifndef enum_DiagnosticCodes
#define enum_DiagnosticCodes

enum DiagnosticCodes
{
  DiagnosticCodes_EMPTY = 0,           /* Default value */
  DiagnosticCodes_LEFT_HIP_NOT_CALIB = 5,
  DiagnosticCodes_LEFT_KNEE_NOT_CALIB,
  DiagnosticCodes_RIGHT_HIP_NOT_CALIB,
  DiagnosticCodes_RIGHT_KNEE_NOT_CALIB,
  DiagnosticCodes_ETHERCAT_GENERIC = 10,
  DiagnosticCodes_ETHERCAT_HOTCONNECT,
  DiagnosticCodes_LOW_BATTERY_CHARGE = 200,
  DiagnosticCodes_HIGH_CPU_TEMP = 205,
  DiagnosticCodes_HIGH_VTM_TEMP = 210,
  DiagnosticCodes_HIGH_ELMO_DRIVE_TEMP = 215,
  DiagnosticCodes_HIGH_STATOR_TEMP = 220,
  DiagnosticCodes_LOW_ELMO_LINK_VOLTAGE,
  DiagnosticCodes_HIGH_BATTERY_TEMP = 225,
  DiagnosticCodes_RADIO_DATA_BAD = 230,
  DiagnosticCodes_RADIO_SIGNAL_BAD,
  DiagnosticCodes_BMS_DATA_BAD = 235,
  DiagnosticCodes_VECTORNAV_DATA_BAD,
  DiagnosticCodes_VPE_GYRO_SATURATION = 240,
  DiagnosticCodes_VPE_MAG_SATURATION,
  DiagnosticCodes_VPE_ACC_SATURATION,
  DiagnosticCodes_VPE_ATTITUDE_BAD = 245,
  DiagnosticCodes_VPE_ATTITUDE_NOT_TRACKING,
  DiagnosticCodes_ETHERCAT_DC_ERROR = 400,
  DiagnosticCodes_ETHERCAT_ERROR = 410,
  DiagnosticCodes_ETHERCAT_SCANBUS,
  DiagnosticCodes_LOAD_CALIB_DATA_ERROR = 590,
  DiagnosticCodes_CRITICAL_BATTERY_CHARGE = 600,
  DiagnosticCodes_CRITICAL_CPU_TEMP = 605,
  DiagnosticCodes_CRITICAL_VTM_TEMP = 610,
  DiagnosticCodes_CRITICAL_ELMO_DRIVE_TEMP = 615,
  DiagnosticCodes_CRITICAL_STATOR_TEMP = 620,
  DiagnosticCodes_CRITICAL_BATTERY_TEMP = 625,
  DiagnosticCodes_TORQUE_LIMIT_REACHED = 630,
  DiagnosticCodes_JOINT_LIMIT_REACHED = 635,
  DiagnosticCodes_ENCODER_FAILURE = 640,
  DiagnosticCodes_SPRING_FAILURE = 645,
  DiagnosticCodes_LEFT_LEG_MEDULLA_HANG = 700,
  DiagnosticCodes_RIGHT_LEG_MEDULLA_HANG,
  DiagnosticCodes_PELVIS_MEDULLA_HANG = 703,
  DiagnosticCodes_CPU_OVERLOAD
};

#endif                                 /*enum_DiagnosticCodes*/

#ifndef typedef_DiagnosticCodes
#define typedef_DiagnosticCodes

typedef enum DiagnosticCodes DiagnosticCodes;

#endif                                 /*typedef_DiagnosticCodes*/

#ifndef struct_TargetPcOutBus_tag
#define struct_TargetPcOutBus_tag

struct TargetPcOutBus_tag
{
  int32_T etherCatStatus[6];
  int32_T etherCatNotifications[21];
  real_T taskExecutionTime;
  uint32_T overloadCounter;
  real_T cpuTemperature;
};

#endif                                 /*struct_TargetPcOutBus_tag*/

#ifndef typedef_TargetPcOutBus
#define typedef_TargetPcOutBus

typedef struct TargetPcOutBus_tag TargetPcOutBus;

#endif                                 /*typedef_TargetPcOutBus*/

#ifndef struct_BatteryOutBus_tag
#define struct_BatteryOutBus_tag

struct BatteryOutBus_tag
{
  boolean_T dataGood;
  real_T stateOfCharge;
  real_T voltage[12];
  real_T current;
  real_T temperature[4];
};

#endif                                 /*struct_BatteryOutBus_tag*/

#ifndef typedef_BatteryOutBus
#define typedef_BatteryOutBus

typedef struct BatteryOutBus_tag BatteryOutBus;

#endif                                 /*typedef_BatteryOutBus*/

#ifndef struct_RadioOutBus_tag
#define struct_RadioOutBus_tag

struct RadioOutBus_tag
{
  boolean_T radioReceiverSignalGood;
  boolean_T receiverMedullaSignalGood;
  real_T channel[16];
};

#endif                                 /*struct_RadioOutBus_tag*/

#ifndef typedef_RadioOutBus
#define typedef_RadioOutBus

typedef struct RadioOutBus_tag RadioOutBus;

#endif                                 /*typedef_RadioOutBus*/

#ifndef struct_VectorNavOutBus_tag
#define struct_VectorNavOutBus_tag

struct VectorNavOutBus_tag
{
  boolean_T dataGood;
  uint16_T vpeStatus;
  real_T pressure;
  real_T temperature;
  real_T magneticField[3];
  real_T angularVelocity[3];
  real_T linearAcceleration[3];
  real_T orientation[4];
};

#endif                                 /*struct_VectorNavOutBus_tag*/

#ifndef typedef_VectorNavOutBus
#define typedef_VectorNavOutBus

typedef struct VectorNavOutBus_tag VectorNavOutBus;

#endif                                 /*typedef_VectorNavOutBus*/

#ifndef struct_CassiePelvisOutBus_tag
#define struct_CassiePelvisOutBus_tag

struct CassiePelvisOutBus_tag
{
  TargetPcOutBus targetPc;
  BatteryOutBus battery;
  RadioOutBus radio;
  VectorNavOutBus vectorNav;
  uint8_T medullaCounter;
  uint16_T medullaCpuLoad;
  boolean_T bleederState;
  boolean_T leftReedSwitchState;
  boolean_T rightReedSwitchState;
  real_T vtmTemperature;
};

#endif                                 /*struct_CassiePelvisOutBus_tag*/

#ifndef typedef_CassiePelvisOutBus
#define typedef_CassiePelvisOutBus

typedef struct CassiePelvisOutBus_tag CassiePelvisOutBus;

#endif                                 /*typedef_CassiePelvisOutBus*/

#ifndef struct_RightStance_tag
#define struct_RightStance_tag

struct RightStance_tag
{
  real_T HAlpha[540];
};

#endif                                 /*struct_RightStance_tag*/

#ifndef typedef_RightStance
#define typedef_RightStance

typedef struct RightStance_tag RightStance;

#endif                                 /*typedef_RightStance*/

#ifndef struct_LeftStance_tag
#define struct_LeftStance_tag

struct LeftStance_tag
{
  real_T HAlpha[540];
};

#endif                                 /*struct_LeftStance_tag*/

#ifndef typedef_LeftStance
#define typedef_LeftStance

typedef struct LeftStance_tag LeftStance;

#endif                                 /*typedef_LeftStance*/

#ifndef struct_cassieGaitLibraryBus_tag
#define struct_cassieGaitLibraryBus_tag

struct cassieGaitLibraryBus_tag
{
  RightStance RightStance;
  LeftStance LeftStance;
  real_T Desired_Velocity[18];
  real_T ct[9];
  real_T Velocity[18];
};

#endif                                 /*struct_cassieGaitLibraryBus_tag*/

#ifndef typedef_cassieGaitLibraryBus
#define typedef_cassieGaitLibraryBus

typedef struct cassieGaitLibraryBus_tag cassieGaitLibraryBus;

#endif                                 /*typedef_cassieGaitLibraryBus*/

#ifndef struct_CassieUserInBus_tag
#define struct_CassieUserInBus_tag

struct CassieUserInBus_tag
{
  real_T torque[10];
  int16_T telemetry[9];
};

#endif                                 /*struct_CassieUserInBus_tag*/

#ifndef typedef_CassieUserInBus
#define typedef_CassieUserInBus

typedef struct CassieUserInBus_tag CassieUserInBus;

#endif                                 /*typedef_CassieUserInBus*/

#ifndef struct_cassieDataBus_tag
#define struct_cassieDataBus_tag

struct cassieDataBus_tag
{
  real_T hd[10];
  real_T dhd[10];
  real_T h0[10];
  real_T dh0[10];
  real_T hd_fix[10];
  real_T dhd_fix[10];
  real_T h0_fix[10];
  real_T dh0_fix[10];
  real_T hd_joint[10];
  real_T dhd_joint[10];
  real_T h0_joint[10];
  real_T dh0_joint[10];
  real_T y[10];
  real_T dy[10];
  real_T y_joint[10];
  real_T dy_joint[10];
  real_T y1_joint;
  real_T y2_joint;
  real_T y3_joint;
  real_T y4_joint;
  real_T y5_joint;
  real_T y6_joint;
  real_T y7_joint;
  real_T y8_joint;
  real_T y9_joint;
  real_T y10_joint;
  real_T y_knee[2];
  real_T dy_knee[2];
  real_T LLd;
  real_T dLLd;
  real_T qKnee_d;
  real_T dqKnee_d;
  real_T qknee_d_L;
  real_T qknee_d_R;
  real_T left_tune;
  real_T right_tune;
  real_T LL0_R;
  real_T LL0_L;
  real_T y_output[4];
  real_T dy_output[4];
  real_T u_output[4];
  real_T lateral_mid_p;
  real_T lateral_mid_v;
  real_T LL_des_fil;
  real_T test;
  real_T task;
  real_T t;
  real_T q[26];
  real_T dq[26];
  real_T u[10];
  real_T u_sat[10];
  real_T u_fil[10];
  real_T stanceLeg;
  real_T s_sw;
  real_T s_st;
  real_T s;
  real_T ds;
  real_T encoder_fil[14];
  real_T d_torso_angle_fil[3];
  real_T tp_last;
  real_T avg_v_last_1;
  real_T avg_v_last_2;
  real_T theta;
  real_T dtheta;
  real_T theta_d;
  real_T dtheta_d;
  real_T GRF[2];
  real_T t0;
  real_T Switch;
  real_T spring_force_R[2];
  real_T spring_force_L[2];
  real_T torso_angle[3];
  real_T d_torso_angle[3];
  real_T id_torso_angle[3];
  real_T dd_torso_angle[3];
  real_T torso_position[3];
  real_T torso_velocity[3];
  real_T torso_velocity_fil[3];
  real_T torso_vx;
  real_T torso_vy;
  real_T torso_vz;
  real_T torso_vx_fil;
  real_T torso_vy_fil;
  real_T torso_vz_fil;
  real_T torso_vx_b;
  real_T torso_vy_b;
  real_T torso_vz_b;
  real_T torso_vx_b_fil;
  real_T torso_vy_b_fil;
  real_T torso_vz_b_fil;
  real_T tg_velocity_x;
  real_T com_pos[3];
  real_T com_vel[3];
  real_T com_vel_x;
  real_T com_vel_y;
  real_T com_vel_z;
  real_T com_vel_x_fil;
  real_T com_vel_y_fil;
  real_T com_vel_z_fil;
  real_T com_pos_x_fil;
  real_T com_pos_y_fil;
  real_T com_pos_z_fil;
  real_T com_pos_fil[3];
  real_T torso_vx_test;
  real_T torso_vy_test;
  real_T torso_vz_test;
  real_T torso_vx_b_test;
  real_T torso_vy_b_test;
  real_T torso_vz_b_test;
  real_T torso_vx_test_2;
  real_T torso_vy_test_2;
  real_T torso_vz_test_2;
  real_T torso_vx_b_test_2;
  real_T torso_vy_b_test_2;
  real_T torso_vz_b_test_2;
  real_T torso_vx_fil_test;
  real_T torso_vy_fil_test;
  real_T torso_vz_fil_test;
  real_T torso_vx_b_fil_test;
  real_T torso_vy_b_fil_test;
  real_T torso_vz_b_fil_test;
  real_T l_abduction_vx;
  real_T l_abduction_vy;
  real_T l_abduction_vz;
  real_T l_foot_vx;
  real_T l_foot_vy;
  real_T l_foot_vz;
  real_T l_foot_vx_b;
  real_T l_foot_vy_b;
  real_T l_foot_vz_b;
  real_T r_foot_v[3];
  real_T l_foot_v[3];
  real_T r_foot_p[3];
  real_T l_foot_p[3];
  real_T s_LR[2];
  real_T orient;
  real_T d_orient_test;
  real_T d_orient;
  real_T step_end_dx_fil_seq[3];
  real_T step_end_dy_fil_seq[3];
  real_T q_abduction_R;
  real_T q_rotation_R;
  real_T q_thigh_R;
  real_T q_thigh_knee_R;
  real_T q_knee_shin_R;
  real_T q_thigh_shin_R;
  real_T q_shin_tarsus_R;
  real_T q_toe_R;
  real_T q_abduction_L;
  real_T q_rotation_L;
  real_T q_thigh_L;
  real_T q_thigh_knee_L;
  real_T q_knee_shin_L;
  real_T q_thigh_shin_L;
  real_T q_shin_tarsus_L;
  real_T q_toe_L;
  real_T dq_abduction_R;
  real_T dq_rotation_R;
  real_T dq_thigh_R;
  real_T dq_thigh_knee_R;
  real_T dq_knee_shin_R;
  real_T dq_thigh_shin_R;
  real_T dq_shin_tarsus_R;
  real_T dq_toe_R;
  real_T dq_abduction_L;
  real_T dq_rotation_L;
  real_T dq_thigh_L;
  real_T dq_thigh_knee_L;
  real_T dq_knee_shin_L;
  real_T dq_thigh_shin_L;
  real_T dq_shin_tarsus_L;
  real_T dq_toe_L;
  real_T qall[20];
  real_T dqall[20];
  real_T qq[4];
  real_T qaR[5];
  real_T qjR[2];
  real_T qsR[2];
  real_T qaL[5];
  real_T qjL[2];
  real_T qsL[2];
  real_T dqq[3];
  real_T dqaR[5];
  real_T dqjR[2];
  real_T dqsR[2];
  real_T dqaL[5];
  real_T dqjL[2];
  real_T dqsL[2];
  real_T u_P[10];
  real_T u_D[10];
  real_T computer_time;
};

#endif                                 /*struct_cassieDataBus_tag*/

#ifndef typedef_cassieDataBus
#define typedef_cassieDataBus

typedef struct cassieDataBus_tag cassieDataBus;

#endif                                 /*typedef_cassieDataBus*/

#ifndef struct_tag_stYHKfUCpUZzNx4MhyRPhnG
#define struct_tag_stYHKfUCpUZzNx4MhyRPhnG

struct tag_stYHKfUCpUZzNx4MhyRPhnG
{
  real_T HAlpha[60];
  real_T ct;
};

#endif                                 /*struct_tag_stYHKfUCpUZzNx4MhyRPhnG*/

#ifndef typedef_stYHKfUCpUZzNx4MhyRPhnG
#define typedef_stYHKfUCpUZzNx4MhyRPhnG

typedef struct tag_stYHKfUCpUZzNx4MhyRPhnG stYHKfUCpUZzNx4MhyRPhnG;

#endif                                 /*typedef_stYHKfUCpUZzNx4MhyRPhnG*/

#ifndef typedef_FG_Controller
#define typedef_FG_Controller

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  real_T Kp_pitch;
  real_T Kd_pitch;
  real_T Kp_roll;
  real_T Kd_roll;
  real_T Kp_yaw;
  real_T Kd_yaw;
  real_T Kp_abduction;
  real_T Kp_rotation;
  real_T Kp_thigh;
  real_T Kp_knee;
  real_T Kp_toe;
  real_T Kd_abduction;
  real_T Kd_rotation;
  real_T Kd_thigh;
  real_T Kd_knee;
  real_T Kd_toe;
  real_T Kfs_p;
  real_T Kfl_p;
  real_T Kfs_d;
  real_T Kfl_d;
  real_T Kp_toe_stand;
  real_T Kd_toe_stand;
  real_T Kp_lateral_stand;
  real_T Kd_lateral_stand;
  real_T Kp_abduction_stand;
  real_T Kd_abduction_stand;
  real_T Kp_thigh_stand;
  real_T Kd_thigh_stand;
  real_T Kp_knee_stand;
  real_T Kd_knee_stand;
  real_T Kp_rotation_stand;
  real_T Kd_rotation_stand;
  real_T fil_para_x;
  real_T fil_para_y;
  real_T stance_thre_ub;
  real_T stance_thre_lb;
  real_T lateral_velocity_weight;
  real_T init_lateral_velocity;
  real_T abduction_inward_gain;
  real_T joint_filter_choice;
  real_T shift_time;
  real_T shift_distance;
  real_T standing_switch_time;
  real_T toe_tilt_angle;
  real_T final_sw_abduction;
  real_T final_st_abduction;
  real_T pre_final_sw_abduction;
  real_T sagittal_offset_exp;
  real_T lateral_offset_exp;
  real_T turning_offset_exp;
  real_T stand_offset_exp;
  real_T u_abduction_cp;
  real_T u_abduction_swing_cp;
  real_T u_thigh_cp;
  real_T u_knee_cp;
  real_T fil_para_2;
  real_T fil_para_3;
  real_T fil_para_4;
  real_T fil_para_5;
  real_T force_step_end_s;
  real_T sagittal_offset;
  real_T lateral_offset;
  real_T turning_offset;
  real_T stand_offset;
  real_T safe_TorqueLimits[10];
  real_T standing_abduction_offset;
  real_T bezier_degree;
  real_T Kp[10];
  real_T Kd[10];
  real_T stanceLeg;
  real_T begin;
  real_T walking_ini;
  real_T step_end;
  real_T task;
  real_T task_prev;
  real_T task_next;
  real_T t0;
  real_T t_prev;
  real_T t1;
  real_T s1;
  real_T t2;
  real_T s2;
  real_T u_prev[10];
  real_T u_last[10];
  real_T s_prev;
  real_T s_unsat_prev;
  real_T dqy_b_start;
  stYHKfUCpUZzNx4MhyRPhnG gaitparams;
  real_T foot_placement;
  real_T pitch_torso_control;
  real_T roll_torso_control;
  real_T stance_passive;
  real_T knee_com;
  real_T abduction_com;
  real_T thigh_compensation;
  real_T abduction_swing_com;
  real_T keep_direction;
  real_T to_turn;
  real_T to_turn_prev;
  real_T tg_yaw;
  real_T tg_velocity_x;
  real_T uHip_gravity_2;
  real_T dqx_b_fil;
  real_T dqy_b_fil;
  real_T dqz_b_fil;
  real_T dqx_fil;
  real_T dqy_fil;
  real_T dqz_fil;
  real_T com_vel_x_fil;
  real_T com_vel_y_fil;
  real_T com_vel_z_fil;
  real_T com_pos_x_fil;
  real_T com_pos_y_fil;
  real_T com_pos_z_fil;
  real_T pitch_des_fil;
  real_T tg_velocity_x_fil;
  real_T lateral_move_fil;
  real_T LL_des_fil;
  real_T roll_des_fil;
  real_T P_feedback_toe_fil;
  real_T hd[10];
  real_T dhd[10];
  real_T hd_joint[10];
  real_T dhd_joint[10];
  real_T h0[10];
  real_T dh0[10];
  real_T h0_joint[10];
  real_T dh0_joint[10];
  real_T y[10];
  real_T dy[10];
  real_T y_joint[10];
  real_T dy_joint[10];
  real_T hd_last[10];
  real_T dhd_last[10];
  real_T v_final[2];
  real_T v_final_avgy;
  real_T tp_last;
  real_T lateral_move;
  real_T rotation_move;
  real_T to_stand_step_count;
} FG_Controller;

#endif                                 /*typedef_FG_Controller*/

#ifndef typedef_b_DiagnosticCodes
#define typedef_b_DiagnosticCodes

typedef int16_T b_DiagnosticCodes;

#endif                                 /*typedef_b_DiagnosticCodes*/

#ifndef DiagnosticCodes_constants
#define DiagnosticCodes_constants

/* enum DiagnosticCodes */
#endif                                 /*DiagnosticCodes_constants*/

#ifndef struct_CassieOutBus_tag
#define struct_CassieOutBus_tag

struct CassieOutBus_tag
{
  CassiePelvisOutBus pelvis;
  CassieLegOutBus leftLeg;
  CassieLegOutBus rightLeg;
  boolean_T isCalibrated;
  b_DiagnosticCodes messages[4];
};

#endif                                 /*struct_CassieOutBus_tag*/

#ifndef typedef_CassieOutBus
#define typedef_CassieOutBus

typedef struct CassieOutBus_tag CassieOutBus;

#endif                                 /*typedef_CassieOutBus*/

#ifndef typedef_InstanceStruct_bGSVBK6fn1f5qyIWfGYIZG
#define typedef_InstanceStruct_bGSVBK6fn1f5qyIWfGYIZG

typedef struct {
  SimStruct *S;
  FG_Controller sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real_T *u0;
  CassieOutBus *u1;
  boolean_T *u2;
  cassieGaitLibraryBus *u3;
  real_T (*u4)[14];
  CassieUserInBus *b_y0;
  cassieDataBus *b_y1;
  covrtInstance *covInst_CONTAINER_BLOCK_INDEX;
} InstanceStruct_bGSVBK6fn1f5qyIWfGYIZG;

#endif                                 /*typedef_InstanceStruct_bGSVBK6fn1f5qyIWfGYIZG*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_bGSVBK6fn1f5qyIWfGYIZG(SimStruct *S, int_T method,
  void* data);

#endif
