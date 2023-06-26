#include <iostream>

/**
 * Calculates the Fibonacci number at a given position.
 *
 * This function is a recursive implementation of the Fibonacci sequence.
 * For an input n, it returns the nth number in the Fibonacci sequence,
 * with the first two numbers in the sequence considered to be 0 and 1.
 *
 * @param n The position in the Fibonacci sequence for which to return the number.
 * @return The nth number in the Fibonacci sequence.
 */
int fibonacci(int n) {
    // base case: first two numbers of fibonacci sequence are 0 and 1
    if (n <= 1) {
        return n;
    }
    // recursive case
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Enter the position in the Fibonacci sequence: ";
    std::cin >> n;
    std::cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << std::endl;
    return 0;
}