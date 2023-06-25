#include <iostream>

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

void test_sumOfDigits() {
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
}

int main() {
    // Run test case function
    std::cout << "Running tests..." << std::endl;
    test_sumOfDigits();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
