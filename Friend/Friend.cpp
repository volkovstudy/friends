#include "Friend.h"

Friend::Friend(const FullName &fullName, const string &birthDate, const Contacts &contacts,
               const vector<Hobbies> &hobbies) : fullName(fullName), birthDate(birthDate), contacts(contacts),
                                                 hobbies(hobbies) {}
