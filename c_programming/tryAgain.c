#include<stdio.h>
int main()
{
    int ns=0;
     int nt=0;
     int cin=0;
     int nl=1;
    char c;
    while((c=getchar())!='~')
    {
        if(c==' ')
        {
            if(cin==0)
            {
            c=' ';
            }
            else
            {
                c='#';
            }
            cin=1;
            }
        else
        {
            cin=0;
        }
        
        putchar(c);

    }
    //printf("ns=%3d nl=%3d nt=%3d",ns,nl,nt);
}