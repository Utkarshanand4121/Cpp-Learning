#include <iostream>

using namespace std;

int main() {
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    
    cout << "Enter the price per cups: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    if(totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price is: " << discountedPrice << endl;
    } else {
        cout << "Total Price is : " << totalPrice << endl;
    }

    return 0;
}