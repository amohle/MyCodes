#include<stdio.h>
#include<stdlib.h>
int main()
{char fileName[40];
printf("Please Enter the File Name:");
scanf("%s",fileName);
int signal=0;
FILE *fp=fopen(fileName,"r");
if(fp==NULL)
{
printf("File not found..execution halted");
exit(1);
}
char c;

int n_blanks=0; int max_tab_l=1,final_max=1;
while (1)
{
c=fgetc(fp);
if(c==EOF)
{   
break;
}
if(c==' ')
{
if(signal)
{
max_tab_l=max_tab_l+1;
if(final_max<max_tab_l)
{
final_max=max_tab_l;
}
}
n_blanks++;
signal++;
}
else
{
    max_tab_l=1;
signal=0;
}
if(signal<2){
putchar(c);
}
else
{
  //  printf("Not printing for signal value %d\n",signal);
}
}
fclose(fp);
printf("The number of the blanks in the file is %d and max tab length is %d",n_blanks,final_max);
}

