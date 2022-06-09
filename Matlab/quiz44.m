clear
x=linspace(0,1,21);
ya=-2/(exp(4)-1)*(exp(4*x)-1)+2;
dx=0.05;
y(1)=2;
y(21)=0;
y(2:20)=1;
yo=y;
for k=1:1000
    for i=2:20
        y(i)=1/(2+4*dx^2)*(yo(i+1)+yo(i-1)-8*dx^2);
    end
    aydif=abs(y-yo);
    maxaydif=max(aydif);
    if maxaydif<1e-5
        break
    end
    yo=y;
end
plot(x,ya,'k-')
hold on
plot(x,y,'r--')
hold off