clear
x=linspace(0,2,100);
    y1=sqrt(x+1)-sin(x)-0.7;
    y2=sqrt(x+1)-sin(x)-0.5;
    y3=sqrt(x+1)-sin(x)-0.4;

hold on
plot(x,y1,'k-o')
plot(x,y2,'r--s')
plot(x,y3,'b-.v')
legend('y1','y2','y3')
axis([0.5 1.5 –0.5 1])
hold off
plottools on
save prob3.dat x y1 y2 y3 