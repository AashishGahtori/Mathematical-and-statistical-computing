#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a, b, c;
    cout << "Enter a and b: ";
    cin >> a >> b;

    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval!";
        return 0;
    }

    for (int i = 0; i < 20; i++) {
        c = (a + b) / 2;
        if (f(c) == 0) break;
        else if (f(a) * f(c) < 0) b = c;
        else a = c;
    }

    cout << "Root = " << c;
}