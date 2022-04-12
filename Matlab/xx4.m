clear

x=linspace(0,pi,11);dx=pi/10;
sum=0;
for i=1:10
    y1=sin(x(i));
    y2=sin(x(i+1));
    area=(y1+y2)/2*dx;
    sum=sum+area;
end
%수치해
sum
%해석해
as=-cos(pi)+1
%오차
err=abs(as-sum)/abs(as)*100
