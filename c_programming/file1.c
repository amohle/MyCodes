#include<stdio.h>
int main()
{
FILE *fp=fopen("ashu.txt","r");
char c;
int nol=0;
while(1)
{
c=fgetc(fp);
if(c==EOF)
{
 break;
}
if(c=='\n')
{
    nol++;
}
putchar(c);

}
printf("The number of lines in the file is %d",nol);
}


