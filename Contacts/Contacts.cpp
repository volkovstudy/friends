#include "Contacts.h"

Contacts::Contacts(string email, string telegramId, string phoneNumber) : email(email),
                                                                          telegramId(telegramId),
                                                                          phoneNumber(phoneNumber) {}

string Contacts::getEmail() {
    return email;
}

string Contacts::getTelegramId() {
    return telegramId;
}

string Contacts::getPhoneNumber() {
    return phoneNumber;
}

void Contacts::setEmail(string email) {
    Contacts::email = email;
}

void Contacts::setTelegramId(string telegramId) {
    Contacts::telegramId = telegramId;
}

void Contacts::setPhoneNumber(string phoneNumber) {
    Contacts::phoneNumber = phoneNumber;
};
