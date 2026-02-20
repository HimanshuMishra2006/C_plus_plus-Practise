#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void insertatend(struct node**head,int item){
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    struct node*ptr=*head;
    if(*head==NULL){
        *head=new;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
        

    }
}

void insertatbeg(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    new->next=*head;
    *head=new;
}

void delatend(struct node**head)
{
    struct node*ptr=*head;
    struct node*seclast=NULL;
    while(ptr->next!=NULL){
        seclast=ptr;
        ptr=ptr->next;
    }
    seclast->next=NULL;
    free(ptr);
}

void delatbeg(struct node**head)
{
    struct node*ptr=*head;
    *head=ptr->next;
    free(ptr);
}

void insertinbet(struct node**head,int item,int pos)
{   struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    int num=1;
    struct node*ptr=*head;
    struct node*link;
    while(num!=pos-1)
    {
        ptr=ptr->next;
        num++;
    }
    new->next=ptr->next;
    ptr->next=new;
    // link=ptr->next;
    // new=link;
    // ptr->next=link;

}

void delinbet(struct node**head,int pos)
{    struct node*p1;
    struct node*p2=*head;
    int num2=1;
    while(num2!=pos-1)
    {
        p2=p2->next;
        num2++;
    }
    // p1=p2->next->next;
    struct node*delnode=p2->next;
    p2->next=delnode->next;
    free(delnode);
   
    
}
void traversal( struct node*head){
     struct node*ptr=head;
     while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
     }
}

int main()
{   struct node*head=NULL;
    insertatend(&head,1);
    insertatend(&head,2);
    insertatend(&head,3);
    insertatend(&head,4);
    insertatend(&head,5);
    insertatbeg(&head,6);
    insertatbeg(&head,7);
    insertatend(&head,8);
    insertatend(&head,9);
    insertatend(&head,10 );
    // delatend(&head);
    // delatbeg(&head);
    // delatbeg(&head);
    // delatend(&head);
    // delatend(&head);
    printf("Linked List:\n");
    traversal(head);
    printf("after ins in bet:\n");
    insertinbet(&head,10,3);
    insertinbet(&head,50,2);
    traversal(head);
    printf("after deletion in bet:\n");
    delinbet(&head,3);
    traversal(head);
    return 0;
}