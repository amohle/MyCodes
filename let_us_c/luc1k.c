/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: Currency notes 
*/
#include<stdio.h>

int main()
{


int total_amount,amount;
printf("\nPlease enter the amount:\n");
scanf("%d",&amount);
total_amount=amount;
int h_notes,f_notes,t_notes;

h_notes=amount/100;
amount=amount-h_notes*100;
f_notes=amount/50;
amount=amount-f_notes*50;
t_notes=amount/10;
int change=amount-t_notes*10;
printf("\nPlease provide the following number of notes for the amount: Rs %d",total_amount);
printf("\n100 Rs Notes=%d\n50Rs. Notes=%d\n10Rs. Notes=%d\nChange=Rs.%d",h_notes,f_notes,t_notes,change);





}
