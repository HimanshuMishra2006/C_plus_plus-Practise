
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void insertatend( struct node**head,int item){
    struct node*New=(struct node*)malloc(sizeof(struct node));
    New->data=item;
    New->next=NULL;
    if(*head==NULL){
        *head=New;
    }else{
    struct node*current;
    current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=New;
    }
}

void insertatbeg(struct node**head,int item){
    struct node*New=(struct node*)malloc(sizeof(struct node));
    New->data=item;
    New->next=*head;
    *head=New;
}

void deleteatend(struct node**head){

    if(*head==NULL){
        printf("List is empty!");
    }else{
    struct node*ptr=*head;
    struct node*seclast=NULL;

    while (ptr->next!=NULL)
    {   
        seclast=ptr;
        ptr=ptr->next;
    }
    seclast->next=NULL;
    free(ptr);
    }
}

void deleteatbeg(struct node**head){
    struct node*ptr=*head;
    *head=(*head)->next;
    free(*head);
    
}
void traversal(struct node*head){
    
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

int main()
{   struct node*start;
   
    start=NULL;
    insertatend(&start,10);
     insertatend(&start,50);
     insertatbeg(&start,30);
     insertatbeg(&start,40);
     printf("Elements of the Linked List:\n");
     traversal(start);
     deleteatend(&start);
     printf("Elements of the Linked List after delition at end:\n");
     traversal(start);
     deleteatbeg(&start);
     printf("\n");
     printf("Elements of the Linked List after delition at beg:\n");
     traversal(start);
     printf("\n");
    // deleteatbeg(&start);
    // traversal(start);
    return 0;
}