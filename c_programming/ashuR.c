#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    char c;
    int hash;
    char name[100];
    scanf("%s",name);
    scanf("%d",&hash);
    fp=fopen(name,"r");
    while((c=getc(fp))!=EOF)
    {
putchar(c);
    }
    printf("%d this is the hash",hash);
exit(0);
}