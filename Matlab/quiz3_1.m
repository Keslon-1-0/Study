clear
x= linspace(0,2,100);
y =sqrt(x+1)-sin(x)-0.7;
plot(x,y)
clear
xs=0;
xe=1;
for k=1:100
    xh=(xs+xe)/2;
    xh=sqrt(xh+1)-sin(xh)-0.7;
    if yh<0
        xe=xh;
    else 
        xs=xh;
    end
end
ayh=abs(gh);
if ayh<1e-7
break;
end
for k=1:100
    xh=(xs+xe)/2;
    xh=sqrt(xh+1)-sin(xh)-0.7;
    if yh<0
        xs=xh;
    else 
        xe=xh;
    end
end
k;
ayj;
xh;


       