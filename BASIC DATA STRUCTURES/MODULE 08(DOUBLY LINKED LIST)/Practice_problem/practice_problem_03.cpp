#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}

void is_palindrome(Node* &head, Node* &tail)
{
    Node* i = head;
    Node* j = tail;
    bool palindrome = true;
    while(i != j && i->prev != j)
    {
        if(i->val != j->val)
        {
            palindrome = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(palindrome)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    is_palindrome(head, tail);
    return 0;
}