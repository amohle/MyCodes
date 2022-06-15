#include<stdio.h>
int main()
{ char c;
int nl=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
        nl++;
    }
    printf("%d",nl);
}