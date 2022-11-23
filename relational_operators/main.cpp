#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int j = 2;

    cout << "i: " << i << "j: " << j << endl;

    cout << boolalpha; // make bool show up as true or false instead of 1 or 0

    // NEED THE PARENTHESIS OR AN ERROR WILL OCCUR, THIS IS BECAUSE THE << PRECEDENCE IS HIGHER THAN COMPARISON OPERATOR PRECEDENCE
    cout << "i < j: " << (i < j) << endl;
    cout << "i < j: " << (i <= j) << endl;
    cout << "i < j: " << (i > j) << endl;
    cout << "i < j: " << (i >= j) << endl;
    cout << "i < j: " << (i == j) << endl;
    cout << "i < j: " << (i != j) << endl;
    return 0;
}
