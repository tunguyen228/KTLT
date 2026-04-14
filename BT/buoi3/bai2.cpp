#include <iostream>
#include <iomanip>
using namespace std;

void dao(int arr[], int start, int end);

int main() {
    srand(time(0));
    const int MAX = 50;
    int arr[MAX];
    int n;

    cout<<"Nhap so phan tu cho mang: ";
    cin>>n; 

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 50 + 1;
    }

    cout<<"Mang ban dau:\n";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    dao(arr, 0, n-1);
    cout<<"\nMang sau khi dao:\n";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

void dao(int arr[], int start, int end) {
    if(start >= end) {
        return;
    } else {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;

        dao(arr, start + 1, end - 1);
    }
}