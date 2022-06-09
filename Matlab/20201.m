clear
x=linspace(0,3,101)
ya=2*exp(x)-x-1;
dx=0.03;
yn(1)=1;
for i=1:100
    yn(i+1)=yn(i)+(x(i)+yn(i))*dx;
end
plot(x,ya,'k-')
hold on
plot(x,yn,'r--')
hold off