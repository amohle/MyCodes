/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-25
*     Program:factorial 
*/
#include<stdio.h>

int main()
{
int fact=1;
unsigned int num;
printf("Enter the number whose factorial is required");
scanf("%d",&num);
if(num==0)
{
	fact=1;
	printf("Factorial value=1");
	return 0;
	}
for(int i=1;i<=num;i++)
{
	fact=fact*i;
	}
	printf("Factorial value=%d",fact);
	
	return 1;
}





