#include <iostream>

using namespace std;

int main() {
    int i = 55;
    int j = 60;
    bool temp = i < j;
    cout << boolalpha << "temp: " << temp << endl;
    if(temp == true) {
        cout << i << " is less than " << j << endl;
    }
    if(!temp) {
        cout << i << " is NOT less than " << j << endl;
    }
    return 0;
}
