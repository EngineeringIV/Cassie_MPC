x0 = [0;0;0]; 
t=8;
xL = [];
xU = [];
uL = [0; -0.2];
uU = [1; 0.2];
N = 5;
xN = [];
xPred = zeros(3, 6, 15);
xOpt = zeros(3, 16);
uOpt = zeros(2, 15);
for i = 1:15
[feas, x, u, JOpt, xD] = solve_cftoc(N, xOpt(:,i), xN, t, xL, xU, uL, uU);
xPred(:, :, i) = x;
xOpt(:, i+1) = x(:, 2);
uOpt(:, i) = u(:, 1);
t = t + 1;
end

figure
plot(xOpt(1, :), xOpt(2, :), 'b')
hold on
% plot(xD(1, :), xD(2, :), 'r')
% hold off
axis equal