#include <iostream>

using namespace std;

// Write a C++ program to find the smallest element missing from a sorted array.
// Elements are distinct and the array is sorted in ascending order.
// (Range of elements is from 0 to 10)

// Sample Output:
// Original array: 0 1 3 4 5 6 7 8 10
// Smallest missing element of the said array: 2

// Original array: 1 2 3 4 5 6 7 8 10
// Smallest missing element of the said array: 0

// Original array: 0 1 2 3 4 5 6 7 8
// Smallest missing element of the said array: 9

// Original array: 0 1 2 3 4 5 6 7 8 9
// Smallest missing element of the said array: 10

// Original array: 0 1 2 3 4 6 7 8 9 10
// Smallest missing element of the said array: 5

// Original array: 0 1 2 4 5 6 8 10
// Smallest missing element of the said array: 3

int smallest_missing(int arr[], int size) {
    // your code here

    return 0;
}

int main() {
    // simple tests for smallest_missing
    int arr1[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int arr3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int arr4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr5[] = {0, 1, 2, 3, 4, 6, 7, 8, 9, 10};
    int arr6[] = {0, 1, 2, 4, 5, 6, 8, 10};

    cout << smallest_missing(arr1, 9) << endl;
    cout << smallest_missing(arr2, 9) << endl;
    cout << smallest_missing(arr3, 9) << endl;
    cout << smallest_missing(arr4, 10) << endl;
    cout << smallest_missing(arr5, 10) << endl;
    cout << smallest_missing(arr6, 8) << endl;

    return 0;
}