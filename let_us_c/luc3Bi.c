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
int total=0,small=0,higher=0;
int iteration=0;
while(1)
{
	
	scanf("%d",&number);
	//this block will set the small and higher variables in the first iteration of while loop
	if(iteration==0)
	{
	small=number;
	higher=number;
	iteration++;	
		}
	
	if(number==101)
	{
		printf("If you want to stop the program please input 1 or\nif you wish to use this as a number press 0");
		scanf("%d",&term_choice);
		if(term_choice)
		{
			break;
			
			}
				
		}
		
		if(number<small)
		{
			small=number;
			
			
			}
						
			if(number>higher)
			{
				higher=number;
				}
			
	total++;
	}


printf("The smallest number in the list is %d\nthe highest number is%d\nRange is %d ",small,higher,higher-small);
}
