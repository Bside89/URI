#include <iostream>

using namespace std;


int main() {

    int h1[2], h2[2];
    int horas = 0, minutos = 0, carry = -1;

    cin >> h1[0] >> h1[1] >> h2[0] >> h2[1];
    minutos = 60 + h2[1] - h1[1];
    if (minutos >= 60) {
        minutos %= 60;
        carry++;
    }
    horas = (24 + h2[0] - h1[0] + carry) % 24;
    if (h1[0] == h2[0])
        horas = 24;
    cout << "O JOGO DUROU " << horas <<" HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
