#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    float a[n][n], b[n], x[n]={0};

    cout << "Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    cout << "Enter constants:\n";
    for(int i=0;i<n;i++)
        cin >> b[i];

    for(int k=0;k<10;k++) {
        for(int i=0;i<n;i++) {
            float sum = b[i];
            for(int j=0;j<n;j++) {
                if(i!=j)
                    sum -= a[i][j]*x[j];
            }
            x[i] = sum / a[i][i];
        }
    }

    cout << "Solution:\n";
    for(int i=0;i<n;i++)
        cout << x[i] << endl;
}