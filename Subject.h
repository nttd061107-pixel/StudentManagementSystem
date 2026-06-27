#pragma once
#include <string>
using namespace std;

class Subject {
private:
    string subjectId;
    string subjectName;
    int credit;

public:
    Subject(string subjectId = "", string subjectName = "", int credit = 0);

    string getSubjectId() const;
    string getSubjectName() const;
    int getCredit() const;

    void display();
};