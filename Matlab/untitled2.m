clear
x=linspace(0,2,101);
dx=0.02;
%해석해
ya=9/2*exp(x)+5/4*exp(2*x)+1/2*x.^2+3/2*x+7/4;
y1(1)=0;
y2(1)=1;
for i =1:100
    y1(i+1)=y1(i)+y2(i)*dx;
    y2(i+1)=y2(i)+(x(i)^2+3*y2(i)-2*y1(i))*dx;
end
plot(x,ya,'k--')
hold on
plot(x,y1,'r--')
hold off
