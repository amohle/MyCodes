#include<stdio.h>
int main()
{
    struct employee
    {unsigned gender:1;
    unsigned project_status:2;
    unsigned gamin_mode:3;
     };
     typedef struct employee emp;
    emp e1;
    e1.gender=0;
    e1.gamin_mode=7;
    e1.project_status=3;
    printf("\n\n%lu",sizeof(e1));

}