#include <iostream>

using namespace std;

int main() {
    // there is a c++ precedence and associativity table https://en.cppreference.com/w/cpp/language/operator_precedence
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int i = a + b * c - d / e - f + g;
            /*6 + 24 - 3 - 2 + 5
            addition and subtraction has left to right associativity
            30 - 5 + 5;*/
    cout << i << endl;

    int j = a / b * c + d - e + f;
    // multiplication and division also have left to right associativity
        /*(((a / b) * c) + d - e + f) looks similar to this
        2 * 8 + 9 - 3 + 2
        16 + 9 - 3 + 2 = 24*/
    cout << j << endl;
    return 0;
}
