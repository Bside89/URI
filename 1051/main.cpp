#include <iostream>

#define ALIQ1 0
#define INF1 0
#define SUP1 2000

#define ALIQ2 0.08
#define INF2 2000.01
#define SUP2 3000

#define ALIQ3 0.18
#define INF3 3000.01
#define SUP3 4500

#define ALIQ4 0.28
#define INF4 4500.01

using namespace std;


int main() {

    double c, r = 0;

    cin >> c;
    if (c >= INF4) {
        c -= 2000;


    } else if (c >= INF3 && c <= SUP3) {

    } else if (c >= INF2 && c <= SUP2) {

    } else
        r = 0;

    return 0;
}