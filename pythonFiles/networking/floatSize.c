//program to find out the size of float using pointers
#include<stdio.h>
int main()
{
    float f[]={90,90,999};
    float *p;
    p=f;
    float *s;
    s=&f[1];
    printf("%d",(int)(s-p));

}