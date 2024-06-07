#include<iostream>
using namespace std;
struct Node{    //How a node should be like;
    float data;
    Node *next;
};
Node *push(float newData, Node *head)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    return head;
}
void print(Node *n){
    int count = 0;
    while(n != NULL){
        cout<<n->data<<endl;
        n = n->next;
        count ++;
    }
    cout<<"The Number of Elements in Linked List: "<<count<<endl;
}
void InsertAfter(Node *previous_node, float newData){
    Node *newNode1 = new Node();
    newNode1->data = newData;
    newNode1->next = previous_node->next;
    previous_node->next = newNode1;
}

int main(){
    Node *head = NULL;
    head = push(1.5, head);
    head = push(2, head);
    head = push(10.1, head);

    InsertAfter(head->next, 550);
   
    print(head);
    return 0;
}

