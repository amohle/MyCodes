/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-17
*     Program: 
*/
#include<stdio.h>

int main()
{
int l,b;
printf("Please enter the length and breadth of the rectangle\n");
scanf("%d%d",&l,&b);
int area,peri;
area=l*b;
peri=2*(l+b);
if(area>peri)
printf("Area of the triangle is greater than the perimeter");
else

printf("Perimeter of the triangle is greater than the area");



} 
