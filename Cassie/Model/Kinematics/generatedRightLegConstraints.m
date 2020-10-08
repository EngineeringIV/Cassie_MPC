function [gc,Gc] = generatedRightLegConstraints(in1,in2,q_s2)
%GENERATEDRIGHTLEGCONSTRAINTS
%    [GC,GC] = GENERATEDRIGHTLEGCONSTRAINTS(IN1,IN2,Q_S2)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    27-Feb-2018 01:00:06

q_j3 = in2(1,:);
q_j4 = in2(2,:);
q_m9 = in1(4,:);
t2 = 1.088049452001149e4;
t3 = 2.143858773428999e20;
t4 = 3.311773241029645e3;
t5 = 7.700500308421525e3;
t6 = 4.68811041869772e16;
t7 = 8.378525140712717e7;
t8 = atan(2.1738e1);
t9 = q_j3+q_m9-t8;
t10 = cos(t9);
t11 = 1.65087851460022e24;
t12 = atan(1.804014317026996);
t13 = q_j3+q_j4+q_m9+q_s2+t12;
t14 = cos(t13);
t15 = 7.220159145019191e19;
t16 = atan(4.148414514547238e-1);
t17 = q_j3+q_j4+q_m9-t16;
t18 = cos(t17);
t19 = t4.*t18.*2.4e-6;
t20 = 2.550231086397094e7;
t21 = atan(1.323647968190876);
t22 = q_j3+q_j4+q_m9-q_s2-t21;
t23 = cos(t22);
t24 = t6.*t23.*9.325873406851315e-22;
t25 = 5.10089597198493e20;
t26 = atan(4.244463603655461e-1);
t27 = q_j3+q_j4+q_s2+t26;
t28 = cos(t27);
t29 = atan(6.158134567035908e1);
t30 = q_j3+q_j4-q_s2+t29;
t31 = cos(t30);
t32 = atan(1.76977299681492);
t33 = q_j3+q_j4-t32;
t34 = cos(t33);
t35 = t20.*t34.*2.0e-10;
t36 = 2.332624363597277e24;
t37 = 3.603373060054374e7;
t38 = atan(1.458457240579619);
t39 = -q_j4+q_s2+t38;
t40 = cos(t39);
t41 = t25.*t40.*3.108624468950438e-25;
t42 = 1.025697261150701e23;
t43 = atan(1.623296235781022);
t44 = q_j4+q_s2+t43;
t45 = cos(t44);
t46 = 2.586086382188437e22;
t47 = q_s2.*2.0;
gc = t25.*cos(q_j4-q_s2+atan(6.856560289711207e-1)).*(-3.108624468950438e-25)-t4.*cos(q_j3+q_j4+q_m9+atan(2.410559495665879)).*2.4e-6-t42.*cos(q_s2+atan(6.598822351531721)).*8.326672684688674e-26-t6.*cos(q_j3+q_j4+q_m9-q_s2+atan(7.554878819983918e-1)).*9.325873406851315e-22+t5.*cos(q_m9+atan(7.813117996044825e-1)).*2.4e-6-t37.*cos(q_j4+atan(2.128522089527127)).*8.0e-10-t3.*cos(q_j3+q_j4+q_m9+q_s2-atan(5.543193258288513e-1)).*1.332267629550188e-22-t46.*cos(t47+atan(3.612685844069762e-1)).*2.916820900774469e-41-t11.*cos(q_j3+q_j4+q_s2-atan(2.356010307495085)).*1.110223024625157e-26+t7.*cos(q_j3-atan(7.097977079425215e-1)).*8.0e-10+t2.*cos(q_j3+q_m9+atan(4.600239212439047e-2)).*9.6e-6-t20.*cos(q_j3+q_j4+atan(5.650442185521594e-1)).*2.0e-10-t15.*cos(q_j3+q_j4-q_s2-atan(1.623868379481239e-2)).*3.885780586188048e-25-t36.*cos(q_j4+q_s2-atan(6.160305050660497e-1)).*4.440892098500626e-26-2.45857384e-2;
if nargout > 1
    Gc = [0.0,0.0,0.0,t19+t24-t2.*t10.*9.6e-6-t3.*t14.*1.332267629550188e-22-t5.*cos(q_m9-atan(1.279898755536807)).*2.4e-6,0.0,t19+t24+t35-t2.*t10.*9.6e-6-t3.*t14.*1.332267629550188e-22-t11.*t28.*1.110223024625157e-26-t15.*t31.*3.885780586188048e-25+t7.*cos(q_j3+atan(1.408852112102028)).*8.0e-10,t19+t24+t35+t41-t3.*t14.*1.332267629550188e-22-t11.*t28.*1.110223024625157e-26-t15.*t31.*3.885780586188048e-25-t36.*t45.*4.440892098500626e-26+t37.*cos(q_j4-atan(4.698095476294354e-1)).*8.0e-10,-t24-t41+t46.*cos(t47-atan(2.76802368974735)).*5.833641801548937e-41-t3.*t14.*1.332267629550188e-22-t11.*t28.*1.110223024625157e-26+t15.*t31.*3.885780586188048e-25-t36.*t45.*4.440892098500626e-26+t42.*cos(q_s2-atan(1.515421914287296e-1)).*8.326672684688674e-26];
end
