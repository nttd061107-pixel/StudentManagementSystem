#pragma once
#include "Student.h"
#include "FileManager.h"
#include "ReportManager.h"
#include <vector>
using namespace std;

class Menu {
private:
    vector<Student> students;
    FileManager fileManager;
    ReportManager reportManager;

public:
    Menu();

    void showHeader();
    void showStudents();
    void addStudent();
    void removeStudent();
    void searchStudent();
    void updateGPA();
    void showUMLText();
    void run();
};