#include <iostream>
using namespace std;

int main() {
    int cups;

    cout << "Enter the number of cup: ";
    cin >> cups;

    if(cups > 20) {
        cout << "You have got the Gold Badge";
    } else if(cups >= 10 && cups <= 20) {
        cout << "You have got the Silver Bagde";
    } else {
        cout << "No Badge";
    }

    return 0; 
}