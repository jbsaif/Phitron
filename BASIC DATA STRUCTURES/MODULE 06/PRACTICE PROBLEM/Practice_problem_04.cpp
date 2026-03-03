#include<bits/stdc++.h>
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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head) {
    if(head == NULL) {   
        cout << endl;
        return;
    }
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int get_length(Node* head) {
    int len = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        len++;
        tmp = tmp->next;
    }
    return len;
}

void insert_at_pos(Node* &head, Node* &tail, int idx, int v) {
    int len = get_length(head);
    
    if(idx < 0 || idx > len) {
        cout << "Invalid" << endl;
        return;
    }
    
    if(idx == 0) {
        Node* newnode = new Node(v);
        newnode->next = head;
        head = newnode;
        if(tail == NULL) {
            tail = head;
        }
    }
    else {
        Node* newnode = new Node(v);
        Node* tmp = head;
        
        for(int i = 0; i < idx - 1; i++) {
            tmp = tmp->next;
        }
        
        newnode->next = tmp->next;
        tmp->next = newnode;
        
        if(newnode->next == NULL) {
            tail = newnode;
        }
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    int queries;
    cin >> queries;
    
    for(int i = 0; i < queries; i++) {
        int idx, v;
        cin >> idx >> v;
        
        insert_at_pos(head, tail, idx, v);
        if(idx >= 0 && idx <= get_length(head) - (i > 0 ? 0 : 1)) {
            print_linked_list(head);
        }
    }

    return 0;
}