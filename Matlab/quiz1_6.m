clear
x=linspace(0,3,11);
    y1=exp(-x);
    y2=log(x+1);
    y3=1./(x+1);

hold on
plot(x,y1,'k-o')
plot(x,y2,'r--s')
plot(x,y3,'b-.v')
legend('y1','y2','y3')
hold off
plottools on