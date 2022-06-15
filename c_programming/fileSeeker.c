#include<stdio.h>
int main()
{
     struct Employee
    {
        /* data */
        char name[30];
        int age;
        int emp_id;
    };
    struct Employee e[3];
    char name[30];
    int age;
    printf("Enter the name of employee to modify");
    scanf("%s",&name);
FILE *fp=fopen("Employee.DAT","wb");
rewind(fp); int i=0;
while(fread(&e,sizeof(e),1,fp)==1)
{
    if(strcmp(e[i].name,name)==0)
   {
       printf("\nCurrent age for employee name %s is %d\n",e[i].name,e[i].age);
       printf("Enter the new name age and id to be set ");
       scanf("%s%d%d",e[i].name,&e[i].age,&e[i].emp_id);
   fseek(fp,-sizeof(e),SEEK_CUR);
   fwrite(&e,sizeof(e),1,fp);
   break;
   }
i++;
}
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