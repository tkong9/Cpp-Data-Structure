/**
 * Bubble Sort
 * 
 * Name: <Fill in your name>
 * 
 * Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order.
 * 
 * Bubble sort has the following steps:
 * 
 * 1. Compare adjacent elements. If the first element is greater than the second element, swap them.
 * 2. Repeat step 1 for all elements in the list.
 * 3. Repeat steps 1 and 2 until no more swaps are required.
 *
 * Bubble sort has a time complexity of O(n^2) where n is the number of elements in the list.
 * Bubble sort has a space complexity of O(1) because it does not use any additional space.
 * */

#include <iostream>
#include <vector>

/**
 * This function implements the bubble sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void bubble_sort(std::vector<int>& arr) {
    // TODO: Implement bubble sort here
    // Get the size of the input vector
    int n = arr.size();

    // Nested loop to implement bubble sort
    for(int i = 0; i < n - 1; i++) {
        // The "bubbling" process
        for(int j = 0; j < n - i - 1; j++) {
            // If the current element is bigger than the next one,
            // swap them manually using a temporary variable
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void test_bubble_sort() {
    std::cout << "Running bubble sort tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    bubble_sort(numbers1);
    assert(numbers1 == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {12, -16, 5, 0, -3, 8, -30};
    bubble_sort(numbers2);
    assert(numbers2 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {12, 0, 5, 8, 16, 20, 30};
    bubble_sort(numbers3);
    assert(numbers3 == std::vector<int>({0, 5, 8, 12, 16, 20, 30}));

    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {12, -16, 5, 0, -3, 8, -30};
    bubble_sort(numbers4);
    assert(numbers4 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    bubble_sort(numbers5);
    assert(numbers5 == std::vector<int>({}));

    // Test case 6: Already sorted vector
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    bubble_sort(numbers6);
    assert(numbers6 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 7: Reverse sorted vector
    std::vector<int> numbers7 = {30, 20, 16, 12, 8, 5, 2};
    bubble_sort(numbers7);
    assert(numbers7 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    test_bubble_sort();
    return 0;
}