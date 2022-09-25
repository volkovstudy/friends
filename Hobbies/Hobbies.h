#ifndef FRIENDS_HOBBIES_H
#define FRIENDS_HOBBIES_H

#include<iostream>
#include<vector>
#include<cstring>
#include<map>

using namespace std;

class Hobbies {
private:
    vector<string> hobbies; // Контейнер для хранения хобби друга.
    string hobby;   // Любая вводимая информация, а также единичное представление хобби.

public:
    Hobbies(string hobby);

    // Добавляет новое хобби в список хобби
    vector<string> getHobby(string hobby);
    // Выводит все хобби человека
    void setHobby();
    // Поиск всех хобби, имена которых содержат в себе определенный паттерн символов + их вывод.
    void findHobby(string pattern);
    // "Чистит" все хобби друга (скорее, вместе с самим товарищем) + возвращает пустой вектор.
    vector<string> removeAllHobbies();
    // Удаляет конкретное хобби из списка увлечений
    vector<string> removeHobby(string hobby);
};


#endif
