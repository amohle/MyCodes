#include<stdio.h>
int caller(int a,int b);
int main()
{
int a=1, b=90;

printf("%d",a,b); //this will print a garbage value in place of b
printf("%d %d",a); //this will issue a warning more '%' conversions than data arguments [-Wformat]
int c=caller(8);



}
int caller(int a,int b)
{
    return 1;
}
