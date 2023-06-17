#include <iostream>
using namespace std;

int main()
{
    // if you don't initialize a variable, it will have a garbage value
    // this is because the variable is stored in memory and the memory
    // is not cleared before the variable is assigned a value
    // this is why you should always initialize a variable before using it
    int age;
    cout << age << endl;

    int room_width = 0;
    int room_length = 0;

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the length of the room: ";
    cin >> room_length;

    cout << "The area of the room is: " << room_width * room_length << endl;

    return 0;
}
