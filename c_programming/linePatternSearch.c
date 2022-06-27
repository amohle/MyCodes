/*This program searches for a particular pattern in a line and stores them in separate arrays*/
#include<stdio.h>
int getLine(char[],int);
int patternFinder(char source[],char patter[]);
int main()
{
    char p[100];
int index=patternFinder("Asssssssshutoshshu Mohleshu","shu");
if (index==-1)
printf("Result not found");
else
printf("Rightmost Match found at location %d",index);
}
int getLine(char s[],int max)
{
int i=0,j=0;
char c;
while(((c=getchar())!=EOF) && c!='\n')
{
    s[i++]=c;
}
if(c=='\n')
{
    s[i++]='\n';
}
s[i]='\0';
return i;
}

int patternFinder(char source[],char pattern[])
{int i,j,k,index=-1;
    for(i=0;source[i]!='\0';i++)
    {
        for(j=i,k=0;pattern[k]!='\0'&&source[j]==pattern[k];k++,j++)
        {
            ;

        }
 if(k>0&& pattern[k]=='\0')
 {
    index=i;

 }
    }
   if(index!=-1)
   {
    return index;
   }
   else
    return -1;   
}