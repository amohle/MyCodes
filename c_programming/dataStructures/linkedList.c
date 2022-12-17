#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void display(struct node* start);
int getLength(struct node* start);
struct node* insert_at_front(struct node*);
struct node* append(struct node*);
int main()
{
    struct node *ll=NULL;

    printf("%p",ll);
    ll=append(ll);
    append(ll);
    append(ll);
display(ll);
ll=insert_at_front(ll);
display(ll);
getLength(ll);
printf("\n\n");
}

struct node* append(struct node* start)
{
        printf("\nExecuting the code for appending data to the list");

    int data;
    struct node* ptr;
struct node* next;
struct node *new_node;
new_node=(struct node*)malloc(sizeof(struct node));

printf("\nEnter data to be added");
scanf("%d",&data);
new_node->data=data;
new_node->next=NULL;
ptr=start;
if(ptr==NULL)
{
printf("\nExecuting the if for empty linked list");
start=new_node;
}
else
{  printf("\nExecuting the else for non-empty linked list");
    while(ptr->next!=NULL)
    {
      
        ptr=ptr->next;
    }
    ptr->next=new_node;


}
printf("\nNode added");
return start;
}
void display(struct node* start)
{
    struct node*ptr;
    ptr=start;
    printf("\n\n");
    do {
        printf("|%d|%p|->",ptr->data,ptr->next);
        ptr=ptr->next;
    }while(ptr!=NULL);
    printf("NULL\n");
}

struct node* insert_at_front(struct node* start)
{
    printf("\n Executing the code for insertion at beginning of the list");
    int data;
    struct node* ptr;
struct node* next;
struct node *new_node;
new_node=(struct node*)malloc(sizeof(struct node));

printf("\nEnter data to be added");
scanf("%d",&data);
new_node->data=data;
new_node->next=start;
start=new_node;
printf("\nNode added at the beginning");
return start;
}
int getLength(struct node* start)
{
    struct node*ptr;
    ptr=start;
    int length=0;
    while(ptr!=NULL) 
    {
length++;
ptr=ptr->next;
    }
    printf("Linked List Length:%d",length);
return length;
}
