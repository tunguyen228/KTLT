#include <iostream>
using namespace std;

int tongMang(int arr[], int n);

int main() {
    const int MAX = 10;
    int arr[MAX], n;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i = 0; i<n; i++) {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i = 0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<tongMang(arr, n);
    return 0;
}

int tongMang(int arr[], int n){
    if(n == 0)
        return 0;
    return arr[n-1] + tongMang(arr, n-1);
}