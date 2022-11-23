#include <iostream>

using namespace std;

int main() {
    bool i = true;
    bool j = false;
    bool k = true;

    int l = 45;
    int m = 20;
    int n = 11;

    cout << boolalpha;
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    cout << "k: " << k << endl;

    cout << "l: " << l << endl;
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;

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

    // logical and relational operators combined in expressions
    cout << "(l > m) && (l > n): " << ((l > m) && (l > n)) << endl;
    return 0;
}
