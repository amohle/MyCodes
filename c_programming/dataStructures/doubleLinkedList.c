#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* prev;
    struct node* next;
    int data;
};
typedef struct node node;

node*create_dll(node*);
void display_doubleLinkedList(node*);
node*add_after(node*);
int main()
{
    node*start=NULL;
    display_doubleLinkedList(start);
start=create_dll(start);
display_doubleLinkedList(start);
start=add_after(start);
display_doubleLinkedList(start);
}
node* create_dll(node* start)
{
    node* new;
    node* ptr;
    int num;
    num=90;
    while(num!=-1)
    {
        if(start==NULL)
        {
            new=(node*)malloc(sizeof(node));
            new->data=num;
            new->next=NULL;
            new->prev=NULL;
            start=new;    
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            new=(node*)malloc(sizeof(node));
            new->data=num;
            new->next=NULL;
            new->prev=ptr;
            ptr->next=new;
            }
printf("Please enter new data");
scanf("%d",&num);
            
        }
    return start;

}

void display_doubleLinkedList(node* start)
{
    printf("\nLinked list\n--------------------------------------------------------------------------------------------------\n");
    node* ptr;
ptr=start;
if(start==NULL)
{
    printf("\nstart->NULL\n");
    return;
}
   while(ptr!=NULL) {
        printf("(|prev:%p|data:%d|this:%p|next:%p|)->",ptr->prev,ptr->data,ptr,ptr->next);
        ptr=ptr->next;
   }
    printf("NULL");
printf("\n--------------------------------------------------------------------------------------------------\n");
}

node*add_after(node* start)
{ int q_node;
    printf("\nEnter the node after which node is to be added");
    scanf("%d",&q_node);

    node*ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        
        if(ptr->data==q_node)
        {
            node *new=(node*)malloc(sizeof(node));
            printf("Please enter the data to be inserted\n");
            scanf("%d",&(new->data));   
            new->next=ptr->next;
            ptr->next=new;
            new->prev=ptr;
            break;
        }
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("Node not found");
    }
    return start;
}
