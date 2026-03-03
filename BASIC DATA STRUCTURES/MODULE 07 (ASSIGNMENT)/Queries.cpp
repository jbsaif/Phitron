#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if (tail == NULL) {
        tail = newnode;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_from_anypos(Node* &head, Node* &tail, int idx) {
    if (head == NULL || idx < 0) return; 

    if (idx == 0) { 
        Node* tmp = head;
        head = head->next;
        delete tmp;
        if (head == NULL) tail = NULL; 
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp == NULL || tmp->next == NULL) return; 
        tmp = tmp->next;
    }

    Node* deletenode = tmp->next;
    if (deletenode != NULL) {
        tmp->next = tmp->next->next;
        if (deletenode == tail) {
            tail = tmp; 
        }
        delete deletenode;
    }
}

void print_linked_list(Node* head) {
    if (head == NULL) {
        cout << endl; 
        return;
    }
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, tail, V); 
        }
        else if (X == 1) {
            insert_at_tail(head, tail, V); 
        }
        else if (X == 2) {
            delete_from_anypos(head, tail, V); 
        }

        print_linked_list(head); 
    }

    return 0;
}
