#include<stdio.h>
#define A_MEAN(x,y)
#define ISUPPER(x) (x>=65&&x<=90?1:0)
#define ISLOWER(x) (x>97&&x<=122?1:0)
#define ISALPHA(x) (ISLOWER(x)||ISUPPER(x))
//#pragma warn -rvl
int main()
{
    if (ISUPPER('A'))
    printf("Its upper\n");
    if ISLOWER('B')
    printf("Its lower\n");
    if ISALPHA('f')
    printf("Its alphabet\n");
printf("This is working without a warning");
}