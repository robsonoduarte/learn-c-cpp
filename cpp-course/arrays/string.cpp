#include <iostream>

using namespace std;

int main() {
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << alphabet[9] << endl;

    for (char letter: alphabet) {
        cout << letter << endl;
    }

    return 0;
}