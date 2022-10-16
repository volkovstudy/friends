#include <iostream>
#include <vector>
#include "FullName/FullName.h"
#include "Friend/Friend.h"

using namespace std;

vector<Friend*> database;

vector<Friend*> findByName(string name);
vector<Friend*> findBySurname(string surname);
vector<Friend*> findByPatronymic(string patronymic);

void printVector(vector<Friend*> source);

int main() {
    FullName* petyaFullName = new FullName("Petr", "Ivanov", "Ivanovich");
    Friend* petya = new Friend(petyaFullName, "16.10.2000");

    FullName* vasyaFullName = new FullName("Vasiliy", "Petrov", "Ivanovich");
    Friend* vasya = new Friend(vasyaFullName, "01.01.1970");

    return 0;
}
