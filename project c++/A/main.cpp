#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
   cout << "Enter the number of drinks: ";
    cin >> n;
   float sum = 0;
    for (int i = 0; i < n; ++i) {
        int pi;
        cout << "Enter the percentage of orange in the drink  " << "(" << i + 1 << ")" << ": ";
        cin >> pi;
        sum += pi;
    }
     float average = sum / n;
    cout << "the average percentage of orange in the drinks is: " << average << endl;

    return 0;

}
