#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*insertatend(struct node*head,int item)
{
     struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    struct node*ptr=head;
    if(head==NULL){
        head=new;
        new->next=head;
    }
    else{
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=head;
        

    }
    return head;
}
void traversal( struct node*head){
     struct node*ptr=head;
     do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
     }while(ptr!=head);
}
int main()
{   struct node*head=NULL;
    
    head=insertatend(head,1);
    head=insertatend(head,2);
    head=insertatend(head,3);
    head=insertatend(head,4);
    traversal(head);
    return 0;
}