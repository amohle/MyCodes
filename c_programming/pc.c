
#include<stdlib.h>
#include"print.h"
#define UNIX 
int main()
{
    #ifdef UNIX
    system("clear");
    #else
    system("cls");
    #endif

    print("Reshi");
    
}