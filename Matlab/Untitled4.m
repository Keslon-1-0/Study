clear
x=linspace(0,5,101);
dx=0.05;
%해석해
ya=cos(sqrt(0.5)*x);
y1(1)=1;
y2(1)=0;
for i =1:100
    y1(i+1)=y1(i)+y2(i)*dx;
    y2(i+1)=y2(i)-0.5*y1(i)*dx;
end
plot(x,ya,'k--')
hold on
plot(x,y1,'r--')
hold off
