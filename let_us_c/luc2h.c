#include<stdio.h>
int main()
{int num;
	
	
	printf("\nPlease enter the number");
	scanf("%d",&num);
if(num<0)
{
	num=num*(-1);
	}	
	
	printf("\nThe absolute value of the number is %d",num);
	
	}
