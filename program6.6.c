#include<stdio.h>
int main()
{
int n,fac=1;
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
fac=fac*i;
}
printf("The factorial of no is %d",fac);
return 0;
}
