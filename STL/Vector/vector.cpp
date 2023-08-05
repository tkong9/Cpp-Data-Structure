#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v2 (100);

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << endl;
    }

    vector<int> v1 {1, 2, 3, 4, 5};
    cout << v1.at(0) << endl;
    cout << v1[0] << endl;

    v1.at(0) = 100;
    v1[1] = 200;

    // Adds an element to the end of the vector, resizing it.
    v1.push_back(1000);

    // Removes the last element from the vector, resizing it.
    v1.pop_back();

    cout << v1.size() << endl; // Returns the number of elements in the vector.

    cout << v1.empty() << endl; // Returns a boolean value indicating whether the vector is empty.

    v1.clear(); // Removes all elements from the vector.

    v1.insert(v1.begin() + 2, 1000); // Inserts an element before the specified index.

    v1.erase(v1.begin()); // Removes an element at the specified index.

    v1.begin(); // Returns an iterator pointing to the first element in the vector.
    v1.end() - 1; // Returns an iterator pointing to the last element in the vector.

    cout << v1.front() << endl; // Returns a reference to the first element in the vector.
    cout << v1.back() << endl; // Returns a reference to the last element in the vector.

    v1.front() = 1000;

    v1.front(); // reference
    vector<int> * vt = &v1; // pointer

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }
}