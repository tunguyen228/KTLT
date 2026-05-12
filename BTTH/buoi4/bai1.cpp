#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout<<"Nhap chuoi s1: ";
    getline(cin, s1);
    cout<<"Nhap chuoi s2: ";
    getline(cin, s2);
    size_t pos = s1.find(s2);
    while(pos != string::npos) {
        s1.erase(pos, s2.length());
        pos = s1.find(s2);
    }
    cout<<"Chuoi s1 sau khi xoa: "<<s1<<endl;
    return 0;
}