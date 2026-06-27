#pragma once
#include "Student.h"
#include <vector>
using namespace std;

class FileManager {
public:
    void saveStudentsToFile(const vector<Student>& students);
};