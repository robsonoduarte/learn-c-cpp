#include <iostream>
#include <sstream>


class Date{
public:
    int day;
    int month;
    int year;

    std::string toString(){
        std::stringstream ss;
        ss << year << "-" << month << "-" << day;
        return ss.str();
    }

};

int main() {
    Date d1;
    d1.day = 1;
    d1.month = 10;
    d1.year = 1975;

    // using direct list initialization
    Date d2{4,11, 1974};

    std::cout << d1.toString() << std::endl;
    std::cout << d2.toString() << std::endl;

    return 0;
}
