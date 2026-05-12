#include <iostream>
#include <string>
using namespace std;

const char BACKSPACE = 127;
const char ENTER = 10;

string getPass(string prompt);

int main() {
    int dem = 0;
    bool bTrue = true;
    string password ="svCQ";
    while(dem < 3) {
        string input = getPass("Nhap mat khau* ");
        if(input == password) {
            bTrue = false;
            break;
        } else {
            dem++;
            if(dem < 3) {
                cout<<"Nhap lai\n";
            }
        }
    }
    if(!bTrue) {
        cout<<"Dang nhap thanh cong\n";
    }
    return 0;
}

string getPass(string prompt) {
    cout<<prompt;
    string password;
    char ch;
    while((ch = getchar()) != ENTER) {
        if(ch == BACKSPACE) {
            if(password.length() > 0) {
                cout<<"\b \b";
                password.resize(password.length() - 1);
            }
        } else {
            password += ch;
            cout<<"*";
        }
    }
    cout<<endl;
    return password;
}