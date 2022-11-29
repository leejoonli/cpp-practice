#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // floor and ceiling
    double i{7.7};
    cout << "i rounded to floor is: " << floor(i) << endl;
    cout << "i rounded to ceiling is: " << ceil(i) << endl;

    // absolute value
    double j{-5000};
    cout << "abs of j: " << abs(j) << endl;
    cout << "abs of i: " << abs(i) << endl;

    // exp: f(x) = e ^ x, where e = 2.71828
    double k = exp(10);
    cout << "the exponential of 10: " << k << endl;

    // pow (to the power of)
    cout << "3^4= " << pow(3,4) << endl;
    cout << "9^3= " << pow(9,3) << endl;

    // log (reverse function of pow). if 2^3=8, log 8 in base 2 = 3. log is like asking to which exponent should we elevate 2 to get eight? log, by default computes the log in base e. there also is another function which uses base 10 called log10
    cout << "log; to get 54.59, you would elevate e to the power of: " << log(54.59) << endl;
    cout << "log; to get 1000, you would elevate 10 in base 10 to the power of: " << log10(1000) << endl;

    // sqrt
    cout << "the square root of 81 = " << sqrt(81) << endl;

    // round. halfway points are rounded away from 0. 2,5 is rounded to 5 for example
    cout << "3.654 rounded to: " << round(3.654) << endl;
    cout << "2.5 rounded to: " << round(2.5) << endl;
    cout << "2.4 rounded to: " << round(2.4) << endl;

    // there are also a lot of trigonometric functions
    // https://en.cppreference.com/w/cpp/header/cmath
    return 0;
}
