
#include<stdio.h>
void main()
{
	int p=0;
	int *q;
	q=&p;
	printf("%p",q); //this code can print pointer address for all types of data
	printf("\n%p",++q);
	//lets use %u here
	printf("\n%u",q);  //this typecasts the pointer hexadecimal value to decimal form
	printf("\n%u",++q);
	}
