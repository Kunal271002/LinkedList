#include<iostream>
using namespace std;
struct Node{
    int Data;
    Node *next;
};
void Print(Node *n){
    int count = 0;
    while(n != NULL){
      cout<<n->Data<<endl;
      n = n->next;
      count++;
    }
    cout<<"The Number of Elements present in the LinkedList is : "<<count<<endl;
}
void Push(Node **head_ref, int NewData){
    Node *NewNode = new Node();
    NewNode->Data = NewData;
    NewNode->next = *head_ref;
    *head_ref = NewNode;  
};
void Delete(Node **head_ref, int Key){
    // Initilize 
    Node *temp, *prev;
    // Put head in Temp 
    temp = *head_ref;

    if(temp != NULL && temp->Data == Key){
      *head_ref = temp->next;
      free (temp);
      return;
    }

    // If the key doesn't Find in the starting then traverse the Linkedlist;
    while(temp != NULL && temp->Data != Key){
      prev = temp;
      temp = temp->next;
    }

    if(temp == NULL){
      return;
    }
    //If we have found the key then
    prev->next = temp->next;
    free(temp);

}
int main(){
    Node *head = NULL;
    Push(&head, 5);
    Push(&head, 10);
    Push(&head, 15);
    Push(&head, 20);
    Print(head);
    Delete(&head, 15);
    Print(head);
}