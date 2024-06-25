#include<iostream>
#include<vector>
#include<limits.h>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
   Node(){
        data=0;
        next=NULL;

    }
    Node(int data){
        this->data=data;
        next=NULL;
    }
    

};
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insertathead(Node* &head,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head=newnode;
        return ;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head=newnode;

}
void insertattail(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head=newnode;
        tail=newnode;
        return ;
    }
    Node* newnode = new Node( data);
    tail->next = newnode;
    tail=newnode;
}
void insertatposition(Node* head,int position,int data){
    while(position--){
        head=head->next;
    }

}
// void reverse(Node* &head){
//     Node* prev = NULL;
//     Node* curr = head;
//     while(curr != NULL){
//        Node* forward=curr->next;
//        curr->next = prev;
//        prev=curr;
//        curr=forward;
       
       
//     }
//     head = prev;
// }
Node* findmiddle(Node* &head,Node* &tail){
    Node* fast = head;
    Node* slow = head;
    while(fast!=tail){
        fast = fast->next;
        if(fast!=tail){
            fast=fast->next;
            slow=slow->next;
        }
       
    }
    return slow;
}
// bool checkpalindrome(Node* head){
//     if(head == NULL) return true;
//     if(head->next == NULL) return true;
//     Node* middlenode = findmiddle(head);
//     Node* reversellhead = middlenode;
//     reverse(reversellhead);
//     while(head!= NULL && reversellhead != NULL){
//         if(head->data != reversellhead->data){
//             return false;
//         }
//         reversellhead=reversellhead->next;
//         head=head->next;
//     }
//     return true;
    
// }
void merge(Node* &head,Node* &tail){
    Node* middlenode=findmiddle(head,tail);
    Node* temp1=head;
    Node* temp2=middlenode->next;
    Node* newlinkedlisthead=NULL;
    Node* newlinkedlisttail=NULL;
    while(temp1 != middlenode->next && temp2!=tail->next){
        if(temp1->data <= temp2->data){
            insertattail(newlinkedlisthead,newlinkedlisttail,temp1->data);
            temp1=temp1->next;
        }
        else{
            insertattail(newlinkedlisthead,newlinkedlisttail,temp2->data);
            temp2=temp2->next;
        }
    }
    while(temp1!=middlenode->next){
        insertattail(newlinkedlisthead,newlinkedlisttail,temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=tail->next){
        insertattail(newlinkedlisthead,newlinkedlisttail,temp2->data);
        temp2=temp2->next;
    }
    //copy
    temp1=head;
    while(newlinkedlisthead!=newlinkedlisttail->next){
        temp1->data = newlinkedlisthead->data;
        temp1=temp1->next;
        newlinkedlisthead=newlinkedlisthead->next;
    }

}
void mergesort(Node* &head,Node* &tail){
    if(head == tail) return ;
    Node* middlenode=findmiddle(head,tail);
    mergesort(head,middlenode);
    cout<<"middlenode: "<<middlenode->data<<" ";
    cout<<head->data<<" "<<tail->data<<endl;
    mergesort(middlenode->next,tail);
    cout<<head->data<<" "<<tail->data<<endl;
    merge(head,tail);
}

void insertatbottom(stack<int>&st,int i,int size,int element){
    if(i == size) {
    st.push(element);
    return ;}
        
    int ans=st.top();
    st.pop();
    insertatbottom(st,i+1,size,element);
    st.push(ans);
}
void reverse(stack<int>& st,int i,int size){
    if(i == size) return ;
    int ans=st.top();
    st.pop();
    reverse(st,i+1,size);
    insertatbottom(st,i,size,ans);
}
void insertatrightplace(stack<int>& st,int i ,int size,int element){
    if(i == size-1 || element <= st.top()){
        st.push(element);
        return ;
    }
    int ans=st.top();
    st.pop();
    insertatrightplace(st,i+1,size,element);
    st.push(ans);
}
void sort(stack<int>& st,int i, int size){
    if(i == size){
        return ;
    }
    int ans=st.top();
    st.pop();
    sort(st,i+1,size);
    insertatrightplace(st,i,size,ans);
}
int longestvalidparenthesis(stack<char>& st,string &str){
    int count;
    for(int i=0;i<str.length();i++){
        if(st.empty() && str[i] == ')'){
            continue;
        }
        else{
            //opening bracket
            if(str[i] == '('){
                st.push(str[i]);
                count=i;
            } 
            else{
                st.pop();
                count++;
            }
                

        }
    }
}
int main()
{
    stack<char> st;
    string str=")()())";
    cout<<longestvalidparenthesis(st,str);




   
    return 0;
}