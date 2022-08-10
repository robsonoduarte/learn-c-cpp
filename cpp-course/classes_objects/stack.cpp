#include <iostream>
using namespace std;

class Person{
public:
    string name;
    Person(string name) : name(name) {

        cout << "Hello! May name is " << name << endl;
    }

    ~Person(){
        cout << name << " saying goodbye !" << endl;
    }
};

Person* createPerson(){
    Person p("Hanna");
    return &p;
}

int main(){
    Person* pp1;

    {
        Person mary{"Mary"};
        pp1 = &mary;
    }
    cout << pp1->name << endl;

    Person* pp2 = createPerson();
    cout << pp2->name << endl;

    cout << "End fo code!" << endl;
    return 0;
}