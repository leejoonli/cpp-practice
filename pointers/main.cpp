#include <iostream>

using namespace std;

int main() {
    /*int i = 10;
    double temp = 1.234;
    // it is better to separate declarations on different lines
    int* p_i = &i;
    // int* p_temp = &temp; // can only store the type for which it was declared
    // another way of declaring and initializing pointers
    int* p_i_one{&i};
    // can use this but not recommended
    int* p_i_two = nullptr;
    cout << p_i << endl;
    cout << &i << endl;*/

    /*string c = "hello world";
    // use this if you do not want to modify string
    char *p_c = "hello world";
    cout << *p_c << endl;

    // use this if you do want to modify string
    char temp[] = "hello world";
    temp[0] = 'b';
    cout << temp << endl;*/

    /*int *p_i;
    *p_i = 10; // warning: 'p_i' is used uninitialized in this function
               // will not print out to terminal, writing into junk address
    cout << p_i << endl;
    cout << *p_i << endl;*/

    /*int *p_i {}; // initialized with pointer equivalent of zero: nullptr (pointer pointing nowhere)
    *p_i = 11; // writing into a pointer pointing nowhere is BAD, WILL CRASH*/



    /*int *p_i = new int {10};
    cout << *p_i << endl;*/

    return 0;
}
