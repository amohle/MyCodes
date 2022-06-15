#include<stdio.h>
void bitValue(unsigned char n);

int main()
{
    int n=911;
    bitValue(n);
    n=n&077;
    int oct=077;
    printf("\n");
    bitValue(077);
    printf("\n%d\n",n);
    bitValue(n);

}
void bitValue(unsigned char n)
{
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