#include<stdio.h>
#include<string.h>
char stack[10];
char temp;
int top=-1;
char pop(char[]);
int push(char[],char);
void print_stack(char stack[],int len);
char pop(char stack[])
{ 
    
if (top==-1)
{
    printf("Underflow");
}
else
{
    printf("\nPopping character: %c",stack[top]);
    char popped_char=stack[top];
    stack[top]=' ';
    top--;
    return popped_char;
    
}
}
int push(char stack[],char c)
{

    if(top==9)
    {
        printf("Overflow");
        return -1;
    }
    else
    {
        top++;
        stack[top]=c;
        printf("\n Pushed %c at %d",stack[top],top);
        return 1;
    }
}
int main()
{
    int flag=1;
    char exp[10];
    printf("Please Enter your expression");
    gets(exp);
    puts(exp);
 for(int i=0;i<strlen(exp);i++)
 {
    printf("\nChecking %c",exp[i]);
if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
push(stack,exp[i]);
print_stack(stack,10);
if(exp[i]=='}'||exp[i]==']'||exp[i]==')')
{
    if(top==-1)
    {
        printf("\nFound top==-1 and a closing bracket\n");
        flag=0;
    }
    else
    {
        temp=pop(stack);
        print_stack(stack,10);
        if(exp[i]=='}'&&(temp=='['||temp=='('))
        {
        printf("\nFound unmatched brace for %c",exp[i]);
        flag=0;
        }
        if(exp[i]==')'&&(temp=='['||temp=='{'))
        {
        printf("\nFound unmatched brace for %c",exp[i]);
            flag=0;
        }
        if(exp[i]==']'&&(temp=='('||temp=='{'))
        {
        printf("\nFound unmatched brace for %c",exp[i]);
            flag=0;
        }
    }

}

 }
 if(top>=0)
 {
 printf("Checking if top>=0");
 flag=0;
 }
 if(flag==1)
 {
    printf("\nSetting flag to 1 in final if");
    printf("\nExpression is valid\n");
 }
 else
 {
    printf("\nInvalid Expression\n");
 }

   
}
void print_stack(char stack[],int len)
{
    printf("\nStack Position\n");
    for(int i=0;i<len;i++)
    {
        printf("%c",stack[i]);
    }

}
