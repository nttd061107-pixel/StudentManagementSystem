#pragma once
#include <string>
using namespace std;

class ClassRoom {
private:
    string classId;
    string className;

public:
    ClassRoom(string classId = "", string className = "");

    void display();
};