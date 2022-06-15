#include<stdio.h>
int main()
{
    char c;
 int count=0;
 int nl=0;
 int ncolm=0;
 while((c=getchar())!=EOF)  
{
    ncolm++;
    if(ncolm>=20)
    {
    if(c==' ')
    {
    printf("\nCrossed the limit of 50 columns now executingt the fold code\n");
    c='\n';
    ncolm=0;
    
    }
    if(ncolm>25)
    {putchar('-');
    putchar('\n');
    ncolm=0;
    }    
    
}
putchar(c);
    }
printf("\nlines=%d\n",nl);
}