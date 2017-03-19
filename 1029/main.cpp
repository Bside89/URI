// URI Online Judge | 1029
// Link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include <iostream>

using namespace std;


// fib(n) = fib(n - 1) + fib(n - 2)

int fibonacci(int n, int *c) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    *c += 2;
    return fibonacci(n - 1, c) + fibonacci(n - 2, c);
}


int main() {

    int n, m, r, c;
    cin >> n;
    for ( ; n > 0; n--) {
        cin >> m;
        c = 0;
        r = fibonacci(m, &c);
        cout << "fib(" << m << ") = " << c << " calls = " << r << endl;
    }

    return 0;
}
