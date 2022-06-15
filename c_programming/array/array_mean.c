#include<stdio.h>
int main()
{
int a[]={1,3,4,5,6};
int mean=0, sum=0;
for(int i=0;i<5;i++)
{
sum=sum+a[i];
}
mean=sum/5;
printf("%d",mean);
}

