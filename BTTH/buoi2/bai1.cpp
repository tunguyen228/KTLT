#include <iostream>
using namespace std;

int tinhTong(int n);
int tongBinhPhuong(int n);
double tongThapPhan(int n);
int giaiThua(int n);
int tongGiaiThua(int n);

int main() {
    int n;
    char choice;
    do {
        cout<<"= = = M E N U = = =\n";
        cout<<"1. Tinh tong tu 1 den n\n";
        cout<<"2. Tinh tong binh phuong tu 1 den n\n";
        cout<<"3. Tinh tong thap phan tu 1 den n\n";
        cout<<"4. Tinh tong giai thua tu 1 den n\n";
        cout<<">>> Nhap lua chon: ";
        cin>>n;
        switch (n) {
            case 1:
                int a;
                cout<<"1. Tinh tong tu 1 den n\n";
                cout<<"Nhap n: ";
                cin>>a;
                cout<<"Tong tu 1 den "<<a<<" la: "<<tinhTong(a)<<endl;
                break;
            case 2:
                int b;
                cout<<"2. Tinh tong binh phuong tu 1 den n\n";
                cout<<"Nhap n: ";
                cin>>b;
                cout<<"Tong binh phuong tu 1 den "<<b<<" la: "<<tongBinhPhuong(b)<<endl;
                break;
            case 3:
                int c;
                cout<<"3. Tinh tong thap phan tu 1 den n\n";
                do {
                    cout<<"Nhap n (n la so le > 0): ";
                    cin>>c;
                    if(n % 2 == 0 || n <= 0)
                        cout<<"Nhap lai n\n";
                }while(n % 2 == 0 || n <= 0);
                cout<<"Tong thap phan tu 1 den "<<c<<" la: "<<tongThapPhan(c)<<endl;
                break;
            case 4:
                int d;
                cout<<"4. Tinh tong giai thua tu 1 den n\n";
                cout<<"Nhap n: ";
                cin>>d;
                cout<<"Tong giai thua tu 1 den "<<d<<" la: "<<tongGiaiThua(d)<<endl;
                break;
            default:
                break;
        }
        cout<<"Ban co muon tiep tuc chuong trinh (Y/N): ";
        cin>>choice;
        if(choice == 'N' || choice == 'n') {
            cout<<"Cam on ban da su dung chuong trinh\n";
        }
    }while (choice == 'Y' || choice == 'y');
    return 0;
}

int tinhTong(int n) {
    if(n == 1) 
        return 1;
    return n + tinhTong(n - 1);
}

int tongBinhPhuong(int n) {
    if(n == 1) 
        return 1;
    return n*n + tongBinhPhuong(n - 1);
}

double tongThapPhan(int n) {
    if(n == 1) 
        return 1;
    return 1/n + tongThapPhan(n - 1);
}

int giaiThua(int n) {
    if(n == 1) 
        return 1;
    return n * giaiThua(n - 1);
}

int tongGiaiThua(int n) {
    if(n == 1) 
        return 1;
    return giaiThua(n) + tongGiaiThua(n - 1);
}