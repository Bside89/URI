#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cod1, qty1, cod2, qty2;
    float price1, price2;
    cin >> cod1 >> qty1 >> price1;
    cin >> cod2 >> qty2 >> price2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (qty1 * price1) + (qty2 * price2) << endl;

    return 0;
}