#pragma once
#include "Score.h"
#include <string>
using namespace std;

class Enrollment {
private:
    string studentId;
    string courseId;
    Score score;

public:
    Enrollment(string studentId = "", string courseId = "", Score score = Score());

    void display();
};