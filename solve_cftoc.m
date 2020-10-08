function [feas, xOpt, uOpt, JOpt, xD] = solve_cftoc(N, x0, xN, t, xL, xU, uL, uU)

x = sdpvar(3, N+1);
u = sdpvar(2, N);
dt = 1;
Q = [1 0; 0 1];
P = 5*Q;
R = 0.1;

xd = get_desired(t+N*dt);
Cost = (x(1:2, N+1)-xd)' * P * (x(1:2, N+1)-xd);

if ~isempty(xN)
    Constr = [x(:, N+1) == xN];
else
    Constr = [];
end

Constr = Constr + [x(:, 1) == x0];
xD = [];
for i = 1:N
    xd = get_desired(t+(i-1)*dt);
    xD = [xD, xd];
    Cost = Cost + (x(1:2, i)-xd)'*Q*(x(1:2, i)-xd) + u(:, i)'*R*u(:, i);
    Constr = Constr + [x(:, i+1) == [x(1,i) + u(1,i)*cos(x(3,i)+u(2,i)*dt)*dt; 
                                     x(2,i) + u(1,i)*sin(x(3,i)+u(2,i)*dt)*dt;
                                     x(3,i) + u(2,i)*dt]];
    Constr = Constr + [uL<=u(:, i)<=uU];
    if i <= N-1
        Constr = Constr + [-0.1<=u(1,i+1)-u(1,i)<=0.1];
        Constr = Constr + [-0.01<=u(2,i+1)-u(2,i)<=0.01];
    end
end

xD = [xD, get_desired(t+N*dt)];
options = sdpsettings('verbose', 0);
sol = optimize(Constr,Cost,options);

feas = sol.problem == 0;
if feas
    xOpt = double(x);
    uOpt = double(u);
    JOpt = double(Cost);
else
    xOpt = [];
    uOpt = [];
    JOpt = [];
end
    
end