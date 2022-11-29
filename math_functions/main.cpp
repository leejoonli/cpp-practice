#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // floor and ceiling
    double i{7.7};
    cout << "i rounded to floor is: " << floor(i) << endl;
    cout << "i rounded to ceiling is: " << ceil(i) << endl;

    double j{-5000};
    cout << "abs of j: " << abs(j) << endl;
    cout << "abs of i: " << abs(i) << endl;

    // exp: f(x) = e ^ x, where e = 2.71828
    double k = exp(10);
    cout << "the exponential of 10: " << k << endl;

    // pow
    cout << "3^4= " << pow(3,4) << endl;
    cout << "9^3= " << pow(9,3) << endl;

    // log (reverse function of pow). if 2^3=8, log 8 in base 2 = 3. log is like asking to which exponent should we elevate 2 to get eight? log, by default computes the log in base e. there also is another function which uses base 10 called log10

    // sqrt

    // round. halfway points are rounded away from 0. 2,5 is rounded to 5 for example

    // there are a lot of trigonometric functions
    // https://en.cppreference.com/w/cpp/header/cmath
    return 0;
}
