/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-27
*     Program: pattern  
*/
#include<stdio.h>

int main()
{
	int count=1;
for(int i=0;i<5;i++)
{
	
	for(int j=5-i;j>=0;j--)
	{
		
		printf("  ");
		}
	for(int j=0;j<i;j++)

{
	printf("   %d",count++);
	
	}	
	printf("\n");
	}




}
