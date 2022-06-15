/*Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
in x. Explain why. Use this observation to write a faster version of bitcount*/


#include<stdio.h>
void getbits(unsigned char x,unsigned char p,unsigned char n);
int main()
{ int n,x,p;
    printf("\nPLease enter your number");
    scanf("%d",&x);
    printf("\nPlease enter the position");
    scanf("%d",&p);
    printf("\nPLease enter number of bits");
    scanf("%d",&n);
    getbits(x,p,n);
    }

void getbits(unsigned char x,unsigned char p,unsigned char n)
{char j,and_mask;
for(int i=0;i<n;i++)
{
    and_mask=1<<p--;
    j=and_mask&x;
    j==0?printf("0"):printf("1");
}
}
