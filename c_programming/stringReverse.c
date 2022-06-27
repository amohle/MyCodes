#include<stdio.h>
#include<string.h>
int main()
{
char str[]="Hi There";
int len=strlen(str);
int mid=len/2;
for(i=0;i<mid;i++)
{
char temp=str[i];
str[i]=str[len-1-i];
str[len-1-i]=temp;
}
puts(str);
}

