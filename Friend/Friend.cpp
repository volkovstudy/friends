#include "Friend.h"

Friend::Friend(FullName fullName, string birthDate, Contacts contacts,vector<Hobbies> hobbies)
                                        : fullName(fullName),
                                          birthDate(birthDate),
                                          contacts(contacts),
                                          hobbies(hobbies) {}
