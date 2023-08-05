#include <iostream>
#include <vector>
#include <cassert>
#include <climits>
#include <algorithm>

/**
Min Heap is a data structure that supports the following operations:
    - insert: insert an element into the heap
    - extract_min: extract the minimum element from the heap
    
The heap is represented as an array. The root of the heap is at index 1.
The left child of the node at index i is at index 2i.
The right child of the node at index i is at index 2i + 1.

The heap property is that the value of a node is less than or equal to
the values of its children.

For example, the following array represents a min heap:
    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    
Time Complexity:
    - insert: O(log n)
    - extract_min: O(log n)
    
Space Complexity:
    - O(n)
*/

/**
 * @class MinHeap
 * @brief Implements a min heap data structure.
 */
class MinHeap {
private:
    std::vector<int> heap;

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
    MinHeap() {
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
     * @brief Extracts the minimum element from the heap.
     * @return The minimum element from the heap or INT_MAX if the heap is empty.
     */
    int extractMin() {
        // TODO: Implement this function.
    }
};

/**
 * @brief Tests basic functionality of the MinHeap class.
 */
void testMinHeapSimple() {
    std::cout << "Testing simple MinHeap..." << std::endl;
    MinHeap heap;

    heap.insert(10);
    assert(heap.extractMin() == 10);

    heap.insert(20);
    heap.insert(10);
    assert(heap.extractMin() == 10);
    assert(heap.extractMin() == 20);
    assert(heap.extractMin() == INT_MAX);  // Empty heap

    std::cout << "Passed!" << std::endl;
}

/**
 * @brief Tests complex scenarios and edge cases of the MinHeap class.
 */
void testMinHeapComplex() {
    std::cout << "Testing complex MinHeap..." << std::endl;
    MinHeap heap;

    assert(heap.extractMin() == INT_MAX);

    heap.insert(5);
    assert(heap.extractMin() == 5);
    assert(heap.extractMin() == INT_MAX);

    for (int i = 10; i >= 1; --i) {
        heap.insert(i);
    }

    for (int i = 1; i <= 10; ++i) {
        assert(heap.extractMin() == i);
    }

    heap.insert(5);
    heap.insert(5);
    heap.insert(3);
    heap.insert(3);

    assert(heap.extractMin() == 3);
    assert(heap.extractMin() == 3);
    assert(heap.extractMin() == 5);
    assert(heap.extractMin() == 5);
    assert(heap.extractMin() == INT_MAX);

    heap.insert(-5);
    heap.insert(-3);
    heap.insert(-7);

    assert(heap.extractMin() == -7);
    assert(heap.extractMin() == -5);
    assert(heap.extractMin() == -3);
    assert(heap.extractMin() == INT_MAX);

    heap.insert(-5);
    heap.insert(3);
    heap.insert(-7);
    heap.insert(6);

    assert(heap.extractMin() == -7);
    assert(heap.extractMin() == -5);
    assert(heap.extractMin() == 3);
    assert(heap.extractMin() == 6);
    assert(heap.extractMin() == INT_MAX);
    
    std::cout << "Passed!" << std::endl;
}

int main() {
    testMinHeapSimple();
    testMinHeapComplex();
    return 0;
}
