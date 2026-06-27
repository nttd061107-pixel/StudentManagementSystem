#pragma once
#include <string>
using namespace std;

class Authentication {
private:
    string username;
    string password;

public:
    Authentication(string username = "admin", string password = "123");

    bool login();
};