// Scope

#include <iostream>

using namespace std;

int num {300}; // global variable - declared outside any class or function

void local_example(int x);
void global_example();
void static_local_example();

void local_example(int x) {
    int num {1000}; // local to local_example
    cout << "\nLocal num is: " << num << " in scope " << x << endl;
    num++; // increment local num
    cout << "Local num is: " << num << " in scope " << x << endl;
}

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;
}

void static_local_example() {
    static int num {5000}; // local to static_local_example static - retains its value between calls
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}

int main() {
    int num {100}; // local to main
    int num1 {500}; // local to main
    
    cout << "Local num is: " << num << " in main" << endl;
    
    { // creates a new level of scope
        int num {200}; // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example();
    
    cout << endl;
    return 0;
}
