#include<stdio.h>
#include<stdlib.h>
struct ArrayStack
{
    int capacity;
    int top;
    int*array;
};
typedef struct ArrayStack ArrayStack;
ArrayStack* createAS(int capacity);
ArrayStack* createAS(int capacity)
{
    ArrayStack *as=malloc(sizeof(ArrayStack));
    if(!as) return NULL;
    as->capacity=capacity;
    as->array=(int*)malloc(sizeof(int)*capacity);
    if (!as->array)return NULL;
    return as;
} 
void push 

int main()
