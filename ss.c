#include<stdio.h>

void main(){
int n, i,sum=0,sum1=0;
printf("enter value of n:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{if(i%2==0)
sum=sum+i;}
printf("sum of even numbers in %d natural numbers:%d\n",n,sum);
for(i=1;i<=n;i++)
{if(i%2!=0)
sum1=sum1+i;}
printf("sum of odd numbers in %d natural numbers:%d",n,sum1);
}