#include <iostream>
using namespace std;

int main() {
    int x, y;
    int *p;
    p = &x;
    *p = 80;
    cout<<"Dia chi cua bien x la "<< &x<<endl;
    cout<<"Dia chi luu trong con tro p la "<<p<<endl;
    cout<<"Gia tri cua bien ma con tro p tro den la "<<*p<<endl;
    cout<<"Gia tri cua bien x la "<<x<<endl;

    delete p;
    p = NULL;
    return 0;
}