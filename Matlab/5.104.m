%y'+2y=0(0 2)  
%y=2e^-2x
%y'-2y=x^2(0 1)
%yh=ce^2x
%yp=AX^2+bx+c
%yp'=2ax+b
%2AX+B+2AX^2-2Bx-2c=x^2
% A=1/2 b= 1/4 c = 5/4
%y=5/4e^2x+1/2x^2-1/2x-1/4
%y'-y=e^x(0 1)
%yh=ce^-x
%yp=Ae^x yp'=Ae^x
%A=1/2
%y=ce^-x+1/2e^x
%0=c+1/2 C=-1/2
%y=-1/2e^-x+1/2e^x
%y'+y=e^-x = e^x+xe^-x(0  1)
%y'+y=cosx(0 1)
%yp=Acosx+Bsinx
%yp'=-Asinx+Bcosx
%-Asinx+Bcosx+Acosx+Bsinx=cosx
%A+B=1 -A+B=0 A=B=1/2
%y= 1/2e^-x+1/2
clear
x=linspace(0,3,101);
dx=0.03;
%해석해
%pro 1
y1=2*exp(-2*x);
%수치해
y2(1)=2;
for i = 1:100
    y2(i+1)=y2(i)+(-2*y2(i))*dx;
end
figure(1)
plot(x,y1,'k-')
hold on
plot(x,y2,'r-')
hold off
%pro 2
y1=5/4*exp(2*x)-1/2*x.^2-1/2*x-1/4;
%수치해
y2(1)=1;
for i = 1:100
    y2(i+1)=y2(i)+(x(i)^2+2*y2(i))*dx;
end
figure(2)
plot(x,y1,'k-')
hold on
plot(x,y2,'r-')
hold off
%pro 3
    y1=-1/2*exp(-x)+1/2*exp(x);
%수치해
y2(1)=0;
for i = 1:100
    y2(i+1)=y2(i)+(exp(x(i))-y2(i))*dx;
end
figure(3)
plot(x,y1,'k-')
hold on
plot(x,y2,'r-')
hold off
%pro 4
y1=exp(x)+x.*exp(-x);
%수치해
y2(1)=1;
for i = 1:100
    y2(i+1)=y2(i)+(exp(-x(i))-y2(i))*dx;
end
figure(4)
plot(x,y1,'k-')
hold on
plot(x,y2,'r-')
hold off
%pro 5
y1=1/2*exp(-x)+1/2*(cos(x)+sin(x));
%수치해
y2(1)=1;
for i = 1:100
    y2(i+1)=y2(i)+(cos(x(i))-y2(i))*dx;
end
figure(5)
plot(x,y1,'k-')
hold on
plot(x,y2,'r-')
hold off
