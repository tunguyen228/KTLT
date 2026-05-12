#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct SinhVien {
    string MaSV;
    string hoTen;
    int namSinh;
};

int main() {
    int n;
    SinhVien sv;
    cout<<"So luong sinh vien muon nhap: ";
    cin>>n;
    cin.ignore();
    SinhVien *arr = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        cout<<"= = = Nhap sinh vien thu "<<i+1<<" = = =\n";
        cout<<"Nhap ma sinh vien: ";
        cin>>arr[i].MaSV;
        cin.ignore();
        cout<<"Nhap ho va ten: ";
        getline(cin, arr[i].hoTen);
        cout<<"Nhap nam sinh: ";
        cin>>arr[i].namSinh;
    }
    ofstream outFile ("student.txt");
    if(outFile.is_open()) {
        if(outFile.is_open()) {
            outFile<<n<<endl;
            for(int i = 0; i < n; i++) {
                outFile<<arr[i].MaSV<<"#"<<arr[i].hoTen<<"#"<<arr[i].namSinh<<endl;
            }
            outFile.close();
        }
    }   
    delete[] arr;
    arr = NULL;
    return 0;
}