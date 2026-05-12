#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;

string layTenThang(int m) {
    string danhSachThang[] = {"", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    if (m >= 1 && m <= 12) {
        return danhSachThang[m];
    }
    return "Invalid Month";
}

int main() {
    string input;
    cout << "Nhap ngay thang (thang/ngay/nam): ";
    cin >> input;

    int m, d, y;

    if (sscanf(input.c_str(), "%d/%d/%d", &m, &d, &y) == 3) {
        if (y < 100) {
            y += 1900;
        }

        string monthName = layTenThang(m);
        if (monthName == "Invalid Month") {
            cout << "Thang khong hop le!" << endl;
        } else {
            cout << "Ket qua: " << monthName << " " << d << ", " << y << endl;
        }

    } else {
        cout << "Dinh dang dau vao khong dung (phai la mm/dd/yyyy)!" << endl;
    }
    return 0;
}