#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!";
    cout << "Hello world!\n";
    cout << "Hello world!\n";*/

    cout << right; // justification left or right when printing to terminal
    cout << setw(10) << "last name" << setw(10) << "first name" << setw(5) << "age" << endl;
    cout << left;
    cout << setfill('-');
    cout << setw(10) << "daniel" << setw(10) << "gray" << setw(5) << "25" << endl;
    cout << setw(10) << "stanley" << setw(10) << "woods" << setw(5) << "33" << endl;

    cout << boolalpha; // outputs true or false instead of 1 or 0

    int i = 1;
    int j = -1;
    cout << showpos; // show the + sign for positive numbers
    cout << "pos_num: " << i << endl;
    cout << "neg_num: " << j << endl;

    cout << noshowpos; // hide the + sign for positive numbers
    cout << "pos_num: " << i << endl;
    cout << "neg_num: " << j << endl;
    return 0;
}
