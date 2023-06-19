#include <iostream>

using namespace std;

// Write a C++ program to find the most frequent element in an array of integers.
// If there is a tie, return the smaller element.
// Sample Output:
// Original array: 10 24 4 45 24 0 78 90 45 45 24
// Most frequent element of the said array: 24

// Original array: -10 -24 -45 -98 -78 -90 -11 -45 -45 -98 -98 -98 -98 -98
// Most frequent element of the said array: -98

// Original array: 5 4 5 1 5 7 5 4 5 7 5 1 1
// Most frequent element of the said array: 5

int most_frequent(int arr[], int size) {
    // your code here

    return 0;
}

int main() {
    // simple tests for most_frequent
    int arr1[] = {10, 24, 4, 45, 24, 0, 78, 90, 45, 45, 24};
    int arr2[] = {-10, -24, -45, -98, -78, -90, -11, -45, -45, -98, -98, -98, -98, -98};
    int arr3[] = {5, 4, 5, 1, 5, 7, 5, 4, 5, 7, 5, 1, 1};

    cout << most_frequent(arr1, 11) << endl;
    cout << most_frequent(arr2, 14) << endl;
    cout << most_frequent(arr3, 13) << endl;

    return 0;
}