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
    Contacts(const string &email, const string &telegramId, const string &phoneNumber);

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
