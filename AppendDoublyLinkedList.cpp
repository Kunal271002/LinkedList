#include<iostream>
using namespace std;
struct Node{
    int Data;
    Node *next;
    Node *prev;
};
void Print(Node *n){
    int count = 0;
    while(n!= NULL){
        cout<<n->Data<<endl;
        n = n->next;
        count++;
    }
    cout<<"The Number of Elements Present in the Linked List : "<<count<<endl;
}
void push(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->Data = NewData;
    NewNode->next = *head_ref;
    NewNode->prev = NULL; 

if ((*head_ref)!= NULL){
    (*head_ref)->prev = NewNode;
    }
    (*head_ref) = NewNode;
}

void Append(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->Data = NewData;
    NewNode->next = NULL;

    Node *last = *head_ref;
    if(*head_ref == NULL){
        NewNode->prev = NULL;
        *head_ref = NewNode;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = NewNode;
    NewNode->prev = last;
    return;
}
int main(){
    Node *head = NULL;
    for(int i = 0;i<5;i++){
        push(&head,i); 
    }
    Print(head);
}