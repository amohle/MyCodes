#include<stdio.h>
int stack[5];
int top=-1;
int push(int[],int);
void print(int stack[]);
int pop(int stack[]);
int main()
{
    while(1)
    {int i;
        i=push(stack,8);
        if(i==0)
        {
            break;
        }

    }
    printf("\nFinal Stack\n");
    while(1)
    {int i;
        i=push(stack,8);
        if(i==0)
        {
            break;
        }

    }
print(stack);
}
int push(int stack[],int number)
{
    int num;

if(top==4)
{
    printf("Stack Overflow\nPop First");
    return 0;
}
else
{
    top=top+1;
    printf("Enter the number to be pushed");
scanf("%d",&num);
    stack[top]=num;
printf("\nNumber pushed successfully");
return 1;
}
}
void print(int stack[])
{
    int *a;
int i=0;
a=stack;
    while(i<5)
    {
        printf("%d\t",*a);
        a++;
        i++;
    }
}
 int pop(int stack[])
{
if(top==-1)
{
    printf("Stack Underflow\nStack is empty");
    return -1;
}
else
{
int num=stack[top];
top=top--;
return num ;
}
}


