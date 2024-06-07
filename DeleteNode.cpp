#include <iostream>
using namespace std;
struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// Function to delete a node (only works if not the last node)
void deleteNode(Node* node) {
  if (node == nullptr || node->next == nullptr) {
    // Can't delete the last node or null node
    return;
  }

  // Copy data from next node to current node
  node->data = node->next->data;

  // Update next pointer to skip the deleted node
  node->next = node->next->next;
}

int main() {
  // Sample linked list
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  node1->next = node2;
  node2->next = node3;

  // Delete the second node (node2)
  deleteNode(node2);

  // Print the remaining list (1 -> 3)
  Node* current = node1;
  while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "NULL" << endl;

  // Deallocate memory (not shown in deleteNode)
  delete node1;
  delete node3;

  return 0;
}
