#include <iostream>

using namespace std;

// Define the structure of a node in the singly linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to append a node at the end
void append(Node*& head, int val) {
    if (!head) {
        head = new Node(val);
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = new Node(val);
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the middle node
Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Fast moves 2 steps, slow moves 1 step
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Main function
int main() {
    Node* head = nullptr;

    // Build the list
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    append(head, 8);
    append(head, 9);
    append(head, 10);
    // append(head, 6); // Uncomment to test even-length list

    cout << "Original List: ";
    printList(head);

    Node* mid = middleNode(head);
    cout << "Middle Node: " << mid->data << endl;

    return 0;
}
