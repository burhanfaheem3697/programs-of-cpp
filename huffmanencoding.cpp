#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
class cmp
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
void traverse(Node *root, vector<string> &ans, string temp)
{
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(temp);
        return;
    }
    traverse(root->left, ans, temp + '0');
    traverse(root->right, ans, temp + '1');
}
int main()
{
    priority_queue<Node *, vector<Node *>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        Node *temp = new Node(f[i]);
        pq.push(temp);
    }
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();
        Node *newnode = new Node(right->data + left->data);
        newnode->left = left;
        newnode->right = right;
        pq.push(newnode);
    }
    Node *root = pq.top();
    string temp = "";

    return 0;
}