#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    while ( n != 0) {
        int digit = n % 10;
        sum = digit + sum;
        n = n / 10;
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}