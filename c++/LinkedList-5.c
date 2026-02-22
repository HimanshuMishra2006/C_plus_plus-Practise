//DOUBLY LINKED LIST--Insertion at both ends;
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;

};

void traversal(struct node*ptr)
{
   do{
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    } while(ptr!=NULL);
    
}

void insertatend(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=*head;
    if(*head==NULL){
      new->data=item;
      new->next=NULL;
      new->prev=*head;
      *head=new;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        new->data=item;
        new->next=NULL;
        new->prev=ptr;
        ptr->next=new;
}
}

void insertatbeg(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));

    new->data=item;
    new->next=*head;
    new->prev=NULL;
    (*head)->prev=new;
    
}


int main()
{
struct node*start=NULL;
insertatend(&start,10);
insertatend(&start,20);
insertatend(&start,30);
insertatend(&start,40);
insertatbeg(&start,50);
traversal(start);
    

 return 0;
}
