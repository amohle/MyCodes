#include<stdlib.h>
#include<stdio.h>
void showbits(unsigned char);
int main()
{
    system("clear");
   unsigned char num=8, k,l;
   printf("\nDecimal %d is same as binary\n",num);
   showbits(num);
   k=num>>1;
   printf("\nRight shift 1 gives %d\n",k);
   showbits(k);
   l=num<<1;
   printf("\nLeft shift 1 gives %d\n",l);
   showbits(l);

}
void showbits(unsigned char n)
{
int i;
unsigned char j,k, andmask;
for(i=7;i>=0;i--)
{
    j=i;
    andmask=1<<j;
    k=n&andmask;
    k==0?printf("0"):printf("1");
}



}

