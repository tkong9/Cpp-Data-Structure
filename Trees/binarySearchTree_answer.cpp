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
        if (root == nullptr) {
            root = new Node(key);
        } else {
            _insert_recursive(key, root);
        }
    }

    void _insert_recursive(int key, Node* node) {
        if (key < node->key) {
            if (node->left == nullptr) {
                node->left = new Node(key);
            } else {
                _insert_recursive(key, node->left);
            }
        } else if (key > node->key) {
            if (node->right == nullptr) {
                node->right = new Node(key);
            } else {
                _insert_recursive(key, node->right);
            }
        }
    }

    Node* deleteKey(int key) {
        return _delete_recursive(root, key);
    }

    Node* _delete_recursive(Node* node, int key) {
        if (node == nullptr) return node;

        if (key < node->key)
            node->left = _delete_recursive(node->left, key);
        else if (key > node->key)
            node->right = _delete_recursive(node->right, key);
        else {
            if (node->left == nullptr)
                return node->right;
            else if (node->right == nullptr)
                return node->left;

            node->key = _min_value_node(node->right)->key;

            node->right = _delete_recursive(node->right, node->key);
        }
        return node;
    }

    Node* _min_value_node(Node* node) {
        Node* current = node;

        while (current && current->left != nullptr)
            current = current->left;

        return current;
    }

    Node* search(int key) {
        return _search_recursive(root, key);
    }

    Node* _search_recursive(Node* node, int key) {
        if (node == nullptr || node->key == key)
            return node;

        if (node->key < key)
            return _search_recursive(node->right, key);

        return _search_recursive(node->left, key);
    }

    vector<int> inorder_traversal() {
        vector<int> inorder_list;
        _inorder_recursive(root, inorder_list);
        return inorder_list;
    }

    void _inorder_recursive(Node* node, vector<int>& arr) {
        if (node != nullptr) {
            _inorder_recursive(node->left, arr);
            arr.push_back(node->key);
            _inorder_recursive(node->right, arr);
        }
    }

    vector<int> preorder_traversal() {
        vector<int> preorder_list;
        _preorder_recursive(root, preorder_list);
        return preorder_list;
    }

    void _preorder_recursive(Node* node, vector<int>& arr) {
        if (node != nullptr) {
            arr.push_back(node->key);
            _preorder_recursive(node->left, arr);
            _preorder_recursive(node->right, arr);
        }
    }

    vector<int> postorder_traversal() {
        vector<int> postorder_list;
        _postorder_recursive(root, postorder_list);
        return postorder_list;
    }

    void _postorder_recursive(Node* node, vector<int>& arr) {
        if (node != nullptr) {
            _postorder_recursive(node->left, arr);
            _postorder_recursive(node->right, arr);
            arr.push_back(node->key);
        }
    }

    int get_height() {
        return _get_height_recursive(root);
    }

    int _get_height_recursive(Node* node) {
        if (node == nullptr)
            return -1;
        return 1 + max(_get_height_recursive(node->left), _get_height_recursive(node->right));
    }
};

int main() {
    // Put your tests here
    return 0;
}