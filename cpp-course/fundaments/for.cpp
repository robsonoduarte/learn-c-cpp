#include "iostream"

using namespace std;

int main() {

    int number = 0;
    int total = 0;
    int qty =0;

    for (;number != -1;) {
        cout << "Enter a number or -1 to finish while ";
        cin >> number;
        if (number > 0) {
            total += number;
            qty++;
        }
    }

    cout << (double) total / qty << endl;

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    for (int j = 100; j >= 0; j -= 2) {
        cout << j << endl;
    }

    return 0;
}