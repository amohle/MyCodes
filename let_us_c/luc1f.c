/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: number swapping _general 
*/
#include<stdio.h>

int main()
{
	int a,b;
	
printf("\nPLease enter two numbers\na:");
scanf("%d",&a);
printf("\nb:");
scanf("%d",&b);
int temp;
temp=a;
a=b;
b=temp;

/* swapping without temp variable can be done as
a=a+b;
b=a-b;
a=a-b;
*/

printf("The new values are a=%d,and b=%d",a,b);
}
