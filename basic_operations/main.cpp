#include <iostream>

using namespace std;

int main() {
    int num_1{2};
    int num_2{5};
    int num_3 = num_1 + num_2;
    cout << num_3 << endl;

    num_3 = num_2 - num_1;
    cout << num_3 << endl;

    num_3 = num_1 * num_2;
    cout << num_3 << endl;

    num_3 = num_1 / num_2; // will not be accurate because of type int
    double num_4 = double(num_1) / double(num_2); // need to convert original int to double
    cout << num_4 << endl;

    num_3 = num_2 % num_1; // remainder of 5 divided by 2
    cout << num_3 << endl; // result in a remainder of 1
    return 0;
}
