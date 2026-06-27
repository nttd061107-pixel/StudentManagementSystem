#include "Subject.h"
#include <iomanip>
#include <iostream>
using namespace std;

Subject::Subject(string subjectId, string subjectName, int credit) {
    this->subjectId = subjectId;
    this->subjectName = subjectName;
    this->credit = credit;
}

string Subject::getSubjectId() const {
    return subjectId;
}

string Subject::getSubjectName() const {
    return subjectName;
}

int Subject::getCredit() const {
    return credit;
}

void Subject::display() {
    cout << left << setw(10) << subjectId
         << setw(25) << subjectName
         << setw(10) << credit << endl;
}