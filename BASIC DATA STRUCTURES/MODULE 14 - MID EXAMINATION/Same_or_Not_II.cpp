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

class myStack{
    public:
    
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push(int val){
        sz++;
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

    void pop(){
        sz--;
        Node* DN = tail;
        tail = tail->prev;
        delete DN;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;

    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class MyQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    void push(int val)
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
    void pop()
    {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;
    MyQueue q;

    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    for(int i=0; i<m; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }

    bool flag = true;
    if(n!=m)
        cout<<"NO"<<endl;
    else{
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
}