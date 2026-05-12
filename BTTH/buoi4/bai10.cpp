#include <iostream>
#include <string>
using namespace std;

string maHoa(string s, int n) {
    string ketQua = "";
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + n) % 26 + 'A';
        } 
        else if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + n) % 26 + 'a';
        } 
        else if (c >= '0' && c <= '9') {
            c = (c - '0' + n) % 10 + '0';
        }
        ketQua += c;
    }
    return ketQua;
}

int main() {
    string input;
    int n;

    cout << "Nhap chuoi can ma hoa: ";
    getline(cin, input);

    cout << "Nhap gia tri n: ";
    cin >> n;
    
    string ketQua = maHoa(input, n);

    cout << "Chuoi sau khi ma hoa: " << ketQua << endl;

    return 0;
}