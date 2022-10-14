#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
struct employee

{
char name[40];
int age;
int id;    
}e;
typedef struct employee emp;
emp e_array[4];
int i=0;
FILE *fp=fopen("mydata.dat","wb");
if(fp==NULL)
{
    printf("\nNot able to open the file ...exiting\n");
    exit(1);
}
while(printf("\nEnter name please\n")&&strlen(gets(e.name))>0)
{
    scanf("%d",&e.age);
    scanf("%d",&e.id);
    fwrite(&e,sizeof(e),1, fp);
fflush(stdin);
}
fclose(fp);
fp=fopen("mydata.dat","rb");
while(fread(&e,sizeof(e),1,fp)==1)
{
    printf("name=%s,age=%d,id=%d\n",e.name,e.age,e.id);
}
fclose(fp);
}