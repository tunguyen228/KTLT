#include <iostream>
using namespace std;

void pascal(int **arr, int h);
void output(int **arr, int h);

int main() {
    int h;
    cout<<"Nhap h: ";
    cin>>h;
    int **arr = new int *[h];
    for(int i = 0; i < h; i++) {
        arr[i] = new int[h];
    }
    pascal(arr, h);
    output(arr, h);
    for(int i = 0; i < h; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}

void pascal(int **arr, int h) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
}

void output(int **arr, int h) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}