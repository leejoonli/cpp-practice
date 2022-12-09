#include <iostream>

using namespace std;

int main() {
    int i = 10;
    int &ref_i = i; // reference (var_alias)
    cout << i << endl;
    cout << &i << endl;
    cout << ref_i << endl; // same value
    cout << &ref_i << endl; // same address
    ref_i = 20;
    cout << i << endl;
    cout << &i << endl;
    cout << ref_i << endl; // same value after reassignment
    cout << &ref_i << endl; // same address after reassignment
    return 0;
}
