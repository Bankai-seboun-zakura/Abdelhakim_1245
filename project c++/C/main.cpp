#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t , n ;
    //cout << "Enter the number of test cases : " ;
    cin >> t ;

    for (int i = 0 ;i < t; i++ ){
        cin >> n ;
        int gcd ;
        gcd = n / 2 ;
        cout << gcd << endl ;
    }

    return 0;
}
