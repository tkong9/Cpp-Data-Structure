// Arrays and pointers

#include <iostream>

using namespace std;

int main() {
    
        int scores[]{100, 95, 89};
    
        cout << "Value of scores: " << scores << endl;
    
        int *score_ptr{scores};
        cout << "Value of score_ptr: " << score_ptr << endl;
    
        cout << "\nArray subscript notation ---------------------" << endl;
        cout << scores[0] << endl;
        cout << scores[1] << endl;
        cout << scores[2] << endl;
    
        cout << "\nPointer subscript notation ---------------------" << endl;
        cout << score_ptr[0] << endl;
        cout << score_ptr[1] << endl;
        cout << score_ptr[2] << endl;
    
        cout << "\nPointer offset notation ---------------------" << endl;
        cout << *score_ptr << endl;
        cout << *(score_ptr + 1) << endl;
        cout << *(score_ptr + 2) << endl;
    
        cout << "\nArray offset notation ---------------------" << endl;
        cout << *scores << endl;
        cout << *(scores + 1) << endl;
        cout << *(scores + 2) << endl;
    
        cout << "\nArray offset notation ---------------------" << endl;
        cout << scores << endl;
        cout << scores + 1 << endl;
        cout << scores + 2 << endl;
    
        cout << "\n-------------------------------------------------" << endl;
        char name[]{"Frank"};
    
        char *char_ptr1{nullptr};
        char *char_ptr2{nullptr};
    
        char_ptr1 = &name[0];
        char_ptr2 = &name[3];
    
        cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
        cout << endl;
        return 0;
}