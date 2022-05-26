#include "iostream"

using namespace std;

int main() {
    int number = 0;
    int total = 0;
    int qty =0;

    while (number != -1) {
        cout << "Enter a number or -1 to finish whie";
        cin >> number;
        if (number > 0) {
            total += number;
            qty++;
        }
    }

    cout << (double) total / qty << endl;

    return 0;
}