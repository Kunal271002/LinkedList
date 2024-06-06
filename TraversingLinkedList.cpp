#include<iostream>
using namespace std;

struct Node{

    int data;
    Node * pointer;
};
int main(){
    Node *Head = new Node();
    Node *First = new Node();
    Node *second = new Node();
    

    Head->data = 5;
    Head->pointer = First;

    First->data = 10;
    First->pointer = second;

    second->data = 20;
    second->pointer = NULL;
}