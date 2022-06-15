/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-19
*     Program: Greatest of three numbers using operators
*/
#include<stdio.h>

int main()
{
int a,b,c;
printf("Enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
printf("Your inputs are\na=%d\nb=%d\nc=%d\n\nhere\n",a,b,c);
if(a>b&&a>c)
{
	printf("a is the biggest");
	}
	else if(b>c)
	printf("b is the biggest");
	else if(c>b)
	printf("c is the biggest");






}
