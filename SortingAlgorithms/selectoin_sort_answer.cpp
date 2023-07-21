/**
 * Selection Sort
*/

/**
 * Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element
 * (considering ascending order) from unsorted part and putting it at the beginning.
 * 
 * Selection sort has the following steps:
 * 
 * 1. Iterate from arr[0] to arr[n] over the input vector.
 * 2. Find the minimum element in the unsorted array.
 * 3. Swap the found minimum element with the first element.
 * 4. Repeat steps 2 and 3 until the array is sorted.
 * 
 * Selection sort has a time complexity of O(n^2) where n is the number of elements in the list.
 * Selection sort has a space complexity of O(1) because it does not use any additional space.
*/

#include <iostream>
#include <vector>

/**
 * This function implements the selection sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void selection_sort(std::vector<int>& arr) {
    // TODO: Implement selection sort
    // Get the size of the input vector
    int n = arr.size();

    // One by one move boundary of unsorted subarray
    for(int i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted array
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void test_selection_sort() {
    std::cout << "Running selection sort tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    selection_sort(numbers1);
    assert(numbers1 == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {12, -16, 5, 0, -3, 8, -30};
    selection_sort(numbers2);
    assert(numbers2 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {12, 0, 5, 8, 16, 20, 30};
    selection_sort(numbers3);
    assert(numbers3 == std::vector<int>({0, 5, 8, 12, 16, 20, 30}));

    // Test case 4: Already sorted
    std::vector<int> numbers4 = {1, 2, 3, 4, 5, 6, 7, 8};
    selection_sort(numbers4);
    assert(numbers4 == std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8}));

    // Test case 5: Reverse sorted
    std::vector<int> numbers5 = {8, 7, 6, 5, 4, 3, 2, 1};
    selection_sort(numbers5);
    assert(numbers5 == std::vector<int>({1, 2, 3, 4, 5, 6, 7, 8}));

    // Test case 6: Empty vector
    std::vector<int> numbers6 = {};
    selection_sort(numbers6);
    assert(numbers6 == std::vector<int>({}));

    // Test case 7: Vector with one element
    std::vector<int> numbers7 = {1};
    selection_sort(numbers7);
    assert(numbers7 == std::vector<int>({1}));

    // Test case 8: Vector with two elements
    std::vector<int> numbers8 = {2, 1};
    selection_sort(numbers8);
    assert(numbers8 == std::vector<int>({1, 2}));

    // Test case 9: Vector with repeated elements
    std::vector<int> numbers9 = {1, 2, 3, 4, 4, 3, 2, 1};
    selection_sort(numbers9);
    assert(numbers9 == std::vector<int>({1, 1, 2, 2, 3, 3, 4, 4}));

    std::cout << "Passed!" << std::endl;
}

int main() {
    test_selection_sort();
    return 0;
}