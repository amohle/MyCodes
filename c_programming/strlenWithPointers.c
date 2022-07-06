//strlen using pointer airthmetic
#include<stdio.h>
int strlenx(char*);
int main()
{
char a[]="Sayonara ji";
printf("%d",strlenx(a)); //we can pass a subarray here too like a+2 , a+3.

}
int strlenx(char *a)
{int i=0;
    while(*a++!='\0') 
    i++;
return i;
}