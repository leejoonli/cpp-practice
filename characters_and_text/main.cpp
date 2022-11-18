#include <iostream>

using namespace std;

int main() {
    /*char c = 65;
    cout << "value: " << c << endl;
    // static_cast<int>() casts the char input as the int value
    cout << "value(int): " << static_cast<int>(c) << endl;*/
    // text in some languages like japanese and chinese are better represented in Unicode

    // takes up one byte in memory: 2^8 = 256 different values (0~255)
    char c_1{'a'};
    char c_2{'b'};
    char c_3{'c'};
    char c_4{'d'};
    char c_5{'e'};

    cout << c_1 << endl;
    cout << c_2 << endl;
    cout << c_3 << endl;
    cout << c_4 << endl;
    cout << c_5 << endl;

    return 0;
}
