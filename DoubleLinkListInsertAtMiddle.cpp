#include<iostream>
using namespace std;
// Declaring the Node
struct Node{
    int Data;
    Node *next;
    Node *prev;
};
// Printing the node
void Print(Node *n){
    int count = 0;
    while(n!= NULL){
        cout<<n->Data<<endl;
        n = n->next;
        count++;
    }
    cout<<"The Number of elements in Linked List : "<<count<<endl;
}
//Inserting Every Node
void push(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->Data = NewData;
    NewNode->next = *head_ref;
    NewNode->prev = NULL;
    if((*head_ref) != NULL){
        (*head_ref)->prev = NewNode;
    }
        *head_ref = NewNode;
}
// Inserting at third Element
void InsertAtMiddle(int MiddleData, Node *prev_Node){

    if(prev_Node == NULL){
        cout<<"The Node Cannot be Null because we want to insert in between the Nodes "<<endl;
    }
    Node *MiddleNode = new Node();
    MiddleNode->Data = MiddleData;
    MiddleNode->next = prev_Node->next;
    MiddleNode->prev = prev_Node;
    prev_Node->next = MiddleNode;
    if(prev_Node != NULL){
        MiddleNode->next->prev = MiddleNode; 
    }
}

int main(){
    Node *head = NULL;
    push(&head, 5);
    push(&head, 10);
    push(&head, 15);
    push(&head, 20);
    push(&head, 25);
    Print(head);
    InsertAtMiddle(115, head->next);
    Print(head);
    return 0;
}