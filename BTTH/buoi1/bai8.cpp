#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
const int MAX = 5;

void khoiTao(int arr[MAX][MAX], int n);
void xuatMang(int arr[MAX][MAX], int n);
void tongMang(int arr[MAX][MAX], int brr[MAX][MAX], int n);
void tichMang(int arr[MAX][MAX], int brr[MAX][MAX], int n);

int main() {
    int arr[MAX][MAX], brr[MAX][MAX], n;
    srand(time(0));

    cout<<"Nhap cap n: ";
    cin>>n;
    cout<<"Ma tran 1:\n";
    khoiTao(arr, n);
    xuatMang(arr, n);
    cout<<"Ma tran 2:\n";
    khoiTao(brr, n);
    xuatMang(brr, n);

    cout<<"Tong 2 ma tran\n";
    tongMang(arr, brr, n);
    cout<<"Tich 2 ma tran\n";
    tichMang(arr, brr, n);

    return 0;
}

void khoiTao(int arr[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = rand() % 30 + 1;
        }
    }
}

void xuatMang(int arr[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    }
}

void tongMang(int arr[MAX][MAX], int brr[MAX][MAX], int n) {
    int tong[MAX][MAX];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tong[i][j] = arr[i][j] + brr[i][j];
        }
    }   
    xuatMang(tong, n);
}
void tichMang(int arr[MAX][MAX], int brr[MAX][MAX], int n) {
    int tich[MAX][MAX] = {1};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tich[i][j] = arr[i][j] * brr[i][j];
        }
    }  
    xuatMang(tich, n);
}