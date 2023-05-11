#include<stdio.h>
#include<ctype.h>
#include<string.h>
int top=-1;
char OperatorStack[10];
int checkAlnum(char);
void printOperatorStack();
char pop(char stack[]);
int push(char stack[],char numeber);
int check_precedence(char);
int push(char stack[],char number)
{
    int num;

if(top==9)
{
    printf("Stack Overflow\nPop First\n");
    return 0;
}
else
{
    top=top+1;
    stack[top]=number;
printf("\nCharacter pushed successfully\n");
return 1;
}
}

char pop(char stack[])
{
if(top==-1)
{
    printf("Stack Underflow\nStack is empty\n");
    return -1;
}
else
{
char num=stack[top];
top--;
return num ;
}
}



int check_precedence(char c )
{
switch(c)
{
case '+':
case '-':
	return 1;
case '*':
case '/':
	return 2;
case '^':
	return 3;
default:
	return -1;
}	
}

int isOperator(char c)
{
return (c=='+'||c=='-'||c=='/'||c=='*'||c=='^');
}
void printOperatorStack()
{
	puts("\nOperator Stack Position\n");
	puts(OperatorStack);
}
/*Main code starts from here
Please write your main code from here
=================================
=================================*/


int main()
{
	char exp[10]="3-6^4";
	int j=0;
char postfixExp[12]; //need to check if we can reduce this
	puts("\nPlease enter your infix expression\n");
	gets(exp);
	printf("\nYour expression is %s \n",exp);
	int length=strlen(exp);
	printf("\nLength of expression: %d\n",length);
	printOperatorStack();
for(int i=0;i<length;i++)
{
	if(isalnum(exp[i]))
	{
		postfixExp[j++]=exp[i];
	}
	else if(exp[i]=='(')
	{
	push(OperatorStack,exp[i]);
	}
	else if(isOperator(exp[i]))
	 { 
		char temp;
	 if(top==-1)
	 {
		push(OperatorStack,exp[i]);
	 }
	 else
	 {
		/*this code should take out operators from stack based on their precedence 
		until a ( or higher lower precendence operator is found*/
		while(temp>-1&&(check_precedence(OperatorStack[top])>=check_precedence(exp[i])))
		{
			temp=pop(OperatorStack);
			postfixExp[j++]=temp;
			puts(postfixExp);
		}
		push(OperatorStack,exp[i]);
		puts(OperatorStack);




	 }
		
	}
	else if (exp[i]==')')
	{
		while(top>-1&&OperatorStack[top]!='(')
		{
			postfixExp[j++]=pop(OperatorStack);


		}
		pop(OperatorStack);
		puts(OperatorStack);
	}
	

}
if(top>-1)
{
    while(top>-1)
    {
        postfixExp[j++]=pop(OperatorStack);
    }
}
printf("\n Final Postfix expression");
puts(postfixExp);
printf("\n");

}

