#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the two nos\n");
scanf("%d",&a);
scanf("%d",&b);
for(i=1;i<a*b;i++)
{
if((i%a==0)&&(i*b==0))
{
break;
}
}
printf("LCM is %d",i);
return 0;
}
