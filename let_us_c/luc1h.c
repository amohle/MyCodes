/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: Five digit number and digits reversal
*/
#include<stdio.h>

int main()
{
int number,new_number=0;
printf("Please enter the five digit number");
scanf("%d",&number);
int digit,sum=0;
printf("Digits are as follows\n");
for(int i=0;i<5;i++)
{
	digit=number%10;
	number=number/10;
	printf("%d\n",digit);
	sum=sum+digit;
	new_number=new_number*10+digit;
	}
	

printf("\nNumber with reversal of digits is %d",new_number);

}
