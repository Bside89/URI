// URI Online Judge | 1038
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    float table[5] = {4, 4.5, 5, 2, 1.5};
    int code, qty;

    cin >> code >> qty;
    cout << "Total: R$ " << fixed << setprecision(2) << qty * table[code - 1] << endl;

    return 0;
}