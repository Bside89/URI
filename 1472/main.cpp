#include <iostream>

using namespace std;


int binary_search(int value, int n, int *v);

int find_triangles(int n, int *v);

bool is_integer(float n);


int main() {

    int n, p;
    int *v;

    while (cin >> n) {
        v = new int[++n];
        v[0] = 0;
        for (int i = 1; i < n; i++) {
            cin >> p;
            v[i] = v[i - 1] + p;
        }
        cout << find_triangles(n, v) << endl;
        delete[] v;
    }
    return 0;
}


int find_triangles(int n, int *v) {

    int counter = 0;
    int v1, v2, v3;
    int breakpoint = -1;
    float checker = (float)(v[n - 1])/(float)3;

    if (is_integer(checker))
        breakpoint = (int) checker;
    for (int i = 0; v[i] <= breakpoint; i++) {
        v1 = v[i];
        v2 = v1 + breakpoint;
        v3 = v2 + breakpoint;
        if (binary_search(v2, n - 1, v) != -1 && binary_search(v3, n - 1, v) != -1)
            counter++;
    }
    return counter;
}


int binary_search(int value, int n, int *v) {

    int m;
    int e = 0, d = n - 1;

    while (e <= d) {
        m = (e + d)/2;
        if (v[m] == value)
            return m;
        if (v[m] < value)
            e = m + 1;
        else
            d = m - 1;
    }
    return -1;
}


bool is_integer(float n) {
    int truncated = (int) n;
    return n == truncated;
}
