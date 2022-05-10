clear
x=linspace(0,10,101);
dx=0.1;
%해석해
%y1=2*exp(-x)+x+1;
%수치해
y2(1)=3;
for i = 1:100
y2(i+1)=y2(i)+(sin(x(i))*x(i)-log(x(i)+1)*y2(i))*dx;
end
%plot(x,y1,'k-')
%hold on
plot(x,y2,'r-')
%hold off
