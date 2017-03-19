// URI Online Judge | 1858
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1858

#include <iostream>

using namespace std;


int main() {

    int n, menor = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[menor] > v[i])
            menor = i;
    }
    cout << ++menor << endl;

    return 0;
}
