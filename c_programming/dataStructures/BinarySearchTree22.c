#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct llnode
{
struct node*tree_node;
struct llnode*next;
struct llnode*prev;
};

struct queue
{
    struct llnode*front;
    struct llnode*rear;
};
struct node* stack[15];
int top=-1;
int isEmptyQueue(struct queue*q);
struct node* insert(struct node*,int d);
void inOrderTraversal(struct node*tree);
void preOrderTraversal(struct node*tree);
void postOrderTraversal(struct node*tree);
void non_recursive_PreOT(struct node* tree);
void level_OT(struct node* tree);
struct node* pop(struct node* stack[]);
struct node* push(struct node* stack[],struct node* node);
struct queue* createQueue();
void PrintQueue(struct queue* q);
void enQueue(struct queue* q,struct node*);
struct node* deQueue(struct queue* q);
struct node* insert(struct node* tn,int d)
{  struct node*ptr;
if (tn==NULL)
{ 
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nNew Node generated with address %p",tn);
    ptr->data=d;
    printf("\nData inserted");
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
else
{
    printf("\nFound tn->data %d",tn->data);
if(tn->data>d)
{
    printf("\nsetting tn->left which is currently %p",tn->left);
tn->left=insert(tn->left,d);
//It is evry important to set the tree left and tree right values also. If we do not do this there will be chaos
}  
else
{
     printf("\nsetting tn->right which is currently %p",tn->right);
    tn->right=insert(tn->right,d);
   
}

}

}
int main()
{
    struct node *tree;
    tree=NULL;
    tree=insert(tree,78);
    tree=insert(tree,233);
    tree=insert(tree,23);
 tree=insert(tree,1233);
    tree=insert(tree,223);
    printf("\nTree value before going to traversal:%p\n",tree);
inOrderTraversal(tree);
//     postOrderTraversal(tree);
//     preOrderTraversal(tree);
//     non_recursive_PreOT(tree);
//level_OT(tree); 
return 0;
}
void inOrderTraversal(struct node*tree)
{printf("\nPerforming inOrderTraversal\n");
    if(tree)
    {
        inOrderTraversal(tree->left);
    printf("%d\n",tree->data);
    inOrderTraversal(tree->right);
    }

}
void preOrderTraversal(struct node*tree)
{
    if(tree)
    { printf("%d\n",tree->data);
        preOrderTraversal(tree->left);
   
    preOrderTraversal(tree->right);
    }

}
void postOrderTraversal(struct node*tree)
{
    if(tree)
    {   postOrderTraversal(tree->left);
   
    postOrderTraversal(tree->right);
    printf("%d\n",tree->data);
      
    }

}
void non_recursive_PreOT(struct node* tree)
{
    printf("\nNON RECURSIVE TRAVERSAL\n");
while(1)
{
    while(tree)
    {
        printf("%d\t",tree->data);
        push(stack,tree);
        tree=tree->left;
    }
    if(top==-1)
    break;
    tree=pop(stack);
    tree=tree->right;
}
}
struct node* push(struct node* stack[],struct node* node)
{
if(top==14)
{
    printf("Stack Overflow\nPop First");
    return 0;
}
else
{
    top=top+1;
    stack[top]=node;
//printf("\nNode pushed successfully at top=%d",top);
return NULL;
}
}
struct node* pop(struct node* stack[])
{
if(top==-1)
{
    printf("Stack Underflow\nStack is empty");
    return NULL;
}
else
{
   // printf("\nNode popped\n");
struct node* node_temp=stack[top];
top--;
return  node_temp;
}
}
void level_OT(struct node* tree)

{
    
    printf("\nPerforming Level order  traversale\n");
     struct node *node=NULL;
    struct queue*q=createQueue();
    if(!tree)
    {
        return;
    }
    else
    enQueue(q,tree);
    while(!isEmptyQueue(q))
    {
       node=deQueue(q);
        printf("%d\t",node->data);
        if(node->left)
        enQueue(q,node->left);
        if(node->right)
        enQueue(q,node->right);

    }


}

void enQueue(struct queue* q,struct node*node)
{
    struct llnode* llnode=(struct llnode*)malloc(sizeof(struct llnode));
llnode->tree_node=node;
if(q->front==NULL)
{
    llnode->next=NULL;
    llnode->prev=NULL;
    q->front=llnode;
    q->rear=llnode;
    
}
else
{
struct llnode* ptr=q->rear;
llnode->prev=ptr;
ptr->next=llnode;
q->rear=llnode;
llnode->next=NULL;

}
}

struct node* deQueue(struct queue* q)
{
    if(q->front==NULL)
    printf("Queue is empty");
    else
    {
struct llnode*ptr;
struct node*rtr_ptr;
ptr=q->front;
rtr_ptr=ptr->tree_node;
q->front=ptr->next;
return rtr_ptr;
    }
return NULL;
}

/*void PrintQueue(struct queue* q)
{
    printf("Printing queue \n********************\n");
    struct llnode*ptr;
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
}*/
/*This function is very important as it allocates space for queue variable
Since the queue data type is not defined, automatic space allocation like in 
automatic classes is not there.*/
struct queue* createQueue()
{
    struct queue* q;
    q=(struct queue*)malloc(sizeof(struct queue));
    struct llnode* temp;
    struct node*temp2;
    temp=(struct llnode*)malloc(sizeof(struct llnode));
    temp2=(struct node*)malloc(sizeof(struct node));
    
    temp2=NULL;
    temp=NULL;
    q->front=temp;
    q->rear=temp;
    return q;

}
int isEmptyQueue(struct queue*q)
{
    if (q->front==NULL)
    {
        return 1;
    }
    else 
        return 0;

    }