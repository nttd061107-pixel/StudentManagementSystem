#include "Administrator.h"
#include <iostream>
using namespace std;

Administrator::Administrator(string id, string name, string gender, string username)
    : Person(id, name, gender) {
    this->username = username;
}

void Administrator::displayInfo() {
    cout << "Quan tri vien: " << id << " - " << name
         << " - Tai khoan: " << username << endl;
}