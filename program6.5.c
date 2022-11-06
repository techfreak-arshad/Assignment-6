#include<stdio.h>
int main()
{
int i,n, sum;
sum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i*i*i;
}
printf("sum of numbers is %d\n",sum);
return 0;
}
