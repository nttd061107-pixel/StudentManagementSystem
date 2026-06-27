#include "Lecturer.h"
#include <iostream>
using namespace std;

Lecturer::Lecturer(string id, string name, string gender, string department)
    : Person(id, name, gender) {
    this->department = department;
}

string Lecturer::getDepartment() const {
    return department;
}

void Lecturer::displayInfo() {
    cout << "Giang vien: " << id << " - " << name
         << " - Khoa: " << department << endl;
}