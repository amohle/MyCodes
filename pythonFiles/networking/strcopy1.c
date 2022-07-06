//program to implement strend function
#include<stdio.h>
#include<string.h>
int strend(char*s,char*t);
int main()
{
    int d=strend("ashutoshuu","toshuu");
printf("result :%d",d);
}
int strend(char*s,char*t)
{
int s_l=strlen(s);
int t_l=strlen(t);
printf("lengths are %d and %d",s_l,t_l);
printf("\n\n%c",*(s+(s_l-t_l)));
while((*(s+(s_l-t_l))==*t))
{
    printf("comparing %c %c\n",*(s+(s_l-t_l)),*t);
s++,t++;
if(*t=='\0')
return 1;
}
return 0;
}