//getbits(x,p,n): take out the n bits from position p from number x
#include<stdio.h>
void getbits(unsigned char x,unsigned char p,unsigned char n);
void bitValue(unsigned char n);
int main()
{ int n,x,p;
    printf("\nPLease enter your number");
    scanf("%d",&x);
bitValue(x);
bitValue(x-1);
x=x&x-1;
bitValue(x);
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
void bitValue(unsigned char n)
{printf("\n");
  int i;
  unsigned char a,j,k, and_mask;
for(int i=7;i>=0;i--)
{
    j=i;
    and_mask=1<<j;
    k=n&and_mask;
    k==0?printf("0"):printf("1");

}
}