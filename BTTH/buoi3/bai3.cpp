#include <iostream>
using namespace std;

int UCLN(int a, int b);

int main() {
    int *p = new int;
    int *q = new int;
    cout<<"Nhap so nguyen thu nhat: ";
    cin>>*p;
    cout<<"Nhap so nguyen thu 2: ";
    cin>>*q;
    cout<<"Uoc chung lon nhat cua a va b la "<<UCLN(*q, *p);

    delete q, p;
    q = NULL;
    p = NULL;
    return 0;
}

int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return (b, a % b);
}