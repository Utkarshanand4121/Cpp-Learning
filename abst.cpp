#include <iostream>
#include <string>

using namespace std;

class Tea{
    public:
        virtual void prepareIndergre() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea() {
            prepareIndergre();
            brew();
            serve();
        }
};

class GreenTea : public Tea{
    public:
        void prepareIndergre() override {
            cout << "green leaves and water is ready" << endl;
        }
        void brew() override {
            cout << "Green Tea brewed" << endl;
        }
        void serve() override {
            cout << "Green Tea served" << endl;
        }
};

class MasalaTea : public Tea{
    public:
        void prepareIndergre() override {
            cout << "green leaves and water is ready" << endl;
        }
        void brew() override {
            cout << "Green Tea brewed" << endl;
        }
        void serve() override {
            cout << "Green Tea served" << endl;
        }
};

int main() {
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}