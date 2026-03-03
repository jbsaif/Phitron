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

void ascending_order(Node* &head,Node* &tail)
{
    for(Node* i = head; i->next!=NULL; i = i->next)
    {
        for(Node* j = i->next; j!=NULL; j = j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void print_forward(Node* &head)
{
    Node* t = head;
    while(t!=NULL)
    {
        cout<< t->val<<" ";
        t = t->next;
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
    ascending_order(head, tail);
    print_forward(head);
    return 0;
}