#include<stdio.h>
#define NONBLANK '_'
int main()
{
    int c, last_c;
last_c=NONBLANK;
while((c=getchar())!='~')
{
if(c==' ')
{

    if(last_c!=' ')
    {
        putchar(c);
    }

}
else 
{
    putchar(c);

}
last_c=c;
}
return 0;

}