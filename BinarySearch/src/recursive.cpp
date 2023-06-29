#include <iostream>
#include <vector>
#include <cassert>

/**
 * A recursive implementation of binary search.
 *
 * Binary search is an efficient algorithm for finding an item from a sorted list of items.
 * It works by repeatedly dividing in half the portion of the list that could contain the item,
 * until you've narrowed down the possible locations to just one.
 *
 * @param arr The sorted array to be searched.
 * @param low The low index of the portion of the array to be searched.
 * @param high The high index of the portion of the array to be searched.
 * @param target The value being searched for.
 * @return Returns the index of target in arr if found, else returns -1.
 */
int binary_search(const std::vector<int>& arr, int low, int high, int target) {
    // TODO: Implement the binary search algorithm recursively here

    return -1;
}


void test_binary_search() {
    std::cout << "Running binary_search tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {2, 5, 8, 12, 16, 20, 30};
    assert(binary_search(numbers1, 0, numbers1.size() - 1, 12) == 3);
    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {-30, -16, -3, 0, 5, 8, 12};
    assert(binary_search(numbers2, 0, numbers2.size() - 1,-16) == 1);
    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {0, 5, 8, 12, 16, 20, 30};
    assert(binary_search(numbers3, 0, numbers3.size() -1, 0) == 0);
    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {-30, -16, -3, 0, 5, 8, 12};
    assert(binary_search(numbers4,0, numbers4.size() - 1, 0) == 3);
    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    assert(binary_search(numbers5, 0, numbers5.size() - 1, 8) == -1);
    // Test case 6: Target not found
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    assert(binary_search(numbers6, 0, numbers6.size() - 1, 9) == -1);
    // Test case 7: Target at the beginning
    std::vector<int> numbers7 = {2, 5, 8, 12, 16, 20, 30};
    assert(binary_search(numbers7, 0, numbers7.size() - 1, 2) == 0);
    // Test case 8: Target at the end
    std::vector<int> numbers8 = {2, 5, 8, 12, 16, 20, 30};
    assert(binary_search(numbers8, 0, numbers8.size() - 1, 30) == 6);
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    // Run the tests to ensure everything works
    std::cout << "Running tests...";
    test_binary_search();
    std::cout << "All tests passed." << std::endl;

    return 0;
}