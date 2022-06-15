#include<stdio.h>
int bit_counter(int n);
int main()
{ int x;
printf("\nPLease enter your number");
    scanf("%d",&x);
    bit_counter(x);
}
int bit_counter(int n)
{ int i=0;
while(n!=0)
{
    n=n&n-1;
i++;
}
printf("\nTotal 1 bits=%d\n",i);
return i;
}