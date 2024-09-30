#include<stdio.h>

void main(){
int n;
printf("Enter the value of n:");
scanf("%d",&n);

for (int i=1;i<=n;i++)
{if(i%2==0)printf("%3d",i);
printf("even numbers are:");}

for (int i=1;i<=n;i++)
{if(i%2!=0)printf("%3d",i);
printf("\nodd numbers are:");}
}