#include<iostream>
using namespace std;

int main() {
    //variable declare
    int marks;
    cout << "Riya's marks" << endl;
    cin >> marks;

    bool isPassed;
    if (marks >= 40) {
        isPassed = true;
    } else {
        isPassed = false;
    }
    cout << "Riya's marks:" << marks << endl;
    cout << "Passed:" << isPassed << endl;
    return 0;
}