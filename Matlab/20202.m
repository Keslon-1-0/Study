clear
x=linspace(0,1,101);
ya=1/4*(1-x.^2);
dx=0.01;
a=x./(2*x-dx);b=(x-dx)./(2*x-dx);c=dx^2*x./(2*x-dx);
yo(1:101)=0;y(1:101)=0;
for k=1:100000
    for i=2:100
        y(i)=a(i)*yo(i+1)+b(i)*yo(i-1)+c(i);
    end
    aydif=abs(y-yo);
    maxaydif=max(aydif);
    if maxaydif<1e-10
        break
    end
    y(1)=y(2);
    yo=y;
end
plot(x,ya,'k-')
hold on
plot(x,y,'r--')
hold off