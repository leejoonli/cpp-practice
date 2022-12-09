#include <iostream>

using namespace std;

int main() {
    /*int i = 10;
    int &ref_i = i; // reference (var_alias)
    cout << i << endl;
    cout << &i << endl;
    cout << ref_i << endl; // same value
    cout << &ref_i << endl; // same address
    ref_i = 20;
    cout << i << endl;
    cout << &i << endl;
    cout << ref_i << endl; // same value after reassignment
    cout << &ref_i << endl; // same address after reassignment*/

    double i = 12.34;
    double &ref_i = i; // reference to double, cannot declare a reference and not initialize it to a value
    double *p_i = &i; // pointer to double
    cout << "double value: " << i << endl;
    cout << "ref double value: " << ref_i << endl;
    cout << "pointer double value: " << *p_i << endl;
    cout << "pointer double address: " << p_i << endl;
    // writing through pointer
    *p_i = 15.44;
    cout << "double value: " << i << endl;
    cout << "ref double value: " << ref_i << endl;
    cout << "pointer double value: " << *p_i << endl;
    cout << "pointer double address: " << p_i << endl;
    // writing through reference
    ref_i = 18.44;
    cout << "double value: " << i << endl;
    cout << "ref double value: " << ref_i << endl;
    cout << "pointer double value: " << *p_i << endl;
    cout << "pointer double address: " << p_i << endl;
    double j = 78.45;
    // reference referencing something else
    ref_i = j; // reference is the same address but the value is changed to j
    cout << "double value: " << i << endl;
    cout << "ref double value: " << ref_i << endl;
    cout << "pointer double value: " << *p_i << endl;
    cout << "pointer double address: " << p_i << endl;
    // pointer pointing to something else
    p_i = &j;
    cout << "double value: " << i << endl;
    cout << "ref double value: " << ref_i << endl;
    cout << "pointer double value: " << *p_i << endl;
    cout << "pointer double address: " << p_i << endl; // contains new address, affecting the value of j not i
    return 0;
}
