clear
x=linspace(0,20,10001);
dx=0.002;
%해석해
ya=exp(-1/2*x).*(cos(sqrt(7)/2*x)+1/sqrt(7)*sin(sqrt(7)/2*x));
y1(1)=1;
y2(1)=0;
for i =1:10000
    y1(i+1)=y1(i)+y2(i)*dx;
    y2(i+1)=y2(i)-(y2(i)+2*y1(i))*dx;
end
plot(x,ya,'k--')
hold on
plot(x,y1,'r--')
hold off
 