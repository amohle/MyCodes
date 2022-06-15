/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-25
*     Program: power of a number 
*/
#include<stdio.h>

int main()
{
int a,b,value=1;
printf("Please enter two numbers, the second one will be used as power\n");
scanf("%d%d",&a,&b);
if(b==0)
{
	printf("value =1");
	return 0;}
for(int i=0;i<b;i++)
{
value=value*a;	
	}
	printf("Value=%d",value);
	
	return 1;






}
