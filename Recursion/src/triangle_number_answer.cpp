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
int triangle_number(int n) {
    // base case: the first triangular number is 1
    if (n <= 1) {
        return n;
    }
    // recursive case
    else {
        return n + triangle_number(n - 1);
    }
}

void test_triangle_number() {
    std::cout << "Testing triangleNumber() ... ";
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

int main() {
    test_triangle_number();
    return 0;
}