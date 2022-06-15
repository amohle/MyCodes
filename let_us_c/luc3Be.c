/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-25
*     Program: Armstrong number 
*/
#include<stdio.h>

int main()
{
int main_number,number;
printf("Enter the number to be tested");
scanf("%d",&number);
main_number=number;
int sum_of_cubes=0,digit;
for(int i=0;i<3;i++)
{
	digit=number%10;
	number=number/10;
	sum_of_cubes=sum_of_cubes+(digit*digit*digit);
	}
if(sum_of_cubes==main_number)
{
	printf("%d is An Armstrong number",main_number);
	
	}
	else
	{
	printf("%d is Not an Armstrong number",number);
		
		}







}
