// URI Online Judge | 1071
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include <iostream>

using namespace std;


int maior(int a, int b) {
    return (a > b) ? a : b;
}


int menor(int a, int b) {
    return (a < b) ? a : b;
}


int odd_sum_between(int a, int b) {

    int inf = menor(a, b);
    int sup = maior(a, b);
    int count = 0;

    inf += (inf % 2 != 0) ? 2 : 1;
    sup -= (sup % 2 != 0) ? 2 : 1;

    while (inf <= sup) {
        count += inf;
        inf += 2;
    }
    return count;
}


int main() {

    int x, y;

    cin >> x >> y;
    cout << odd_sum_between(x, y) << endl;
    return 0;
}
