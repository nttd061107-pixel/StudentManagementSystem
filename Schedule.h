#pragma once
#include <string>
using namespace std;

class Schedule {
private:
    string courseId;
    string dayOfWeek;
    string time;

public:
    Schedule(string courseId = "", string dayOfWeek = "", string time = "");

    void display();
};