#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    
    public:
        Chai(string name, int serve) : teaName(name), servings(serve) {}

        friend bool compareServings(const Chai &chai2, const Chai &chai3); // variable ke access ke liye ref diya hai

        void display() const {
            cout << "teaname : " << teaName << endl;
        }
};

bool compareServings(const Chai &chai1, const Chai &chai2) {
    return chai1.servings > chai2.servings;
}

int main() {
    Chai chai("Masala Chai", 14);
    Chai chai2("Ginger Chai", 8);

    chai.display();
    chai2.display();

    if(compareServings(chai, chai2)) {
        cout << "Masala Chai is having MORE servings" << endl;
    } else {
        cout << "Masala Chai is having LESS servings" << endl;
    }

    return 0;
}