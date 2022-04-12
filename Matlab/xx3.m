clear

x=linspace(1,2,11);dx=0.1;
sum=0;
for i=1:10
    y1=x(i)^2+1;
    y2=x(i+1)^2+1;
    area=(y1+y2)/2*dx;
    sum=sum+area;
end
%수치해
sum
%해석해
as=10/3
%오차
err=abs(as-sum)/abs(as)*100