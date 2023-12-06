
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
    cout << "Nh?p email ho?c s? ði?n tho?i: ";
    cin >> newUser.emailOrPhone;
    cout << "Nh?p m?t kh?u: ";
    cin >> newUser.password;
    
    
    users[newUser.emailOrPhone] = newUser;
    
    cout << "T?o tài kho?n thành công!" << endl;


void login() {
    string emailOrPhone;
    string password;
    cout << "Nh?p email ho?c s? ði?n tho?i: ";
    cin >> emailOrPhone;
    cout << "Nh?p m?t kh?u: ";
    cin >> password;
    
    if (users.count(emailOrPhone) > 0) {
        User user = users[emailOrPhone];
        if (user.password == password) {
            cout << "Ðãng nh?p thành công!" << endl;
        } else {
            cout << "M?t kh?u không ðúng!" << endl;
        }
    } else {
        cout << "Tài kho?n không t?n t?i!" << endl;
    }
}


void forgotPassword() {
    string emailOrPhone;
    cout << "Nh?p email ho?c s? ði?n tho?i: ";
    cin >> emailOrPhone;
    
    
    if (users.count(emailOrPhone) > 0) {
        User user = users[emailOrPhone];
        cout << "M?t kh?u c?a b?n là: " << user.password << endl;
    } else {
        cout << "Tài kho?n không t?n t?i!" << endl;
    }
}

int Untitled5() {
    int choice;
    
    do {
        cout << "----- GIAO DI?N ÐÃNG NH?P -----" << endl;
        cout << "1. Ðãng k? tài kho?n m?i" << endl;
        cout << "2. Ðãng nh?p" << endl;
        cout << "3. Quên m?t kh?u" << endl;
        cout << "0. Thoát" << endl;
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
                cout << "L?a ch?n không h?p l?!" << endl;
                break;
        }
        
        cout << endl;
    } while (choice != 0);
    
    return 0;
}

