#include <iostream>

using namespace std;

int main() {
    int i {1};

    cout << "Current value: " << i << endl;

    i += 5;
    cout << "Current value after += 5: " << i << endl;

    i -= 5;
    cout << "Current value after -= 5: " << i << endl;

    i *= 5;
    cout << "Current value after *= 5: " << i << endl;

    i /= 5;
    cout << "Current value after /= 5: " << i << endl;

    i %= 1;
    cout << "Current value after %= 1: " << i << endl;
    return 0;
}
