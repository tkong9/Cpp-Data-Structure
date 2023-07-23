#include <iostream>

class Node {
public:
    int data; 
    Node* next; 

    Node(int d) : data(d), next(nullptr) {}
    // Node(int d) {
    //     data = d;
    //     next = nullptr;
    // }
};

class LinkedList {
private:
    Node* head;  

public:
    LinkedList() : head(nullptr) {}
    // LinkedList() {
    //     head = nullptr;
    // }

    /**
     * Append a new node to the end of the list
     * @param data - The data to be stored in the new node
     * @return void
     */
    void append(int data) {
        // TODO: Implement this function.
        // 1. check whether the list is empty
        // 2. if empty, create a new node and set it as head
        
        // 3. if head is not null, traverse the list until the last node
    }

    /**
     * Insert a new node at a specific position
     * @param data - The data to be stored in the new node
     * @param position - The position at which to insert the new node
     */
    void insert(int data, int position) {
        // TODO: Implement this function.
    }

    /**
     * Delete a node with the given data
     * @param data - The data of the node to be deleted
     */
    void deleteNode(int data) {
        // TODO: Implement this function.
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " "; // same as std::cout << (*temp).data << " ";
            temp = temp->next; // same as temp = (*temp).next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;

    // Test append method
    list.append(1);
    list.append(2);
    list.append(3);
    list.printList();  // Output: 1 2 3

    // Test insert method
    list.insert(0, 0);
    list.insert(4, 4);
    list.insert(2, 1);
    list.printList();  // Output: 0 2 1 2 3 4

    // Test delete method
    list.deleteNode(0);
    list.deleteNode(4);
    list.deleteNode(2);
    list.printList();  // Output: 1 2 3

    // Test delete method with no match
    list.deleteNode(5);  // Output: Deletion error: no such data found.

    // Test insert method with out of range position
    list.insert(5, 10);  // Output: Insertion error: position out of range.

    return 0;
}
