#include <iostream>

using namespace std;

int main() {
    int i = 10;
    double temp = 1.234;
    // it is better to separate declarations on different lines
    int* p_i = &i;
    // int* p_temp = &temp; // can only store the type for which it was declared
    // another way of declaring and initializing pointers
    int* p_i_one{&i};
    // can use this but not recommended
    int* p_i_two = nullptr;
    cout << p_i << endl;
    cout << &i << endl;
    return 0;
}
