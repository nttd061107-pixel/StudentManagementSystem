#include "Semester.h"
#include <iostream>
using namespace std;

Semester::Semester(string semesterId, string schoolYear) {
    this->semesterId = semesterId;
    this->schoolYear = schoolYear;
}

void Semester::display() {
    cout << "Hoc ky: " << semesterId << " - Nam hoc: " << schoolYear << endl;
}