#include<stdio.h>
int i=90;
void increment();
void decrement();
int main()
{
increment();
increment();
decrement();
for(int x=0;x<5;x++)
{
increment();
}
decrement();
}

void increment()
{
    i++;
    printf("\nIncremented i to %d",i);
}
void decrement()

{
    i--;
    printf("\nDecremented i to %d",i);


}