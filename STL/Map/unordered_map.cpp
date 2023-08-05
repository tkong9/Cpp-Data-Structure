#include <iostream>
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    unordered_map<string, int> myMap;

    myMap["hello"] = 1;
    myMap["world"] = 2;

    cout << myMap["hello"] << endl;
    cout << myMap["world"] << endl;

    myMap["hello"] = myMap["hello"] + 3;

    myMap["hello"]++;

    cout << myMap["hello"] << endl;

    // insert 
    // insert method returns a pair of iterator and bool value
    // if the key is already in the map, the bool value is false
    // if the key is not in the map, the bool value is true
    myMap.insert(make_pair("abc", 300));

    cout << myMap["abc"] << endl;


    // find
    // find method returns an iterator
    // if the key is not in the map, the iterator is equal to map.end()
    // if the key is in the map, the iterator is equal to the position of the key
    auto it = myMap.find("abc");

    if (it == myMap.end()) {
        cout << "not found" << endl;
    } else {
        cout << "found" << endl;
    }

    // erase
    // erase method returns the number of elements erased
    // if the key is not in the map, the number is 0
    // if the key is in the map, the number is 1
    int num = myMap.erase("abc");

    cout << num << endl;

    // count
    // count method returns the number of elements found
    // if the key is not in the map, the number is 0
    // if the key is in the map, the number is 1
    int num2 = myMap.count("abc");

    cout << num2 << endl;

    cout << myMap.count("world") << endl;
    // cout << myMap["world"] << endl;

    return 0;
}
