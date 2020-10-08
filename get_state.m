function x = get_state(qa, dqa, qj, dqj, qyaw, qpitch, qroll, dqyaw, dqpitch, dqroll)

qaL = qa(1:5);
qaR = qa(6:10);
qjL =  qj(1:2);
qjR =  qj(4:5);

% Get current velocities
dqaL =  dqa(1:5);
dqaR =  dqa(6:10);
dqjL =  dqj(1:2);
dqjR =  dqj(4:5);

% assign the value
q_abduction_R = qaR(1);
q_rotation_R = qaR(2);
q_thigh_R = qaR(3);
q_thigh_knee_R = qaR(4);
q_knee_shin_R = qjR(1);
q_thigh_shin_R = q_thigh_knee_R+q_knee_shin_R;
q_shin_tarsus_R = qjR(2);
q_toe_R = qaR(5);

q_abduction_L = qaL(1);
q_rotation_L = qaL(2);
q_thigh_L = qaL(3);
q_thigh_knee_L = qaL(4);
q_knee_shin_L = qjL(1);
q_thigh_shin_L = q_thigh_knee_L+q_knee_shin_L;
q_shin_tarsus_L = qjL(2);
q_toe_L = qaL(5);

dq_abduction_R = dqaR(1);
dq_rotation_R = dqaR(2);
dq_thigh_R = dqaR(3);
dq_thigh_knee_R = dqaR(4);
dq_knee_shin_R = dqjR(1);
dq_thigh_shin_R = dq_thigh_knee_R+dq_knee_shin_R;
dq_shin_tarsus_R = dqjR(2);
dq_toe_R = dqaR(5);

dq_abduction_L = dqaL(1);
dq_rotation_L = dqaL(2);
dq_thigh_L = dqaL(3);
dq_thigh_knee_L = dqaL(4);
dq_knee_shin_L = dqjL(1);
dq_thigh_shin_L = dq_thigh_knee_L+dq_knee_shin_L;
dq_shin_tarsus_L = dqjL(2);
dq_toe_L = dqaL(5);

qall = [  0;  0;              0;              qyaw;           qpitch;              qroll;
    q_abduction_L;	q_rotation_L;	q_thigh_L;      q_thigh_knee_L;     q_knee_shin_L;      q_shin_tarsus_L;    q_toe_L;
    q_abduction_R;	q_rotation_R;	q_thigh_R;      q_thigh_knee_R;     q_knee_shin_R;      q_shin_tarsus_R;    q_toe_R];

dqall = [ 0;  0;              0;              dqyaw;         dqpitch;            dqroll;
    dq_abduction_L;	dq_rotation_L;	dq_thigh_L;     dq_thigh_knee_L;    dq_knee_shin_L;     dq_shin_tarsus_L;   dq_toe_L;
    dq_abduction_R;	dq_rotation_R;	dq_thigh_R;     dq_thigh_knee_R;    dq_knee_shin_R;     dq_shin_tarsus_R;   dq_toe_R];

Rz = YToolkits.Angles.Rz(qyaw);
com_pos = ComPosition(qall);
com_pos = com_pos';
com_pos = Rz'*com_pos;

x = [com_pos(1); com_pos(2); qyaw];
end