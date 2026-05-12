#include <iostream>
using namespace std;

int S1(int n);
long S2(int n);
double S3 (int n);
long giaiThua(int n);
long S4(int n);

int main() {
    int n;
    cout<<"Nhap so nguyen duong n: ";
    cin>>n;
    cout<<"Tong tu 1 den n = "<<S1(n)<<endl;
    cout<<"Tong binh phuong tu 1 den n = "<<S2(n)<<endl;
    cout<<"Tonng cac phan tu le nghich dao tu 1 den n = "<<S3(n)<<endl;
    cout<<"Tong giai thu tu 1 den n = "<<S4(n)<<endl;
    return 0;
}

int S1(int n) {
    if(n == 1)
        return 1;
    return n + S1(n - 1);
}

long S2(int n) {
    if(n == 1)
        return 1;
    return n*n + S2(n-1);
}

double S3 (int n) {
    if(n == 1) 
        return 1;
    return 1.0/n + S3(n - 2);
}

long giaiThua(int n) {
    if(n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

long S4(int n) {
    if(n == 1) 
        return 1;
    return giaiThua(n) + S4(n - 1);
}