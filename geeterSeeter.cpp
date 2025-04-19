#include <iostream>
#include <vector>
using namespace std;

class Chai {
    private: 
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai() {
            teaName = "Lemon Tea";
            servings = 2;
            ingredients = {"Water", "Tea Leaves"};
        }

        Chai(string name, int serve, vector<string> ingre) {
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }
        string getTeaName() {
            return teaName;
        }
        void setTeaName(string name) {
            teaName = name;
        }
        int getServings() {
            return servings;
        }
        void setServings(int serve) {
            servings = serve;
        }
        vector<string> getIngredients() {
            return ingredients;
        }
        void setIngredients(vector<string> ingre) {
            ingredients = ingre;
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
    Chai chai;
    chai.setTeaName("Lemon Tea");
    cout << chai.getTeaName();
}