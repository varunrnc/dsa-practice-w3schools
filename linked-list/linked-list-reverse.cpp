// Given the head of a singly linked list, reverse the list and return the new head.

#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;  // store next node
        curr->next = prev;  // reverse pointer
        prev = curr;        // move prev forward
        curr = next;        // move curr forward
    }

    return prev; // new head
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original list:\n";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed list:\n";
    printList(head);

    return 0;
}
