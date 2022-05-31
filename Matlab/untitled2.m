clear
x=linspace(0,1,101);
dx=0.01;
%해석해
a=1/dx^2/(2/dx^2+3/dx-2);
b=(1/dx^2+3/dx)/(2/dx^2+3/dx-2);
ya=1/(exp(1)-exp(2))*(exp(x)-exp(2*x));
y(1)=0;y(101)=1;y(2:100)=0.5;
yo=y;
for k = 1:100000
    for i = 2 : 100
        y(i)=a*yo(i+1)+b*yo(i-1);
    end
    aydif=abs(y-yo);
    maxaydif=max(aydif);
    if maxaydif < 1e-7
        break
    end
    yo=y;
end

plot(x,ya,'k--')
hold on
plot(x,y,'r--')
hold off
