#include <iostream>
#include <vector>

using namespace std;

class FullName {

};

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

class Hobbies {
    // empty
};

class Friend : protected Contacts, protected Hobbies {
private:
    FullName fullName;
    string BirthDate;

    Contacts contacts;
    vector<Hobbies> hobbies;

public:
    Friend(string InputName, string InputSurname, string InputBirthdate, string InputPatronymic)
        :Name(InputName), Surname(InputSurname), BirthDate(InputBirthdate), Patronymic(InputPatronymic) {}


    string printPersonInfo() {
        cout << "Основная Информация о Друге:\n";
        cout << "ФИО: ";
        cout << Surname << " " << Name << " " << Patronymic << "\n\n";
        cout << "Дата рождения: ";
        cout << BirthDate << "\n\n"; // Дата рождения записывается через точку, никаких приколов с "месяца" и "года"

        cout << "Адрес электронной почты: ";

        cout << Email << "\n\n";

        cout << "ID в Телеграм: ";

        cout << Telegram_ID << "\n\n";

        cout << "Номер телефона: ";

        cout << PhoneNumber << "\n\n";
    }

    string GetName()
    {
        return Name;
    }

    string GetSurname()
    {
        return Surname;
    }

    string GetBirthDate()
    {
        return BirthDate;
    }
    
};

int main()
{
    
}


