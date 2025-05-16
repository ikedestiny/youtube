#include <iostream>

// Definition of a node
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;

    push(&head, 7);
    push(&head, 1);
    push(&head, 4);
    push(&head, 3);

    
    
    std::cout << "Created Linked List: ";
    printList(head);

    return 0;
}