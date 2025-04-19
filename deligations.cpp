#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public :
        string teaName;
        int servings;
        vector<string> ingredients;

        //deligation constructor

        Chai(string name) : Chai(name, 1, {"LemonTea", "Tea Leaves"}){}

        Chai(string name, int serve, vector<string> ingre) {
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "Main Constructor Called" << endl;
        }

        void displayChaiDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Serving: " << servings << endl;
            cout << "Indegrient: ";

            for(string integr : ingredients) {
                cout << integr << " ";
            }
        } 
};

int main() {
    Chai chai("quickChai");
    chai.displayChaiDetails();
    return 0;
}