#include <iostream>

using namespace std;

int main() {
    bool red_light {true};
    bool green_light {false};

    if(red_light) {
        cout << "STOP" << endl;
    } else {
        cout << "GO" << endl;
    }

    if(green_light) {
        cout << "Light is green" << endl;
    } else {
        cout << "Light is not green" << endl;
    }

    cout << "size of bool: " << sizeof(bool) << endl;
    // printing out booleans will be 1 or 0 by default
    cout << "red light: " << red_light << endl;
    cout << "green light: " << green_light << endl;

    // if you want to print "true" or "false" you must put in line 27
    cout << boolalpha;
    cout << "red light: " << red_light << endl;
    cout << "green light: " << green_light << endl;
    return 0;
}
