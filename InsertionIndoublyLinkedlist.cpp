#include<iostream>
using namespace std;
class Node{
public:
    int Data;
    Node *prev;
    Node *next;
        Node(int value){
            Data = value;
            prev = NULL;
            next = NULL;
        };
};
void print(Node *n){
    int count = 0;
    while(n != NULL){
        cout<<n->Data<<" -> ";
        n = n->next;
        count++;
    }
    cout<<"\nThe Number of elements in LinkedList is: "<<count<<endl;
}
void push(Node **head_ref, int data){
    Node *NewNode = new Node(data);
    NewNode->next = *head_ref;
    NewNode->prev = NULL;
    *head_ref = NewNode;
}
Node *Insertion(Node *head, int NewData){
    Node *NewNode = new Node(NewData);
    Node *curr = head;
        while(head != NULL){
            if(head->Data <= NewData && head->prev == NULL){
                head->prev = NewNode;
                NewNode->prev = NULL;
                NewNode->next = head;
                head = NewNode;
                return head;
            }
            if(head->next == NULL && head->Data >= NewData){
                head->next = NewNode;
                NewNode ->next = NULL;
                NewNode->prev = head;
                return head;
            }
            
            else if((head->Data >= NewData || head->Data == NULL) && head->next->Data <= NewData){
                NewNode->prev = head;
                NewNode->next = head->next;
                head->next = NewNode;
                return head;
            }
            else{
                head = head->next;
            }
            
        }
        
            
    return head;
}
    
int main(){
    Node *head = NULL;
    int size, Num,value;
    cout<<"Enter the size in Linked list: "<<endl;
    cin>>size;
    cout<<"Enter the Numbers in Linked list: "<<endl;
    for(int i = 1;i<=size;i++){
        cin>>Num;
        push(&head, Num);
    }
    print(head);
    cout<<"Enter the Element you want to insert : "<<endl;
    cin>>value;
    head = Insertion(head, value);
    print(head);
    return 0;
}