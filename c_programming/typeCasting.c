#include<stdio.h>
int main()
{
    int x=90,y=8;
float z,gamma;
z=(float)x/y; 
// will print 11.250000 because x is first converted into float and then division takes place
gamma=(float)(x/y); 
// will print 11.00000 because division takes place in int format
printf("\n\n%f",z);
printf("\n\n%f",gamma);
}