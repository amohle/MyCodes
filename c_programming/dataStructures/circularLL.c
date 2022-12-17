//program to implement circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node* next;
float data;
};
typedef struct node node;
node* delete_front(node*);
node* delete_end_ndoe(node*);
void display_circularLinkedList(node*);

node* createLL(node*);
int main()
{
node* start=NULL;
while (1)
{
    int choice=0;
    printf("\nif you want to break press -1 else 0:");
    scanf("%d",&choice);
    if(choice==-1)
    break;
    start=createLL(start);
}

display_circularLinkedList(start);
start=delete_end_ndoe(start);
display_circularLinkedList(start);


}
node* createLL(node* start)
{
    struct node *new_node,*ptr;
    new_node=(node*)malloc(sizeof(node));
    
        printf("\nEnter data node");
        scanf("%f",&(new_node->data));
        if(start==NULL)
        {
            printf("\nRunning the code for empty linked list");
            start=new_node;
            new_node->next=start;
        }
        else
        {
            ptr=start;
            while(ptr->next!=start)
            {
                ptr=ptr->next;

            }
            ptr->next=new_node;
            new_node->next=start;

        
}
return start;
}
void display_circularLinkedList(node* start)
{
    printf("\nLinked list\n--------------------------------------------------------------------------------------------------\n");
    node* ptr;
ptr=start;
if(start==NULL)
{
    printf("\nstart->NULL\n");
    return;
}
   while(ptr->next!=start) {
        printf("(|%f|this:%p|next:%p|)->",ptr->data,ptr,ptr->next);
        ptr=ptr->next;
   }
    printf("(|%f|this:%p|next:%p|)",ptr->data,ptr,ptr->next);
printf("\n--------------------------------------------------------------------------------------------------\n");
}
node* delete_front(node*start)
{
    printf("\ndeleting the front node");
    node*ptr;
    ptr=start;
    if(start==NULL)
    {
        
        printf("\nUnderflow");
        start= NULL;
        return start;
    }
    if(ptr==ptr->next)
    {
        printf("\nSingle Node Deletion");
        free(start);
        start= NULL;
        return start;
    }
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=start->next;
    free(start);
    start=start->next;
return start;
}
node* delete_end_ndoe(node*start)
{
    printf("\ndeleting the end node");
    node*ptr,*preptr;
    ptr=start;
    if(start==NULL)
    {
        
        printf("\nUnderflow");
        start= NULL;
        return start;
    }
    if(ptr==ptr->next)
    {
        printf("\nSingle Node Deletion");
        free(start);
        start= NULL;
        return start;
    }
    while(ptr->next!=start)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    free(ptr);
    preptr->next=start;
    

return start;
}