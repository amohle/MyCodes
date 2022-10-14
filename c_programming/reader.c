#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    FILE *fp;
char c;
if(argc==1)
{
    printf("Please input filename to display\n");
    exit(1);
}
fp=fopen(argv[1],"r");
printf("\n");
while((c=getc(fp))!=EOF) 

{
    putchar(c);
}

}