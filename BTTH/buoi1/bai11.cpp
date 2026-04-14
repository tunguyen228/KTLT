#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_ROW = 13, MAX_COL = 6;

void khoiTao(char arr[MAX_ROW][MAX_COL]);
void datVe(char arr[MAX_ROW][MAX_COL], int rowIndex, int colIndex);

int main() {
	char arr[MAX_ROW][MAX_COL];
    int n, rowIndex, colIndex;
    char y;
    int choice;

    khoiTao(arr);
    cout<<"= = = SO DO GHE MAY BAY = = =\n";
    cout << setw(7) << " "; 
    for (char c = 'A'; c <= 'F'; c++) {
        cout << setw(6) << c; 
    }
    cout << endl;
    for(int i = 0; i < MAX_ROW; i++) {
        cout<<"Hang "<<setw(2)<<i + 1;
        for (int j = 0; j < MAX_COL; j++) {
            cout<<setw(6)<<arr[i][j];
        }
        cout<<endl;
    }
    do {
        cout<<"= = = Nhap loai ve muon mua = = =\n";
        cout<<"0. Ve hang thuong gia (hang 1 & hang 2)\n";
        cout<<"1. Ve hang pho thong (hang 3 -> hang 7)\n";
        cout<<"2. Ve hang tiet kiem (hang 8 -> hang 13)\n";
        cout<<"Nhap lua chon: ";
        cin>>n;
        switch (n) {
            case 0: 
                cout<<"= = = Ve hang thuong gia = = =\n";
                do {
                    cout<<"Chon vi tri (hang 1 & hang 2): ";
                    cin>>rowIndex>>y;
                    y = toupper(y);
                    colIndex = y - 'A';
                    if(rowIndex > 2 || rowIndex < 1) {
                        cout<<"Sai hang ghe hoac so ghe quy dinh.Vui long nhap lai\n";
                    }
                } while (rowIndex > 2 || rowIndex < 1);
                datVe(arr, rowIndex, colIndex);
                break;

            case 1: 
                cout<<"= = = Ve hang pho thong = = =\n";
                do {
                    cout<<"Chon vi tri (hang 3 -> hang 7): ";
                    cin>>rowIndex>>y;
                    y = toupper(y);
                    colIndex = y - 'A';
                    if(rowIndex > 7 || rowIndex < 3) {
                        cout<<"Sai hang ghe hoac so ghe quy dinh.Vui long nhap lai\n";
                    }
                } while (rowIndex > 7 || rowIndex < 3);
                datVe(arr, rowIndex, colIndex);
                break;

            case 2: 
                cout<<"= = = Ve hang tiet kiem = = =\n";
                do {
                    cout<<"Chon vi tri (hang 8 -> hang 13): ";
                    cin>>rowIndex>>y;
                    y = toupper(y);
                    colIndex = y - 'A';
                    if(rowIndex > 13 || rowIndex < 8) {
                        cout<<"Sai hang ghe hoac so ghe quy dinh.Vui long nhap lai\n";
                    }
                } while (rowIndex > 13 || rowIndex < 8);
                datVe(arr, rowIndex, colIndex);
                break;
        }
        cout<<"Tiep tuc dat ve (1 / 0): ";
        cin>>choice;
        if(choice != 1)
            cout<<"Cam on ban da su dung chuong trinh\n";
    } while(choice == 1);
	return 0;
}

void khoiTao(char arr[MAX_ROW][MAX_COL]) {
    for(int i = 0; i < MAX_ROW; i++) {
        for (int j = 0; j < MAX_COL; j++) {
            arr[i][j] = '*';
        }
    }
}

void datVe(char arr[MAX_ROW][MAX_COL], int rowIndex, int colIndex) {
    arr[rowIndex-1][colIndex] = 'X';
    cout<<"= = = SO DO GHE MAY BAY = = =\n";
    cout << setw(7) << " "; 
    for (char c = 'A'; c <= 'F'; c++) {
        cout << setw(6) << c; 
    }
    cout << endl;

    for(int i = 0; i < MAX_ROW; i++) {
        cout<<"Hang "<<setw(2)<<i + 1;
        for(int j = 0; j < MAX_COL; j++) {
            cout<<setw(6)<<arr[i][j];
        }
        cout<<endl;
    }
}