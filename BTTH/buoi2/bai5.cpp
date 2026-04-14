#include <iostream>
using namespace std;

int demSo(int n);

int main() {
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<n<<" co "<<demSo(n)<<" chu so"<<endl;
    return 0;
}

int demSo(int n) {
    if(n<10) 
        return 1;
    return 1 + demSo(n/10);
}