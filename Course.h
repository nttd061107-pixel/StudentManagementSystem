#pragma once
#include "Subject.h"
#include "Lecturer.h"
#include <string>
using namespace std;

class Course {
private:
    string courseId;
    Subject subject;
    Lecturer lecturer;

public:
    Course(string courseId = "", Subject subject = Subject(), Lecturer lecturer = Lecturer());

    string getCourseId() const;

    void display();
};