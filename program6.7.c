#include<stdio.h>
int main()
{
int n,count=0;
printf("enter the value of n\n");
scanf("%d",&n);
if(n==0)
    printf("no of digit is 1");
else
{
while(n!=0)
{
n=n/10;
count++;
}
printf("no of digits is %d",count);
}
return 0;
}
