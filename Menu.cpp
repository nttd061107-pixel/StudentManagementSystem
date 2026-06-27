#include "Menu.h"
#include <iomanip>
#include <iostream>
using namespace std;

Menu::Menu() {
    students.push_back(Student("SV001", "Bui A Quy", "Nam", "LTHDT", 8.2));
    students.push_back(Student("SV002", "Pham Quoc Thi", "Nam", "LTHDT", 7.1));
    students.push_back(Student("SV003", "Tran Minh Tri", "Nam", "KTLT", 8.8));
}

void Menu::showHeader() {
    cout << left << setw(10) << "Ma SV"
         << setw(25) << "Ho ten"
         << setw(10) << "Gioi tinh"
         << setw(10) << "Lop"
         << setw(8) << "GPA" << endl;
    cout << string(63, '-') << endl;
}

void Menu::showStudents() {
    cout << "\n===== DANH SACH SINH VIEN =====\n";
    showHeader();

    for (Student& s : students) {
        s.displayInfo();
    }
}

void Menu::addStudent() {
    string id, name, gender, classId;
    float gpa;

    cout << "Nhap ma SV: ";
    cin >> id;

    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, name);

    cout << "Nhap gioi tinh: ";
    getline(cin, gender);

    cout << "Nhap lop: ";
    getline(cin, classId);

    cout << "Nhap GPA: ";
    cin >> gpa;

    students.push_back(Student(id, name, gender, classId, gpa));
    cout << "Da them sinh vien thanh cong!\n";
}

void Menu::removeStudent() {
    string id;
    cout << "Nhap ma sinh vien can xoa: ";
    cin >> id;

    for (int i = 0; i < (int)students.size(); i++) {
        if (students[i].getId() == id) {
            students.erase(students.begin() + i);
            cout << "Da xoa sinh vien!\n";
            return;
        }
    }

    cout << "Khong tim thay sinh vien!\n";
}

void Menu::searchStudent() {
    string keyword;
    cin.ignore();
    cout << "Nhap ten hoac ma sinh vien can tim: ";
    getline(cin, keyword);

    cout << "\n===== KET QUA TIM KIEM =====\n";
    showHeader();

    bool found = false;
    for (Student& s : students) {
        if (s.getId() == keyword || s.getName().find(keyword) != string::npos) {
            s.displayInfo();
            found = true;
        }
    }

    if (!found) {
        cout << "Khong tim thay sinh vien.\n";
    }
}

void Menu::updateGPA() {
    string id;
    float newGPA;

    cout << "Nhap ma sinh vien can sua diem: ";
    cin >> id;

    for (Student& s : students) {
        if (s.getId() == id) {
            cout << "Nhap GPA moi: ";
            cin >> newGPA;
            s.setGPA(newGPA);
            cout << "Da cap nhat GPA!\n";
            return;
        }
    }

    cout << "Khong tim thay sinh vien!\n";
}

void Menu::showUMLText() {
    cout << "\n===== SO DO LOP UML DANG TEXT =====\n";
    cout << "Person (abstract)\n";
    cout << "|-- Student\n";
    cout << "|-- Lecturer\n";
    cout << "|-- Administrator\n";
    cout << "\nStudent -- Enrollment -- Course -- Subject\n";
    cout << "Enrollment -- Score\n";
    cout << "Course -- Schedule\n";
    cout << "ClassRoom -- Student\n";
    cout << "Menu -- FileManager\n";
    cout << "Menu -- ReportManager\n";
    cout << "Menu -- Authentication\n";
}

void Menu::run() {
    int choice;

    do {
        cout << "\n========== HE THONG QUAN LY SINH VIEN ==========\n";
        cout << "1. Hien thi danh sach sinh vien\n";
        cout << "2. Them sinh vien\n";
        cout << "3. Xoa sinh vien\n";
        cout << "4. Tim kiem sinh vien\n";
        cout << "5. Cap nhat diem GPA\n";
        cout << "6. Thong ke sinh vien gioi\n";
        cout << "7. Luu du lieu ra file\n";
        cout << "8. Minh hoa da hinh\n";
        cout << "9. Xem UML dang text\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showStudents();
            break;
        case 2:
            addStudent();
            break;
        case 3:
            removeStudent();
            break;
        case 4:
            searchStudent();
            break;
        case 5:
            updateGPA();
            break;
        case 6:
            reportManager.reportGoodStudents(students);
            break;
        case 7:
            fileManager.saveStudentsToFile(students);
            break;
        case 8:
            reportManager.showOOPDemo();
            break;
        case 9:
            showUMLText();
            break;
        case 0:
            cout << "Ket thuc chuong trinh.\n";
            break;
        default:
            cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);
}