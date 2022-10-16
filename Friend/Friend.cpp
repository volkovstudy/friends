#include "Friend.h"

Friend::Friend(FullName* fullName, string birthDate, Contacts* contacts,vector<Hobbies*> hobbies)
                                        : fullName(fullName),
                                          birthDate(birthDate),
                                          contacts(contacts),
                                          hobbies(hobbies) {}

Friend::Friend(FullName* fullName, string birthDate) : fullName(fullName), birthDate(birthDate) {}

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

void Friend::setFullName(FullName *fullName) {
    Friend::fullName = fullName;
}

void Friend::setBirthDate(string birthDate) {
    Friend::birthDate = birthDate;
}

void Friend::setContacts(Contacts *contacts) {
    Friend::contacts = contacts;
}

void Friend::setHobbies(vector<Hobbies*> hobbies) {
    Friend::hobbies = hobbies;
}
