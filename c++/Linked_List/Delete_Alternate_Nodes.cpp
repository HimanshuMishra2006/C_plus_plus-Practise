#include<iostream>
using namespace std;
/*Given a Singly Linked List, Delete all alternate
nodes of the list ie delete all the nodes present in even positions.*/


struct Node
{
    int data;
    struct Node*next;
};

void deleteAlt(struct Node *head) {
        // Code here
        struct Node*ptr=head;
        if (head == NULL) return;
        
        while(ptr!=NULL && ptr->next!=NULL)
        {
            struct Node*temp=ptr->next;
            ptr->next=temp->next;
            delete temp;
            ptr=ptr->next;
        }
    }
void insertatend(struct Node**head,int item){
    struct Node*New=new Node;
   //New=(struct node*)malloc(sizeof(struct node));
    New->data=item;
    New->next=NULL;
     if(*head==NULL){
        *head=New;
        return;
     }
    struct Node*current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=New;
   }

   void traversal(struct Node*ptr)
{
    while(ptr->next!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d ",ptr->data);
}

   int main(){
    struct Node*head=NULL;   
    //inserting at end
    
    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,50);
    insertatend(&head,40);
    
    cout<<"Before deletion:"<<endl;
    traversal(head);
    cout<<endl<<"After deletion :"<<endl;
    deleteAlt(head);
    traversal(head);

   }
