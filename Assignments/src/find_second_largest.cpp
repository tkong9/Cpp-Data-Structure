#include <iostream>

using namespace std;

// find second-largest element in an array
// Sample Output:
// Original array: 10 24 45 98 78 90 11
// Second-largest element of the said array: 90

// Original array: -10 -24 -45 -98 -78 -90 -11
// Second-largest element of the said array: -11

// Original array: 0 24 -4 98 -78 0 -11
// Second-largest element of the said array: 24

int find_second_largest(int arr[], int size) {
    // your code here

    return 0;
}


int main() {
    // simple tests for find_second_largest
    int arr1[] = {10, 24, 45, 98, 78, 90, 11};
    int arr2[] = {-10, -24, -45, -98, -78, -90, -11};
    int arr3[] = {0, 24, -4, 98, -78, 0, -11};

    cout << find_second_largest(arr1, 7) << endl;
    cout << find_second_largest(arr2, 7) << endl;
    cout << find_second_largest(arr3, 7) << endl;

    return 0;
}