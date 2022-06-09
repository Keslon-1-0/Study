clear
x=linspace(0,10,101);
ya=exp(-1/2*x).*(-1/3*cos(sqrt(11)/2*x)-1/3/sqrt(11)*sin(sqrt(11)/2*x))+1/3;
dx=0.1;
y1(1)=0;
y2(1)=0;
for i = 1:100
    y1(i+1)=y1(i)+y2(i)*dx;
    y2(i+1)=y2(i)+(1-y2(i)+-3*y1(i))*dx;
end
plot(x,ya,'k--')
hold on
plot(x,y1,'r--')
hold off
