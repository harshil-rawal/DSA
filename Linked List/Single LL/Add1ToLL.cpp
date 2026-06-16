#include <bits/stdc++.h>
using namespace std;

// Node class represents a linked list node
class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

int helper(Node* temp) {
    if (temp == nullptr) {
        return 1;
    }

    int carry = helper(temp->next);
    temp->data += carry;

    if (temp->data < 10) {
        return 0;
    }

    temp->data = 0;
    return 1;
}

Node* add1(Node* head) {
    int carry = helper(head);

    if (carry == 1) {
        Node* newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }

    return head;
}

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    // Creating the list: 9 -> 9 -> 9
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    cout << "Original List: ";
    printLL(head);

    head = add1(head);

    cout << "After adding 1: ";
    printLL(head);

    return 0;
}