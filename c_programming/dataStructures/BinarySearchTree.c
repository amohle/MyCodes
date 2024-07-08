#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(struct node*,int d);

struct node* insert(struct node* tn,int d)
{ 
if (tn==NULL)
{ 
    tn=(struct node*)malloc(sizeof(struct node));
    tn->data=d;
    printf("Data inserted");
    tn->left=NULL;
    tn->right=NULL;
return tn;
}
else
{
if(tn->data>d)
{
insert(tn->left,d)
}  
else
{
    insert(tn->right,d);
}

}
return tn;
}
int main()
{
    struct node *tree;
    tree=NULL;
    tree=insert(tree,78);
    tree=insert(tree,12);
    tree=insert(tree,233);
}
