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

void print_linked_list(Node* &head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<"->";
        tmp = tmp->next;
    }
    if(tmp == NULL)
    {
        cout<<"NULL"<<endl;
    }
}

void delete_from_tail(Node* &head, Node* &tail, int idx)
{
    Node* tmp = head;
    for(int i=0; i<idx-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
    tail = tmp;
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
    cout<<"Tail value before: "<<tail->val<<endl;
    delete_from_tail(head, tail, 5);
    print_linked_list(head);
    cout<<"Tail value after: "<<tail->val<<endl;
    return 0;
}