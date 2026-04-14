#include <iostream>
#include <ctime>
using namespace std;

int timKiem(int *arr, int n, int x);

int main() {
    srand(time(0));
    int n, x;
    cout<<"Nhap n: ";
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nNhap so can tim trong mang: ";
    cin>>x;
    int viTri = timKiem(arr, n, x);
    if(viTri != -1) {
        cout<<"So can tim o vi tri thu : "<<viTri + 1<<endl;
    } else {
        cout<<"Khong co so can tim trong mang\n";
    }

    delete[] arr;
    arr = NULL;
    return 0;
}

int timKiem(int *arr, int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }  
    return -1;  
}

