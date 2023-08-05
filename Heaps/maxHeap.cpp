#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <climits>

/*
Max Heap is a data structure that supports the following operations:
    - insert: insert an element into the heap
    - extract_max: extract the maximum element from the heap

The heap is represented as an array. The root of the heap is at index 1.
The left child of the node at index i is at index 2i.
The right child of the node at index i is at index 2i + 1.

The heap property is that the value of a node is greater than or equal to
the values of its children.

For example, the following array represents a max heap:
    [0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

The following array does not represent a max heap:
    [0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 11]


Time Complexity:
    - insert: O(log n)
    - extract_max: O(log n)

Space Complexity:
    - O(n)
*/

/**
 * @class MaxHeap
 * @brief Implements a max heap data structure.
 */
class MaxHeap {
private:
    std::vector<int> heap;

    // Private functions are helper functions for the public functions.
    // They are not meant to be called directly by the user.
    // They are just used to make the code more modular.
    // If you don't want to use helper functions, you may delete private functions.

    /**
     * @brief Returns the parent index of a given node.
     * @param index Index of the current node.
     * @return Index of the parent node.
     */
    int parent(int index) const {
        // TODO: Implement this function.
    }

    /**
     * @brief Returns the left child index of a given node.
     * @param index Index of the current node.
     * @return Index of the left child node.
     */
    int leftChild(int index) const {
        // TODO: Implement this function.
    }

    /**
     * @brief Returns the right child index of a given node.
     * @param index Index of the current node.
     * @return Index of the right child node.
     */
    int rightChild(int index) const {
        // TODO: Implement this function.
    }

    /**
     * @brief Swaps two elements in the heap.
     * @param i Index of the first element.
     * @param j Index of the second element.
     */
    void swap(int i, int j) {
        // TODO: Implement this function.
    }

    /**
     * @brief Bubbles up an element to its correct position in the heap.
     * @param index Index of the element to bubble up.
     */
    void heapifyUp(int index) {
        // TODO: Implement this function.
    }

    /**
     * @brief Bubbles down an element to its correct position in the heap.
     * @param index Index of the element to bubble down.
     */
    void heapifyDown(int index) {
        // TODO: Implement this function.
    }

public:
    /**
     * @brief Default constructor, initializes the heap with a dummy element.
     */
    MaxHeap() {
        heap.push_back(0);
    }

    /**
     * @brief Inserts an element into the heap.
     * @param val The value to be inserted.
     */
    void insert(int val) {
        // TODO: Implement this function.
    }

    /**
     * @brief Extracts the maximum element from the heap.
     * @return The maximum element from the heap or INT_MIN if the heap is empty.
     */
    int extractMax() {
        // TODO: Implement this function.
    }
};

/**
 * @brief Tests basic functionality of the MaxHeap class.
 */
void testMaxHeapSimple() {
    std::cout << "Testing simple Max Heap..." << std::endl;
    MaxHeap heap;

    heap.insert(10);
    assert(heap.extractMax() == 10);

    heap.insert(20);
    heap.insert(10);
    assert(heap.extractMax() == 20);
    assert(heap.extractMax() == 10);
    assert(heap.extractMax() == INT_MIN);  // Empty heap

    std::cout << "Passed!" << std::endl;
}

/**
 * @brief Tests complex scenarios and edge cases of the MaxHeap class.
 */
void testMaxHeapComplex() {
    std::cout << "Testing complex Max Heap..." << std::endl;
    MaxHeap heap;

    assert(heap.extractMax() == INT_MIN);

    heap.insert(5);
    assert(heap.extractMax() == 5);
    assert(heap.extractMax() == INT_MIN);

    for (int i = 1; i <= 10; ++i) {
        heap.insert(i);
    }

    for (int i = 10; i >= 1; --i) {
        assert(heap.extractMax() == i);
    }

    heap.insert(5);
    heap.insert(5);
    heap.insert(3);
    heap.insert(3);

    assert(heap.extractMax() == 5);
    assert(heap.extractMax() == 5);
    assert(heap.extractMax() == 3);
    assert(heap.extractMax() == 3);
    assert(heap.extractMax() == INT_MIN);

    heap.insert(-5);
    heap.insert(-3);
    heap.insert(-7);

    assert(heap.extractMax() == -3);
    assert(heap.extractMax() == -5);
    assert(heap.extractMax() == -7);
    assert(heap.extractMax() == INT_MIN);

    heap.insert(-5);
    heap.insert(3);
    heap.insert(-7);
    heap.insert(6);

    assert(heap.extractMax() == 6);
    assert(heap.extractMax() == 3);
    assert(heap.extractMax() == -5);
    assert(heap.extractMax() == -7);
    assert(heap.extractMax() == INT_MIN);
    
    std::cout << "Passed!" << std::endl;
}

int main() {
    testMaxHeapSimple();
    testMaxHeapComplex();
    return 0;
}
