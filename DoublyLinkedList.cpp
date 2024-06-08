#include<iostream>
using namespace std;
struct Node{
    int Data;
    Node *next;
    Node *prev;
};
void Print(Node *n){
    int count = 0;
    while(n != NULL){
        cout<<n->Data<<endl;
        n = n->next;
        count++;
    }
    cout<<"The Number of Elements Present in the Linked List : "<<count<<endl;
}
void Push(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->Data = NewData;
    NewNode->next = *head_ref;
    NewNode->prev = NULL;

if ((*head_ref)!= NULL){
    (*head_ref)->prev = NewNode;
    }
    (*head_ref) = NewNode;
}
int main(){
    Node *head = NULL;
    Push(&head, 5);
    Push(&head, 10);
    Push(&head, 15);
    Push(&head, 200);
    Print(head);
    return 0;
}