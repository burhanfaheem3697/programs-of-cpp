#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node *newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}
void insertattail1(Node *&head1, Node *&tail1, int data)
{
    if (head1 == NULL)
    {
        Node *newnode = new Node(data);
        head1 = newnode;
        tail1 = newnode;
        return;
    }
    Node *newnode = new Node(data);
    tail1->next = newnode;
    tail1 = newnode;
}
void insertattail2(Node *&head2, Node *&tail2, int data)
{
    if (head2 == NULL)
    {
        Node *newnode = new Node(data);
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    Node *newnode = new Node(data);
    tail2->next = newnode;
    tail2 = newnode;
}
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *anshead = NULL;
    Node *anstail = NULL;
    insertattail(head, tail, 9);
    insertattail1(head1, tail1, 9);
    head = reverse(head);
    head1 = reverse(head1);
    int carry = 0;
    while (head != NULL && head1 != NULL)
    {
        int sum = carry + head->data + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        if (anshead == NULL)
        {
            anshead = newnode;
            anstail = newnode;
        }
        else
        {
            anstail->next = newnode;
            anstail = newnode;
        }
        head = head->next;
        head1 = head1->next;
    }
    while (head != NULL)
    {
        int sum = carry + head->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head = head->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;
        head1 = head1->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newnode = new Node(digit);
        anstail->next = newnode;
        anstail = newnode;
    }
    anshead = reverse(anshead);
    print(anshead);

    return 0;
}