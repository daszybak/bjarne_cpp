#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cout << "Please enter the value of: a, b and c of the quadratic equation:\n";
    cin >> a >> b >> c;
    double discriminant = b*b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
        double x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);
        cout << "The value of x1: " << x1 << " and the value of x2: " << x2 << endl;
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "One root: " << x << "\n";
    } else {
        cout << "The function doesn't have any roots\n";
    }
}

