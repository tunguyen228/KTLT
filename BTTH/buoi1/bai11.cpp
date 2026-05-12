#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 13;
const int MAX_COL = 6;

void khoiTaoMang(char arr[MAX_ROW][MAX_COL]);
void xuatMang(char arr[MAX_ROW][MAX_COL]);
bool kiemTraHangGhe(int choice, int hangGhe);
bool kiemTraGhe(char soGhe);
void datGhe(char arr[MAX_ROW][MAX_COL], char soGhe, int hangGhe);

int main() {
    char arr[MAX_ROW][MAX_COL];
    int choice, hangGhe;
    char soGhe;

    khoiTaoMang(arr);
    xuatMang(arr);

    do {
        cout<<"=== LOAI VE ===\n";
        cout<<"1. Hang thuong gia\n";
        cout<<"2. Hanng pho thong\n";
        cout<<"3. Hang tiet kiem\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Nhap lua chon: ";
        cin>>choice;
        switch(choice) {
            case 0: 
                cout<<"Cam on ban da su dung chuong trinh\n";
                break;
            case 1:
                cout<<"--- Hang thuong gia ---\n";
                do {
                    cout<<"Nhap hang ghe (hang 1 -> hang 2): ";
                    cin>>hangGhe;
                    if(!kiemTraHangGhe(choice, hangGhe)) {
                        cout<<"Nhap lai hang ghe!\n";
                    }
                }while(!kiemTraHangGhe(choice, hangGhe));
                do {
                    cout<<"Nhap so ghe: ";
                    cin>>soGhe;
                    if(!kiemTraGhe(soGhe)) {
                        cout<<"Nhap lai so ghe!\n";
                    }
                }while(!kiemTraGhe(soGhe));
                datGhe(arr, soGhe, hangGhe);
                xuatMang(arr);
                break;
            case 2:
                cout<<"--- Hang phong thong ---\n";
                do {
                    cout<<"Nhap hang ghe (hang 3 -> hang 7): ";
                    cin>>hangGhe;
                    if(!kiemTraHangGhe(choice, hangGhe)) {
                        cout<<"Nhap lai hang ghe!\n";
                    }
                }while(!kiemTraHangGhe(choice, hangGhe));
                do {
                    cout<<"Nhap so ghe: ";
                    cin>>soGhe;
                    if(!kiemTraGhe(soGhe)) {
                        cout<<"Nhap lai so ghe!\n";
                    }
                }while(!kiemTraGhe(soGhe));
                datGhe(arr, soGhe, hangGhe);
                xuatMang(arr);
                break;
            case 3:
                cout<<"--- Hang tiet kiem ---\n";
                do {
                    cout<<"Nhap hang ghe (hang 8 -> hang 13): ";
                    cin>>hangGhe;
                    if(!kiemTraHangGhe(choice, hangGhe)) {
                        cout<<"Nhap lai hang ghe!\n";
                    }
                }while(!kiemTraHangGhe(choice, hangGhe));
                do {
                    cout<<"Nhap so ghe: ";
                    cin>>soGhe;
                    if(!kiemTraGhe(soGhe)) {
                        cout<<"Nhap lai so ghe!\n";
                    }
                }while(!kiemTraGhe(soGhe));
                datGhe(arr, soGhe, hangGhe);
                xuatMang(arr);
                break;
            default:
                cout<<"Lua chon khong hop le!\n";
                break;
            }
    }while(choice != 0);

    return 0;
}

void khoiTaoMang(char arr[MAX_ROW][MAX_COL]) {
    for(int i = 0; i < MAX_ROW; i++) {
        for(int j = 0; j < MAX_COL; j++) {
            arr[i][j] = '*';
        }
    }
}

void xuatMang(char arr[MAX_ROW][MAX_COL]) {
    cout<<setw(7)<<" ";
    for(char ghe = 'A'; ghe <= 'F'; ghe++) {
        cout<<setw(5)<<ghe;
    }
    cout<<endl;
    for(int i = 0; i < MAX_ROW; i++) {
        cout<<"Hang "<<setw(2)<<i + 1;
        for(int j = 0; j < MAX_COL; j++) {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
}

bool kiemTraHangGhe(int choice, int hangGhe) {
    if(choice == 1) {
        if(hangGhe == 1 || hangGhe == 2) {
            return true;
        }
    } else if(choice == 2) {
        if(hangGhe >= 3 && hangGhe <= 7) {
            return true;
        }
    } else if (choice == 3) {
        if(hangGhe >= 8 && hangGhe <= 13) {
            return true;
        }
    }
    return false;
}

bool kiemTraGhe(char soGhe) {
    if(soGhe >= 'A' && soGhe <= 'F') {
        return true;
    }
    return false;
}

void datGhe(char arr[MAX_ROW][MAX_COL], char soGhe, int hangGhe) {
    int cot = soGhe - 'A';
    int hang = hangGhe - 1;
    for(int i = 0; i < MAX_ROW; i++) {
        for(int j = 0; j < MAX_COL; j++) {
            arr[hang][cot] = 'X';
        }
    }
}