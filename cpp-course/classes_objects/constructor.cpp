#include <iostream>
using namespace std;

class User{
public:
    string name;
    string email;

    User() : User("Anonymous"){}

    /*User(string name, string email = "???") {
        this->name = name;
        this->email = email;
    }*/
    // alternative to constructor above
    User(string name, string email = "???"):name(name), email(email){}

    string toString(){
        return name + " [" + email + "]";
    }
};


int main(){
    User user1;
    User user2("Bravox", "bravox@gmail.com");
    User user3 = User("Bravox");

    cout << user1.toString() << endl;
    cout << user2.toString() << endl;
    cout << user3.toString() << endl;

    return 0;
}