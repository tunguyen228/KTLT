#include <iostream>
using namespace std;
#define MAX 45

struct SinhVien {
    string maSV;
    string hoTen;
    double dToan;
    double dVan;
    double dNNgu;
};

void nhapSV(SinhVien &sv);
void nhapDSSV(SinhVien arr[MAX], int n);
void inSVtheoMaSV(SinhVien arr[MAX], int n, string maSV);
void inDSSV(SinhVien arr[MAX], int n);
bool timSV(SinhVien arr[MAX], int n, string maSV);
double DTB(SinhVien sv);
void xepLoai(SinhVien sv);

int main() {
    SinhVien arr[MAX];
    int n;

    cout<<"Nhap si so lop: ";
    cin>>n;
    nhapDSSV(arr, n);
    inDSSV(arr, n);
    return 0;
}

void nhapSV(SinhVien &sv) {
    cin.ignore();
    cout<<"Nhap ma so sinh vien: ";
    cin>>sv.maSV;
    cin.ignore();
    cout<<"Nhap ho ten sinh vien: ";
    getline(cin, sv.hoTen);
    cout<<"Nhap diem toan: ";
    cin>>sv.dToan;
    cin.ignore();
    cout<<"Nhap diem van: ";
    cin>>sv.dVan;
    cin.ignore();
    cout<<"Nhap diem ngoai ngu: ";
    cin>>sv.dNNgu;
}

void nhapDSSV(SinhVien arr[MAX], int n) {
    for(int i = 0; i < n; i++) {
        cout<<"= = = Nhap sinh vien thu "<<i + 1<<" = = =\n";
        nhapSV(arr[i]);
    }
}
void inSVtheoMaSV(SinhVien arr[MAX], int n, string maSV) {
    for(int i = 0; i < n; i++) {
        if(timSV(arr, n, maSV)) {
            cout<<"Ma sinh vien: "<<arr[i].maSV<<endl;
            cout<<"Ho ten sinh vien: "<<arr[i].hoTen<<endl;
            cout<<"Diem toan: "<<arr[i].dToan<<endl;
            cout<<"Diem van: "<<arr[i].dVan<<endl;
            cout<<"Diem ngoai ngu: "<<arr[i].dNNgu<<endl;
        } else {
            cout<<"Khong tim thay sinh vien\n";
        }
    }
}

void inDSSV(SinhVien arr[MAX], int n) {
    for(int i = 0; i < n; i++) {
        cout<<"===========================\n";
        cout<<"Ma sinh vien: "<<arr[i].maSV<<endl;
        cout<<"Ho ten sinh vien: "<<arr[i].hoTen<<endl;
        cout<<"Diem toan: "<<arr[i].dToan<<endl;
        cout<<"Diem van: "<<arr[i].dVan<<endl;
        cout<<"Diem ngoai ngu: "<<arr[i].dNNgu<<endl;
        cout<<"Diem trung binh = "<<DTB(arr[i])<<endl;
        cout<<"Xep loai ";
        xepLoai(arr[i]);
    }
}

bool timSV(SinhVien arr[MAX], int n, string maSV) {
    for(int i = 0; i < n; i++) {
        if(arr[i].maSV == maSV) {
            return true;
        }
    }
    return false;
}

double DTB(SinhVien sv) {
    return ((sv.dToan + sv.dVan) * 2 + sv.dNNgu) / 5;
}

void xepLoai(SinhVien sv) {
    if(DTB(sv) >= 8) {
        cout<<"Gioi\n";
    } else if(DTB(sv) >= 6.5) {
        cout<<"Kha\n";
    } else {
        cout<<"Trung binh\n";
    }
}