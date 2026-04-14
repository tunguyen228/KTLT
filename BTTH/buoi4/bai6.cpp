#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool laNamNhuan(int nam) {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int tinhNgayTrongNam(string s) {
    int ngay = stoi(s.substr(0, 2));
    int thang = stoi(s.substr(3, 2));
    int nam = stoi(s.substr(6, 4));
    int ngayCuaThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (laNamNhuan(nam)) {
        ngayCuaThang[1] = 29;
    }

    int tongNgay = 0;
    for (int i = 0; i < thang - 1; i++) {
        tongNgay += ngayCuaThang[i];
    }
    tongNgay += ngay;
    return tongNgay;
}

int main() {
    string dateStr;
    
    cout << "Nhap chuoi ngay-thang-nam: ";
    cin >> dateStr;

    if (dateStr.length() != 10 || dateStr[2] != '-' || dateStr[5] != '-') {
        cout << "Dinh dang khong hop le! Vui long nhap dung dd-mm-yyyy." << endl;
        return 1;
    }

    int ketQua = tinhNgayTrongNam(dateStr);
    cout << "Ngay '" << dateStr << "' la ngay thu " << ketQua << " trong nam." << endl;

    return 0;
}