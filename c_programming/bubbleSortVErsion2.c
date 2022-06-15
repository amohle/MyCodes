//Bubble sort in c using different version
#include<stdio.h>
int main()
{int temp;
    int a[]={6,5,4,3,2};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

}