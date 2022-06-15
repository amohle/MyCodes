//Program to implement bubble Sort
#include<stdio.h>
int main()
{
    int a[5]={4,2,1,5,6};
    int swapped=1,temp;
    
    while(swapped)
    { 
        swapped=0;
        for(int i=0;i<4;i++)
        {
            if(a[i]>a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            swapped=1;
            }
        }
    }
    for(int j=0;j<5;j++)
    {
        printf("\n%d",a[j]);
    }
}
