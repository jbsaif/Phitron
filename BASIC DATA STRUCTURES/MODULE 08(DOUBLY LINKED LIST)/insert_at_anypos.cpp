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

void printing_forward(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insert_at_anypos(Node* &head, Node* &tail, int idx, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return; //na dile nicher code execute hobe error ashbe
    }

    Node* tmp = head;

    for(int i=1; i<idx; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next->prev = newnode;

    tmp->next = newnode;
    newnode->prev = tmp;
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_anypos(head, tail, 2, 100);
    insert_at_anypos(head, tail, 1, 500);

    printing_forward(head);

    return 0;
}