#include <iostream>
using namespace std;

int main()
{
    // Arrays
    // An array is a collection of elements of the same type placed in contiguous memory locations that can be
    // individually referenced by using an index to a unique identifier.
    // That means that, for example, five values of type int can be declared as an array without having to declare
    // 5 different variables (each with its own identifier).
    // Instead, using an array we can store five different values of the same type, int for example, with a unique
    // identifier.
    // Each value in an array is called an element.

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
//    cin >> vowels[5]; // out of bounds - don't do this

    double hi_temperatures[] = {90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temperatures[0] << endl;
    hi_temperatures[0] = 100.7; // set the first element in hi_temperatures to 100.7
    cout << "The first high temperature is now: " << hi_temperatures[0] << endl;

    int test_scores[5] = {}; // initialize all elements to zero
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "Enter 5 test scores: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "The updated array is: " << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "Notice what the value of the array name is: " << test_scores << endl;
    // The value of the array name is the address of the first element in the array.
    // This is called the array's base address.
    // The base address is the starting address of the array.


    return 0;
}