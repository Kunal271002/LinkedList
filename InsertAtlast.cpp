// Not Proper

#include<iostream>
using namespace std;

struct Node{
    float data;
    Node *next;
};

Node *Push(float newData, Node *head){
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}
void print(Node *n){
    int count = 0;
    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"The number of Elements in the list is : "<<count<<endl;
};
void InsertAtLast(Node *pervious_Node, float NewData){
    Node *NewNode = new Node();
    NewNode->data = NewData;
    NewNode->next = NULL;
    pervious_Node->next = NewNode;
}

int main(){
    Node *head = NULL;
    head = Push(5, head);
    head = Push(10, head);
    head = Push(15, head);
    InsertAtLast(head->next, 1);
    print(head);
    
}