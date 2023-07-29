#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int key): key(key), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree(): root(nullptr) {}

    void insert(int key) {
        // TODO: Implement this function.
    }

    Node* deleteKey(int key) {
        // TODO: Implement this function.
    }

    Node* search(int key) {
        // TODO: Implement this function.
    }

    vector<int> inorder_traversal() {
        // TODO: Implement this function.
    }

    vector<int> preorder_traversal() {
        // TODO: Implement this function.
    }

    vector<int> postorder_traversal() {
        // TODO: Implement this function.
    }

    int get_height() {
        // TODO: Implement this function.
    }

};

int main() {
    // Put your tests here
    return 0;
}