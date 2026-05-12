#include <iostream>
using namespace std;

void output(int *arr, int n);
int timKiem(int *arr, int n, int x);

int main() {
    srand(time(0));
    int n, x;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    int *arr = new int[n];
    output(arr, n);
    cout<<"Nhap so can tim kiem: ";
    cin>>x;
    int kq = timKiem(arr, n, x);
    if(kq != -1) {
        cout<<"Vi tri so can tim la vi tri thu "<<kq<<endl;
    } else {
        cout<<"So can tim khong co trong mang\n";
    }
    
    delete[] arr;
    arr = NULL;
    return 0;
}

void output(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20 + 1;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int timKiem(int *arr, int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i + 1;
            break;
        }
    }
    return -1;
}