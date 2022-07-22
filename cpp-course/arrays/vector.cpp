#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3};
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);

    // using foreach
    for (int number: numbers) {
        cout << number << endl;
    }

    // for using iterator pointer
    for (auto item = numbers.begin(); item != numbers.end(); item++) {
        cout << *item << endl;
    }

    // remove one element
    numbers.erase(numbers.begin() + 1);

    // for using iterator reverse
    for (auto item = numbers.rbegin(); item != numbers.rend(); item++) {
        cout << *item << endl;
    }

    return 0;
}