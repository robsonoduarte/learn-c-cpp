#include "iostream"
#include "cstdio"

using namespace std;

int main() {

    // relational operators >> https://www.cplusplus.com/reference/list/list/operators/

    int x;
    cout << "Enter a number: ";
    cin >> x;

    printf("%d > 10 -> %d\n", x, x > 10);
    printf("%d >= 10 -> %d\n", x, x >= 10);
    printf("%d < 10 -> %d\n", x, x < 10);
    printf("%d <= 10 -> %d\n", x, x <= 10);
    printf("%d == 10 -> %d\n", x, x == 10);
    printf("%d != 10 -> %d\n", x, x != 10);

    return 0;
}