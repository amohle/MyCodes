/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program:Rectangle and Circle 
*/
#include<stdio.h>

int main()
{
	float l,b,r;
printf("\nPlease enter the length and breadth of the rectangle");
scanf("%f%f",&l,&b);
printf("\nThe area of the rectangle is %f:",l*b);
printf("\nThe perimeter of the rectangle is %f", 2*(l+b));
printf("\n\nPlease enter the radius of circle");
scanf("%f",&r);
printf("\nThe area of the circle is %f",(22*r*r)/7);

printf("\nThe perimeter of the circle is %f",(44*r)/7);

}
