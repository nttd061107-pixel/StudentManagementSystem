#include "Department.h"
#include <iostream>
using namespace std;

Department::Department(string departmentId, string departmentName) {
    this->departmentId = departmentId;
    this->departmentName = departmentName;
}

void Department::display() {
    cout << departmentId << " - " << departmentName << endl;
}