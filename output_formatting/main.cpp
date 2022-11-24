#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    /*cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!";
    cout << "Hello world!\n";
    cout << "Hello world!\n";

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

    // different number systems: dec, hex, oct
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    cout << "pos_int dec: " << dec << pos_int << endl;
    cout << "pos_int hex: " << hex << pos_int << endl;
    cout << "pos_int oct: " << oct << pos_int << endl;

    cout << "neg_int dec: " << dec << neg_int << endl;
    cout << "neg_int hex: " << hex << neg_int << endl;
    cout << "neg_int oct: " << oct << neg_int << endl;

    // no effect on floating point numbers
    cout << "double_var dec: " << dec << double_var << endl;
    cout << "double_var hex: " << hex << double_var << endl;
    cout << "double_var oct: " << oct << double_var << endl;

    int i = 717171;
    cout << showbase; // show the base for integral types (noshowbase to hide the base)
    cout << "i dec: " << dec << i << endl;
    cout << "i hex: " << hex << i << endl;
    cout << "i oct: " << oct << i << endl;

    int i = 717171;
    cout << uppercase; // uppercases characters (nouppercase is default, does not uppercase characters)
    cout << "i dec: " << dec << i << endl;
    cout << "i hex: " << hex << i << endl;
    cout << "i oct: " << oct << i << endl;

    double i {3.142346435697872349587};
    double j {2006.0};
    double k {1.34e-10};

    cout << fixed; // shows decimal precision up to a certain amount
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;

    cout << scientific;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;

    cout.unsetf(ios::scientific | ios::fixed); // sets back to default
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;*/

    double i = 3.142346435697872349587928347589;
    cout << setprecision(10);
    cout << "i precision 10: " << i << endl;
    cout << setprecision(20);
    cout << "i precision 20: " << i << endl;
    cout << setprecision(50);
    cout << "i precision 50: " << i << endl; // be careful with setting precision too high because it will be filled with garbage values
    return 0;
}
