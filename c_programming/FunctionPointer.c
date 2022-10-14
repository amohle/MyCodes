#include<stdio.h>
void display();
void display2();
void display3();
void functionCaller ();
int main()
{
void (*ptr)();
ptr=display3;
functionCaller(ptr);
}
void display()
{
    printf("\nThis is a working pointer function\n");
}
void display2()
{
    printf("\nThis is Display 2\n");
}
void display3()
{
    printf("This is display 3");
}
void functionCaller (void *(ptr)())
{
    printf("This is functionCaller function");
    ptr();
}