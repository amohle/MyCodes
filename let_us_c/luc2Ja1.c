/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-19
*     Program: 
*/
#include<stdio.h>

int main()
{
char b;
printf("Please enter the character");
scanf("%c",&b);
int a=b;
if(a>=65&&a<=90)
{
	printf("Capital Letter");
	}
	else
	{
		if(a>=97&&a<=122)
		printf("Lower case character");
		else
		printf("Special Symbol");
	}




}
