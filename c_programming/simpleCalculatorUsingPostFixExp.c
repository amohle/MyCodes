#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100 /*Maimum depth of val stack*/
int sp=0;
int getch(void);
void ungetch(int);
double val[MAXVAL];
int getop(char []);
void push(double f);
double pop();
void push(double);
double pop(void);
/*Reverse polish calculator*/
int main()
{

int type;
double op2;
char s[MAXOP]; // this is the stack that will hold the operands once they are pushed into it
while((type=getop(s))!=EOF)
{
switch(type)
{
    case NUMBER:
    push(atof(s));
    break;
    case'+':
    push(pop()+pop());
    break;
    case '*':
    push(pop()*pop());
    break;
    case'-':
    op2=pop();
    push(pop()-op2);
    break;
    case '/':
    op2=pop();
    if(op2!=0.0)
    push(pop()/op2);
    else
    printf("Division by zero");
    break;
    
    case '\n':
    printf("%f",pop());
    break;
default:
printf("Error: Unknown command");
break;
}

}
return 0;
}
void push(double f)
{
    if (sp<MAXVAL)
    val[sp++]=f;
    else 
    printf("Error stack full: cant push more");

}
double pop()
{
    if(sp>0)
    return val[--sp];
    else
    {
        printf("Error stack empty\n");
return 0.0;
    }

}
int getop(char s[])
{
    int i,c;
    while((s[0]=c=getch())==' '||c=='\t')
    ;
 
    s[1]='\0';
    if(!isdigit(c)&&c!='.')
    return c;
    i=0;
    if(isdigit(c))
        while (isdigit(s[++i]=c=getch()))
        ;
        if(c=='.')
        while(isdigit(s[++i]=c=getch()))
        ;
        s[i]='\0';
        if(c!=EOF)
        ungetch(c);
return NUMBER;
}
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
    return (bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
    if(bufp>=BUFSIZE)
    printf("Ungetch: too many characters\n");
    else
    buf[bufp++]=c;
}