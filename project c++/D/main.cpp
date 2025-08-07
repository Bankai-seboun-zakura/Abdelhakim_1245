#include <iostream>
#include <cmath>  // for abs
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int Sop = 0, Sos = 0;

    for (int i = 0; i < n; i++) {
        Sop += arr[i][i];
        Sos += arr[i][n - 1 - i];
    }

    cout << abs(Sop - Sos) << endl;

    return 0;
}
