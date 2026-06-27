#pragma once
#include "Student.h"
#include "Person.h"
#include <vector>
using namespace std;

class ReportManager {
public:
    void reportGoodStudents(const vector<Student>& students);
    void showOOPDemo();
};