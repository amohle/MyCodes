#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *fp;
    struct Employee{
        char FirstName[30];
        int age;
        int Emp_id;
    } e;
    int choice =1;
fp=fopen("Records.txt","a");
if(fp==NULL)
{
    printf("File Not Found");
    exit(1);
}
while(1)
{
printf("\nEnter the First Name, Age and Employee id of the new employee \n ");
scanf("%s%d%d",e.FirstName,&e.age,&e.Emp_id);
fprintf(fp,"%s_%d_%d\n",e.FirstName,e.age,e.Emp_id);
printf("\nDo you want to enter a new record, 1 (Yes) / 0 (No)");
scanf("%d",&choice);
if (choice==0)
{
    break;
}

}
fclose(fp);
getchar();
}