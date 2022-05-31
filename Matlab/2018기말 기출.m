%y''-y=-1 x=0 y=0 x= 1 y'=1
clear
x=linspace(0,1,101);
dx=1/100;
%해석해
a=  1/dx^2/(2/dx^2+1);
b= a;
c= 1/(2/dx^2+1);
ya= -1/(1+exp(2))*(exp(x)+exp(2-x))+1;
y(1)=0;
y(2:101)=0.5;
yo=y;
for k = 1:1000000
    for i = 2 : 100
        y(i)=a*yo(i+1)+b*yo(i-1)+c;
    end
    aydif=abs(y-yo);
    maxaydif=max(aydif);
    if maxaydif < 1e-8
        break
    end
    %y' 경계조건
    y(101)=y(100);
    yo=y;
end

plot(x,ya,'k-')
hold on
plot(x,y,'r--')
hold off