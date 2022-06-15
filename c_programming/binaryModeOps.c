#include<stdio.h>
void stringReceiver(char *name);
int main()
{
    struct Employee
    {
        /* data */
        char name[30];
        int age;
        int emp_id;
    };
    struct Employee e1,e2,e3;
    struct Employee e[3];

    for(int i=0;i<3;i++)
    {
fflush(stdin);
printf("\nEnter the first name of the employee %d",i+1);
scanf("%s",e[i].name);
printf("Please Enter the age and Emp_id of %s",e[i].name);
scanf("%d%d",&e[i].age,&e[i].emp_id);
    }
   FILE *fp=fopen("Employee.DAT","wb");
fwrite(&e,sizeof(e),1,fp);
fclose(fp);
printf("Written and closed the file\n");
printf("Now opening the file for Reading\n");
fp=fopen("Employee.DAT","rb");
fread(&e,sizeof(e),1,fp);
 printf("The entered details are\n");
    for(int i=0;i<3;i++)
    {
printf("\n Name: %s Age: %d Emp_id %d",e[i].name,e[i].age,e[i].emp_id);
    }
}
void stringReceiver(char *name)
{char c;
int i=0;
while((c=getchar())!='\n')
{
    name[i]=c;
    i++;
}
name[i]='\0';
//printf("\nInput string is %s",name);
//return name;
}
