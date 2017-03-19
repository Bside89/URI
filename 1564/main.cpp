// URI Online Judge | 1564
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1564

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