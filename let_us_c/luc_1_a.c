/** A program for Ramesh's Gross salary by
 * Author: @mohle
 */
#include<stdio.h>
int main()
{
	float basic,gross_salary;
printf("\n Please Enter Basic Salary of Mr. Ramesh:");
scanf("%f",&basic);
gross_salary=basic+((60*basic)/100); // 40% basic +20 % basic= 60% basic
printf("\n The Gross salary of Mr. Ramesh is Rs. %6.2f",gross_salary);
}
