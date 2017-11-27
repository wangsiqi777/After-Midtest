#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,T;
double s,p,q;
scanf("%d",&T);
int i;
for(i=0;i<T;i++){
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a+b>c &&a+c>b &&b+c>a)
{
   p=(a+b+c)/2;
   q=p*(p-a)*(p-b)*(p-c);
   s=sqrt(q);
   printf("%.2lf\n",s);
}
else{printf("error\n");
}
}
return 0;

 
}
