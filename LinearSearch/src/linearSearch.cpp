#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/**
 * Linear search algorithm to find the first occurrence of a target element in a vector.
 *
 * @param arr The vector to search in.
 * @param target The element to search for.
 * @return The index of the target element if found, -1 otherwise.
 */
int linearSearch(const vector<int>& arr, int target) {
    // TODO: Implement linear search algorithm
    
    return -1;
}

void testLinearSearch() {
    // Test case 1: Positive numbers
    vector<int> numbers1 = {2, 5, 8, 12, 3, 6};
    assert(linearSearch(numbers1, 8) == 2);

    // Test case 2: Negative numbers
    vector<int> numbers2 = {-5, -8, -13};
    assert(linearSearch(numbers2, -8) == 1);

    // Test case 3: Zero and positive number
    vector<int> numbers3 = {0, 10, 20};
    assert(linearSearch(numbers3, 0) == 0);

    // Test case 4: Zero and negative number
    vector<int> numbers4 = {0, -7, -3};
    assert(linearSearch(numbers4, -7) == 1);

    // Test case 5: Empty vector
    vector<int> numbers5 = {};
    assert(linearSearch(numbers5, 8) == -1);

    // Test case 6: Target not found
    vector<int> numbers6 = {2, 5, 8, 12, 3, 6};
    assert(linearSearch(numbers6, 9) == -1);

    // Test case 7: Target at the beginning
    vector<int> numbers7 = {2, 5, 8, 12, 3, 6};
    assert(linearSearch(numbers7, 2) == 0);

    // Test case 8: Target at the end
    vector<int> numbers8 = {2, 5, 8, 12, 3, 6};
    assert(linearSearch(numbers8, 6) == 5);

    // Test case 9: Target occurs multiple times
    vector<int> numbers9 = {2, 5, 8, 12, 3, 6, 3, 6, 3, 6, 3, 6, 3, 6};
    assert(linearSearch(numbers9, 6) == 5);
}

int main() {
    // Run test case function 
    cout << "Running tests..." << endl;
    testLinearSearch();
    cout << "All tests passed!" << endl;

    return 0;
}
