#include <iostream>
using namespace std;

int main() {
    auto prep = [](int cups) {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };
    prep(4);
    return 0;
}