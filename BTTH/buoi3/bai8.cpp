#include <iostream>
#include <iomanip>
using namespace std;

void pascal(int **arr, int h);

int main() {
    int h;
    cout<<"Nhap cap cho ma tran vuong: ";
    cin>>h;
    int **arr;
    arr = new int *[h];
    for(int i = 0; i < h; i++) {
        arr[i] = new int [h]();
    }
    pascal(arr, h);
    for(int i = 0; i < h; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<endl;
    }   

    for(int i = 0; i < h; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

void pascal(int **arr, int h) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
}