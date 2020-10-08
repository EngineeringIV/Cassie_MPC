function xd = get_desired(t)
    T = 15;
    x = (t-8)/T * 2*pi;
    y = sin(0.5*x);
%     x = t-8;
%     y = 8-t;
    xd = [x; y];
end