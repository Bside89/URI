// URI Online Judge | 1022
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1022

#include <iostream>

using namespace std;


void flush() {
    while (getchar() != '\n');
}


int main() {

    string buffer;
    short divs, n1, d1, n2, d2;

    for (cin >> divs, flush(); divs > 0; divs--) {
        getline(cin, buffer);
        cout << "Printing: " << buffer << endl;
    }
    return 0;
}