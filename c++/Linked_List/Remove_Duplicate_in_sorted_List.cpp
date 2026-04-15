#include<iostream>
using namespace std;
/*You are given the head of a singly linked list.
Remove all duplicate nodes from the list so that each element appears only once.*/

struct Node
{
    int data;
    struct Node*next;
};

struct Node* removeDuplicates(struct Node* head) {
        // code here
        struct Node*ptr=head;
        while(ptr->next!=NULL)
        {
            if(ptr->data==ptr->next->data)
            {
                Node*temp=ptr->next;
                ptr->next=temp->next;
                delete temp;
            }
            else
            {
                ptr=ptr->next;
            }
        }
        return head;
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
    insertatend(&head,20);
    insertatend(&head,50);
    insertatend(&head,40);
    
    cout<<"Before removing duplicates :"<<endl;
    traversal(head);
    cout<<endl<<"After removing duplicates :"<<endl;
    removeDuplicates(head);
    traversal(head);

   }