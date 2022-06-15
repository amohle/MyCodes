/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-17
*     Program: Point lies on origin, x axis or y axis
*/
#include<stdio.h>

int main()
{
int x,y;
printf("Please enter the coordinates of the point");
scanf("%d%d",&x,&y);
if(x==0&&y==0)
printf("The point lies on the origin");

else
{
	if(x==0&&!(y==0))
	printf("Y axis");
	else if(!(x==0)&&(y==0))
	printf("X axis");
	else if(!(x==0)&&!(y==0))
	printf(" Out of our conditions");
	
	
	}



}
