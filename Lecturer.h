#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Lecturer : public Person {
private:
    string department;

public:
    Lecturer(string id = "", string name = "", string gender = "", string department = "");

    string getDepartment() const;
    void displayInfo() override;
};