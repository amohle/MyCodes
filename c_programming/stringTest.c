#include<stdio.h>
#include<string.h>
char* stringReceiver();
int main()
{
    char *s;
    s=stringReceiver();
    printf("\n\n The string is %s",s);
}
char* stringReceiver()
{char name[30];
    char c;
int i=0;
while((c=getchar())!='\n')
{
    name[i]=c;
    i++;
}
name[i]='\0';
printf("Input string is %s",name);
return name;
}
