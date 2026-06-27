#include "Person.h"

Person::Person(string id, string name, string gender) {
    this->id = id;
    this->name = name;
    this->gender = gender;
}

Person::~Person() {}

string Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

string Person::getGender() const {
    return gender;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setGender(string gender) {
    this->gender = gender;
}