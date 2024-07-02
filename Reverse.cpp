#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *Prev;
};
Node *Push(Node *head, int Data){
    Node * NewNode = new Node();
    NewNode->data = Data;
    NewNode->next = head;
    NewNode->Prev = NULL;
    head = NewNode;
    return head;
}
void Print(Node *head){
    int count = 0;
    while(head != NULL){
        cout<<head->data<<" <-> ";
        head = head->next;
        count++;
    }
    cout<<"\nThe Number of Elements in Linked List : "<<count<<endl;
}
Node * Reverse(Node *head){
    Node *curr = head;
    Node *Next = NULL, *Prev = NULL;
    while(curr!= NULL){
        Next = curr->next;
        curr->next = Prev;
        Prev = curr;
        curr = Next;
        }
        head = Prev;
        return head;
    }

int main(){
    Node *head = NULL;
    head = Push(head, 6);
    head = Push(head, 7);
    head = Push(head, 8);
    head = Push(head, 9);
    head = Push(head, 10);
    head = Push(head, 11);
    head = Push(head, 12);
    head = Push(head, 13);
    Print(head);
    head = Reverse(head);
    Print(head);
    return 0;
}