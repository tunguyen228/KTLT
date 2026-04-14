#include <iostream>
using namespace std;

void fib(int n);

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    fib(n);
    return 0;
}

void fib(int n) {
    int *u, *v, *t;
    u = new int;
    v = new int;
    t = new int;
    *u = 0;
    *v = 1; 
    if(n == 0) return;
    if(n == 1) {
        cout<<"0\n";
        return;
    } 
    cout<<"0\t1";
    int i = 2;
    while(i < n) {
        *t = *u + *v;
        cout<<"\t"<<*t;
        *u = *v;
        *v = *t;
        i++;
    }
    delete u;
    delete v;
    delete t;
}