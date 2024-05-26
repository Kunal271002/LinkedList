#include<iostream>
using namespace std;

class Node{
    public : 
        int value;
        Node* address;
        Node(int data){
            value = data;
            address = NULL;
        }
};





int main(){

    Node First(2);
    cout<<First.value<<" "<<First.address;
    return 0;
}
