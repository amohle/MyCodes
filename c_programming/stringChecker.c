#include<stdio.h>
int main()
{
    int lim=20;
    char c;
    char a[lim];
    for(int i=0;i<lim-1;i++)
    {
        if((c=getchar())!=EOF)
        {
            if(c!='\n')
            {
                a[i]=c;
            }
        }
    }
printf("%s",a);
}
