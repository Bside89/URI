#include <iostream>

using namespace std;


unsigned long long int factorialNK(short n, const short k) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialNK(n - k, k);
}


int main() {

    unsigned int instances;
    short n, k;
    string fat, times;

    cin >> instances;
    for (int i = 1; i <= instances; ++i) {
        getline(cin, fat, '!');
        getline(cin, times, '\n');
        n = (short) atoi(fat.c_str());
        k = (short) (times.size() + 1);
        cout << factorialNK(n, k) << endl;
    }
    return 0;
}