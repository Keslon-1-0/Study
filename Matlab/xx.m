clear
xx=[0 1 1.5 2 2.5 3 4];
yy=[-1 2 1.2 4 3 5 4];
hold on
plot(xx,yy,'o')
x=linspace(0,4,101);
y1=interp1(xx,yy,x);
plot(x,y1,'k-')
y2=spline(xx,yy,x);
plot(x,y2,'-r')
p=polyfit(xx,yy,1);
y3=polyval(p,x);
plot(x,y3,'b-')
hold off