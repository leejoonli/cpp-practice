#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // use suffixes when initializing floating point variables or the default with be double
    float number_1{1.12345678901234567890f}; // precision: 7
    double number_2{1.12345678901234567890}; // precision: 15
    long double number_3{1.12345678901234567890L}; // precision: 15+
    // if value has more digits than the precision it will replace those numbers with garbage values

    /*cout << setprecision(20);
    cout << number_1 << endl;
    cout << number_2 << endl;
    cout << number_3 << endl;*/

    // float problems: the precision is usually too limited for a lot of applications
    /* float number_4(192400023.0f); // error: narrowing conversion
    cout << setprecision(20);
    cout << number_4 << endl;*/

    // scientific notation, can represent really huge or really small numbers
    double number_5{192400023};
    double number_6{1.92400023e8};
    double number_7{1.924e8}; // can ommit the lower 00023 for simplicity if our application allows

    double number_8{0.00000000003498};
    double number_9{3.498e-11}; // multiply with 10 exp(-11)

    /*cout << setprecision(20);
    cout << number_5 << endl;
    cout << number_6 << endl;
    cout << number_7 << endl;
    cout << number_8 << endl;
    cout << number_9 << endl;*/

    // infinity and NaN
    double number_10{-5.6};
    double number_11{};
    double number_12{};

    double number_13{number_10/number_11};

    cout << setprecision(20);
    cout << number_10 << endl;
    cout << number_11 << endl;
    cout << number_12 << endl;
    cout << number_13 << endl;

    number_13 = number_11 / number_12;
    cout << number_13 << endl;
    return 0;
}
