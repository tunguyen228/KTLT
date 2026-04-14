#include <iostream>
using namespace std;

int fib(int n);

int main() {
    int n;
    do {
        cout<<"Nhap so n: ";
        cin>>n;
        if(n <= 0) 
            cout<<"Nhap lai n>0\n";
    }while(n <= 0);
    cout<<"Fibonacci tu 1 den "<<n<<" la "<<fib(n)<<endl;
    return 0;
}

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}