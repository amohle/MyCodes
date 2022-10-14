#include<stdio.h>
int main()
{
    FILE *fp=fopen("test.txt","r");
    char c;
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
        break;
    printf("%c",c);
    }
    fclose(fp);
}