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

FILE *fp=fopen("mydata.dat","r+b");
if(fp==NULL)
{
    printf("\nNot able to open the file ...exiting\n");
    exit(1);
}
char sname[30];
printf("Enter the record to be updated\n");
scanf("%s",sname);
while(fread(&e,sizeof(e),1,fp)==1)
{
    if(strcmp(sname,e.name)==0)
    { 
        printf("Enter new name, age and id");
        scanf("%s%d%d",e.name,&e.age,&e.id);
        fseek(fp,-sizeof(e),SEEK_CUR);
        fwrite(&e,sizeof(e),1,fp);
        break;

    }
}
fclose(fp);
fp=fopen("mydata.dat","rb");
while(fread(&e,sizeof(e),1,fp)==1)
{
    printf("name=%s,age=%d,id=%d\n",e.name,e.age,e.id);
}
fclose(fp);
}