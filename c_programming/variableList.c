#include<stdio.h>
#include<stdarg.h>
void printer(int,...);
int main()
{
    printer(4,3,33,4,23);
}
void printer(int tot_num, ...)
{
int num;
va_list ptr;
va_start(ptr,tot_num);
int i=0;
while(i<tot_num)
{
    num=va_arg(ptr,int);
printf("%d\n",num);
i++;
}
}