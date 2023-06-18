// Random Numbers

#include <iostream>
#include <ctime> // required for time()
#include <cstdlib> // required for rand() and srand()

using namespace std;

int main() {
    int random_number;
    size_t count = 10; // number of random numbers to generate
    int min = 1; // lower bound (inclusive)
    int max = 6; // upper bound (inclusive)

    // seed the random number generator
    // if you don't seed the generator you will get the same requence random numbers every run
    // use srand() to seed the generator
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); // seed the generator with time

    for (size_t i = 1; i <= count; ++i) {
        random_number = rand() % max + min; // generate a random number [min, max]
        cout << random_number << endl;
    }

    cout << endl;
    return 0;
}