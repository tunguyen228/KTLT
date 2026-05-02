#include <iostream>
#include <cstring>
using namespace std;
#define MAX 10

struct SanPham {
    char maSP[MAX];
    string tenSP;
    double donGia;
    int slTonKho;
};

void nhapSP(SanPham *arr, int n);
void xuatSP(SanPham *arr, int n);
void suaSP(SanPham *arr, int n, char maSP[]);
void xoaSP(SanPham *arr, int &n, char maSP[]);
void sapxepSP(SanPham *arr, int n);

int main() {
    int n, choice;
    char maSP[MAX];

    cout<<"Nhap so luong san pham muon nhap: ";
    cin>>n;
    SanPham *arr = new SanPham[n];

    nhapSP(arr, n);
    xuatSP(arr, n);

    do {
        cout<<"========================\n";
        cout<<"1. Sua san pham\n";
        cout<<"2. Xoa san pham\n";
        cout<<"3. Sap xep san pham\n";
        cout<<"Nhap lua chon: ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"1. Sua san pham\n";
                cout<<"Nhap ma san pham muon sua: ";
                cin>>maSP;
                suaSP(arr, n, maSP);
                xuatSP(arr, n);
                break;
            case 2: 
                cout<<"2. Xoa san pham\n";
                cout<<"Nhap ma san pham muon xoa: ";
                cin>>maSP;
                xoaSP(arr, n, maSP);
                xuatSP(arr, n);
                break;
            case 3:
                cout<<"3. Sap xep san pham\n";
                sapxepSP(arr, n);
                break;
            case 0:
                cout<<"Cam on ban da su dung chuong trinh\n";
                break;
            default:
                break;
        }
    }while(choice != 0);

    delete[] arr;
    arr = NULL;
    return 0;
}

void nhapSP(SanPham *arr, int n) {
    for(int i = 0; i < n; i++) {
        cin.ignore();
        cout<<"= = = Nhap san pham thu "<<i + 1<<"= = =\n";
        cout<<"Nhap ma san pham: ";
        cin>>arr[i].maSP;
        cin.ignore();
        cout<<"Nhap ten san pham: ";
        getline(cin, arr[i].tenSP);
        cout<<"Nhap don gia: ";
        cin>>arr[i].donGia;
        cin.ignore();
        cout<<"Nhap so luong ton kho: ";
        cin>>arr[i].slTonKho;
    }
}

void xuatSP(SanPham *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout<<"========================\n";
        cout<<"Ma san pham: "<< arr[i].maSP<<endl;
        cout<<"Ten san pham: "<< arr[i].tenSP<<endl;
        cout<<"Don gia: "<< arr[i].donGia<<endl;
        cout<<"So luong ton kho: "<< arr[i].slTonKho<<endl;
    }
}
void suaSP(SanPham *arr, int n, char maSP[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(arr[i].maSP, maSP) == 0) {
            cout<<"Nhap ma san pham: ";
            cin>>arr[i].maSP;
            cin.ignore();
            cout<<"Nhap ten san pham: ";
            getline(cin, arr[i].tenSP);
            cout<<"Nhap don gia: ";
            cin>>arr[i].donGia;
            cin.ignore();
            cout<<"Nhap so luong ton kho: ";
            cin>>arr[i].slTonKho;
            return;
        }
    }
    cout<<"Khong tim thay san pham\n";
}

void xoaSP(SanPham *arr, int &n, char maSP[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(arr[i].maSP, maSP) == 0) {
            for(int j = i; j < n - 1; j++) {
                arr[i] = arr[j + 1];
            }
            n--;
            return;
        }
    }
    cout<<"Khong tim thay san pham\n";
}

void sapxepSP(SanPham *arr, int n) {
    SanPham tmp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i].slTonKho > arr[j].slTonKho) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
        
    }
    xuatSP(arr, n);
}

