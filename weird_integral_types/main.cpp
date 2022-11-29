#include <iostream>

using namespace std;

int main() {
    // integral types less than 4 bytes in size don't support arithmetic operations
    // the same behavior is present on other operators like bitwise shift operators ( >> and << )
    short int i {10}; // 2 bytes
    short int j {20};
    char k {40}; // 1 byte
    char l {50};

    cout << "size of i & j: " << sizeof(i) << "," << sizeof(j) << endl;
    cout << "size of k & l: " << sizeof(k) << "," << sizeof(l) << endl;

    auto temp_one = i + j; // conversion to int -> 4 bytes
    auto temp_two = k + l;

    cout << "size of temp_one: " << sizeof(temp_one) << endl;
    cout << "size of temp_two: " << sizeof(temp_two) << endl;
    return 0;
}
