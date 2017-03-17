#include <iostream>

using namespace std;

int main() {

    short claims;

    while (cin >> claims) {
        if (claims < 0 || claims > 100) {
            return 1;
        }
        else if (claims) {
            cout << "vai ter duas!" << endl;
        } else {
            cout << "vai ter copa!" << endl;
        }
    }

    return 0;
}