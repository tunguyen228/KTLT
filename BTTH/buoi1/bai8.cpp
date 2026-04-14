#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 5;

void nhapMang(int a[MAX][MAX], int n);
void xuatMang(int a[MAX][MAX], int n);
void tong2MaTran(int a[MAX][MAX], int b[MAX][MAX], int tong[MAX][MAX], int n);
void tich2MaTran(int a[MAX][MAX], int b[MAX][MAX], int tich[MAX][MAX], int n);

int main() {
    srand(time(NULL));
    
    int a[MAX][MAX];
    int b[MAX][MAX];
    int tong[MAX][MAX];
    int tich[MAX][MAX];
    int n;

    cout<<"Nhap cap n cho ma trang vuong: ";
    cin>>n;
    nhapMang(a, n);
    nhapMang(b, n);

    cout<<"Ma tran thu 1:\n";
    xuatMang(a, n);
    cout<<"Ma tran thu 2:\n";
    xuatMang(b, n);
    cout<<"Tong 2 ma tran:\n";
    tong2MaTran(a, b, tong, n);
    xuatMang(tong, n);
    cout<<"Tich 2 ma tran:\n";
    tich2MaTran(a, b, tich, n);
    xuatMang(tich, n);

    return 0;
}

void nhapMang(int a[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = rand() % 30 + 1;
        }
    }
}

void xuatMang(int a[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<setw(4)<<a[i][j];
        }
        cout<<endl;
    }
}

void tong2MaTran(int a[MAX][MAX], int b[MAX][MAX], int tong[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tong[i][j] = a[i][j] + b[i][j];
        }
    }

}

void tich2MaTran(int a[MAX][MAX], int b[MAX][MAX], int tich[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tich[i][j] = a[i][j] * b[i][j];
        }
    }
}