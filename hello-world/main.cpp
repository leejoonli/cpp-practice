#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';
    string name = "lulu";
    int age = 9;
    float pi = 3.14;
    bool answer = false;
    int test = age + int(pi);
    /*if (answer) {
        cout << name << " is " << age << " years old and always gets an " << grade << "." << endl;
    } else if (!answer) {
        cout << test << endl;
    }*/
    int i;
    string c;
    cout << "type in full name and i: " << endl;
    /*getline(cin, c);

    cout << "type in i: " << endl;
    cin >> c >> i;*/

    getline(cin, c);
    cin >> i;

    cout << c << " " << i << endl;

    /*cerr << "error" << endl;
    clog << "log message" << endl;*/
    return 0;
}
