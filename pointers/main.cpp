#include <iostream>
#include <type_traits>

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

    // DANGLING POINTERS
    // non initialized pointer
    /*int *p_i;
    cout << *p_i << endl;
    // solution: initialize pointer
    int *p_i = new int(1);
    cout << *p_i << endl;*/

    // deleted pointer
    /*int *p_i = new int(1);
    cout << *p_i << endl;
    delete p_i;
    // cout << *p_i << endl;
    // solution: reset pointers after delete
    p_i = nullptr;
    cout << p_i << endl;*/

    // multiple pointers pointing to the same address
    /*int *p_i = new int(83);
    int *p_j = p_i;
    cout << p_i << ',' << *p_i << endl;
    cout << p_j << ',' << *p_j << endl;
    delete p_i; // deleting p_i
    cout << p_j << ',' << *p_j << endl; // ends up with garbage value or crashes*/

    // solution: make sure the owner pointer is very clear
    /*int *p_i = nullptr; // solution 1: initialize your pointers immediately upon declaration
    int *p_j = new int(83);
    // check for nullptr before use
    if(p_j != nullptr) {
        cout << *p_j << endl;
    } else {
        cout << "invalid address" << endl;
    }
    // solution 2: reset the pointer
    delete p_j;
    int *p_j = nullptr;

    if(p_j != nullptr) {
        cout << *p_j << endl;
    } else {
        cout << "invalid address" << endl;
    }

    int *p_i = new int(234); // master pointer
    int *p_j = p_i;
    cout << p_i << ',' << *p_i << endl;
    if(!(p_i == nullptr)) { // only use slave pointers when master pointer is valid
        cout << p_j << ',' << *p_j << endl;
    }
    delete p_i; // release memory
    p_i = nullptr;
    if(!(p_i == nullptr)) { // only use slave pointers when master pointer is valid
        cout << p_j << ',' << *p_j << endl;
    } else {
        cerr << "WARNING: trying to use an invalid pointer" << endl;
    }*/

    /*int *test = new int[1000000000000000000000000000]; // will throw error since array size is too large

    for(size_t i{0}; i < 10000000; i++) {
        int *temp = new int[100000000];
    }*/

    // exception
    /*for(size_t i{0}; i < 100; i++) {
        try {
            int *temp = new int[100000000000];
        } catch(exception& ex) {
            cout << "something went wrong: " << ex.what() << endl; // doesn't crash and shows exception
        }
    }
    cout << "program ending well" << endl;*/
    // std::nothrow
    /*for(size_t i{0}; i < 100; i++) {
        int *temp = new(nothrow) int[1000000000];
        if(temp != nullptr) {
            cout << "data allocated" << endl;
        } else {
            cout << "data allocation failed" << endl;
        }
    }*/

    /*// verbose nullptr check
    int *p_i = nullptr;
    // p_i = new int(10);
    if(!(p_i==nullptr)) { // can also use if(p_i)
        cout << "p_i points to a VALID address: " << p_i << endl;
    } else {
        cout << "p_i points to an INVALID address: " << p_i << endl;
    }
    delete p_i;
    p_i = nullptr;*/

    // it is OK to call delete on a nullptr
    /*int *p_i = nullptr;
    delete p_i;*/

    /*int *p_i = new int(67); // lives on the heap
    int number = 55; // lives on the stack
    p_i = &number; // p_i now points to address of number but the address of p_i is still active in our program but now you can no longer access it.  Memory has been leaked

    // double allocation
    int *p_i = new int(55); // this memory is still allocated
    p_i = new int(44); // memory with int(55) is now leaked
    delete p_i;
    p_i = nullptr; // this does not release the memory when int(55) was allocated.  it will release the memory when int(44) was allocated

    // nested scopes with dynamically allocated memory
    {
        int *p_i = new int(57); // allocated memory lives on the heap but after the scope of the nested {} you will lose access to it
    } // memory with int(57) is now leaked
    delete p_i; // THIS WILL NOT WORK SINCE p_i IS NOW OUT OF SCOPE*/

    /*size_t size = 10;
    // different ways you can declare an array dynamically and how they are initialized
    double *p_salaries = new double[size]; // salaries array will contain garbage values
    int *p_students = new(nothrow) int[size]{}; // all values initialized to 0
    double *p_scores = new(nothrow) double[size]{1,2,3,4,5}; // allocating memory space for an array of size double vars. first 5 will be initialized with the input and the rest will be initialized to 0

    // nullptr check and use the allocated array
    if(p_scores) {
        cout << "size of scores: " << sizeof(p_scores) << endl;
        cout << "successfully allocated memory for scores" << endl;
        for(size_t i = 0; i < size; i++) {
            cout << "value: " << p_scores[i] << ":" << *(p_scores + i) << endl;
        }
    }
    delete[] p_salaries;
    p_salaries = nullptr;
    delete[] p_students;
    p_students = nullptr;
    delete[] p_scores;
    p_scores = nullptr;*/

    // static arrays vs dynamic arrays
    /*int scores[10] {1,2,3,4,5,6,7,8,9,10}; // lives on the stack
    cout << "scores size: " << extent<decltype(scores)>::value << endl;
    for(auto s: scores) {
        cout << "value: " << s << endl;
    }

    int *p_scores = new int[10] {1,2,3,4,5,6,7,8,9,10}; // lives on the heap
    cout << "p_scores size: " << extent<decltype(p_scores)>::value << endl; // either get compiler error or get unusable return value
    for(auto s: p_scores) { // will not work because p_scores is a POINTER to an array, the pointer will act as the ACCESS POINT to retrieve data from a dynamic array allocated on the heap
        cout << "value: " << s << endl;
    }*/

    return 0;
}
