#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;
    tail = tail->next;

}


void maximum_value(Node* &head)
{
    int mx = INT_MIN;
    Node* tmp = head;
    for(Node* tmp = head; tmp!=NULL; tmp=tmp->next)
    {
        mx = max(mx, tmp->val);
    }
    cout<<mx<<endl;
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
    maximum_value(head);

    return 0;
}