#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout<<"Nhap cap cho ma tran vuong: ";
    cin>>n;
    int **a, **b, **tong, **tich;
    a = new int *[n];
    b = new int *[n];
    tong = new int *[n];
    tich = new int *[n];
    for(int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for(int i = 0; i < n; i++) {
        b[i] = new int[n];
    }
    for(int i = 0; i < n; i++) {
        tong[i] = new int[n];
    }
    for(int i = 0; i < n; i++) {
        tich[i] = new int[n];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = rand() % 20;
        }
    }  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            b[i][j] = rand() % 20;
        }
    } 

    cout<<"Mang thu nhat:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Mang thu hai:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tong[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"Tong 2 ma tran:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<tong[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            tich[i][j] = a[i][j] * b[i][j];
        }
    }
    cout<<"Tich 2 ma tran:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<tich[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++) {
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;
    return 0;
}