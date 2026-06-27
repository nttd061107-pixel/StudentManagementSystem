#include "ReportManager.h"
#include "Lecturer.h"
#include "Administrator.h"
#include <iostream>
using namespace std;

void ReportManager::reportGoodStudents(const vector<Student>& students) {
    cout << "\n===== DANH SACH SINH VIEN GIOI GPA >= 8.0 =====\n";
    bool found = false;

    for (Student s : students) {
        if (s.getGPA() >= 8.0) {
            s.displayInfo();
            found = true;
        }
    }

    if (!found) {
        cout << "Khong co sinh vien gioi.\n";
    }
}

void ReportManager::showOOPDemo() {
    cout << "\n===== MINH HOA DA HINH =====\n";

    vector<Person*> people;
    people.push_back(new Student("SV010", "Nguyen Hoang Phuc", "Nam", "LTHDT", 8.5));
    people.push_back(new Lecturer("GV001", "Tran Cao Minh", "Nam", "CTRR"));
    people.push_back(new Administrator("AD001", "La Hung Quan", "Nam", "admin01"));

    for (Person* p : people) {
        p->displayInfo();
    }

    for (Person* p : people) {
        delete p;
    }
}