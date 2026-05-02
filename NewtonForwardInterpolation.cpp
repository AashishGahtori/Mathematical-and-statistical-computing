#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    float x[n], y[n][n];

    cout << "Enter x values:\n";
    for(int i=0;i<n;i++) cin >> x[i];

    cout << "Enter y values:\n";
    for(int i=0;i<n;i++) cin >> y[i][0];

    for(int j=1;j<n;j++)
        for(int i=0;i<n-j;i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];

    float xp, h, p, sum;
    cout << "Enter value to interpolate: ";
    cin >> xp;

    h = x[1] - x[0];
    p = (xp - x[0]) / h;
    sum = y[0][0];

    float fact = 1;
    for(int i=1;i<n;i++) {
        fact *= i;
        sum += (p*(p-1)*(i==2?1:(p-(i-1)))) * y[0][i] / fact;
    }

    cout << "Value = " << sum;
}