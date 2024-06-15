#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void push(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->data = NewData;
    NewNode->next = *head_ref;
    *head_ref = NewNode;
}
int print(Node *head){
    int count = 0;
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
        count++;
    }
    return count;
}
void last(Node *head, int value, int count){
    int number = 1;
    // if(number>value){
    //     cout<<"Invalid";
    // }
    while(head->data != value){
        head = head->next;
        number++;
    }
    cout<<"\nKth Element From the Last is: "<<count-number+1;
}
int main(){
    Node *head = NULL;
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    push(&head, 9);
    push(&head, 0);
    int val = print(head);
    int n;
    cout<<"\nEnter the Number you want to Find From Last: ";
    cin>>n;
    last(head, n, val);
}