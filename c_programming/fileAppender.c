#include<stdio.h>
int main()
{
    char target[30]="target";
    char source[30]="source";
    FILE *fs,*ft;
    fs=fopen(source,"r");
    ft=fopen(target,"a");
    if(fs==NULL||ft==NULL)
    {
printf("One of of the files is missing\n");
    }
    //this line ensures that the data from source file goes after the new line
    fprintf(ft,"\n");
    char c;
    while((c=fgetc(fs))!=EOF)
    {

        fputc(c,ft);
    }

fclose(fs);
fclose(ft);printf("\n Operation Successful");
}