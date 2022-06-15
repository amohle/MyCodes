/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-17
*     Program: Coordinates falling on the same line
* Solution: Check for the equality of slopes 
*/
#include<stdio.h>

int main(int x1,int x2,int x3,int y1,int y2,int y3)
{
//int x1,x2,x3,y1,y2,y3;
float slope1,slope2;

slope1=(y2-y1)/(x2-x1);
slope2=(y3-y1)/(x3-x1);
if(slope1==slope2)
printf("Collinear Points");
else
printf("Non-Collinear Points");





}
