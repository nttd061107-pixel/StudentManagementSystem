#pragma once
#include <string>
using namespace std;

class Semester {
private:
    string semesterId;
    string schoolYear;

public:
    Semester(string semesterId = "", string schoolYear = "");

    void display();
};