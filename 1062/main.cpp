#include <iostream>
#include <stack>

using namespace std;


void clear_stack(std::stack<int>& stack) {
    while (!stack.empty()) // Esvazia a pilha
        stack.pop();
}

int main() {

    stack<int> station;
    int n;
    int *exit_queue;

    while (1) {

        cin >> n;
        if (n == 0)
            break;
        exit_queue = new int[n];

        while (1) {
            for (int i = 0; i < n; i++) {
                int tmp;
                cin >> tmp;
                if (i == 0 && tmp == 0)
                    goto final; // goto é feio, mas serve para sair de laços aninhados ;]
                exit_queue[i] = tmp;
            }

            for (int i = 0, j = 0; i < n; i++) {
                station.push(i + 1);
                while (!station.empty() && station.top() == exit_queue[j]) {
                    station.pop();
                    j++;
                }
            }
            if (station.empty())
                cout << "Yes" << endl;
            else {
                cout << "No" << endl;
                clear_stack(station);
            }
        }

        final:
        while (!station.empty()) // Esvazia a pilha
            station.pop();
        delete [] exit_queue;
        cout << endl;
    }
    return 0;
}
