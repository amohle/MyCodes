/*Program to print a number in string format using recursion*/
#include<stdio.h>
void printString(int);
int main()
{
printString(131);
}
void printString(int n)
{
if(n<0)
{
    putchar('-');
    n=-n;
}
if(n/10)
{
    printString(n/10);
    putchar(n%10+'0');
}
else
putchar(n+'0');

}