// URI Online Judge | 1046
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include <iostream>

using namespace std;


int main() {

    int ini, fim, res;
    cin >> ini >> fim;
    res = (24 - ini + fim) % 24;
    if (res == 0) res = 24;
    cout << "O JOGO DUROU " << res << " HORA(S)" << endl;
    return 0;
}
