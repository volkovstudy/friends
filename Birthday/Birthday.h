#ifndef FRIENDS_BIRTHDAY_H
#define FRIENDS_BIRTHDAY_H

#include <string>

using namespace std;

class BirthDate {
private:
    string day;
    string month;
    string year;

public:
    BirthDate(string day, string month, string year);

    string getDay();
    string getMonth();
    string getYear();
    string getInfo();
};


#endif
