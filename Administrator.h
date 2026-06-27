#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Administrator : public Person {
private:
    string username;

public:
    Administrator(string id = "", string name = "", string gender = "", string username = "");

    void displayInfo() override;
};