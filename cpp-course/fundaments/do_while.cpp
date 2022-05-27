#include "iostream"

using namespace std;

int main() {
    int number = 0;
    int total = 0;
    int qty =0;

    do{
        cout << "Enter a number or -1 to finish while ";
        cin >> number;
        if (number > 0) {
            total += number;
            qty++;
        }
    }while (number != -1);

    cout << (double) total / qty << endl;

    return 0;
}