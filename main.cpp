#include <iostream>
#include "FullName/FullName.h"
#include "Friend/Friend.h"

using namespace std;

int main() {
    FullName* petyaFullName = new FullName("Petr", "Ivanov", "Ivanovich");
    Friend* petya = new Friend(petyaFullName, "16.10.2000");

    FullName* vasyaFullName = new FullName("Vasiliy", "Petrov", "Aleksandrov");
    Friend* vasya = new Friend(vasyaFullName, "01.01.1970");

    return 0;
}
