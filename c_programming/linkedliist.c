#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    typedef struct island{
        char *name;
        int open;
        int close;
        struct island *next;
    } island_alias;
 island_alias aila={"Aila",9,17,NULL};
struct island bela={"Bela",10,18,NULL};
struct island geeta={"Geeta",10,18,NULL};
struct island mita={"Mita",10,18,NULL};
		aila.next=&bela;
bela.next=&geeta;
geeta.next=&mita;
struct island *i;
i=&aila;

printf("\nPlease enter the details of new island to be added to the list\n");
char names[80];
scanf("%s",names);
struct island *new=malloc(sizeof(island_alias));
new->name=strdup(names);
new->open=1000;
new->close=1900;
new->next=NULL;
mita.next=new;

printf("You have added the new island named %s\n",new->name);
for(;i!=NULL;i=i->next)
{
if(i->next!=NULL){
printf("Island %s opens at %d and closes at %d, the island next to it is %s\n",i->name,i->open,i->close,i->next->name);
}
else
{
printf("Island %s opens at %d and closes at %d and this is the last island of trip",i->name,i->open,i->close);
}
}
}

