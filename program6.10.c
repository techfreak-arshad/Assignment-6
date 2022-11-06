#include<stdio.h>
int main()
{
int n,rem,rev_no=0;
printf("Enter the no\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
n=n/10;
rev_no=rev_no*10+rem;
}
printf("reverse no is %d ",rev_no);
return 0;
}
