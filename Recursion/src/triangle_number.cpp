#include <iostream>

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

void testTriangleNumber() {
    std::cout << "Testing triangleNumber() ... ";
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

int main() {
    testTriangleNumber();
    return 0;
}