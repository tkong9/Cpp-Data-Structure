#include <iostream>

using namespace std;

/**
 * Write a C++ program to find the largest element of a given array of integers.
 * 
 * Sample Output:
 * Original array: 10 24 45 98 78 90 11
 * Maximum element of the said array: 98
 * 
 * Original array: -10 -24 -45 -98 -78 -90 -11
 * Maximum element of the said array: -10
 * 
 * Original array: 0 24 -4 98 -78 0 -11
 * Maximum element of the said array: 98
 * 
 * @param arr[] the array of integers
 * @param size the size of the array
 */
int find_largest(int arr[], int size) {
    // TODO: Implement this function

    return 0;
}


/**
 * Write a C++ program to find the second largest element in an array of integers.
 * 
 * Sample Output:
 * Original array: 10 24 45 98 78 90 11
 * Second largest element of the said array: 90
 * 
 * Original array: -10 -24 -45 -98 -78 -90 -11
 * Second largest element of the said array: -11
 * 
 * Original array: 0 24 -4 98 -78 0 -11
 * Second largest element of the said array: 24
 * 
 * @param arr[] the array of integers
 * @param size the size of the array
 */
int find_second_largest(int arr[], int size) {
    // TODO: Implement this function

    return 0;
}

/**
 * 
 * Write a C++ program to find the most frequent element in an array of integers.
 * If there is a tie, return any of the most frequent elements.
 * 
 * Sample Output:
 * Original array: 10 24 4 45 24 0 78 90 45 45 24
 * Most frequent element of the said array: 24
 * 
 * Original array: -10 -24 -45 -98 -78 -90 -11 -45 -45 -98 -98 -98 -98 -98
 * Most frequent element of the said array: -98
 * 
 * Original array: 5 4 5 1 5 7 5 4 5 7 5 1 1
 * Most frequent element of the said array: 5
 * 
 * @param arr[] the array of integers
 * @param size the size of the array
 */
int most_frequent(int arr[], int size) {
    // TODO: Implement this function

    return 0;
}

/**
 * 
 * Write a C++ program to find the smallest element missing from a sorted array.
 * Elements are distinct and the array is sorted in ascending order.
 * (Range of elements is from 0 to 10)
 * 
 * Sample Output:
 * Original array: 0 1 3 4 5 6 7 8 10
 * Smallest missing element of the said array: 2
 * 
 * Original array: 1 2 3 4 5 6 7 8 10
 * Smallest missing element of the said array: 0
 * 
 * Original array: 0 1 2 3 4 5 6 7 8
 * Smallest missing element of the said array: 9
 * 
 * Original array: 0 1 2 3 4 5 6 7 8 9
 * Smallest missing element of the said array: 10
 * 
 * Original array: 0 1 2 3 4 6 7 8 9 10
 * Smallest missing element of the said array: 5
 * 
 * Original array: 0 1 2 4 5 6 8 10
 * Smallest missing element of the said array: 3
 * 
 */
int smallest_missing(int arr[], int size) {
    // your code here

    return 0;
}

// Test cases -------------------------------------------------------------

void test_find_largest() {
    cout << "Running test cases for find_largest()... ";
    assert(find_largest(new int[7]{10, 24, 45, 98, 78, 90, 11}, 7) == 98);
    assert(find_largest(new int[7]{-10, -24, -45, -98, -78, -90, -11}, 7) == -10);
    assert(find_largest(new int[7]{0, 24, -4, 98, -78, 0, -11}, 7) == 98);
    assert(find_largest(new int[9]{4, 2, 8, 3, 2, 1, 7, 5, 3}, 9) == 8);
    cout << "All test cases passed!" << endl;
}

void test_find_second_largest() {
    cout << "Running test cases for find_second_largest()... ";
    assert(find_second_largest(new int[7]{10, 24, 45, 98, 78, 90, 11}, 7) == 90);
    assert(find_second_largest(new int[7]{-10, -24, -45, -98, -78, -90, -11}, 7) == -11);
    assert(find_second_largest(new int[7]{0, 24, -4, 98, -78, 0, -11}, 7) == 24);
    assert(find_second_largest(new int[9]{4, 2, 8, 3, 2, 1, 7, 5, 3}, 9) == 7);
    cout << "All test cases passed!" << endl;
}

void test_most_frequent() {
    cout << "Running test cases for most_frequent()... ";
    assert(most_frequent(new int[11]{10, 24, 4, 45, 24, 0, 78, 90, 45, 45, 24}, 11) == 24);
    assert(most_frequent(new int[14]{-10, -24, -45, -98, -78, -90, -11, -45, -45, -98, -98, -98, -98, -98}, 14) == -98);
    assert(most_frequent(new int[13]{5, 4, 5, 1, 5, 7, 5, 4, 5, 7, 5, 1, 1}, 13) == 5);
    assert(most_frequent(new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 0}, 10) == 0);
    cout << "All test cases passed!" << endl;
}

void test_smallest_missing() {
    cout << "Running test cases for smallest_missing()... ";
    assert(smallest_missing(new int[9]{0, 1, 3, 4, 5, 6, 7, 8, 10}, 9) == 2);
    assert(smallest_missing(new int[9]{1, 2, 3, 4, 5, 6, 7, 8, 10}, 9) == 0);
    assert(smallest_missing(new int[9]{0, 1, 2, 3, 4, 5, 6, 7, 8}, 9) == 9);
    assert(smallest_missing(new int[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 10) == 10);
    assert(smallest_missing(new int[10]{0, 1, 2, 3, 4, 6, 7, 8, 9, 10}, 10) == 5);
    assert(smallest_missing(new int[8]{0, 1, 2, 4, 5, 6, 8, 10}, 8) == 3);
    cout << "All test cases passed!" << endl;
}

void test_all() {
    test_find_largest();
    test_find_second_largest();
    test_most_frequent();
    test_smallest_missing();
}

int main() {
    test_all();
}