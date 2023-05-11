#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int operate(int number1,int number2,char operator);
char EvaluationStack[10];
int top=-1;
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
int isOperator(char c)
{
return (c=='+'||c=='-'||c=='/'||c=='*'||c=='^');
}
void printOperatorStack()
{
	puts("\nOperator Stack Position\n");
	puts(EvaluationStack);
}
/*Main code starts from here
Please write your main code from here
=================================
=================================*/



int main()
{
    char exp[10];    
    printf("Please enter your postfix expression to evaluate\n");
    gets(exp);
 for(int i=0;i<strlen(exp);i++)
 {
if(isalnum(exp[i]))
{
    push(EvaluationStack,exp[i]);
}
if(isOperator(exp[i]))
{
    int result=operate(pop(EvaluationStack)-'0',pop(EvaluationStack)-'0',exp[i]);
push(EvaluationStack,result);
 }   
}
printf("Final Result=%d",EvaluationStack[top]);
printf("\n\n");
}
int operate(int number2,int number1,char operator)
{
    switch(operator)
    {
case '+':
return (number1+number2);
case '^':
return pow(number1,number2);
case '-':
return (number1-number2);
case '*':
return (number1*number2);
case '/':
return (number1/number2);
default:
return 0;


    }
}