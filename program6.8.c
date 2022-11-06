#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(int i=2;i<n;i++)
{
if(n%i==0)
{
count=1;
break;
}
}
if(count == 0)
printf("no is prime\n");
else
printf("no is not prime");
return 0;
}
