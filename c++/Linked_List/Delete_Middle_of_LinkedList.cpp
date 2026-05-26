#include<iostream>
using namespace std;
/*Given a singly linked list, delete the middle of the linked list.
->Middle for odd and second middle for even.
*/


struct Node
{
    int data;
    struct Node*next;
};

Node* deleteMid(Node* head)
{
    //two pointers
    Node*l=head;
    Node*r=head;

    int count=0;
    
    if(head->next==NULL)return NULL;
    
    while(r!=NULL)
    {
        count+=1;
        r=r->next;
    }
    int num=0;
    
    while(num!=count/2)
    {
        num++;
        r=l;
        l=l->next;
    }
    
    r->next=l->next;
    delete l;
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
    insertatend(&head,30);
    insertatend(&head,50);
    insertatend(&head,40);
    
    cout<<"Before deletion:"<<endl;
    traversal(head);
    cout<<endl<<"After deletion :"<<endl;
    deleteMid(head);
    traversal(head);

   }
