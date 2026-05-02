#include <iostream>
using namespace std;

double f(double x) {
    return x*x*x - x - 2;
}

double df(double x) {
    return 3*x*x - 1;
}

int main() {
    double x;

    cout << "Enter initial guess: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        x = x - f(x)/df(x);
    }

    cout << "Root = " << x;
}