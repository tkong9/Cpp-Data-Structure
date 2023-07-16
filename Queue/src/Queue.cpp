#include <iostream>
#include <vector>
#include <stdexcept> // For std::runtime_error

using namespace std;

/**
 * @class Queue
 * @brief A simple implementation of a Queue using a vector.
 */
class Queue {
private:
    std::vector<int> queue;

public:
    /**
     * @brief Adds an element to the end of the queue.
     * @param value The value to be added to the queue.
     */
    void enqueue(int value) {
        // TODO: Implement enqueue method
    }

    /**
     * @brief Removes an element from the front of the queue.
     * @return The value of the removed element, or -1 if the queue is empty.
     */
    int dequeue() {
        // TODO: Implement dequeue method
    }

    /**
     * @brief Checks if the queue is empty.
     * @return True if the queue is empty, false otherwise.
     */
    bool is_empty() {
        // TODO: Implement is_empty method
    }

    /**
     * @brief Gets the size of the queue.
     * @return The number of elements in the queue.
     */
    int size() {
        // TODO: Implement size method
    }

    /**
     * @brief Display the elements of the queue.
     */
    void display_queue() {
        for(auto i: queue){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
};

void test_queue() {
    cout << "Testing Queue...";
    Queue q;
    // Test 1: Check if the queue is initially empty.
    assert(q.is_empty() && "Test 1 failed: Queue should be initially empty.");

    // Test 2: Add an element to the queue and check its size.
    q.enqueue(1);
    assert(q.size() == 1 && "Test 2 failed: Queue size should be 1 after one enqueue operation.");

    // Test 3: Remove an element from the queue and check its size.
    int removed_value = q.dequeue();
    assert(q.is_empty() && "Test 3 failed: Queue should be empty after one enqueue and one dequeue operation.");
    assert(removed_value == 1 && "Test 3 failed: The dequeued value should be 1.");

    // Test 4: Try to dequeue from an empty queue.
    removed_value = q.dequeue();
    assert(removed_value == -1 && "Test 4 failed: The dequeue operation should return -1 when queue is empty.");

    std::cout << "All tests passed successfully!" << std::endl;

}

int main() {
    test_queue();
    return 0;
}