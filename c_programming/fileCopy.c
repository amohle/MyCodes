#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs,*ft;
    fs=fopen("test.txt","r");
    if(fs==NULL)
    {
        printf("source file not found..exiting\n");
        exit(1);
    }
    ft=fopen("target.txt","w");
    if(ft==NULL)
    {
        printf("Target file not found....exiting\n");
    }
    char c;
    while((c=fgetc(fs))!=EOF)
    {
        fputc(c,ft);
    }
    fclose(fs);
    fclose(ft);
}