#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d",&size);
   int *p;
    p=(int *)malloc(size*sizeof(int));
for(int i=0;i<size;i++)
{
    p[i]=i*i;
    printf("%d\t",p[i]);
}
}