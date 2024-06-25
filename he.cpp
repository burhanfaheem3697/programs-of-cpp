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
void print(Node * & head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
int length(Node* & head){
    int l=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l++;
}
Node* reverseKnode(Node* &head,int k){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len=length(head);
    if(k>len){

    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count =0 ;
    while(count < k){
        curr->next=prev;
        prev=curr;
        curr=forward;
        forward=forward->next;
        count ++ ;
    }
    if(forward!=NULL){
        head->next=reverseKnode(forward,k);
    }
    return prev;
}
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    head=reverseKnode(head,2);
    print(head);
    return 0;
}