#include <iostream>
#include <vector>
#include <string>

using namespace std;


/**
 * @brief A Stack class that operates on char types.
 * 
 * This CharStack class encapsulates a std::vector<char> to provide stack operations.
 */
class CharStack {
    std::vector<char> v; ///< The underlying data storage for the stack.

public:
    /**
     * @brief Push a char element onto the stack.
     * 
     * @param x The char element to push onto the stack.
     */
    void push(char x) {
        // TODO: Implement this function
    }

    /**
     * @brief Pop a char element from the stack.
     * 
     * If the stack is empty, returns '\0'.
     * 
     * @return char The top element from the stack, or '\0' if the stack is empty.
     */
    char pop() {
        // TODO: Implement this function
    }

    /**
     * @brief Peek at the top char element of the stack.
     * 
     * If the stack is empty, returns '\0'.
     * 
     * @return char The top element from the stack, or '\0' if the stack is empty.
     */
    char top() {
        // TOOD: Implement this function
    }

    /**
     * @brief Check if the stack is empty.
     * 
     * @return true If the stack is empty.
     * @return false If the stack is not empty.
     */
    bool is_empty() {
        // TODO: Implement this function
    }
};

bool is_valid_parentheses(std::string s) {
    CharStack stack;
    // TODO: Implement this function
}

// Test cases -------------------------------

void test_char_stack() {
    cout << "Testing CharStack...";
    CharStack s;

    // Test is_empty on empty stack
    assert(s.is_empty() == true);

    // Test top on empty stack
    assert(s.top() == '\0');

    // Test pop on empty stack
    assert(s.pop() == '\0');

    // Test push operation
    s.push('a');
    assert(s.is_empty() == false);
    assert(s.top() == 'a');

    s.push('b');
    assert(s.top() == 'b');

    s.push('c');
    assert(s.top() == 'c');

    // Test pop operation
    assert(s.pop() == 'c');
    assert(s.top() == 'b');

    assert(s.pop() == 'b');
    assert(s.top() == 'a');

    assert(s.pop() == 'a');
    assert(s.is_empty() == true);
    assert(s.top() == '\0');

    // Test pop on empty stack again
    assert(s.pop() == '\0');
    cout << "All test cases passed\n";
}

void test_is_valid_parentheses() {
    cout << "Testing is_valid_parentheses...";

    // Test valid cases
    assert(is_valid_parentheses("()") == true);
    assert(is_valid_parentheses("()[]{}") == true);
    assert(is_valid_parentheses("{[]}") == true);
    assert(is_valid_parentheses("") == true);

    // Test invalid cases
    assert(is_valid_parentheses("(") == false);
    assert(is_valid_parentheses("]") == false);
    assert(is_valid_parentheses("(]") == false);
    assert(is_valid_parentheses("([)]") == false);
    assert(is_valid_parentheses("((((") == false);

    cout << "All test cases passed\n";
}


int main() {
    test_char_stack();
    test_is_valid_parentheses();
    return 0;
}