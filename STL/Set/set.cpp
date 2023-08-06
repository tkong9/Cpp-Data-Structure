/*
In C++, the `set` container is a part of the Standard Template Library (STL).
It's used to store unique elements in a sorted order. The elements are always
arranged in an ascending order by default, but you can specify a custom comparator
to change this behavior. Here are some key points and properties of `set`:

1. Unique Elements: All elements in a `set` are distinct.
2. Sorted Order: The elements are stored in a sorted manner.
3. Dynamic Size: The size can change dynamically, and elements can be inserted or removed.
4. Associative Container: `set` is an associative container, meaning the elements are always arranged in a specific order.
5. Logarithmic Time Complexities: Operations like insert, delete, and find have logarithmic time complexity.

Basic Operations:

1. Insertion: `insert(val)` – Adds the element `val` to the set.
2. Deletion: `erase(val)` – Removes the element `val` from the set.
3. Find: `find(val)` – Returns an iterator to the element if it is found, otherwise it returns an iterator to `set::end()`.
4. Size: `size()` – Returns the number of elements in the set.
5. Clear: `clear()` – Removes all elements from the set.

### Example:
Let's go through a basic example to demonstrate some of these operations:

*/
#include <iostream>
#include <set>

using namespace std;

int main() {
    std::set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(8);
    s.insert(9);
    s.insert(5);  // Duplicate insertions are ignored

    // Print elements
    std::cout << "Set elements are: ";
    for(int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    auto it = s.find(100);

    // cout << "Hello" << endl;
    // cout << it == s.end() << endl;

    // Find element
    if(s.find(5) != s.end()) {
        std::cout << "5 is present in the set." << std::endl;
    }

    // Remove element
    s.erase(5);

    std::cout << "After erasing 5, set elements are: ";
    for(int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
**Output**:
```
Set elements are: 5 8 9 10 
8 is present in the set.
After erasing 5, set elements are: 8 9 10 
```
This example demonstrates the basic operations of a set like insertion, deletion, and finding an element. It also showcases that duplicate elements are not stored in the set.
*/