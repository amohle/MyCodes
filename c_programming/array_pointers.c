#include<stdio.h>
int main()
{
int a[3][2]= {1,2,3,4,5,6};
int (*p)[2];
int *pint;

    printf("\n");
printf("%p\n",a);//this is the base address of the array
printf("%p\n",*a); //this will give the same result as above
printf("%p\n",a+1); //this will point to first column of second row
printf("%p\n",(*a)+1);// this will point to second column of first row
printf("%d\n",**a);
for(int i=0;i<3;i++)
{
    p=a+i;
    pint=(*p);
    for(int j=0;j<2;j++)
    {
        printf("%d[%p]\t",*(pint+j),pint+j);
    }
    printf("\n");
}
}