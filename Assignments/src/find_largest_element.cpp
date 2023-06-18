#include <iostream>

using namespace std;

// Write a C++ program to find the largest element of a given array of integers.
// Sample Output:
// Original array: 10 24 45 98 78 90 11
// Maximum element of the said array: 98

// Original array: -10 -24 -45 -98 -78 -90 -11
// Maximum element of the said array: -10

// Original array: 0 24 -4 98 -78 0 -11
// Maximum element of the said array: 98

int find_largest(int arr[], int size) {
    // your code here

    return 0;
}


int main() {
    // simple tests for find_largest
    int arr1[] = {10, 24, 45, 98, 78, 90, 11};
    int arr2[] = {-10, -24, -45, -98, -78, -90, -11};
    int arr3[] = {0, 24, -4, 98, -78, 0, -11};

    cout << find_largest(arr1, 7) << endl;
    cout << find_largest(arr2, 7) << endl;
    cout << find_largest(arr3, 7) << endl;

    return 0;
}