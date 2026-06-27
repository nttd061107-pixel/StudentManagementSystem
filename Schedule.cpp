#include "Schedule.h"
#include <iostream>
using namespace std;

Schedule::Schedule(string courseId, string dayOfWeek, string time) {
    this->courseId = courseId;
    this->dayOfWeek = dayOfWeek;
    this->time = time;
}

void Schedule::display() {
    cout << "Hoc phan " << courseId << " hoc vao " << dayOfWeek
         << " luc " << time << endl;
}