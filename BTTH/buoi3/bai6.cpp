#include <iostream>
#include <ctime>
using namespace std;

void daoNguoc(int *arr, int n);

int main() {
    srand(time(0));
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nMang sau khi dao nguoc: \n";
    daoNguoc(arr, n);
    
    delete[] arr;
    arr = NULL;
    return 0;
}

void daoNguoc(int *arr, int n){
    for(int i = 0; i < n/2; i++) {
        int tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }
     for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    } 
}