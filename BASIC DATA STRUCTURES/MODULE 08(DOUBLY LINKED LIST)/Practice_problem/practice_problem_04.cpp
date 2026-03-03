#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

int size(Node* head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_index(Node* &head, Node* &tail, int idx, int val) {
    if (idx == 0) {
        insert_head(head, tail, val);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx - 1; i++) {
        temp = temp->next;
    }

    Node* newnode = new Node(val);
    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newnode;
    } else {
        tail = newnode;
    }

    temp->next = newnode;
}

void print_forward(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    while (tail != NULL) {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int index, value;
        cin >> index >> value;

        if (index < 0 || index > size(head)) {
            cout << "Invalid" << endl;
        } else {
            insert_index(head, tail, index, value);
            print_forward(head);
            print_backward(tail);
        }
    }
    return 0;
}
