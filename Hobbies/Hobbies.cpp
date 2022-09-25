#include "Hobbies.h"

Hobbies::Hobbies(string hobby) : hobby(hobby) {}

vector<string> Hobbies::getHobby(string hobby) {
    hobbies.push_back(hobby);
    return hobbies;
}

void Hobbies::setHobby() {
    for (vector<string>::iterator it = hobbies.begin(); it != hobbies.end(); it++)
        cout << *it << endl;
}

void Hobbies::findHobby(string pattern) {
    for (vector<string>::iterator it = hobbies.begin(); it != hobbies.end(); it++) {
        string hobby = *it;

        if (hobby.find(pattern) != string::npos)
            cout << hobby << endl;
    }
}

vector<string> Hobbies::removeAllHobbies() {
    hobbies.clear();
    return hobbies;
}

vector<string> Hobbies::removeHobby(string hobby) {
    string pattern = hobby;

    for (vector<string>::iterator it = hobbies.begin(); it != hobbies.end(); it++) {
        string friendHobby = *it;

        if (friendHobby.find(pattern) != string::npos) {
            hobbies.erase(it);  // Если найдено соответсвующее хобби, то удаляем его из вектора.
            return hobbies;  // Возвращаем обновленный вектор.
        }
    }
}
