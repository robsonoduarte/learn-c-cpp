#include <iostream>

using namespace std;

int main() {
    string names[] = {"Robson", "Ana", "Cida", "Antonio", "Maria"};
    // using copy of values
    for (string name: names) {
        name.append("!");
        cout << name << endl;
    }
    // the values are not modify
    cout << names[0] << endl;

    // using references of values
    for (auto &name: names) { // other option using auto instead of the explicit type
        name.append("!!");
        cout << name << endl;
    }
    // the values are modified
    cout << names[0] << endl;

    // using references and not modify declaring It is a const
    for (auto const &name: names) {
        // name.append("!!!") don't compile
        cout << name << endl;
    }

    return 0;
}