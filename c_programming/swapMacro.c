#define swap(t,x,y) {t temp;temp=x;x=y;y=temp;} 
#include<stdio.h>
int main()
{
    char a=8;
    char b=9;
    swap(char,a,b)
printf("%d",a);
}