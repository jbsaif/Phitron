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

void insert_at_tail2(Node* &head, Node* &tail, int val)
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


int count_linked_list(Node* &head)
{
    int cnt_1 = 0;
    Node* tmp = head;
    while(tmp!=NULL)
    {
        // cout<<tmp->val<<" ";
        cnt_1++;
        tmp = tmp->next;
    }
    return cnt_1;
}

int count_linked_list2(Node* &head2)
{
    int cnt_2 = 0;
    Node* tmp = head2;
    while(tmp!=NULL)
    {
        // cout<<tmp->val<<" ";
        cnt_2++;
        tmp = tmp->next;
    }
    return cnt_2;
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

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail2(head2, tail2, val);
    }

    int count_1 = count_linked_list(head);
    int count_2 = count_linked_list2(head2);
    if(count_1 == count_2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}