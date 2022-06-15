/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-25
*     Program: user enters numbers zero, positive and negative 
*/
#include<stdio.h>

int main()
{
printf("\nPlease enter the number of your choices till you want and press 101 to exit\n");
int number,term_choice;
int total=0,pos=0,neg=0,zero=0;
while(1)
{
	scanf("%d",&number);
	if(number==101)
	{
		printf("If you want to stop the program please input 1 or\nif you wish to use this as a number press 0");
		scanf("%d",&term_choice);
		if(term_choice)
		{
			break;
			
			}
				
		}
		if(number==0)
		{
			zero++;
			}
			else if(number>0)
			{
				pos++;
				}
				else if(number<0)
				{
					neg++;
					}
		
		
	total++;
	}


printf("Total Number Input=%d\nPositives=%d\nNegatives=%d\nZeros=%d",total,pos,neg,zero );
}
