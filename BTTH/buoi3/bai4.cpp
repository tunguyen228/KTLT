#include <iostream>
#include <ctime>
using namespace std;
const int MAX = 30;

void input(int *arr, int n);
void output(int *arr, int n);
void outputOdd(int *arr, int n);
int *maxP(int *arr, int n);

int main() {
    int n;
    srand(time(0));
    cout<<"Nhap so phan tu cho mang 1 chieu: ";
    cin>>n;
    int *arr = new int[n];
    input(arr, n);
    output(arr, n);
    cout<<"==================\n";
    outputOdd(arr, n);
    cout<<"Phan tu lon nhat trong mang co dia chi la: "<<*maxP(arr, n)<<endl;

    delete[] arr;
    arr = NULL;
    return 0;
}

void input(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 30;
    }
}

void output(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout<<*(arr + i)<<"\t";
    }
    cout<<endl;
}

void outputOdd(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        if(*(arr + i) % 2 != 0) {
            cout<<*(arr + i)<<"\t";
        }
    }
    cout<<endl;
}

int *maxP(int *arr, int n) {
    int max = arr[0];
    int *p = NULL;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            p = &arr[i];
        }
    }
    return p;
}