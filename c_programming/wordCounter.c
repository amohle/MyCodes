#include<stdio.h>
#define OUT 0
#define IN 1
int main()
{
FILE *fp;
char file_name[40];
char c, word[10];
int nw=0;
int state=IN;
printf("Enter the file name");
scanf("%s",file_name);
fp=fopen(file_name,"r");
int i=0;
while(1)
{
c=fgetc(fp);
if(c==EOF)
{
break;
}
if(c=='\n'||c=='\t'||c==' ')
{
if(nw>0)
{
word[i]='\0';
i=0;
printf("%s\n",word);
}
state=OUT;
}

if(state==OUT)
{
state=IN;
nw++;
}

if(state==IN)
{
word[i]=c;
i++;
}
}
printf("Total number of words in the file are %d",nw);

}



