#include<stdio.h>
int main()
{
char c;
int nc=0;
int nl=0;
printf("EOF value is %d",EOF);
while ((c=getchar())!='X')
{
nc++;
if(c=='\n')
{
nl++;
}
putchar(c);
}
printf("The number of lines is %d",nl);
}
