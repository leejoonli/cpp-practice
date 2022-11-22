#include <iostream>

using namespace std;

int main() {
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifier suffixes
    auto var6{123u}; // unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long
    cout << sizeof(var5) << endl;

    // be careful about auto assignments
    auto var9{333u}; // declare and initialize with type deduction
    //var9 = -22; // assign negative number. DANGER!

    cout << sizeof(var9) << endl;
    return 0;
}
