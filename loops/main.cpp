#include <iostream>

using namespace std;

int main() {
    // regular for loop
    /*for(int i = 0; i < 5; i++) {
        cout << "hello world" << endl;
    }*/

    // use size_t: a representation of some unsigned int for positive numbers [sizes]
    /*for(size_t i = 0; i < 10; i++) {
        cout << i+1 << ": hello world" << endl;
    }*/

    // size of size_t
    // cout << "sizeof(size_t): " << sizeof(size_t) << endl;

    // not hardcoding iteration count
    const size_t COUNT = 10;

    // can state initializer outside loop and use it in the loop
    size_t i = 0;
    /*for( ; i < COUNT; i++) {
        cout << i+1 << ": hello world" << endl;
    }*/

    /*while(i < COUNT) {
        cout << i+1 << ": hello world" << endl;
        i++;
    }*/

    do {
        cout << i+1 << ": hello world" << endl;
        i++;
    } while(i < COUNT);

    return 0;
}
