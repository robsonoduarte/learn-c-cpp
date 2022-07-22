#include <iostream>
#include <vector>

using namespace std;

vector<int> map(vector<int> v, int(*fn)(int)){
    vector<int> mv;
    for(auto el: v){
        mv.push_back((*fn)(el));
    }
    return mv;
}

int main(){
    auto square = [](int x) {return x * x;};
    auto triple = [](int x) {return 3 * x;};

    vector<int> numbers = {2, 5, 8, 23, 56};
    vector<int> squares = map(numbers, square);
    vector<int> triples = map(numbers, triple);

    for (auto number: numbers) cout << number << "\t";
    cout << "\n";
    for (auto sq: squares) cout << sq << "\t";
    cout << "\n";
    for (auto tri: triples) cout << tri << "\t";

    return 0;
}