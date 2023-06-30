// Function Overloading

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function Prototypes
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);
void print(int, double);
void print(vector<string>, string);

// Function Definitions
void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s : v) {
        cout << s + " ";
    }
    cout << endl;
}

void print(int num, double dnum) {
    cout << "Printing int and double: " << num << " and " << dnum << endl;
}

void print(vector<string> v, string s) {
    cout << "Printing vector of strings and string: ";
    for (auto str : v) {
        cout << str + " ";
    }
    cout << s << endl;
}


int main() {
    print(100); // int
    print('A'); // character is always promoted to int should print 65 ASCII
    print(123.5); // double
    print(123.3F); // float is promoted to double
    print("C-style string"); // c-style string is converted to a c++ string
    string s {"C++ string"};
    print(s); // C++ string
    print("C-style string", s); // First argument is converted to a C++ string

    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);

    print(10, 20.5);
    print(three_stooges, "Moe");

    for (auto str : three_stooges) {
        print(str);
    }

    cout << endl;

    return 0;
}