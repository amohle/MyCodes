#include<stdio.h>
int main()
{
 int ndigit[10];
 for(int i=0;i<10;i++)
 {
     ndigit[i]=0;
 }
 char c;
 while((c=getchar())!='~')
 {
     if(c>='0'&&c<='9')
     {
         ndigit[c-'0']++;
     }

 }
printf("Number of digits\n");
 for(int i=0;i<10;i++)
 {
     printf("%d\t",ndigit[i]);
 }
 


}