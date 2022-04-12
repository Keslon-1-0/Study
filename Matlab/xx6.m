%xcosxdx 0~1 까지 적분clear

x=linspace(0,1,11);dx=1;
sum=0;
for i=1:10
    y1=x(i)*cos(x(i));
    y2=x(x+i)*cos(x(i+1));
    area=(y1+y2)/2*dx;
    sum=sum+area;
end
%수치해
sum
%해석해
as=sin(1)+cos(1)-1
%오차
err=abs(as-sum)/abs(as)*100

