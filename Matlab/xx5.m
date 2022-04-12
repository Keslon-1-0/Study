clear

x=linspace(1,3,11);dx=2/10;
sum=0;
for i=1:10
    y1=300*x(i)^-1.3;
    y2=300*x(i+1)^-1.3;
    area=(y1+y2)/2*dx;
    sum=sum+area;
end
%수치해
sum
%해석해
as=1
%오차
err=abs(as-sum)/abs(as)*100
