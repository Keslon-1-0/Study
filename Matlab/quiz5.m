clear
x=linspace(0,6,101);
dx=0.06
        %해석해
ya=2/sqrt(3)*exp(-1/2*x).*sin(sqrt(3)/2*x);
y1(1)=0;y2(1)=1;
for i = 1: 100
    %그대로
    y1(i+1)=y1(i)+y2(i)*dx;
                   %바꿀부분 
    y2(i+1)=y2(i)-(y1(i)+y2(i))*dx;
end
plot(x,ya,'k-')
hold on
plot(x,y1,'r-')
hold off
