/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: Temperature conversion	 
*/
#include<stdio.h>

int main()
{
float tem_c,tem_f;
printf("\nEnter the temperature in Farenheit:");
scanf("%f",&tem_f);
tem_c=((tem_f-32)*5)/9;
printf("\nThe temperature in celsius is %f",tem_c);




}
