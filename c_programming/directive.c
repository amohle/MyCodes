#include<stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("This is main function\n");
return 0;
}
void fun1()
{
    printf("This is fun1 function");
}
void fun2()
{
    printf("This is fun2 function");
}