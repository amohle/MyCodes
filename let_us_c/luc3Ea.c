/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-19
*     Program: 
*/
#include<stdio.h>
int check_prime(int );
int main()
{int flag;
	printf("\nPrime numbers from zero to three hundred are:\n");
	for (int i=0;i<300;i++)
	{
		flag=check_prime(i);
		if(flag==0)
		{
			printf("%d\t",i);
			}
		
		}
	}
	int check_prime(int number)
	{
		
		
		//printf("\nChecking prime for %d\n",number);
		int flag=0;
		if(number==0)
		{
			flag=1;
			//printf("Zero is not prime");
			return flag;
			}
		for(int i=2;i<=(number/2);i++)
		{
			if(number%(i)==0)
			{
				flag=1;
				break;
				
				}
			}
			if(flag==0)
			{
			//	printf("Prime");
				
				}
		else
		{
		//printf("Composite");
		}
		return flag;
		
		
		}
	






