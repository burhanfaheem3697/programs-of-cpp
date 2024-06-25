#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){
        this->data=0;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void buildtree(Node* &root,int data){
    if(data == -1) return;
    if(root == NULL){
        Node* newnode = new Node(data);
        root = newnode;
    }
    int leftdata;
    cout<<"enter data for left part of "<<root->data<<endl;
    cin>>leftdata;
    buildtree(root->left,leftdata);
    int rightdata;
    cout<<"enter data for right part of "<<root->data<<endl;
    cin>>rightdata;
    buildtree(root->right,rightdata);

}
void levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        if(q.front() == NULL){
            cout<<endl;
            q.pop();
            if(!q.empty())
            q.push(NULL);
        }
        else{
            Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL){
          
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
        }
    }
}
int getheight(Node* root){
    if(root == NULL){
        return 0;
    }
    int ans = 1 + max(getheight(root->left),getheight(root->right));
    return ans;
}
bool isequal(Node* root1,Node* root2){
    //base case
    if(root1 == NULL && root2 == NULL) return true;
    if(root1!=NULL && root2!=NULL && (root1->data == root2->data)) return isequal(root1->left,root2->left) && isequal(root1->right,root2->right);
    else return false;
    
    
}
bool isbalanced(Node* root){
    if(root == NULL){
        return true;
    }
    if(getheight(root->left) == getheight(root->right)){
        return isbalanced(root->left) && isbalanced(root->right);
    }
    else return false;
}
int main() {
	// your code goes here
	
    Node* root1 = NULL;
    Node* root2 = NULL;
    buildtree(root1,5);
    buildtree(root2,5);
    levelordertraversal(root1);
    levelordertraversal(root2);
    cout<<endl;
    cout<<isequal(root1,root2);
   
	
	

}
