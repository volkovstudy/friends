#ifndef FRIENDS_FRIEND_H
#define FRIENDS_FRIEND_H

#include "string"
#include "vector"
#include "../FullName/FullName.h"
#include "../Contacts/Contacts.h"
#include "../Hobbies/Hobbies.h"

using namespace std;

class Friend : protected Contacts, protected Hobbies {
private:
    FullName fullName;
    string BirthDate;

    Contacts contacts;
    vector<Hobbies> hobbies;

public:
    Friend(string InputName, string InputSurname, string InputBirthdate, string InputPatronymic)
            :Name(InputName), Surname(InputSurname), BirthDate(InputBirthdate), Patronymic(InputPatronymic) {}

    string GetName()
    {
        return Name;
    }

    string GetSurname()
    {
        return Surname;
    }

    string GetBirthDate()
    {
        return BirthDate;
    }

};

#endif //FRIENDS_FRIEND_H
