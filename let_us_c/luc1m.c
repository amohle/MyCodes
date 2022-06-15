/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: Five digit number and digits with 1 added in them
*/
#include<stdio.h>

int main()
{
int multiplier=1,number;
printf("Please enter the five digit number");
scanf("%d",&number);
int digit;
float sum=0;

for(int i=0;i<5;i++)
{
	digit=number%10;
	number=number/10;
	digit++; // to add 1 in the digit
	
	if(digit==10)
	{digit=0;}
	
	sum=sum+multiplier*digit; // algo for generating the number
	multiplier*=10;
	
	
	}
	

printf("\nNumber with 1 added in digits =%f",sum);

}
