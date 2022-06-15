#include<stdio.h>
#include<stdlib.h>
int main()
{
int Another=1;
struct Employee {
char name[40];
int age;
int emp_id;
};
FILE *fp=fopen("Emp.dat","w");
if(fp==NULL)
{
printf("Cannot Open the File");
exit(0);
}
struct Employee e;
while(Another==1)
{
fflush(stdin);
printf("Enter the Name of employee:");
gets(e.name), 
printf("Enter the age of the Employee:");
scanf("%d",&e.age);
printf("Enter the Emp_id of the Employee:");
scanf("%d",&e.emp_id);
fprintf(fp, "Name=%s, Age=%d, Employee Id=%d\n",e.name,e.age,e.emp_id);
printf("\nDo you want to enter another Record\n");
scanf("%d",&Another);

}

fclose(fp);
printf("\nRecord Entry Complete..Now Exiting");
}

