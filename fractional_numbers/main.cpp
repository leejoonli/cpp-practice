#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*double i{5.6};
    double j{}; // initialized to 0
    double k{}; // initialized to 0

    // infinity as said in the c++ course but results in NaN
    double l{j/k};

    // evaluates to NaN
    l = j / k;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;*/

    // use suffixes when initializing floating point variables or the default with be double
    float number_1{1.12345678901234567890f}; // precision: 7
    double number_2{1.12345678901234567890}; // precision: 15
    long double number_3{1.12345678901234567890L}; // precision: 15+
    // if value has more digits than the precision it will replace those numbers with garbage values

    cout << setprecision(20);
    cout << number_1 << endl;
    cout << number_2 << endl;
    cout << number_3 << endl;

    return 0;
}
