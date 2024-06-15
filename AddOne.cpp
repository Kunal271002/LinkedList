#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void Insert(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->data = NewData;
    NewNode->next = *head_ref;
    *head_ref = NewNode;01
}
void Print(Node *n){
    int count = 0;
    while(n!= NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"Number of Element in Linked List: "<<count<<endl;
}
void AddOne(Node *LastNode){
    while(LastNode->next != NULL){
        LastNode = LastNode->next;
    }
    if(LastNode->next == NULL){
       LastNode->data = LastNode->data + 1;
    }
}
int main(){
    Node *head = NULL;
    Insert(&head, 10);
    Print(head);
    AddOne(head);
    Print(head);
}