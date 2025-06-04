#include <bits/stdc++.h>
using namespace std;

int main() {
    int squares = 0;
    double value = 1;
    while (squares < 64) {
        value *= 2;
        squares++;
        cout << squares << " " << value << "\n";
    }
}

