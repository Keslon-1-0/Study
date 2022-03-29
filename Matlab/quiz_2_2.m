clear
dx=0.01*10;
for i = 1:101
    x(i)=dx*(i-1);
    y1(i)=x(i)^(1/3);
    y2(i)=(x(i)+0.25)^(1/3);
    y3(i)=(x(i)+0.5)^(1/3);
end
figure(1)
hold on
plot(x,y1,'ko-')
plot(x,y2,'rs--')
plot(x,y3,"bv-.")
legend('y1','y2','y3')
axis([0 12 0 4])
hold off
plottools on
figure(2)
x=linspace(0,10,101);
    y1=x.^(1/3);
    y2=(x+0.25).^(1/3);
    y3=(x+0.5).^(1/3);
hold on
plot(x,y1,'ko-')
plot(x,y2,'rs--')
plot(x,y3,"bv-.")
legend('y1','y2','y3')
axis([0 12 0 4])
hold off
plottools on
