clear
figure(1)
dx=3/100;
for i = 1:101
    x(i)=(i-1)*dx;
    y(i)=exp(-x(i));
end
plot(x,y)
figure(2)
clear
x=linspace(0,3,101);
y=exp(-x);
plot(x,y)
