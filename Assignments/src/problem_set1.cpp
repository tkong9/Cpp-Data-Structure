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
bool isPrime(int num) {
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
int nthPrime(int n) {
    // TODO: Implement this function
    return 0;
}


/**
 * Counts the number of digits in an integer.
 * Negative integers are treated the same as positive integers.
 * ex) digitCount(12345) -> 5
 *     digitCount(0) -> 1
 *     digitCount(-12345) -> 5
 *     digitCount(456) -> 3
 * @param num The integer for which to count the digits.
 * @return The number of digits in the integer.
 */
int digitCount(int num) {
    // TODO: Implement this function
    return 0;
}

/**
 * Function to calculate the sum of digits in a given number.
 *
 * @param number The number for which to calculate the sum of digits.
 * @return The sum of digits in the given number.
 */
int sumOfDigits(int number) {
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
bool hasConsecutiveDigits(int num) {
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
int triangleNumber(int n) {
    // TODO: implement this function recursively

    return 0;
}

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
    // TODO: implement this function recursively

    return 0;
}

// Test cases -------------------------------------------------------------

void testIsPrime() {
    std::cout << "Running testIsPrime tests...";
    // Test case 1: Prime number
    assert(isPrime(7) == true);
    // Test case 2: Non-prime number
    assert(isPrime(6) == false);
    // Test case 3: Zero
    assert(isPrime(0) == false);
    // Test case 4: Negative number
    assert(isPrime(-7) == false);
    // Test case 5: One
    assert(isPrime(1) == false);
    // Test case 6: Large prime number
    assert(isPrime(2147483647) == true);
    // Test case 7: Large non-prime number
    assert(isPrime(2147483646) == false);
    std::cout << "All tests passed!" << std::endl;
}

void testNthPrime() {
    std::cout << "Running testNthPrime tests...";
    // Test case 1: First prime
    assert(nthPrime(1) == 2);
    // Test case 2: Second prime
    assert(nthPrime(2) == 3);
    // Test case 3: Third prime
    assert(nthPrime(3) == 5);
    // Test case 4: Fourth prime
    assert(nthPrime(4) == 7);
    // Test case 5: Fifth prime
    assert(nthPrime(5) == 11);
    // Test case 6: Large prime
    assert(nthPrime(100) == 541);
    std::cout << "All tests passed!" << std::endl;
}

void testDigitCount() {
    std::cout << "Running testDigitCount tests...";
    // Test case 1: Positive number
    assert(digitCount(12345) == 5);
    // Test case 2: Negative number
    assert(digitCount(-12345) == 5);
    // Test case 3: Zero
    assert(digitCount(0) == 1);
    // Test case 4: Single digit
    assert(digitCount(5) == 1);
    // Test case 5: Multiple digits, same digit
    assert(digitCount(11111) == 5);
    // Test case 6: Multiple digits, different digits
    assert(digitCount(123456789) == 9);
    std::cout << "All tests passed!" << std::endl;
}

void testSumOfDigits() {
    std::cout << "Running testSumOfDigits tests...";
    // Test case 1: Positive number
    assert(sumOfDigits(12345) == 15);
    // Test case 2: Negative number
    assert(sumOfDigits(-12345) == 15);
    // Test case 3: Zero
    assert(sumOfDigits(0) == 0);
    // Test case 4: Single digit
    assert(sumOfDigits(5) == 5);
    // Test case 5: Multiple digits, same digit
    assert(sumOfDigits(11111) == 5);
    // Test case 6: Multiple digits, different digits
    assert(sumOfDigits(123456789) == 45);
    std::cout << "All tests passed!" << std::endl;
}

void testTriangleNumber() {
    std::cout << "Testing triangleNumber tests ... ";
    assert(triangleNumber(1) == 1);
    assert(triangleNumber(2) == 3);
    assert(triangleNumber(3) == 6);
    assert(triangleNumber(4) == 10);
    assert(triangleNumber(5) == 15);
    assert(triangleNumber(6) == 21);
    assert(triangleNumber(7) == 28);
    assert(triangleNumber(8) == 36);
    assert(triangleNumber(9) == 45);
    assert(triangleNumber(10) == 55);
    std::cout << "Passed!" << std::endl;
}

void testBinarySearch() {
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

void testHasConsecutiveDigits() {
    std::cout << "Running testHasConsecutiveDigits tests...";
    // Test case 1: Positive number
    assert(hasConsecutiveDigits(12345) == false);
    // Test case 2: Negative number
    assert(hasConsecutiveDigits(-12345) == false);
    // Test case 3: Zero
    assert(hasConsecutiveDigits(0) == false);
    // Test case 4: Single digit
    assert(hasConsecutiveDigits(5) == false);
    // Test case 5: Multiple digits, same digit
    assert(hasConsecutiveDigits(11111) == true);
    // Test case 6: Multiple digits, different digits
    assert(hasConsecutiveDigits(123456789) == false);
    // Test case 7: Multiple digits, consecutive digits
    assert(hasConsecutiveDigits(1234567890) == false);
    // Test case 8: Multiple digits, consecutive digits
    assert(hasConsecutiveDigits(12337891) == true);
    assert(hasConsecutiveDigits(-112345) == true);
    std::cout << "Passed!" << std::endl;
}

void testAll() {
    // Comment out the tests you don't want to run!
    testIsPrime();
    testNthPrime();
    testDigitCount();
    testSumOfDigits();
    testTriangleNumber();
    testBinarySearch();
    testHasConsecutiveDigits();
}

int main() {
    // Run test case function
    testAll();
    return 0;
}
