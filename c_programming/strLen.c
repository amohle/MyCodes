#include<stdio.h>
int main()
{
    char s[100];
    char c;
    int strlen=0;
    int i=0;
    while ((c=getchar())!=EOF)
    {
s[i++]=c;
    }
    
    s[i]='\0';
printf("%s",s);
}