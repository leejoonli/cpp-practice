#include <iostream>
#include <type_traits>

using namespace std;

int main() {
    /*int scores[10]; // declaration of array of 10
    double salaries[5] {1.1, 1.2, 1.3, 1.4, 1.5}; // declaration and initialization of array of 5
    // if you don't initialize all the elements, those you leave out are initialized to 0
    // can omit the size of the array at declaration

    //
    cout << size(scores) << endl;

    int class_size[] {1,2,3,4,5};
    for(auto value:class_size) {
        cout << "value: " << value << endl;
    }

    // CONSTANT ARRAY
    const int constant_arr[] {1,2,3};
    // constant_arr[0] = 2; // error: assignment of read-only

    cout << scores[12] << endl; // C++ allows you to go out of bounds of an array so be careful!
    scores[11] = 0; // C++ allows you to write data that is out of bounds of an array. BE CAREFUL!

    for(size_t i = 0; i < 10; i++) {
        scores[i] = i;
        cout << scores[i] << endl;
    }

    // ranged based for loop
    // used to access the values in the array but lose the indexes
    for(auto i:scores) {
        cout << i << endl;
    }

    int scores[] {1,2,3,4,5};
    // normally you can use size() in namespace std. possibly the compiler for Codeblocks doesn't support C++ 17 so need to use line 2 and 33
    int i = extent<decltype(scores)>::value;
    cout << i << endl;*/

    /*char hello[5] {'h', 'e', 'l', 'l', 'o'};
    for(size_t i = 0; i < extent<decltype(hello)>::value; i++) {
        cout << hello[i] << endl;
    }

    // CAN ONLY DIRECT PRINT CHAR ARRAYS
    cout << hello << endl; // direct print out: can print out to terminal like this but will include \0 character
    char hello[6] {'h', 'e', 'l', 'l', 'o'}; // auto filled in null characters
    cout << hello << endl; // will print to terminal without null terminating character
    char hello[] {'h', 'e', 'l', 'l', 'o'}; // this is not a c string as there is not a null character, will probably print some garbage value after 'hello'
    cout << hello << endl;
    char hello[] {"hello"}; // literal c strings, an implicit \0 is appended to the end of the string
    cout << hello << endl;*/

    return 0;
}
