
#include <iostream>
#include <string>
#include <map>

using namespace std;


struct User {
    string emailOrPhone;
    string password;
};

map<string, User> users;



    User newUser;
    cout << "Nh?p email ho?c s? �i?n tho?i: ";
    cin >> newUser.emailOrPhone;
    cout << "Nh?p m?t kh?u: ";
    cin >> newUser.password;
    
    
    users[newUser.emailOrPhone] = newUser;
    
    cout << "T?o t�i kho?n th�nh c�ng!" << endl;


void login() {
    string emailOrPhone;
    string password;
    cout << "Nh?p email ho?c s? �i?n tho?i: ";
    cin >> emailOrPhone;
    cout << "Nh?p m?t kh?u: ";
    cin >> password;
    
    if (users.count(emailOrPhone) > 0) {
        User user = users[emailOrPhone];
        if (user.password == password) {
            cout << "��ng nh?p th�nh c�ng!" << endl;
        } else {
            cout << "M?t kh?u kh�ng ��ng!" << endl;
        }
    } else {
        cout << "T�i kho?n kh�ng t?n t?i!" << endl;
    }
}


void forgotPassword() {
    string emailOrPhone;
    cout << "Nh?p email ho?c s? �i?n tho?i: ";
    cin >> emailOrPhone;
    
    
    if (users.count(emailOrPhone) > 0) {
        User user = users[emailOrPhone];
        cout << "M?t kh?u c?a b?n l�: " << user.password << endl;
    } else {
        cout << "T�i kho?n kh�ng t?n t?i!" << endl;
    }
}

int Untitled5() {
    int choice;
    
    do {
        cout << "----- GIAO DI?N ��NG NH?P -----" << endl;
        cout << "1. ��ng k? t�i kho?n m?i" << endl;
        cout << "2. ��ng nh?p" << endl;
        cout << "3. Qu�n m?t kh?u" << endl;
        cout << "0. Tho�t" << endl;
        cout << "Nh?p l?a ch?n c?a b?n: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                registerAccount();
                break;
            case 2:
                login();
                break;
            case 3:
                forgotPassword();
                break;
            case 0:
                cout << "T?m bi?t!" << endl;
                break;
            default:
                cout << "L?a ch?n kh�ng h?p l?!" << endl;
                break;
        }
        
        cout << endl;
    } while (choice != 0);
    
    return 0;
}

