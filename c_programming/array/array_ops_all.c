#include<stdio.h>
#define MAX 5
int insert(int *,int,int);
void delete(int *,int);
void show(int*,int);
void reverse(int*,int len);
void search(int *arr,int num);
int main()
{
int arr[MAX];
insert(arr,1,4);
insert(arr,2,6);
insert(arr,3,2);
insert(arr,4,1);
insert(arr,5,6);
show(arr,5);
delete(arr,3);
printf("After deletion\n");
show(arr,5);
reverse(arr,5);
printf("After Reverse\n");

show(arr,5);
search(arr,6);
}
void search(int *arr,int num)
{
int found=0;
for(int i=0;i<MAX;i++)
{

if(arr[i]==num)
{
printf("\nMatch(s) found at position %d",i+1);
found=1;
}
}
if(!found)
{
printf("Sorry no matches found");
}
}
void reverse(int* arr,int len)
{
int half=len/2;
for(int i=0;i<=half;i++)
{int temp;
temp=arr[i];
arr[i]=arr[len-1-i];
arr[len-1-i]=temp;
}
}
int insert(int*array,int pos,int number)
{
int i=0;
for(i=MAX-1;i>=pos;i--)
{
array[i]=array[i-1];
}
array[i]=number;
return 1;
}
void show(int*arr,int length)
{
for(int i=0;i<length;i++)
{
printf("%d\t",*(arr+i));
}
}
void delete(int *array,int pos)
{
int i=0;
for(i=pos;i<MAX;i++)
{
array[i-1]=array[i];
}
array[i-1]=0;
}
