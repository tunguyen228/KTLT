#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char *str = new char [50];
    cout<<"Nhap vao 1 chuoi ky tu: ";
    cin.getline(str, 50); 

    int chu = 0, so = 0, khoangTrang = 0, khac = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {   
            chu++;  
        } 
        else if (isdigit(*str)) { 
            so++;
        } 
        else if (isspace(*str)) { 
            khoangTrang++;
        } 
        else {                  
            khac++;
        }
        str++; 
    }
    cout << "\n--- Ket qua thong ke ---" << endl;
    cout << "So ky tu chu: " << chu << endl;
    cout << "So ky tu so : " << so << endl;
    cout << "So khoang trang: " << khoangTrang << endl;
    cout << "So ky tu khac  : " << khac << endl;   

    delete[]str;
    return 0;
}