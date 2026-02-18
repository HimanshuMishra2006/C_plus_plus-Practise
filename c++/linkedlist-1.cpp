#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};


void traversal(struct node*ptr)
{
    while(ptr!=NULL){
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void insertatbeg(struct node**head,int item){
    struct node*New;
   New=(struct node*)malloc(sizeof(struct node));
    New->next=(*head);
    New->data=item;
    (*head)=New;
    }

void insertatend(struct node**head,int item){
    struct node*New;
   New=(struct node*)malloc(sizeof(struct node));
    New->data=item;
    New->next=NULL;
     if(*head==NULL){
        *head=New;
     }
    struct node*current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=New;
   }

int main(){
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    //head=NULL;
    head->data=10;
    head->next=NULL;
    //inserting at beginning
    insertatbeg(&head,30);
    insertatbeg(&head,20);
    insertatbeg(&head,50);
    //inserting at end
    insertatend(&head,40);
    traversal(head);
    return 0;
}