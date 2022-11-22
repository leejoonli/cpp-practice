#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // increment with postfix
    cout << "i is incrementing (postfix): " << i++ << endl;
    cout << "i is now: " << i << endl;

    // decrement with postfix
    cout << "i is decrementing (postfix): " << i-- << endl;
    cout << "i is now: " << i << endl;

    // increment with prefix
    ++i;
    cout << "i is incrementing (prefix): " << i << endl;

    // decrement with prefix
    --i;
    cout << "i is decrementing (prefix): " << i << endl;
    return 0;
}
