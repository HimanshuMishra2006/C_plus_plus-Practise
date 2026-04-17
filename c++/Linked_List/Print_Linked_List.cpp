#include<iostream>
using namespace std;
#include<vector>

struct Node
{
    int data;
    struct Node*next;
};

vector<int> printList(Node *head) {
        // code here
        vector<int> result;
        Node*ptr=head;
        while(ptr!=NULL)
        {
            result.push_back(ptr->data);
            ptr=ptr->next;
        }
        return result;
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
    
    vector<int>result=printList(head);
    for(int x:result)
    {
        cout<<x<<" ";
    }

   }