clear
syms x
f = x*exp(x);
int(f,x,[0,10])
ans
err=abs(1-ans)/abs(1)*100