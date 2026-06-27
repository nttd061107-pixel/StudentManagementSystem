#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(string courseId, Subject subject, Lecturer lecturer) {
    this->courseId = courseId;
    this->subject = subject;
    this->lecturer = lecturer;
}

string Course::getCourseId() const {
    return courseId;
}

void Course::display() {
    cout << "Hoc phan: " << courseId
         << " - Mon: " << subject.getSubjectName()
         << " - GV: " << lecturer.getName() << endl;
}