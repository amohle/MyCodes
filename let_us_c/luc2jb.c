/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-19
*     Program: leap year 
*/
#include<stdio.h>

int main()
{


int year, leap_year=0; 
printf("Enter the year");
scanf("%d",&year);
if(year%4==0&&year%100!=0)
leap_year=1;
if(year%4==0&&year%100==0&&year%400==00)
leap_year=1;

	if(leap_year==1)
	{
		printf("Leap Year");
		
		}
		else
		{
			printf("Not a Leap Year");
			}
	}
