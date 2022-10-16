#ifndef FRIENDS_CONTACTS_H
#define FRIENDS_CONTACTS_H

#include "string"

using namespace std;

class Contacts {
private:
    string email;
    string telegramId;
    string phoneNumber;

public:
    Contacts(string email, string telegramId, string phoneNumber);

    string getEmail();

    string getTelegramId();

    string getPhoneNumber();
};

#endif
