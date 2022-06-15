/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-17
*     Program: Point outside or inside the circle
* solution: check whether the distance between centre and point is e	equal to or greater than the radius 
*/
#include<stdio.h>
#include<math.h>
int main()
{
printf("Enter the centre of the circle\n");
int c_x,c_y,r,x,y;
float distance,r_sq;
scanf("%d%d",&c_x,&c_y);
printf("Enter the radius");
scanf("%d",&r);
r_sq=r*r;
printf("Enter the coordinates of the testing point");
scanf("%d%d",&x,&y);
distance=(x-c_x)*(x-c_x)+(y-c_y)*(y-c_y);
printf("\nThe square of distance between the given point and centre of circle is %f",distance);

if(distance==r_sq)
printf("Lies on the circle");
else if(distance>r_sq)
printf("Lies outside the circle");
else if(distance<r_sq)
printf("Lies inside the circle");

}
