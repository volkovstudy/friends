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

void initializeDatabase();
void findObjects();

int main() {
    initializeDatabase();

    findObjects();

    return 0;
}

void initializeDatabase() {
    FullName* petyaFullName = new FullName("Petr", "Ivanov", "Ivanovich");
    Friend* petya = new Friend(petyaFullName, "16.10.2000");

    FullName* vasyaFullName = new FullName("Vasiliy", "Petrov", "Ivanovich");
    Friend* vasya = new Friend(vasyaFullName, "01.01.1970");

    database.push_back(petya);
    database.push_back(vasya);

    printVector(database);
}

void findObjects() {
    cout << "Finding by name \"Petr\"..." << endl;
    auto nameResults = findByName("Petr");
    cout << "Results:" << endl;
    printVector(nameResults);
    cout << endl;

    cout << "Finding by surname \"Petrov\"..." << endl;
    auto surnameResults = findBySurname("Petrov");
    cout << "Results:" << endl;
    printVector(surnameResults);
    cout << endl;

    cout << "Finding by patronymic \"Ivanovich\"..." << endl;
    auto patronymicResults = findByPatronymic("Ivanovich");
    cout << "Results:" << endl;
    printVector(patronymicResults);
    cout << endl;
}
