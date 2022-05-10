clear
syms x1 x2 x3 x4
eqn1 = -3*x1+x2 ==-2;
eqn2 = x1-3*x2+x3==0;
eqn3 = x2-3*x3+x4 ==0;
eqn4 = x3-3*x4==-2;
sol = solve([eqn1, eqn2, eqn3,eqn4], [x1, x2, x3,x4]);
x1Sol = sol.x1
x2Sol = sol.x2
x3Sol = sol.x3
x4Sol = sol.x4

