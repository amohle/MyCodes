#include<stdio.h>
int main()
{
int* p[2];

int a=90,b=88;
*p=&a; //this is equivalent to p[0]=&a;
*(p+1)=&b; // this is equivalent to p[1]=&b;
printf("%d",**p);//this is like doing *(&a);
printf("%d",**(p+1));
}
