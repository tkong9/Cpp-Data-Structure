#include <iostream>
#include <vector>

class Deque {
private:
    std::vector<int> deque;

public:
    /**
     * Insert at the front of the deque
     */
    void insertFront(int data) {
        // TODO: Implement this function.
    }

    /**
     * Insert at the rear of the deque
     */
    void insertRear(int data) {
        // TODO: Implement this function.
    }

    /**
     * Remove from the front of the deque
     */
    void deleteFront() {
        // TODO: Implement this function.
    }

    /**
     * Remove from the rear of the deque
     */
    void deleteRear() {
        // TODO: Implement this function.
    }

    /**
     * Print the elements in the deque
     */
    void printDeque() {
        for(auto i : deque) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Deque dq;
    dq.insertFront(1);
    dq.insertRear(2);
    dq.insertFront(3);
    dq.insertRear(4);
    dq.printDeque(); // Output: 3 1 2 4

    dq.deleteFront();
    dq.deleteRear();
    dq.printDeque(); // Output: 1 2

    return 0;
}
