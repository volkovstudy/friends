#ifndef FRIENDS_FULLNAME_H
#define FRIENDS_FULLNAME_H

#include "string"

using namespace std;

class FullName {
private:
    string Name;
    string Age;
    string Patronymic;

public:
    FullName(string InputName, string InputAge, string InputPatronymic)
            : Name(InputName), Age(InputAge), Patronymic(InputPatronymic) {}

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
