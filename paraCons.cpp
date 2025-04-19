#include <iostream>
#include <vector>

using namespace std;

class Chai {
    public :
        string teaName;
        int serving;
        vector<string> ingredients;

        Chai() {
            teaName = "name";
            serving = 5;
            ingredients = {"Water", "Tea leaves"};

            cout << "Default constructor called" << endl;
        }

        void displayChaiDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Serving: " << serving << endl;
            cout << "Indegrient: ";

            for(string integr : ingredients) {
                cout << integr << " ";
            }
        }

};

int main() {
    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0;
}