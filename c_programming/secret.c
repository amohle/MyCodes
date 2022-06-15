#include<stdio.h>
int main()
{
    int i=0;
FILE *fp;
FILE *fp2;
fp=fopen("secin","r");
fp2=fopen("output","w");
    char word[10];
    while(fscanf(fp,"%9s",word)==1)
    {
        i=i+1;

        if(i%2)
        fprintf(fp2,"%s ",word);
        else
        fprintf(stderr,"%s ",word);

    }
    return 0;
}