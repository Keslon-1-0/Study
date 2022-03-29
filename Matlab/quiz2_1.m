clear
dx=0.01*2*pi;
for i = 1:101
    x(i)=dx*(i-1);
    y1(i)=sin(x(i));
    y2(i)=sin(x(i)-0.25);
    y3(i)=sin(x(i)-0.5);
end
figure(1)
hold on
plot(x,y1,'ko-')
plot(x,y2,'rs--')
plot(x,y3,"bv-.")
legend('y1','y2','y3')
axis([0 4 -1.2 1.2])
hold off
figure(2)
x=linspace(0,2*pi,101);
y1=sin(x);
y2=sin(x-0.25);
y3=sin(x-0.5);
hold on
plot(x,y1,'ko-')
plot(x,y2,'rs--')
plot(x,y3,"bv-.")
legend('y1','y2','y3')
axis([0 4 -1.2 1.2])
hold off
plottools on
