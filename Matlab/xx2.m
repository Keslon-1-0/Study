clear
xx=[1 1.5 1.7 2.5 3 3 3.5]
yy = [1.5 0.4 2.3 2.1 3 3.5 7.8]
hold on
plot(xx,yy,'o')
x=linspace(1,3.5,101);
p=polyfit(xx,yy,1);
y1 =polyval(p,x)
plot(x,y1,'b-')
p=polyfit(xx,yy,2);
y1 =polyval(p,x)
plot(x,y1,'k-')
p=polyfit(xx,yy,3);
y1 =polyval(p,x)
plot(x,y1,'r-')
hold off
