#include<stdio.h>
int main()
{
char a[]="ashu";
char*cptr;
cptr=a;
while(*cptr!='\0')
{
printf("%c",*cptr);
cptr++;
}

}