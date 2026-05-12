#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    double diem;
};

int main() {
    int n;
    cout<<"Nhap so sinh vien: ";
    cin>>n;
    cin.ignore();
    SinhVien *arr = new SinhVien[n];

    for(int i = 0; i < n; i++) {
        cout<<"Ma so: ";
        cin>>arr[i].maSV;
        cin.ignore();
        cout<<"Ho ten: ";
        getline(cin, arr[i].hoTen);
        cout<<"Diem: ";
        cin>>arr[i].diem;
        cin.ignore();
    }
    cout<<"DANH SACH SINH VIEN\n";
    cout<<"--------------------------------\n";
    cout<<left<<setw(4)<<"MSSV"<<"|"<<setw(20)<<"Ho ten"<<"|"<<setw(4)<<"Diem"<<"|"<<endl;
    cout<<"--------------------------------\n";
    for(int i = 0; i < n; i++) {
        cout<<left<<setw(4)<<arr[i].maSV<<"|"<<setw(20)<<arr[i].hoTen<<"|"<<setw(4)<<arr[i].diem<<"|"<<endl;
    }
    return 0;
}