#include<stdio.h>
int main()
{
    int arr[5]={12,33,444,22,2};
    int *ap;
    ap=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*ap);
        ap++;
    }
}