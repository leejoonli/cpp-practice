#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';
    string name = "lulu";
    int age = 9;
    float pi = 3.14;
    bool answer = false;
    if (answer) {
        cout << name << " is " << age << " years old and always gets an " << grade << "." << endl;
    } else if (!answer) {
        cout << "no data" << endl;
    }
    return 0;
}
