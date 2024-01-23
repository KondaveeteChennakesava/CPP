#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    } 
};
void print(Node *head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}
Node insertForward(Node *head,int data){
    Node *temp = new Node(data);
    if(head == NULL) return *temp;
    temp->next = head;
    return *head;
}

int main(){
    int n;
    cin >> n;
    Node *head;
    for(int i=0;i<n;i++){
        int data;
        cin >> data;
        head = insertForward(head, data)
    }
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next = temp1;
    // temp1->next = temp2;
    print(head);
    return 0;
}