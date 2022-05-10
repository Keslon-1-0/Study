clear
x=linspace(0,2,21);
    y1=3*sin(2*x-sqrt(x));
    y2=(exp(x)+exp(-x))/2;
hold on
plot(x,y1)
plot(x,y2)
legend('y1','y2')
hold off
plottools on