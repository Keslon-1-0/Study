clear
x=linspace(0,4)
    y1=3*sin(2*x-sqrt(x)-2);
plot(x,y1)
syms x
eqn = 3*sin(2*x-sqrt(x)-2);
solx = solve(eqn, x)

