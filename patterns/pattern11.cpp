#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i < 5; i++) {
        bool var = (i % 2 == 0);  // row-based start

        for (int j = 0; j <= i; j++) {
            cout << (var ? 1 : 0);
            var = !var;  // toggle
        }
        cout << "\n";
    }

    return 0;
}