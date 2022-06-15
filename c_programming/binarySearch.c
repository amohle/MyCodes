#include<stdio.h>
int main()
{
int a[]={33,34,56,78,98,121,144,353,443,554,667};
int high=10;
int mid,low=0;
int search_x=78;
mid=(low+high)/2;
int found=0;
while(low<=high && search_x!=a[mid])
{
 
    if(search_x>a[mid])
    {
        low=mid+1;
    }
    else 
    {
        high=mid-1;
        
    }
    
}
if(search_x==a[mid])
{
    printf("found");
}
else
printf("Not found");
}