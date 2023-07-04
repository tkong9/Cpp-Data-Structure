#include <iostream>
#include <vector>


/**
 * Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
 * compares adjacent elements and swaps them if they are in the wrong order.
 * 
 * Bubble sort has the following steps:
 * 
 * 1. Compare adjacent elements. If the first element is greater than the second element, swap them.
 * 2. Repeat step 1 for all elements in the list.
 * 3. Repeat steps 1 and 2 until no more swaps are required.
 *
 * Bubble sort has a time complexity of O(n^2) where n is the number of elements in the list.
 * Bubble sort has a space complexity of O(1) because it does not use any additional space.
 * */


/**
 * This function implements the bubble sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void bubble_sort(std::vector<int>& arr) {
    // TODO: Implement bubble sort here

}

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

/**
 * This function implements the selection sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void selection_sort(std::vector<int>& arr) {
    // TODO: Implement selection sort

}

/*
 * Insertion Sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
 * 
 * Insertion sort has the following steps:
 * 
 * 1. Iterate from arr[1] to arr[n] over the input vector.
 * 2. Compare the current element (key) to its predecessor.
 * 3. If the key element is smaller than its predecessor, compare it to the elements before.
 *    Move the greater elements one position up to make space for the swapped element.
 * 4. Repeat steps 2 and 3 until the key element is in the correct position.
 * 
 * Insertion sort has a time complexity of O(n^2) where n is the number of elements in the list.
 * Insertion sort has a space complexity of O(1) because it does not use any additional space.
*/

/**
 * This function implements the insertion sort algorithm.
 * It sorts the input vector in ascending order.
 *
 * @param arr The vector to be sorted.
 */
void insertion_sort(std::vector<int>& arr) {
    // TODO: Implement insertion sort

}

/**
 * Merge Sort
 * 
 * Merge sort is a divide and conquer algorithm that was invented by John von Neumann in 1945.
 * 
 * Merge sort has the following steps:
 * 
 * 1. Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
 * 2. Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.
 * 
 * Merge sort has a time complexity of O(n log n) where n is the number of elements in the list.
 * Merge sort has a space complexity of O(n) because it uses additional space to store the sublists.
*/

/**
 * @brief Merges two sorted lists into a single sorted list.
 * 
 * @param left_list The first sorted list.
 * @param right_list The second sorted list.
 * @return A new list that contains all elements from left_list and right_list, in sorted order.
 *
 * This function assumes that left_list and right_list are sorted and merges them
 * into a single sorted list in linear time.
 */
std::vector<int> merge(const std::vector<int>& left_list, const std::vector<int>& right_list) {
    // TODO: Implement merge function
}

/**
 * @brief Performs the merge sort algorithm on a list.
 *
 * @param lst The list of unordered elements.
 * @return A new list that contains all elements from lst, in sorted order.
 *
 * Merge sort is a divide-and-conquer algorithm that works by recursively breaking down
 * a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly.
 * The solutions to the sub-problems are then combined to give a solution to the original problem.
 */
std::vector<int> merge_sort(const std::vector<int>& lst) {
    // TODO: Implement merge sort
}

// Test cases-------------------------------------------------------------------

void test_bubble_sort() {
    std::cout << "Running bubble sort tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    bubble_sort(numbers1);
    assert(numbers1 == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {12, -16, 5, 0, -3, 8, -30};
    bubble_sort(numbers2);
    assert(numbers2 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {12, 0, 5, 8, 16, 20, 30};
    bubble_sort(numbers3);
    assert(numbers3 == std::vector<int>({0, 5, 8, 12, 16, 20, 30}));

    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {12, -16, 5, 0, -3, 8, -30};
    bubble_sort(numbers4);
    assert(numbers4 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    bubble_sort(numbers5);
    assert(numbers5 == std::vector<int>({}));

    // Test case 6: Already sorted vector
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    bubble_sort(numbers6);
    assert(numbers6 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 7: Reverse sorted vector
    std::vector<int> numbers7 = {30, 20, 16, 12, 8, 5, 2};
    bubble_sort(numbers7);
    assert(numbers7 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));
    std::cout << "All tests passed!" << std::endl;
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

void test_insertion_sort() {
    std::cout << "Running insertion sort tests...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    insertion_sort(numbers1);
    assert(numbers1 == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {12, -16, 5, 0, -3, 8, -30};
    insertion_sort(numbers2);
    assert(numbers2 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 3: Zero and positive number
    std::vector<int> numbers3 = {12, 0, 5, 8, 16, 20, 30};
    insertion_sort(numbers3);
    assert(numbers3 == std::vector<int>({0, 5, 8, 12, 16, 20, 30}));

    // Test case 4: Zero and negative number
    std::vector<int> numbers4 = {12, -16, 5, 0, -3, 8, -30};
    insertion_sort(numbers4);
    assert(numbers4 == std::vector<int>({-30, -16, -3, 0, 5, 8, 12}));

    // Test case 5: Empty vector
    std::vector<int> numbers5 = {};
    insertion_sort(numbers5);
    assert(numbers5 == std::vector<int>({}));

    // Test case 6: Already sorted vector
    std::vector<int> numbers6 = {2, 5, 8, 12, 16, 20, 30};
    insertion_sort(numbers6);
    assert(numbers6 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 7: Reverse sorted vector
    std::vector<int> numbers7 = {30, 20, 16, 12, 8, 5, 2};
    insertion_sort(numbers7);
    assert(numbers7 == std::vector<int>({2, 5, 8, 12, 16, 20, 30}));

    // Test case 8: Vector with duplicate elements
    std::vector<int> numbers8 = {2, 5, 8, 12, 16, 20, 30, 5, 8, 12};
    insertion_sort(numbers8);
    assert(numbers8 == std::vector<int>({2, 5, 5, 8, 8, 12, 12, 16, 20, 30}));

    std::cout << "Passed!" << std::endl;
}

void test_merge_sort() {
    std::cout << "Testing Merge Sort...";
    // Test case 1: Positive numbers
    std::vector<int> numbers1 = {3, 2, 5, 7, 4, 8, 4, 1};
    assert(merge_sort(numbers1) == std::vector<int>({1, 2, 3, 4, 4, 5, 7, 8}));

    // Test case 2: Negative numbers
    std::vector<int> numbers2 = {-3, -2, -5, -7, -4, -8, -4, -1};
    assert(merge_sort(numbers2) == std::vector<int>({-8, -7, -5, -4, -4, -3, -2, -1}));

    // Test case 3: Positive and negative numbers
    std::vector<int> numbers3 = {-3, 2, -5, 7, -4, 8, -4, 1};
    assert(merge_sort(numbers3) == std::vector<int>({-5, -4, -4, -3, 1, 2, 7, 8}));

    // Test case 4: Empty vector
    std::vector<int> numbers4 = {};
    assert(merge_sort(numbers4) == std::vector<int>({}));

    // Test case 5: Vector with one element
    std::vector<int> numbers5 = {1};
    assert(merge_sort(numbers5) == std::vector<int>({1}));

    // Test case 6: Vector with two elements
    std::vector<int> numbers6 = {2, 1};
    assert(merge_sort(numbers6) == std::vector<int>({1, 2}));

    // Test case 7: Vector with repeated elements
    std::vector<int> numbers7 = {2, 1, 2, 1, 2, 1, 2, 1};
    assert(merge_sort(numbers7) == std::vector<int>({1, 1, 1, 1, 2, 2, 2, 2}));

    std::cout << "Passed\n";
}


void test_all() {
    test_bubble_sort();
    test_selection_sort();
    test_insertion_sort();
    test_merge_sort();
}


int main() {
    test_all();
    return 0;
}
