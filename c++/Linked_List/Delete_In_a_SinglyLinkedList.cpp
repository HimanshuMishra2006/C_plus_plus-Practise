#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

struct Node* deleteNode(struct Node* head, int x) {
        // code here
        Node*ptr=head;
        
        if(x==1)
        {
          struct Node*temp=head;
          head=head->next;
          delete temp;  
          return head;
        }
        
        int count=1;
        while(ptr->next!=NULL)
        {
            if(count==x-1)
            {
                Node*temp=ptr->next;
                ptr->next=temp->next;
                delete temp;
                return head;
            }else{
                ptr=ptr->next;
            }
            count++;
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
    int x;
    cout<<"Enter the node position:";
    cin>>x;

    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,50);
    insertatend(&head,40);
    
    cout<<"Before deletion:"<<endl;
    traversal(head);
    cout<<endl<<"After deletion :"<<endl;
    deleteNode(head,x);
    traversal(head);

   }