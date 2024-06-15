#include<iostream>
using namespace std;
struct Node{
    int Data;
    Node *next;
};
int print(Node *head){
    int count = 0;
    while(head != NULL){
        cout<<head->Data<<" -> ";
        head = head->next;
        count++;
    }
    cout<<"\nThe Number of Elements in Linked List is "<<count<<endl;
    int middle = count/2+1;
    return middle;
}
void Insert(Node **head_ref, int data){
    Node *NewNode = new Node();
    NewNode->Data = data;
    NewNode->next = *head_ref;
    *head_ref = NewNode;
}
void Middle(Node *head, int MiddleValue){
    int middle = MiddleValue;
    for(int i = 1;i<middle;i++){
        head = head->next;
    }
    cout<<"The Middle Element in the Linked List is : "<<head->Data;
}

int main(){
    Node *head = NULL;
    Insert(&head, 10);
    int MiddleElement = print(head);
    Middle(head, MiddleElement);


}
