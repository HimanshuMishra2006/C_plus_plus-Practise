#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
};

int getMiddle(node* head) {
        // code here
        node*ptr=head;
        int size=0,pos=1;
        while(ptr!=NULL)
        {
            size++;
            ptr=ptr->next;
        }
        
        ptr=head;
        
        while(size/2>=pos)
        {
           ptr=ptr->next;
           pos++;
        }
        
        return ptr->data;
            
    }


void insertatend(struct node**head,int item){
    struct node*New=new node;
    New->data=item;
    New->next=NULL;
     if(*head==NULL){
        *head=New;
        return;
     }
    struct node*current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=New;
   }

   int main(){
    struct node*head=NULL;
     //inserting at end

    insertatend(&head,10);
    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,40);
    insertatend(&head,50);

    cout<<"Middle of linked list: "<<getMiddle(head);

   }