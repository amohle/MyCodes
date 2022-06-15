/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: four digit number
*/
#include<stdio.h>

int main()
{

int num,unit_digit,four_digit;
printf("Please enter the four digit number");

scanf("%d",&num);
unit_digit=num%10;
num=num/1000;
four_digit=num%10;
printf("\nUnit Digit=%d",unit_digit);
printf("\nFourth Digit=%d",four_digit);
printf("\nSum of the digits:%d",unit_digit+four_digit);

}
