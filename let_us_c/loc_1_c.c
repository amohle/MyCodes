/** This program is a part of Let us C solutions
*      written by Ashutosh Mohle (ashutosh.hind@gmail.com)
*     Year: 2018
*     Date: 2018-04-10
*     Program: 
*/
#include<stdio.h>

int main()
{
float maths,physics,com,hin,chem,total,percentage;
printf("Please enter the marks of student in the following subjects");
printf("\nMaths:");
scanf("%f",&maths);
printf("\nPhysics:");
scanf("%f",&physics);

printf("\nChemistry:");
scanf("%f",&chem);

printf("\nComputers:");
scanf("%f",&com);
printf("\nHindi:");
scanf("%f",&hin);
if(maths<30||chem<30||com<30||physics<30||hin<30)
{
	printf("\nStatus:Fail\n");
	}
	else
	{
		printf("\nStatus:Pass\n");
	
		
		}
total=maths+physics+chem+com+hin;
percentage=(total/500)*100;
printf("\n\nAggregate Marks: %f",total);
printf("\nPercentage:%f",percentage);





}
 
