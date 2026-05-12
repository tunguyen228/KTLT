#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 5;

void nhapMang(int arr[MAX][MAX], int r, int c);
void xuatMang(int arr[MAX][MAX], int r, int c);
double avg(int arr[MAX][MAX], int r, int c);
bool timX(int arr[MAX][MAX], int r, int c, int x, int &dH, int &dC);
void swap(int &a, int &b);
void hoanDoi(int arr[MAX][MAX], int r, int c, int a, int b);
long tichCot(int arr[MAX][MAX], int r, int c, int tichC);

int main() {
    int arr[MAX][MAX];
    int r, c, x, dH, dC, a, b, tichC;

    cout<<"Nhap so hang va so cot: ";
    cin>>r>>c;
    nhapMang(arr, r, c);

    xuatMang(arr, r, c);

    cout<<"Trung binh cong cua mang = "<<avg(arr, r, c)<<endl;;

    cout<<"Nhap so can tim trong mang: ";
    cin>>x;
    if(timX(arr, r, c, x, dH, dC)) {
        cout<<"Vi tri cua x o hang "<<dH<<" - cot "<<dC<<endl;
    } else {
        cout<<"So can tim khong xuat hien trong mang\n";
    }

    cout<<"Nhap 2 so muon hoan doi: ";
    cin>>a>>b;
    hoanDoi(arr, r, c, a, b);
    xuatMang(arr, r, c);

    cout<<"Nhap cot muon tinh tich: ";
    cin>>tichC;
    cout<<"Ket qua tich o cot "<<tichC<<" = "<<tichCot(arr, r, c, tichC);

    return 0;
}

void nhapMang(int arr[MAX][MAX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<"Nhap arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
}

void xuatMang(int arr[MAX][MAX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    } 
}

double avg(int arr[MAX][MAX], int r, int c) {
    double sum = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    } 
    return sum / (r * c);
}  

bool timX(int arr[MAX][MAX], int r, int c, int x, int &dH, int &dC) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] == x) {
                dH = i;
                dC = j;
                return true;
            }
        }
    } 
    return false;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void hoanDoi(int arr[MAX][MAX], int r, int c, int a, int b) {
    int rA, cA, rB, cB;
    if(timX(arr, r, c, a, rA, cA) && timX(arr, r, c, b, rB, cB)) {
        swap(arr[rA][cA], arr[rB][cB]);
    } else {
        cout<<"So khong hop le\n";
    } 
}

long tichCot(int arr[MAX][MAX], int r, int c, int tichC) {
    long tich = 1;
    for(int i = 0; i < r; i++) {
        tich *= arr[i][tichC];
    } 
    return tich;
}