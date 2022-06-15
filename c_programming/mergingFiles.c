#include<stdio.h>
int main()
{
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    
    char word1[10];char word2[10];
    fp1=fopen("File1","r");
    fp2=fopen("File2","r");
    fp3=fopen("File3","w");
    
    while(fscanf(fp1,"%9s",word1)||fscanf(fp2,"%9s",word2))
    {
fprintf(fp3,"%s %s",word1,word2);

    }
    

}