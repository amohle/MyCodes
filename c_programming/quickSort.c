//Program to implement quicksort using last element of the array as pivot.
#include<stdio.h>
void quicksort(int arr[],int low,int high);
int swap(int*,int*);
void printArray(int[],int);
int partition(int[],int low,int high);
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{ int pivot=arr[high];
    int i =low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
return i+1;
}
void quicksort(int arr[],int low,int high)
{
   
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
int arr[]={5,6,3,0,8,2,1};
printArray(arr,7);
printf("\n");
quicksort(arr,0,6);
printf("\n");
printArray(arr,7);

}

void printArray(int arr[],int size)
{
for(int i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
}