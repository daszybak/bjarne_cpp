#include <bits/stdc++.h>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    cout << "Table of chars A-Z and their corresponding integer values:\n";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << char(c) << "\t" << c << "\n";
    }
    cout << "Table of chars 0-9 and their corresponding integer values:\n";
    for (char c = '0'; c <= '9'; c++) {
        cout << char(c) << "\t" << c << "\n";
    }
}

