#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    float a[n][n+1];

    cout << "Enter augmented matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n+1;j++)
            cin >> a[i][j];

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            float ratio = a[j][i]/a[i][i];
            for(int k=0;k<n+1;k++)
                a[j][k] -= ratio*a[i][k];
        }
    }

    float x[n];
    for(int i=n-1;i>=0;i--) {
        x[i] = a[i][n];
        for(int j=i+1;j<n;j++)
            x[i] -= a[i][j]*x[j];
        x[i] /= a[i][i];
    }

    cout << "Solution:\n";
    for(int i=0;i<n;i++)
        cout << x[i] << endl;
}