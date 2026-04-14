#include <iostream>
#include <string>
using namespace std;

string thayTheTatCa(string s1, string s2, string s3) {
    if (s2.empty()) {
        return s1;
    }
    size_t pos = 0;
    while ((pos = s1.find(s2, pos)) != string::npos) {
        s1.replace(pos, s2.length(), s3);
        pos += s3.length();
    }
    return s1;
}

int main() {
    string s1, s2, s3;

    cout << "Nhap chuoi goc (s1): ";
    getline(cin, s1); 

    cout << "Nhap chuoi can tim (s2): ";
    getline(cin, s2);

    cout << "Nhap chuoi thay the (s3): ";
    getline(cin, s3);

    string ketQua = thayTheTatCa(s1, s2, s3);

    cout << "\n--- Ket qua sau khi thay the ---" << endl;
    cout << ketQua << endl;

    return 0;
}