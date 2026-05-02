#include <iostream>
#include <ctime>
using namespace std;

struct NhanVien {
    string maNV;
    string hoTen;
    int namVaoLam;
    int namSinh;
};

void nhapNV(NhanVien &nv);
void xuatNV(NhanVien &nv);
int tinhTuoi(NhanVien nv);
int thamNienLamViec(NhanVien nv);

int main() {
    NhanVien nv;
    nhapNV(nv);
    xuatNV(nv);
    cout<<"Tuoi cua nhan vien la "<<tinhTuoi(nv)<<endl;
    cout<<"Tham nien lam viec cua nhan vien la "<<thamNienLamViec(nv)<<endl;
    return 0;
}

void nhapNV(NhanVien &nv) {
    cout<<"Nhap ma nhan vien: ";
    cin>>nv.maNV;
    cin.ignore();
    cout<<"Nhap ho ten cua nhan vien: ";
    getline(cin, nv.hoTen);
    cout<<"Nhap nam sinh cua nhan vien: ";
    cin>>nv.namSinh;
    cin.ignore();
    cout<<"Nhap nam vao lam cua nhan vien: ";
    cin>>nv.namVaoLam;
}

void xuatNV(NhanVien &nv) {
    cout<<"==============================\n";
    cout<<"Ma nhan vien: "<<nv.maNV<<endl;
    cout<<"Ho ten nhan vien: "<<nv.hoTen<<endl;
    cout<<"Nam sinh cua nhan vien: "<<nv.namSinh<<endl;
    cout<<"Nam vao lam cua nhan vien: "<<nv.namVaoLam<<endl;
}
int tinhTuoi(NhanVien nv) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    return (1900 + ltm->tm_year) - nv.namSinh;
}

int thamNienLamViec(NhanVien nv) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    return (1900 + ltm->tm_year) - nv.namVaoLam;
}