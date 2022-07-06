// Testing undef macro, here we will define a function with same name as the macro and then undef the function.
#define printer printf("Hello");
#undef printer
#include<stdio.h>
void printer();
int main()
{
    printer();
}
void printer()
{
    printf("This is a function Call");
}

