clear
load rho.dat
x=rho(:,1);v=rho(:,2);
figure(1)
hold on
plot(x,v,'ko')
xx=linspace(0,10,101);
vv=interp1(x,v,xx); 
hold on
plot(xx,vv,'r-')
hold off
vv=spline(x,v,xx);
plot(x,v,'ko')
hold on
plot(xx,vv,'r-')
hold off
pp=polyfit(xx,yy,1);
y1 =polyval(p,x)
plot(x,y1)
p=polyfit(xx,yy,2);
y2 =polyval(p,x)
plot(x,y2)
p=polyfit(xx,yy,3);
y3 =polyval(p,x)
plot(x,y3)
legend('data''y1','y2','y3')
hold off
