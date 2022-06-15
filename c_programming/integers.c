#include<stdio.h>
int main()
{
int n=90;
int i;
int mask=0,and_mask,k;
for(i=31;i>=0;i--)
{
and_mask=1<<i;
k=n&and_mask;
k==0?printf("0"):printf("1");

}
}