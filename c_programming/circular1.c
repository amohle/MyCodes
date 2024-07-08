#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
typedef struct node node;
void insertAtBeg(node** head,int data);
void insertAtEnd(node** head,int data);

void printCLL(node*head);
void insertAtBeg(node** head,int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=temp;
    if(*head==NULL)
    {
        *head=temp;
        printf("\n changing head from NULL to %p\n",temp);
    }
    else
    {
        node*mover=*head;
        while(mover->next!=*head)
        {
            mover=mover->next;
        }
        temp->next=*head;
        printf("changing head from %p to %p\n",*head,temp);
        *head=temp;
        mover->next=*head;

    }
}
void printCLL(node*head)
{
    printf("\n");
if(head==NULL)
{
    printf("Empty CLL\n");
}
else
{
    node*temp=head;
    do
    {
        printf("[this:%p|%d|next:%p]->",temp,temp->data,temp->next);
        temp=temp->next;

    }while(temp!=head);

}
}
void insertAtEnd(node** head,int data)
{
    node*temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=temp;
    if(*head==NULL)
    {
        *head=temp;
        printf("\n linkedlist Empty creating new node\n changing head from NULL to %p\n",temp);
    }
    else
    {
        node*mover=*head;
    do
    {
        mover=mover->next;

    }while(mover->next!=*head);
    mover->next=temp;
    temp->next=*head;
    }

}
int main()
{
node* head=NULL;
//printCLL(head);
insertAtBeg(&head,67);
//printCLL(head);
insertAtBeg(&head,6);
//printCLL(head);
insertAtBeg(&head,37);
//printCLL(head);
insertAtBeg(&head,17);
//printCLL(head);
insertAtBeg(&head,78);
printCLL(head);
printf("\n\n");
insertAtEnd(&head,-323);
//printCLL(head);
insertAtEnd(&head,-98);
//printCLL(head);
insertAtEnd(&head,-6767);
printCLL(head);
/*sometimes we make this mistake 
that we call someother function in main 
code which we do not intend to call and 
then we search for the error in the code of that 
function which we intend to call.. such a joke.*/
printf("\n");

}

