#include <iostream>
#include <fstream>
using namespace std;

struct SinhVien {
    string MaSV;
    string hoTen;
    int namSinh;
};

int timKiem(SinhVien *arr, int n, string masv);

int main() {
    int n;
    SinhVien sv;
    string maSV;

    ifstream inFile("student.txt");
    inFile>>n;
    inFile.ignore();
    SinhVien *arr = new SinhVien[n];
    if(inFile.is_open()) {
        for(int i = 0; i < n; i++) {
            getline(inFile, arr[i].MaSV, '#');
            getline(inFile, arr[i].hoTen, '#');
            inFile>>arr[i].namSinh;
            inFile.ignore();
        }
        inFile.close();
    }
    
    cout<<"Nhap ma sinh vien can tim kiem: ";
    cin>>maSV;
    int kq = timKiem(arr, n, maSV);
    if(kq != -1) {
        cout<<"Thong tin tim kiem\n";
        cout<<arr[kq].MaSV<<"\t"<<arr[kq].hoTen<<"\t"<<arr[kq].namSinh<<endl;
    } else {
        cout<<"Khong co thong tin sinh vien\n";
    }

    delete[] arr;
    arr = NULL;
    return 0;
}

int timKiem(SinhVien *arr, int n, string masv) {
    for(int i = 0; i < n; i++) {
        if(arr[i].MaSV == masv) {
            return i;
        }
    }
    return -1;
}