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