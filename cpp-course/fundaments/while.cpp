#include "iostream"

using namespace std;

int main() {
    int number = 0;
    int total = 0;
    int qty =0;

    while (number != -1) {
        cout << "Enter a number or -1 to finish while ";
        cin >> number;
        if (number > 0) {
            total += number;
            qty++;
        }
    }

    cout << (double) total / qty << endl;

    int i = 0;

    while (i < 10) {
        cout << i << endl;
        i++;
    }

    int j = 100;

    while (j >= 0) {
        cout << j << endl;
        j -= 2;
    }

    return 0;
}