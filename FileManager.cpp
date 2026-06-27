#include "FileManager.h"
#include <fstream>
#include <iostream>
using namespace std;

void FileManager::saveStudentsToFile(const vector<Student>& students) {
    ofstream file("students.txt");

    if (!file) {
        cout << "Khong the mo file de ghi!\n";
        return;
    }

    for (const Student& s : students) {
        file << s.getId() << ","
             << s.getName() << ","
             << s.getGender() << ","
             << s.getClassId() << ","
             << s.getGPA() << endl;
    }

    file.close();
    cout << "Da luu danh sach sinh vien vao file students.txt\n";
}