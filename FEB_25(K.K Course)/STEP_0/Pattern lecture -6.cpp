#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n; // Take input for 'n'

    int total = (n * 2) - 1;

    for (int i = 0; i < (total / 2) + 1; i++) {
        for (int j = 0; j <= i - 1; j++) {
            cout << n - j << " ";
        }

        for (int j = i; j < total - i; j++) {
            cout << n - i << " ";
        }

        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    int x = total / 2;
    for (int i = 0; i < x; i++) {
        for (int j = n; j >= 3 + i; j--) {
            cout << j << " ";
        }

        for (int j = 0; j < 3 + (2 * i); j++) {
            cout << i + 2 << " ";
        }

        for (int j = x - 2 - i; j >= 0; j--) {
            cout << n - j << " ";
        }

        cout << endl;
    }

    return 0;
}

