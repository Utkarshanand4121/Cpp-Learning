#include <iostream>
#include <vector>
using namespace std;

class Data {
    public : 
        string teaname;
        int serving;
        vector<string> indegrint;

        void displayChaiDetails() {
            cout << "Tea Name: " << teaname << endl;
            cout << "Serving: " << serving << endl;
            cout << "Indegrient: ";

            for(string indeg: indegrint) {
                cout << indeg << " ";
            }
        }
};

int main() {
    Data d1;
    d1.teaname = "Lemon Tea";
    d1.serving = 2;
    d1.indegrint = {"Water", "lemon", "Honey", "tea"};
    d1.displayChaiDetails();
    return 0;
}