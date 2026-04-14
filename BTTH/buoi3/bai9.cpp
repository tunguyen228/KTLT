#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void input(int **&arr, int r, int c);
void output(int **arr, int r, int c);
bool snt(int n);
int tongSNT(int **arr, int r, int c);
int *inSNT(int **arr, int r, int c);

int main() {
    int r, c;
    cout<<"Nhap so dong cua mang: ";
    cin>>r;
    cout<<"Nhap so cot cua mang: ";
    cin>>c;

    int **arr = NULL;
    input(arr, r, c);
    output(arr, r, c);

    cout<<"Tong cac so nguyen to trong mang = "<<tongSNT(arr, r, c)<<endl;;
    
    int *arrP = inSNT(arr, r, c);
    cout<<"Cac SNT trong mang: ";
    for(int i = 0; ;i++) {
        if(arrP[i] == 0) break;
        cout<<setw(4)<<arrP[i];
    }

    for(int i = 0; i < r; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] arrP;
    return 0;
}

void input(int **&arr, int r, int c) {
    arr = new int *[r];
    for(int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
}

void output(int **arr, int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;  
}

bool snt(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int tongSNT(int **arr, int r, int c) {
    int sum = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(snt(arr[i][j])) {
                sum += arr[i][j];
            }
        }
    }
    return sum;    
}

int *inSNT(int **arr, int r, int c) {
    int *pArr = new int[r*c + 1]();
    int k = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(snt(arr[i][j])) {
                pArr[k++] = arr[i][j];
            }
        }
    }  
    return pArr; 
}