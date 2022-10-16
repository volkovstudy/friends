#include "Friend.h"

Friend::Friend(FullName* fullName, string birthDate, Contacts* contacts,vector<Hobbies*> hobbies)
                                        : fullName(fullName),
                                          birthDate(birthDate),
                                          contacts(contacts),
                                          hobbies(hobbies) {}

FullName* Friend::getFullName() {
    return Friend::fullName;
}

string Friend::getBirthDate() {
    return Friend::birthDate;
}

Contacts* Friend::getContacts() {
    return Friend::contacts;
}

vector<Hobbies*> Friend::getHobbies() {
    return Friend::hobbies;
}
