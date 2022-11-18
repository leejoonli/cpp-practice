#include <iostream>

using namespace std;

int main() {
    bool red_light {true};
    bool green_light {false};

    if(red_light) {
        cout << "STOP" << endl;
    } else {
        cout << "GO" << endl;
    }
    return 0;
}
