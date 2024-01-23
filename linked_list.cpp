#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    } 
};

void print(Node *node){
    while(node != NULL){
        cout << node->data << ' ';
        node = node->next;
    }
    cout << '\n';
}
Node *insertForward(Node *head,int data){
    Node *temp = new Node(data);
    if(head == NULL) return temp;
    temp->next = head;
    return temp;
}

Node *insertBackward(Node *head,int data){
    Node *temp = new Node(data);
    Node *curr = head;
    if(head == NULL) return temp;
    while(curr->next != NULL){
        curr = curr->next; 
    }
    curr->next = temp;
    return head;
}

int main(){
    int n;
    cin >> n;
    struct Node *forward = NULL;
    struct Node *backward = NULL;
    for(int i=0;i<n;++i){
        int data;
        cin >> data;
        forward = insertForward(forward, data);
        backward = insertBackward(backward, data);
    }
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    print(forward);
    print(backward);
    return 0;
}