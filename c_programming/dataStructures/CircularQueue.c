/* In this implementation of Queue we will use a structure to hold an array and its control variables like front and rear
We will use a pointer to the Queue structure so that it will be easy for us to delete the structure if required
in one go
*/
#include<stdio.h>
#include<stdlib.h>
struct ArrayQueue{
    int front;
    int capacity;
    int rear;
    int * array;
};typedef struct ArrayQueue AQ;
void showQueue(AQ *a);
int deQueue(AQ*q,int *holder_variable);
int isEmptyQueue(AQ *aq);
struct ArrayQueue* Queue(int size);

struct ArrayQueue* Queue(int size)
{
  struct ArrayQueue *Q=malloc(sizeof(struct ArrayQueue));
  if(!Q)
  return NULL;
  Q->capacity=size;
  Q->front=-1;
  Q->rear=-1;
  Q->array=(int*)malloc(size*sizeof(int));
  if(!Q->array)
    return NULL;
    return Q;
}
int isEmptyQueue(AQ *aq)
{
    return(aq->front==-1);
}

int isFullQueue(AQ* aq)
{
    return ((aq->rear+1)%(aq->capacity)==aq->front);
}
void EnQueue(AQ *q,int data)
{
    if(isFullQueue(q))
    {
        printf("\nQueue is full");
    
    }
    else
    {
     q->rear=(q->rear+1)%(q->capacity);
     q->array[q->rear]=data;
     printf("inserting data %d at %d ",data,q->rear);
     if(q->front==-1)
     {
        q->front=q->rear;
     }
    }
}
int deQueue(AQ*q,int *holder_variable)
{
   //we are using a holder variable pointer here, just to return the value to this variable
   //if we do not use this variable and just return the value then in case of returning 0 when no value is found
   //we will not be sure whether the value is from inside the queue or function returning an empty queue
    if(isEmptyQueue(q))
    {
        printf("Queue is empty");
        return 0;
    }
    else
    {
        *holder_variable=q->front;
        if(q->front==q->rear)
        {
            q->front=q->rear=-1;
        }
        else
        {
            q->front=(q->front+1)%q->capacity;
        }

return 1;
    }
}
void deleteQueue(AQ *q)
{
    if(q)
    {
        if(q->array)
        {
            free(q->array);
        }
        free(q);
    }
}

int main()
{
    
   
   AQ *aq=Queue(3);
   EnQueue(aq,22);
   EnQueue(aq,332);
   EnQueue(aq,433);

   EnQueue(aq,423);
int holding_variable;
   showQueue(aq);
   deQueue(aq,&holding_variable);
   printf("\nGot item %d from Queue",holding_variable);
   deQueue(aq,&holding_variable);
   printf("\nGot item %d from Queue",holding_variable);
   EnQueue(aq,555);
   showQueue(aq);
   

}
void showQueue(AQ *q)
{
if(q)
{
    printf("\nQueue Position\ncapacity=%d front =%d and rear=%d\n",q->capacity,q->front,q->rear);
    for(int i=0;i<q->capacity;i++)
    {
    printf("||%d",q->array[i]);
    }

}
else
{
    printf("Queue does not exist");
}
printf("\n");
}