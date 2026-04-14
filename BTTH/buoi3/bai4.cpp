#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Nhap so phan tu cho mang: ";
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }    
    cout<<"\nCac phan tu le trong mang: \n";
    for(int offset = 0; offset < n; offset++) {
        if(*(arr+offset) % 2 != 0) {
            cout<<*(arr+offset)<<"\t";
        }
    }
    cout<<endl;
    int max = arr[0];
    int *p = NULL;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
            p = &arr[i];
        }
    }
    cout<<"Dia chi cua phan tu lon nhat trong mang: "<<p<<endl;

    delete[] arr;
    arr = NULL;
    return 0;
}