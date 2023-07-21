#include <iostream>
#include <vector>

using namespace std;


/**
 * @brief Swaps the values pointed to by two integer pointers.
 *
 * This function takes two integer pointers as input parameters, and swaps the values stored at 
 * the memory locations pointed to by these pointers. After the function executes, the value 
 * initially pointed to by ptr1 will be at the location pointed to by ptr2 and vice versa.
 *
 * @param ptr1: A pointer to the first integer value to be swapped.
 * @param ptr2: A pointer to the second integer value to be swapped.
 * @return: This function does not return a value.
 */
void swap_pointers(int* ptr1, int* ptr2) {
    // TODO: Write your code here
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

/**
 * @brief Finds and returns the maximum element in an array of integers.
 *
 * This function takes a pointer to an array of integers and the size of the array as input.
 * It iterates over the array using pointer arithmetic, comparing each element with the
 * current maximum. If a larger element is found, it updates the maximum.
 *
 * @param arr: A pointer to the first element of the array to be searched.
 * @param size: The number of elements in the array.
 * @return: The maximum integer element in the array. If the array is empty, the behavior is undefined.
 */
int find_max_element(int* arr, int size) {
    // TODO: Write your code here
    int maxElement = *arr;  // Initialize maxElement with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxElement) {
            maxElement = *(arr + i);  // Update maxElement if a larger element is found
        }
    }

    return maxElement;
}

/**
 * @brief Reverses the order of elements in an array of integers.
 *
 * This function takes a pointer to an array of integers and the size of the array as input.
 * It uses two pointers, one starting from the beginning of the array and the other from the end, 
 * incrementing and decrementing them respectively until they meet or cross each other. At each 
 * step, it swaps the values pointed to by the two pointers, effectively reversing the order 
 * of the array elements.
 *
 * @param arr: A pointer to the first element of the array to be reversed.
 * @param size: The number of elements in the array.
 * @return: This function does not return a value. The input array is reversed in-place.
 */
void reverse_array(int* arr, int size) {
    // TODO: Write your code here
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        // swap elements pointed to by start and end pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        // swap_pointers(start, end); using helper funciton

        // Move the pointers towards the center
        start++;
        end--;
    }
}

void test_swap_pointers() {
    cout << "Testing swap_pointers()...";
    int a = 5;
    int b = 10;
    swap_pointers(&a, &b);
    assert(a == 10);
    assert(b == 5);

    int c = 15;
    int d = 20;
    swap_pointers(&c, &d);
    assert(c == 20);
    assert(d == 15);

    int e = 25;
    int f = 30;
    swap_pointers(&e, &f);
    assert(e == 30);
    assert(f == 25);
    cout << "All test cases passed\n";
}

void test_find_max_element() {
    cout << "Testing find_max_element()...";
    int arr[] {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    assert(find_max_element(arr, size) == 5);

    int arr2[] {5, 4, 3, 2, 1};
    size = sizeof(arr2) / sizeof(arr2[0]);
    assert(find_max_element(arr2, size) == 5);

    int arr3[] {1, 2, 3, 4, 5, 4, 3, 2, 1};
    size = sizeof(arr3) / sizeof(arr3[0]);
    assert(find_max_element(arr3, size) == 5);

    int arr4[] {1};
    size = sizeof(arr4) / sizeof(arr4[0]);
    assert(find_max_element(arr4, size) == 1);    
    cout << "All test cases passed\n";
}

void test_reverse_array() {
    cout << "Testing reverse_array()...";
    // Test case 1: Empty array
    int arr1[] = {};
    reverse_array(arr1, 0);
    // An empty array reversed is still an empty array
    assert(sizeof(arr1) / sizeof(int) == 0);

    // Test case 2: Array with one element
    int arr2[] = {1};
    reverse_array(arr2, 1);
    // An array with one element reversed is still the same array
    assert(arr2[0] == 1);

    // Test case 3: Array with two elements
    int arr3[] = {1, 2};
    reverse_array(arr3, 2);
    assert(arr3[0] == 2 && arr3[1] == 1);

    // Test case 4: Array with multiple elements
    int arr4[] = {1, 2, 3, 4, 5};
    reverse_array(arr4, 5);
    assert(arr4[0] == 5 && arr4[1] == 4 && arr4[2] == 3 && arr4[3] == 2 && arr4[4] == 1);

    std::cout << "All test cases passed\n";
}

void test_all() {
    test_swap_pointers();
    test_find_max_element();
    test_reverse_array();
}

int main() {
    test_all();
    return 0;
}