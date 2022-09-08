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
};
