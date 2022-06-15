#include<stdio.h>
#define MAXLINE 1000
int getLine(char s[],int limit);
int copy(char from[],char to[]);
int main()
{
int len;
int max=0;
char line[MAXLINE];
char longest_line[MAXLINE];
while((len=getLine(line,MAXLINE))>0)
{
if(len>max)
{
    max=len;
    copy(line,longest_line);
}
if(max>0)
{
    printf("%s",longest_line);
}
}
}
int getLine(char s[],int limit)
{
    int c,i;
    for(i=0;i<limit-1&&(c=getchar())!='~'&&c!='\n';i++)
    {
        s[i]=c;
    
    }
    if(c=='\n')
    {
        s[i]='\n';
        i++;
    }
    s[i]='\0';
    return i;
}
int copy(char from[],char to[])
{
int i=0;
while((from[i]=to[i])!='\0')
{
    i++;
}
return 0;
}
    

