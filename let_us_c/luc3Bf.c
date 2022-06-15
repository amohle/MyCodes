/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-25
*     Program: Match stick game 
*/
#include<stdio.h>

int main()
{
printf("\n********************************************");
printf("\n*       Welcome to the Match Stick Game    *");
printf("\n********************************************");
int sticks_left=21,choice;
while(sticks_left>1)
{
	printf("\nPlease pick up a stick as per your choice 1 to 4");
	scanf("%d",&choice);
	printf("\nYou picked up %d sticks now i will pick up %d sticks\n",choice,5-choice);
	sticks_left=sticks_left-5;
	printf("\nSticks left for next round=%d",sticks_left);
	}
	printf("\nLast stick..your turn you LOSE");



}
