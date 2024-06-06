#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *ptr;
};

Node *push(Node *head, int newData ){

    Node *newNode = new Node();
    newNode->data = newData;
    newNode->ptr = head; 
    head = newNode;
    return head;
};

void print(Node *n){
    int count = 0;
    while(n!=  NULL){
        cout<<n->data<<endl;
        n = n->ptr;
        count++;
    }
    cout<<"No of elements in the Linked List : "<<count<<endl;
};

int main(){

    Node *head = NULL;
    head = push(head, 5);
    head = push(head, 10);
    print(head);


return 0;
}