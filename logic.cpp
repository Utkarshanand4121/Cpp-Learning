#include <iostream>
using namespace std;

int main() {
    int cups;
    string status;

    cout << "Input the cup count: ";
    cin >> cups;
    cout << "Input the status: ";
    cin >> status;

    if(cups > 15 || status == "student") {
        cout << "Eligible for a tea subscription discount";
    } else {
        cout << "Not eligible";
    }

    return 0;
}