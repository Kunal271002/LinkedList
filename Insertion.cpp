#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node *Pointer;  
        Node(int data){
            value = data;
            Pointer = NULL;

        };
};

void NewNode(Node * &head, int value){

    Node* New_node(value)
    New_node.Pointer = head;
    head = New_node;
};



int main(){

    Node First(5);
    cout<<First.value<<endl<<First.Pointer;
    return 0;
}