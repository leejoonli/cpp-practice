#include <iostream>

using namespace std;

int main() {
    bool i = true;
    bool j = false;
    bool k = true;

    cout << boolalpha;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;

    cout << "i && j: " << (i && j) << endl;
    cout << "i && k: " << (i && k) << endl;
    cout << "i && j && k: " << (i && j && k) << endl;

    cout << "i || j: " << (i || j) << endl;
    cout << "i || k: " << (i || k) << endl;
    cout << "i || j || k: " << (i || j || k) << endl;

    cout << "!i: " << !i << endl;
    cout << "!j: " << !j << endl;
    cout << "!k: " << !k << endl;

    cout << "!(i && j) || k: " << (!(i && j) || k) << endl;
    return 0;
}
