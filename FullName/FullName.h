#ifndef FRIENDS_FULLNAME_H
#define FRIENDS_FULLNAME_H

#include "string"

using namespace std;

class FullName {
private:
    string name;
    string surname;
    string patronymic;
public:
    FullName(string name, string surname, string patronymic);

    string getName();
    string getSurname();
    string getPatronymic();
};


#endif
