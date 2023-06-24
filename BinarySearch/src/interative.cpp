#include <iostream>
#include <vector>
#include <cassert>

/**
 * Binary search algorithm to find the index of a target element in a sorted vector.
 *
 * @param arr The sorted vector to search in.
 * @param target The element to search for.
 * @return The index of the target element if found, -1 otherwise.
 */
int binarySearch(const std::vector<int>& arr, int target) {
    // TODO: Implement the binary search algorithm iteratively here

    return -1;  // Target element not found in the vector
}

void testBinarySearch() {
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {2, 5, 8, 12, 16, 20, 30};
    assert(binarySearch(numbers1, 12) == 3);

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {-30, -16, -3, 0, 5, 8, 12};
    assert(binarySearch(numbers2, -16) == 1);

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {0, 5, 8, 12, 16, 20, 30};
    assert(binarySearch(numbers3, 0) == 0);

    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {-30, -16, -3, 0, 5, 8, 12};
    assert(binarySearch(numbers4, 0) == 3);

    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    assert(binarySearch(numbers5, 8) == -1);

    // Test case 6: Target not found
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    assert(binarySearch(numbers6, 9) == -1);

    // Test case 7: Target at the beginning
    std::vector<int> numbers7 = {2, 5, 8, 12, 16, 20, 30};
    assert(binarySearch(numbers7, 2) == 0);

    // Test case 8: Target at the end
    std::vector<int> numbers8 = {2, 5, 8, 12, 16, 20, 30};
    assert(binarySearch(numbers8, 30) == 6);
}

int main() {
    // Run the tests to ensure everything works
    std::cout << "Running tests..." << std::endl;
    testBinarySearch();
    std::cout << "All tests passed." << std::endl;

    return 0;
}