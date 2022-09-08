#include "FullName.h"

FullName::FullName(string name, string surname, string patronymic) :
                                                name(name),
                                                surname(surname),
                                                patronymic(patronymic) {}

string FullName::getName() {
    return name;
}

string FullName::getSurname() {
    return surname;
}

string FullName::getPatronymic() {
    return patronymic;
}
