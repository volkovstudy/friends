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
    Contacts(string InputEmail, string InputTelegram_ID, string InputPhoneNumber)
            : email(InputEmail), telegramId(InputTelegram_ID), phoneNumber(InputPhoneNumber) {}

    string GetEmail()
    {
        return email;
    }

    string GetTelegram_ID()
    {
        return telegramId;
    }

    string GetPhoneNumber()
    {
        return phoneNumber;
    }

};

#endif //FRIENDS_CONTACTS_H
