#include <iostream>
using namespace std;

double f(double x) {
    return x*x*x - x - 2;
}

int main() {
    double a, b, c;

    cout << "Enter a and b: ";
    cin >> a >> b;

    for (int i = 0; i < 20; i++) {
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if (f(c) == 0) break;
        else if (f(a)*f(c) < 0) b = c;
        else a = c;
    }

    cout << "Root = " << c;
}