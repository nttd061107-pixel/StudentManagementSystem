#include "Authentication.h"
#include <iostream>
using namespace std;

Authentication::Authentication(string username, string password) {
    this->username = username;
    this->password = password;
}

bool Authentication::login() {
    string u, p;
    cout << "Ten dang nhap: ";
    cin >> u;
    cout << "Mat khau: ";
    cin >> p;

    if (u == username && p == password) {
        cout << "Dang nhap thanh cong!\n";
        return true;
    }

    cout << "Sai tai khoan hoac mat khau!\n";
    return false;
}