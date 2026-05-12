#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 30;

int main() {
    int arr[MAX], n;
    int *p = arr;
    srand(time(0));

    cin>>n;

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10 + 1; //*(p + i) = rand() % 10 + 1;
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<*(p + i)<<"\t";
    } 

    delete[] arr;
    return 0;
}