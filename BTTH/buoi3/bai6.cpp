#include <iostream>
using namespace std;

void input(int *arr, int n);
void output(int *arr, int n);
void reverse(int *arr, int n);

int main() {
    int n;
    cout<<"Nhap so phan tu cua mang 1 chieu: ";
    cin>>n;
    int *arr = new int[n];
    input(arr, n);
    output(arr, n);
    reverse(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}

void input(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 20 + 1;
    }
}

void output(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }  
    cout<<endl; 
}

void reverse(int *arr, int n) {
    int tmp;
    for(int i = 0; i < n; i++) {
        tmp = arr[n - 1];
        arr[n - 1 ] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    } 
    output(arr, n);   
}