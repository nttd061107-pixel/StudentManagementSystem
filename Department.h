#pragma once
#include <string>
using namespace std;

class Department {
private:
    string departmentId;
    string departmentName;

public:
    Department(string departmentId = "", string departmentName = "");

    void display();
};