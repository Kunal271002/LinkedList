#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *ptr;
};

// Node *push(Node *head, int newData ){    //Without Head Refrence

//     Node *newNode = new Node();
//     newNode->data = newData;
//     newNode->ptr = head; 
//     head = newNode;
//     return head;
// };

void push(Node **head_ref, int newData ){  //With Head Refrence

    Node *newNode = new Node();
    newNode->data = newData;
    newNode->ptr = *head_ref; 
    *head_ref = newNode;
};



void print(Node *n){
    int count = 0;
    while(n!=  NULL){
        cout<<n->data<<endl;
        n = n->ptr;
        count++;
    }
    cout<<"No of elements in the Linked List : "<<count<<endl;
};

int main(){

    Node *head = NULL;
    // push(head, 5);
    // push(head, 10);   // Without Head Refrenence
    push(&head, 5);   
    push(&head, 10);   //With Head Refrenece
    print(head);


return 0;
}