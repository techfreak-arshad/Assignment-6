#include<stdio.h>
int main()
{
int i,n,sum;
sum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
sum=sum+i;
}
printf("sum of odd nos is %d",sum);
return 0;
}
