#include <iostream>

using namespace std;

int main() {

    /*// braced initializers
    // variable may contain random garbage value if not initialized
    int i;

    // automatically initializes to zero
    int j{};

    // normal initialization
    int k{1};
    int l{2};

    // initialization using expression
    int m{k + l};

    // error because initializing with incorrect data type
    int n{1.1};

    cout << i << "\n" << j << "\n" << k << "\n" << l << "\n" << m << endl;*/

    // functional initialization
    int i(1);
    int j(2);
    int k(i+j);

    // data/information loss
    int l(1.1);

    cout << l << endl;
    return 0;
}
