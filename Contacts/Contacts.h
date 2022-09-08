#ifndef FRIENDS_CONTACTS_H
#define FRIENDS_CONTACTS_H

#include "string"

using namespace std;

class Contacts {
public:
    string Email;
    string Telegram_ID;
    string PhoneNumber;

    Contacts(string InputEmail, string InputTelegram_ID, string InputPhoneNumber)
            :Email(InputEmail), Telegram_ID(InputTelegram_ID), PhoneNumber(InputPhoneNumber) {}

    string GetEmail()
    {
        return Email;
    }

    string GetTelegram_ID()
    {
        return Telegram_ID;
    }

    string GetPhoneNumber()
    {
        return PhoneNumber;
    }

};

#endif //FRIENDS_CONTACTS_H
