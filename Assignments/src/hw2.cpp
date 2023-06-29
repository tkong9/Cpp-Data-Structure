#include <iostream>

/**
 * Checks if a number is prime.
 *
 * This function checks if a given integer is a prime number.
 * A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
 * The function returns true if the number is prime, and false otherwise.
 *
 * @param num The number to check.
 * @return True if the number is prime, false otherwise.
 */
bool is_prime(int num) {
    // TODO: Implement this function

    return 0;
}

/**
 * Finds the nth prime number.
 *
 * This function calculates the nth prime number,
 * where n is a positive integer. The primes are counted
 * as follows: 2 is the 1st prime, 3 is the 2nd prime,
 * 5 is the 3rd prime, and so on.
 *
 * @param n The position in the sequence of prime numbers to find.
 * @return The nth prime number.
 */
int nth_prime(int n) {
    // TODO: Implement this function

    return 0;
}


/**
 * Counts the number of digits in an integer.
 * Negative integers are treated the same as positive integers.
 * ex) digit_count(12345) -> 5
 *     digit_count(0) -> 1
 *     digit_count(-12345) -> 5
 *     digit_count(456) -> 3
 * @param num The integer for which to count the digits.
 * @return The number of digits in the integer.
 */
int digit_count(int num) {
    // TODO: Implement this function

    return 0;
}

/**
 * Function to calculate the sum of digits in a given number.
 *
 * @param number The number for which to calculate the sum of digits.
 * @return The sum of digits in the given number.
 */
int sum_of_digits(int number) {
    // TODO: Implement this function

    return 0;
}

/**
 * Checks if an integer has consecutive digits.
 *
 * This function checks a given integer to see if it contains
 * any consecutive digits.
 *
 * @param num The integer to check for consecutive digits.
 * @return True if the integer has consecutive digits, false otherwise.
 * 
 * ex) 12345 -> false
 *     12234 -> true (22 is consecutive)
 *     12337891 -> true (33 is consecutive)
 *     11111 -> true (11 is consecutive)
 */
bool has_consecutive_digits(int num) {
    // TODO: Implement this function

    return 0;
}

/**
 * Calculates the nth triangular number.
 *
 * A triangular number is the sum of the numbers from 1 to n.
 * This function is a recursive implementation of that calculation.
 * 
 * For example, the 5th triangular number would be 1 + 2 + 3 + 4 + 5 = 15.
 *
 * @param n The position in the sequence for which to calculate the triangular number.
 * @return The nth triangular number.
 */
int triangle_number(int n) {
    // TODO: implement this function recursively

    return 0;
}

// /**
//  * Binary search algorithm to find the index of a target element in a sorted vector.
//  *
//  * @param arr The sorted vector to search in.
//  * @param target The element to search for.
//  * @return The index of the target element if found, -1 otherwise.
//  */
// int binary_search(const std::vector<int>& arr, int target) {
//     // TODO: Implement the binary search algorithm recursively here


//     return -1;  // Target element not found in the vector
// }

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

    return 0;
}



// Test cases -------------------------------------------------------------

void test_is_prime() {
    std::cout << "Running testIsPrime tests...";
    // Test case 1: Prime number
    assert(is_prime(7) == true);
    // Test case 2: Non-prime number
    assert(is_prime(6) == false);
    // Test case 3: Zero
    assert(is_prime(0) == false);
    // Test case 4: Negative number
    assert(is_prime(-7) == false);
    // Test case 5: One
    assert(is_prime(1) == false);
    // Test case 6: Large prime number
    assert(is_prime(2147483647) == true);
    // Test case 7: Large non-prime number
    assert(is_prime(2147483646) == false);
    std::cout << "All tests passed!" << std::endl;
}

void test_nth_prime() {
    std::cout << "Running test_nth_prime tests...";
    // Test case 1: First prime
    assert(nth_prime(1) == 2);
    // Test case 2: Second prime
    assert(nth_prime(2) == 3);
    // Test case 3: Third prime
    assert(nth_prime(3) == 5);
    // Test case 4: Fourth prime
    assert(nth_prime(4) == 7);
    // Test case 5: Fifth prime
    assert(nth_prime(5) == 11);
    // Test case 6: Large prime
    assert(nth_prime(100) == 541);
    std::cout << "All tests passed!" << std::endl;
}

void test_digit_count() {
    std::cout << "Running test_digit_count tests...";
    // Test case 1: Positive number
    assert(digit_count(12345) == 5);
    // Test case 2: Negative number
    assert(digit_count(-12345) == 5);
    // Test case 3: Zero
    assert(digit_count(0) == 1);
    // Test case 4: Single digit
    assert(digit_count(5) == 1);
    // Test case 5: Multiple digits, same digit
    assert(digit_count(11111) == 5);
    // Test case 6: Multiple digits, different digits
    assert(digit_count(123456789) == 9);
    std::cout << "All tests passed!" << std::endl;
}

void test_sum_of_digits() {
    std::cout << "Running test_sum_of_digits tests...";
    // Test case 1: Positive number
    assert(sum_of_digits(12345) == 15);
    // Test case 2: Negative number
    assert(sum_of_digits(-12345) == 15);
    // Test case 3: Zero
    assert(sum_of_digits(0) == 0);
    // Test case 4: Single digit
    assert(sum_of_digits(5) == 5);
    // Test case 5: Multiple digits, same digit
    assert(sum_of_digits(11111) == 5);
    // Test case 6: Multiple digits, different digits
    assert(sum_of_digits(123456789) == 45);
    std::cout << "All tests passed!" << std::endl;
}

void test_triangle_number() {
    std::cout << "Running triangle_number tests ... ";
    assert(triangle_number(1) == 1);
    assert(triangle_number(2) == 3);
    assert(triangle_number(3) == 6);
    assert(triangle_number(4) == 10);
    assert(triangle_number(5) == 15);
    assert(triangle_number(6) == 21);
    assert(triangle_number(7) == 28);
    assert(triangle_number(8) == 36);
    assert(triangle_number(9) == 45);
    assert(triangle_number(10) == 55);
    std::cout << "Passed!" << std::endl;
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

void test_has_consecutive_digits() {
    std::cout << "Running test_has_consecutive_digits tests...";
    // Test case 1: Positive number
    assert(has_consecutive_digits(12345) == false);
    // Test case 2: Negative number
    assert(has_consecutive_digits(-12345) == false);
    // Test case 3: Zero
    assert(has_consecutive_digits(0) == false);
    // Test case 4: Single digit
    assert(has_consecutive_digits(5) == false);
    // Test case 5: Multiple digits, same digit
    assert(has_consecutive_digits(11111) == true);
    // Test case 6: Multiple digits, different digits
    assert(has_consecutive_digits(123456789) == false);
    // Test case 7: Multiple digits, consecutive digits
    assert(has_consecutive_digits(1234567890) == false);
    // Test case 8: Multiple digits, consecutive digits
    assert(has_consecutive_digits(12337891) == true);
    assert(has_consecutive_digits(-112345) == true);
    std::cout << "Passed!" << std::endl;
}

void test_all() {
    // Comment out the tests you don't want to run!
    test_is_prime();
    test_nth_prime();
    test_digit_count();
    test_sum_of_digits();
    test_triangle_number();
    test_binary_search();
    test_has_consecutive_digits();
}

int main() {
    // Run test case function
    test_all();
    return 0;
}
