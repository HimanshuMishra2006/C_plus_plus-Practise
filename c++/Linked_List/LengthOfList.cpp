#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
};

int getCount(struct node* head) {
        // Code here
        int count=0;
        struct node*ptr=head;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
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
    //head=NULL;
    // head->data=10;
    head->next=NULL;

     //inserting at end

    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,50);
    insertatend(&head,40);

    cout<<"Length of linked list: "<<getCount(head);

   }