#include <iostream>
#include <vector>

/*
 * Insertion Sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
 * 
 * Insertion sort has the following steps:
 * 
 * 1. Iterate from arr[1] to arr[n] over the input vector.
 * 2. Compare the current element (key) to its predecessor.
 * 3. If the key element is smaller than its predecessor, compare it to the elements before.
 *    Move the greater elements one position up to make space for the swapped element.
 * 4. Repeat steps 2 and 3 until the key element is in the correct position.
 * 
 * Insertion sort has a time complexity of O(n^2) where n is the number of elements in the list.
 * Insertion sort has a space complexity of O(1) because it does not use any additional space.
*/

/**
 * This function implements the insertion sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void insertion_sort(std::vector<int>& arr) {
    // TODO: Implement insertion sort
    // Get the size of the input vector
    int n = arr.size();

    // Start from the second element (index 1).
    // The first element is already sorted.
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void test_insertion_sort() {
    std::cout << "Running insertion sort tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    insertion_sort(numbers1);
    assert(numbers1 == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {12, -16, 5, 0, -3, 8, -30};
    insertion_sort(numbers2);
    assert(numbers2 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {12, 0, 5, 8, 16, 20, 30};
    insertion_sort(numbers3);
    assert(numbers3 == std::vector<int>({0, 5, 8, 12, 16, 20, 30}));

    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {12, -16, 5, 0, -3, 8, -30};
    insertion_sort(numbers4);
    assert(numbers4 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    insertion_sort(numbers5);
    assert(numbers5 == std::vector<int>({}));

    // Test case 6: Already sorted vector
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    insertion_sort(numbers6);
    assert(numbers6 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 7: Reverse sorted vector
    std::vector<int> numbers7 = {30, 20, 16, 12, 8, 5, 2};
    insertion_sort(numbers7);
    assert(numbers7 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 8: Vector with duplicate elements
    std::vector<int> numbers8 = {2, 5, 8, 12, 16, 20, 30, 5, 8, 12};
    insertion_sort(numbers8);
    assert(numbers8 == std::vector<int>({2, 5, 5, 8, 8, 12, 12, 16, 20, 30}));

    std::cout << "Passed!" << std::endl;
}

int main() {
    test_insertion_sort();
    return 0;
}