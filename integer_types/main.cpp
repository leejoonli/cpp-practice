#include <iostream>

using namespace std;

int main() {

    // braced initializers
    // variable may contain random garbage value if not initialized
    int i;

    // automatically initializes to zero
    int j{};

    // normal initialization
    int k{1};
    int l{2};

    // initialization using expression
    int m{k + l};
    cout << i << "\n" << j << "\n" << k << "\n" << l << "\n" << m << endl;
    return 0;
}
