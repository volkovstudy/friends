cmake_minimum_required(VERSION 3.23)
project(Friends)

set(CMAKE_CXX_STANDARD 14)

add_executable(Friends
        main.cpp FullName/FullName.cpp FullName/FullName.h Hobbies/Hobbies.cpp Hobbies/Hobbies.h Contacts/Contacts.cpp Contacts/Contacts.h Friend/Friend.cpp Friend/Friend.h Birthday/Birthday.cpp Birthday/Birthday.h)
