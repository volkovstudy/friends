#include "Birthday.h"

BirthDate::BirthDate(string day, string month, string year) :
                                                            day(day),
                                                            month(month),
                                                            year(year) {}

string BirthDate::getDay() {
    return this->day;
}

string BirthDate::getMonth() {
    return this->month;
}

string BirthDate::getYear() {
    return this->year;
}

string BirthDate::getInfo() {
    return "(" + this->day + "." + this->month + "." + this->year + ")";
}
