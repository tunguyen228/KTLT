#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    int x;
    cout << "Nhap chuoi s1: ";
    getline(cin, s1);

    cout << "Nhap chuoi s2: ";
    getline(cin, s2);

    cout << "Nhap vi tri can chen (x): ";
    cin >> x;

    if (x >= 0 && x <= s1.length()) {
        s1.insert(x, s2);
        cout << "Chuoi sau khi chen: " << s1 << endl;
    } else {
        cout << "Vi tri " << x << " khong hop le!" << endl;
        cout << "Vi tri hop le phai nam trong khoang [0, " << s1.length() << "]." << endl;
    }

    return 0;
}