//Example to demonstrate right to left associativity of * and ++
#include<stdio.h>
int main()
{
int *p;
int a=90;
p=&a;
printf("%d",*p++); //here after printing the values p++ moves to other memory location
printf("%d",*p); //thats why here we have some garbage value printed, the correct way is to use (*p)++
}

