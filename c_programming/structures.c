#include<stdio.h>
    struct point
{
    int x,y;
};
struct rect
{
    struct point p1;
    struct point p2;
};
struct point makePoint(int x,int y);
struct point makePoint(int x,int y)
{
    struct point temp;
    temp.x=x;
    temp.y=y;
    return temp;
}

int checkInsideRect(struct point,struct rect);
int checkInsideRect(struct point p,struct rect r)
{
return p.x>=r.p1.x&&p.y>=r.p1.y&&p.x<r.p2.x&&p.y<r.p2.y;
}
int main(){

struct point p1=makePoint(1,1);
struct point p2=makePoint(4,4);
struct rect r1,*r1p;
r1p=&r1;
r1.p1=p1;
r1.p2=p2;
struct point p3=makePoint(3,6);
int status=checkInsideRect(p3,r1);
if (status)
printf("Inside rect");
else
printf("outside rect");
}



