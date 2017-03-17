#include <iostream>

using namespace std;


void bubble_sort(float *v, int n) {

    int i, j, k = n - 1;
    float aux;
    for(i = 0; i < n; i++) {
        for(j = 0; j < k; j++) {
            if(v[j] > v[j + 1]) { // Troca
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        k--;
    }
}


int main() {

    float aux[3];
    float A, B, C;

    cin >> aux[0] >> aux[1] >> aux[2];
    bubble_sort(aux, 3);
    A = aux[2];
    B = aux[1];
    C = aux[0];

    #ifndef ONLINE_JUDGE
        cout << "Valores (A, B e C): " << A << ", " << B << ", " << C << endl;
    #endif

    if (A >= B + C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (A*A == B*B + C*C)
            cout << "TRIANGULO RETANGULO" << endl;
        if (A*A > B*B + C*C)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if (A*A < B*B + C*C)
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else {
            if (A == B || B == C || A == C)
                cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
