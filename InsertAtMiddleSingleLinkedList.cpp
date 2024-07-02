// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
// };
// void Print(Node *head){
//     int count = 0;
//     while(head != NULL){
//         cout<<head->data<<"->";
//         head = head->next;
//         count++;

//     }
//     cout<<"\nThe Number of Element in the Array : "<<count<<endl;
// }
// Node *Insert(Node *head, int value){
//     Node *NewNode = new Node();
//     NewNode->data = value;
//     NewNode->next = head;
//     head = NewNode;
//     return head;
// }
// int main(){
// Node *head = NULL;
// head = Insert(head,6);
// head = Insert(head,7);
// head = Insert(head,8);
// head = Insert(head,9);
// head = Insert(head,10);
// head = Insert(head,20);
// Print(head);

// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr;
}
int main(){
    int n;
    int highest = 0;
    int second_largest = 0;
    cout<<"Enter the Size of Array : "<<endl;
    cin>>n;
    vector<int> arr(n,0);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    highest = arr[n-1];
    for(int i = n-1;i>=0;i--){
        if(arr[i]!=arr[i-1]){
            second_largest = arr[i-1];
            break;
        }
    }
    cout<<"\n"<<second_largest<<endl;
}