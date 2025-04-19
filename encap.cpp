#include <iostream>
using namespace std;

class BankAccount{
    private: 
        string accountNumber;
        double balance;

    public:
        BankAccount(string acco, double bal) {
            accountNumber = acco;
            balance = bal;
        }

        // getter
        double getBalance() const {
            return balance;
        }

        // Method to deposit money
        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
            } else {
                cout << "Invalid Amount" << endl;
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && amount <= balance) {
                balance -= amount;
            } else {
                cout << "Invalid Amount" << endl;
            }
        }
};

int main() {

    BankAccount myAccount("123456978", 198752);
    myAccount.getBalance();

    myAccount.deposit(2000);
    myAccount.withdraw(5000);

    return 0;
}