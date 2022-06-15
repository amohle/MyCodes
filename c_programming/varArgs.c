//program to take variable arguments in a c function
#include<stdio.h>
#include<stdarg.h>
int findMax(int,...);
int main()
{
int max;
max=findMax(5,23,45,22,12,23);
printf("\n\nThe Max value supplied is %d\n\n",max);
}
int findMax(int total, ...)
{
    int max, count, num;
    va_list ptr;
    va_start(ptr,total);
    max=va_arg(ptr,int);

    //so here taking 1 is more important instead of zero
    for(int i=1;i<total;i++)
    {
num=va_arg(ptr,int);
if(num>max)
{
    max=num;
}

    }

return max;
}
