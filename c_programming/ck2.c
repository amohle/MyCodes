#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define MAX 100
int main()
{
char line[MAX];
printf("Please enter the string");
gets(line);
int i=0;
char c='a';

while(c!='\0')
{
    c=line[i];
    i++;

}
    printf("length of the string is %d",i-1);
int number=0;
for(int k=0;k<i-1;k++)
{
if(line[k]>='A'&& line[k]<='F')
{
    int num;
    printf("\nExecuting Alphabet to number loop");
    num=(int)(line[k]-'A')+10;
    printf("\nGot %c changed into %d",line[k],num);
    number=number+(num)*pow(16,(i-2)-k);

}
else if (line[k]>='a'&& line[k]<='f')
{
   int num;
    printf("\nExecuting Alphabet to number loop_Small case");
    num=(int)(line[k]-'a')+10;
    printf("\nGot %c changed into %d",line[k],num);
    number=number+(num)*pow(16,(i-2)-k);
}

else
{ printf("\nIn number loop\ngot %c changed to %d",line[k],(int)(line[k]-'0'));
    number=number+(((int)(line[k]-'0')))*pow(16,(i-2)-k);
}
}
   /* int d=('B'-'A')+10;
    printf("%d",d);
    }*/
printf("\n-----------------------\nThe decimal equivalent is%d\n",number);
}