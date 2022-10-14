//changing two strings with each other using 2d arrays
#include<stdio.h>
int main()
{
    char *names[]={"Mohandas","Chandidas","ghamandidas"};
    
    char *temp;
    temp=names[0];
    names[0]= names[1];
    names[1]=temp;
        for(int i=0;i<3;i++)
    
 {           printf("%s\n",names[i]);
        } 
}