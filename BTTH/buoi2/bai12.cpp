#include <iostream>
using namespace std;

int timGTNN(int arr[], int n);

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
    cout<<timGTNN(arr, n);
    return 0;
}

int timGTNN(int arr[], int n){
    if(n == 1) {
        return arr[0];
    }
    int min = timGTNN(arr, n - 1);
    if(arr[n-1] < min) {
        return arr[n-1];
    } else {
        return min;
    }
    
}