#pragma once
#include <string>
using namespace std;

class Person {
protected:
    string id;
    string name;
    string gender;

public:
    Person(string id = "", string name = "", string gender = "");
    virtual ~Person();

    virtual void displayInfo() = 0;

    string getId() const;
    string getName() const;
    string getGender() const;

    void setName(string name);
    void setGender(string gender);
};