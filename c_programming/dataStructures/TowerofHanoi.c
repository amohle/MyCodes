#include<stdio.h>
 char pop(char stack[],int *top);
int push(char stack[],int *top,char numeber);
void move(int number,char source,char spare, char target);
 char tower_a[5];
 int top_a=-1;
 int top_b=-1;
 int top_c=-1;
 char tower_b[5];
 char tower_c[5];
 void mover(char source,char dest);

int main()
{
    tower_a[0]='*';
    tower_b[0]='*';
    tower_c[0]='*';
move(4,'a','c','b');
}
 void move(int n,char source,char dest, char spare)
 {
if (n==1)
{
   mover(source,dest);
}
else
{
    move(n-1,source,spare,dest);
    move(1,source,dest,spare);
    move(n-1,spare,dest,source);
}
 }
void mover(char source,char dest)
 {
  printf("Move from %c to %c\n",source,dest);
//   if(source=='a'&&dest=='b')
//   {
//     pop(tower_a,&top_a);
//     push(tower_b,&top_b,'*');
//   }
//   if(source=='a'&&dest=='c')
//   {
//     pop(tower_a,&top_a);
//     push(tower_c,&top_c,'*');
//   }
//   if(source=='b'&&dest=='c')
//   {
//     pop(tower_b,&top_b);
//     push(tower_c,&top_c,'*');
//   }
//   if(source=='b'&&dest=='a')
//   {
//     pop(tower_b,&top_b);
//     push(tower_a,&top_a,'*');
//   }
//   if(source=='c'&&dest=='a')
//   {
//     pop(tower_c,&top_c);
//     push(tower_a,&top_a,'*');
//   }
//   if(source=='c'&&dest=='b')
//   {
//     pop(tower_c,&top_c);
//     push(tower_b,&top_b,'*');
//   }
//   printf("Towers position\na\tb\tc\n");
//   for(int i=0;i<5;i++)
//   {
//     printf("%c\t%c\t%c\n",tower_a[i],tower_b[i],tower_c[i]);
//   }
  }
 
int push(char stack[],int *top,char number)
{
    int num;

if(*top==9)
{
    printf("Stack Overflow\nPop First\n");
    return 0;
}
else
{
    *top=*top+1;
    stack[*top]=number;
printf("\nCharacter pushed successfully\n");
return 1;
}
}

char pop(char stack[],int *top)
{
if(*top==-1)
{
    printf("Stack Underflow\nStack is empty\n");
    return -1;
}
else
{
char num=stack[*top];
(*top)--;
return num ;
}
}