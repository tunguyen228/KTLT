#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout<<"Nhap chuoi s1: ";
    getline(cin, s1);
    cout<<"Nhap chuoi s2: ";
    getline(cin, s2);
    size_t pos;
    while ((pos = s1.find(s2)) != string::npos) {
        s1.erase(pos, s2.length());
    }
    cout<<s1;
    return 0;
}