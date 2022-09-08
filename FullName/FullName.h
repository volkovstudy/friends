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
    FullName(string name, string age, string patronymic);

    string GetName() {
        return Name;
    }

    string GetAge() {
        return Age;
    }

    string GetPatronymic() {
        return Patronymic;
    }
};


#endif //FRIENDS_FULLNAME_H
