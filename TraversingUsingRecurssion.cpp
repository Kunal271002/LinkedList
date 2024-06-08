#include<iostream>
using namespace std;

struct Node{
    int Data;
    Node *next;
};
void Push(Node **head_ref, int newData){
    Node *NewNode = new Node();
    NewNode->Data = newData;
    NewNode->next = *head_ref;
    *head_ref = NewNode;
}
void Print(Node *head){      // This is not a Recurssion Method
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->Data<<endl;
        curr = curr->next;
    }
}
void PrintList(Node *head){   //Using Recurrsion
    if(head == NULL){
        return;
    }
    else{
        cout<<head->Data<<endl;
    }
    PrintList(head->next);
}

int main(){
    Node *head = NULL;
    Push(&head, 50);
    Push(&head, 60);    
    Push(&head, 70);   
    PrintList(head); 
}