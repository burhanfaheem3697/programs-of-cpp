#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node *  head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
Node* reverse(Node * & head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=forward;
        if(forward!=NULL)
        forward=forward->next;
       
    }
    return prev;
}
void sort(Node* & head){
    Node* temp=head;
    Node* zerohead=new Node(-1);
    Node* onehead=new Node(-1);
    Node* twohead=new Node(-1);
    Node* temp1=zerohead;
    Node* temp2=onehead;
    Node* temp3=twohead;
    while(head!=NULL){
        temp=head;
        head=head->next;
        temp->next=NULL;
        if(temp->data==0){
            temp1->next=temp;
            temp1=temp1->next;
        }
        else if ( temp->data==1){
             temp2->next=temp;
            temp2=temp2->next;
        }
        else if ( temp->data==2){
             temp3->next=temp;
            temp3=temp3->next;
        }
        
    }
    temp1->next=onehead;
    temp2->next=twohead;
    zerohead=zerohead->next;
    temp=zerohead;
    while(temp!=NULL){
        
        if(temp->next!=NULL && temp->next->data==-1){
            Node* curr=temp->next;
            temp->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
        else { 
            temp=temp->next;
        }

    }
   
     print(zerohead);
}

int main()
{
    Node* head=new Node(2);
    Node* second=new Node(2);
    Node* third=new Node(1);
    Node* fourth=new Node(1);
    Node* fifth=new Node(0);
    Node* sixth=new Node(0);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sort(head);

   
    return 0;
}