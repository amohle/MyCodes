#include<stdio.h>
int main()
{
char name[40];
int age;int i=3;
int year_of_ad;
while(i==3)
{
    i=scanf("%s %d %d",name,&age,&year_of_ad);
printf("The Name you entered is %s\n",name);
if(age>=100)
{
    fprintf(stderr,"The value of age is going out of bounds for name:%s",name);
    return 2;
}
}
printf("Program Finished with i=%d",i);
}

