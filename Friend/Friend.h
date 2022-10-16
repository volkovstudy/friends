#ifndef FRIENDS_FRIEND_H
#define FRIENDS_FRIEND_H

#include "string"
#include "vector"
#include "../FullName/FullName.h"
#include "../Contacts/Contacts.h"
#include "../Hobbies/Hobbies.h"

using namespace std;

class Friend {
private:
    FullName* fullName;
    string birthDate;
    Contacts* contacts;
    vector<Hobbies*> hobbies;
public:
    Friend(FullName* fullName, string birthDate);
    Friend(FullName* fullName, string birthDate, Contacts* contacts, vector<Hobbies*> hobbies);

    FullName* getFullName();
    string getBirthDate();
    Contacts* getContacts();
    vector<Hobbies*> getHobbies();

    void setFullName(FullName *fullName);
    void setBirthDate(string birthDate);
    void setContacts(Contacts* contacts);
    void setHobbies(vector<Hobbies*> hobbies);
};

#endif
