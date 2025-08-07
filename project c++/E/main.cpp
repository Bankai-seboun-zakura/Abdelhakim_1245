#include <iostream>
#include <vector>

using namespace std;

void CAO(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int CA = 0;
    int CO = 0;

    for (int d : apples) {
        int position = a + d;
        if (position >= s && position <= t) {
            CA++;
        }
    }


    for (int d : oranges) {
        int position = b + d;
        if (position >= s && position <= t) {
            CO++;
        }
    }


    cout << CA << endl;
    cout << CO << endl;
}

int main() {
    int s, t, a, b, m, n;

    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    vector<int> apples(m);
    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }


    CAO(s, t, a, b, apples, oranges);

    return 0;
}
