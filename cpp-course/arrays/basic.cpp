#include <iostream>

using namespace std;

int main() {
    string names[5];
    names[0] = "Robson";
    names[1] = "Ana";
    names[2] = "Cida";
    names[3] = "Antonio";
    names[4] = "Maria";

    string ages[] = {"22""30""50""44""99"};

    for (int i = 0; i < 5; i++) {
        cout << names[i] + " " + ages[i] << endl;
    }
    return 0;
}
