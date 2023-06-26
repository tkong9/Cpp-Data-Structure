#include <iostream>

/**
 * Recursion is a programming concept where a function calls itself directly or indirectly.
 * It's essentially a process, where the solution to a problem depends on solutions to smaller instances of the same problem.
 * In other words, a recursive function solves a problem by solving smaller versions of the same problem.
 * For each recursive call, the problem is broken down into smaller and smaller pieces, until it reaches a
 * point where the problem can be solved directly. This is often called the "base case" or the "stop condition" of the recursion.
 * 
 * In this example, factorial(n) is defined in terms of factorial(n - 1),
 * which is a smaller version of the same problem. The base case is when n <= 1,
 * in which case the function returns 1 directly without any more recursive calls.
 * 
 * Remember that recursion must always have a base case that can be solved directly
 * to prevent infinite recursion, which will cause your program to crash or hang.
 */

/**
 * Calculates the factorial of a number.
 *
 * This function is a recursive implementation of the factorial operation.
 * For an input n, it returns the factorial of n (n!),
 * which is the product of all positive integers less than or equal to n.
 *
 * @param n The number for which to calculate the factorial.
 * @return The factorial of the input number.
 */
int factorial(int n) {
    // base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // recursive case
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    return 0;
}