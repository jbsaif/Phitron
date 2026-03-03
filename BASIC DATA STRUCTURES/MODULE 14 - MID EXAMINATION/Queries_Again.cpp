#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size(Node *&head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int x, int v)
{
    Node *newnode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < x - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        tmp->next = newnode;
        newnode->prev = tmp;
        tail = newnode;
        return;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

void print_forward(Node *&head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *&tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;
        int sz = size(head);
        if (x > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else
        {
            insert_at_any_pos(head, tail, x, v);
        }
        if (x <= sz)
        {
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}