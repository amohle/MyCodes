#include<stdio.h>
#include<string.h>
void StringReverse(char arr[],int,int);
static int counter=0;
int main()
{
    char str[100];
printf("Please enter your string to be reversed\n");
gets(str);
int len=strlen(str);
int mid=len/2;

/* Direct code for reversing string
for(int i=0;i<mid;i++)
{
char temp=str[i];
str[i]=str[len-1-i];
str[len-1-i]=temp;
}*/
puts(str);
StringReverse(str,0,len-1);
puts(str);
}
//Recursive code for reversing string
void StringReverse(char arr[],int low,int high)
{ counter++;
    if(low<high)
    {
        char temp=arr[low];
        printf("swapping %c (a[%d]) with %c (a[%d]) and function call number is %d \n",arr[low],low,arr[high],high,counter);
        arr[low]=arr[high];
        arr[high]=temp;
        low=low+1;
        high=high-1;
        StringReverse(arr,low,high);
    }
}

