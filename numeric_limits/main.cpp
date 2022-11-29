#include <iostream>
#include <limits>

using namespace std;

int main() {
    // https://en.cppreference.com/w/cpp/types/numeric_limits
    // you can use min() and max() while typing the data type as a short, long, float double, long double, etc.
    cout << "the range for short is from " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "the range for short is from " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;

    // other facilities
    // is signed or digits
    cout << "int is signed: " << numeric_limits<int>::is_signed << endl;
    cout << "int digits: " << numeric_limits<int>::digits << endl;
    return 0;
}
