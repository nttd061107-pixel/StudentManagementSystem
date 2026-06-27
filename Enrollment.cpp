#include "Enrollment.h"
#include <iostream>
using namespace std;

Enrollment::Enrollment(string studentId, string courseId, Score score) {
    this->studentId = studentId;
    this->courseId = courseId;
    this->score = score;
}

void Enrollment::display() {
    cout << "SV: " << studentId
         << " | Hoc phan: " << courseId
         << " | Diem TB: " << score.average()
         << " | Ket qua: " << score.result() << endl;
}