#include<stdio.h>
//# pragma pack(1)
 int main(){
 struct emp { int a; char ch; float s; }; 
//# pragma pack() 
struct emp e;
printf("%p\n%p\n%p\n", &e.a, &e.ch, &e.s); 
}