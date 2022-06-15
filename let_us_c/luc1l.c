/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: 
*/
#include<stdio.h>

int main()
{
float sp_15,profit_15,cp;
printf("\nPlease enter the SP for 15 items");
scanf("%f",&sp_15);

printf("\nPlease enter the profit  for 15 items");
scanf("%f",&profit_15);

cp=(sp_15-profit_15)/15;
printf("\nThe CP for a single item is Rs. %f",cp);



}
