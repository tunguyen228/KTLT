#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct SanPham {
    char maSP[5];
    char tenSP[20];
    double gia;
};

void timKiem(SanPham *arr, int n, int viTri);

int main() {
    int n, viTri;
    cout<<"So luong san pham: ";
    cin>>n;
    cin.ignore();
    SanPham *arr = new SanPham[n];

    for(int i = 0; i < n; i++) {
        cout<<"Ma san pham: ";
        cin.get(arr[i].maSP, 5);
        cin.ignore();
        cout<<"Ten SP: ";
        cin.get(arr[i].tenSP, 20);
        cin.ignore();
        cout<<"Don gia: ";
        cin>>arr[i].gia;
        cin.ignore();
    }

    ofstream outFile("product.txt");
    outFile<<"So luong san pham: "<<n<<endl;
    if(outFile.is_open()) {
        for(int i = 0; i < n; i++) {
        outFile<<"MaSP: "<<arr[i].maSP<<endl;
        outFile<<"Ten SP: "<<arr[i].tenSP<<endl;
        outFile<<"Don gia: "<<arr[i].gia<<endl;
        }
        outFile.close();
    }

    ifstream inFile("product.txt");
    if(inFile.is_open()) {
        for(int i = 0; i < n; i++) {
            inFile>>arr[i].maSP;
            inFile>>arr[i].tenSP;
            inFile>>arr[i].gia;
        }
        inFile.close();
    }

    do {
        cout<<"Nhap vi tri can doc (tu 1 -> "<<n<<"): ";
        cin>>viTri;
        if(viTri <= 0 || viTri > n) {
            cout<<"Nhap lai\n";
        }
    }while(viTri <= 0 || viTri > n);
    cout<<"Thong tin san pham\n";
    timKiem(arr, n, viTri);

    delete[] arr;
    arr = NULL;
    return 0;
}

void timKiem(SanPham *arr, int n, int viTri) {
    for(int i = 0; i < n; i++) {
        if(i == viTri - 1) {
            cout<<"Ma SP: "<<arr[i].maSP<<endl;
            cout<<"Ten SP: "<<arr[i].tenSP<<endl;
            cout<<"Don gia: "<<arr[i].gia<<endl;
        }
    }
}