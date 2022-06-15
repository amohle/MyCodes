#include<stdio.h>
int main()
{
    
    char target[30]="target";
    char source[30]="source";
  char str[100];
    FILE *fs,*ft;
    fs=fopen(source,"r");
    ft=fopen(target,"a");
    if(fs==NULL||ft==NULL)
    {
printf("One of of the files is missing\n");
    }
    //this line ensures that the data from source file goes after the new line
    fprintf(ft,"\n");
    while(fgets(str,99,fs)!=NULL)
    {
        printf("\nWriting String: %s",str);
fputs(str,ft);
}
printf("File appending done successfully");
fclose(fs);
fclose(ft);
}