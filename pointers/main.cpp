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

    /*int *p_i = nullptr;
    p_i = new int; // dynamically allocate space for a single int on the heap, same as using malloc()
                   // this memory belongs to our program from now on
                   // the system can't use it for anything else until we return it
                   // after this line executes, we will have a valid memory location allocated
                   // the size of the allocated memory will be such that it can store the type pointed to by the pointer
    *p_i = 10; // writing into dynamically allocated memory
    cout << *p_i << endl;
    delete p_i; // return memory to the OS, same as using free()
    p_i = nullptr; // good practice to reset pointer variable to nullptr*/

    /*int *p_i = new int;
    int *p_j {new int (10)};
    int *p_k = new int {20};

    cout << p_i << ',' << *p_i << endl;
    cout << p_j << ',' << *p_j << endl;
    cout << p_k << ',' << *p_k << endl;

    delete p_i;
    p_i = nullptr;
    delete p_j;
    p_j = nullptr;
    delete p_k;
    p_k = nullptr;

    // can reuse pointers after using delete
    p_i = new int (30);
    cout << p_i << ',' << *p_i << endl;
    delete p_i;
    // delete p_i; // DO NOT CALL DELETE TWICE
    p_i = nullptr;*/

    return 0;
}
