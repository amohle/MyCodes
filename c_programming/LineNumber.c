#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=fopen("lineTest.txt","r");
    int count=1;
    char c;
    if(fp==NULL)
    {
        printf("File Not found");
exit(1);
    }
    printf("\n%3d ",count);
    while((c=getc(fp))!=EOF)
    {
if(c=='\n')
{
count++;
    printf("\n%3d ",count);
}
else
printf("%c",c);
    
    }

fclose(fp);
return 0;

}