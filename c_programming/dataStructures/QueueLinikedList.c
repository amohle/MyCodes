/*This program implements Queue through linked list.
The main point to see here is createQueue function. 
In this function if you dont create a pointer allocation for queue
the program will throw a bus error*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
struct node*prev;
};

struct queue
{
    struct node*front;
    struct node*rear;
};


struct queue* createQueue();
void PrintQueue(struct queue* q);
void enQueue(struct queue* q,int data);
int deQueue(struct queue* q);
int isEmptyQueue(struct queue*q);
void enQueue(struct queue* q,int data)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
node->data=data;
if(q->front==NULL)
{
    node->next=NULL;
    node->prev=NULL;
    q->front=node;
    q->rear=node;
    
}
else
{
struct node* ptr=q->rear;
node->prev=ptr;
ptr->next=node;
q->rear=node;
node->next=NULL;

}
}

int deQueue(struct queue* q)
{
    if(q->front==NULL)
    printf("Queue is empty");
    else
    {
struct node*ptr;
ptr=q->front;
int d=ptr->data;
q->front=ptr->next;
free(ptr);
return d;
    }
return -17878;
}
int main()
{

struct queue*q;
q=createQueue();
isEmptyQueue(q);
PrintQueue(q);
enQueue(q,23);
isEmptyQueue(q);

enQueue(q,244);
enQueue(q,243);
enQueue(q,2434);
enQueue(q,223);
enQueue(q,1244);
enQueue(q,3423);
enQueue(q,234244);

PrintQueue(q);

int d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
 d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
 d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
 d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
d=deQueue(q);
isEmptyQueue(q);

printf("\nElement dequeued :%d\n",d);
 d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
d=deQueue(q);
printf("\nElement dequeued :%d\n",d);
isEmptyQueue(q);

}
void PrintQueue(struct queue* q)
{
    printf("Printing queue \n********************\n");
    struct node*ptr;
    ptr=q->front;
    if(ptr==NULL)
    {
        printf("Empty list");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
printf("\n********************\n");
}
/*This function is very important as it allocates space for queue variable
Since the queue data type is not defined, automatic space allocation like in 
automatic classes is not there.*/
struct queue* createQueue()
{
    struct queue* q;
    q=(struct queue*)malloc(sizeof(struct queue));
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=NULL;
    q->front=temp;
    q->rear=temp;
    return q;

}

int isEmptyQueue(struct queue*q)
{
    printf("\nChecking if the queue is empty or not\n");

    if (q->front==NULL)
    {
        printf("\nq is empty returning 1\n");
    
        return 1;
    }
    else 
    { printf("\nq is Not-empty returning 0\n");
     
        return 0;
    }
    }