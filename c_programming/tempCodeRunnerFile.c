void bitValue(unsigned char n)
{
  int i;
  unsigned char a,j,k, and_mask;
for(int i=7;i>=0;i--)
{
    j=i;
    and_mask=1<<j;
    printf("\nandmask value=%d when i=%d\n",and_mask,i);
    k=n&and_mask;
    k==0?printf("0"):printf("1");

}