#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fs;
fs=fopen("StringWriter.txt","w");
if(fs==NULL)
{
    printf("couldnt open the file..exiting(1)");
    exit(1);
}
printf("\nPlease enter your content and terminate by pressing enter in empty line\n");
char s[80];
while(strlen(gets(s))>0)
{
    fputs(s,fs);
    fputs("\n",fs);
}
fclose(fs);
printf("File written successfully to the disk");
}