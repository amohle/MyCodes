/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*Program : Distance between two cities
* */

#include<stdio.h>
int main()
{
	float d_m,d_km,d_in,d_cm,d_ft;
	printf("Please enter the distance between two cities in KMs");
	scanf("%f",&d_km);
	d_m=d_km*1000;
	d_cm=d_m*100;
	d_in=d_cm/2.54;
	d_ft=d_cm/30.48;
	printf("The required values are as follows:\n Metres=%f\nCM=%f\nInches=%f\nFeet=%f",d_m,d_cm,d_in,d_ft );
	
	}
