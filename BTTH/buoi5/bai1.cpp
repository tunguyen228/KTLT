#include <iostream>
using namespace std;

struct PhanSo {
    int tuSo;
    int mauSo;
};

void nhapPS(PhanSo &ps1, PhanSo &ps2);
int UCLN(int a, int b);
void tinhTong(PhanSo ps1, PhanSo ps2);
void tinhHieu(PhanSo ps1, PhanSo ps2);
void tinhTich(PhanSo ps1, PhanSo ps2);
void tinhThuong(PhanSo ps1, PhanSo ps2);
void rutGonPS(PhanSo &ps);

int main() {
    int choice;
    PhanSo ps1, ps2;

    nhapPS(ps1, ps2);
    do {
        cout<<"1. Tinh tong 2 phan so\n";
        cout<<"2. Tinh hieu 2 phan so\n";
        cout<<"3. Tinh tich 2 phan so\n";
        cout<<"4. Tinh thuong 2 phan so\n";
        cout<<"Nhap lua chon: ";
        cin>>choice;
        switch(choice) {
            case 0: 
                cout<<"Cam on ban da su dung chuong trinh\n";
                break;
            case 1:
                cout<<"1. Tinh tong 2 phan so\n";
                cout<<ps1.tuSo<<"/"<<ps1.mauSo<<" + "<<ps2.tuSo<<"/"<<ps2.mauSo<<" = ";
                tinhTong(ps1, ps2);
                break;
            case 2:
                cout<<"2. Tinh hieu 2 phan so\n";
                cout<<ps1.tuSo<<"/"<<ps1.mauSo<<" - "<<ps2.tuSo<<"/"<<ps2.mauSo<<" = ";
                tinhHieu(ps1, ps2);
                break;
            case 3:
                cout<<"3. Tinh tich 2 phan so\n";
                cout<<ps1.tuSo<<"/"<<ps1.mauSo<<" * "<<ps2.tuSo<<"/"<<ps2.mauSo<<" = ";
                tinhTich(ps1, ps2);
                break;
            case 4:
                cout<<"4. Tinh thuong 2 phan so\n";
                cout<<ps1.tuSo<<"/"<<ps1.mauSo<<" / "<<ps2.tuSo<<"/"<<ps2.mauSo<<" = ";
                tinhThuong(ps1, ps2);
                break;
            default:
                cout<<"Lua chon khong hop le!Nhap lai\n";
                break;
        }
    }while(choice != 0);
    return 0;
}

void nhapPS(PhanSo &ps1, PhanSo &ps2) {
    do {
        cout<<"Nhap tu so va mau cho phan so thu nhat: ";
        cin>>ps1.tuSo>>ps1.mauSo;
        if(ps1.mauSo == 0) 
            cout<<"Mau so phai khac 0\n";
    }while(ps1.mauSo == 0);
    do {
        cout<<"Nhap tu so va mau cho phan so thu hai: ";
        cin>>ps2.tuSo>>ps2.mauSo;
        if(ps2.mauSo == 0) 
            cout<<"Mau so phai khac 0\n";
    }while(ps2.mauSo == 0);
}

int UCLN(int a, int b) {
    if(b == 0)
        return a;
    return UCLN(b, a % b);
}

void rutGonPS(PhanSo &ps) {
    int kq = UCLN(ps.mauSo, ps.tuSo);
    ps.tuSo = ps.tuSo / kq;
    ps.mauSo = ps.mauSo / kq;
}

void tinhTong(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    if(ps1.mauSo == ps2.mauSo) {
        ps3.tuSo = ps1.tuSo + ps2.tuSo;
        ps3.mauSo = ps1.mauSo;
    }else {
        ps3.tuSo = ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2.tuSo;
        ps3.mauSo = ps1.mauSo *ps2.mauSo;
    }
    rutGonPS(ps3);
    cout<<ps3.tuSo<<"/"<<ps3.mauSo<<endl;
}

void tinhHieu(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    if(ps1.mauSo == ps2.mauSo) {
        ps3.tuSo = ps1.tuSo - ps2.tuSo;
        ps3.mauSo = ps1.mauSo;
    }else {
        ps3.tuSo = ps1.tuSo * ps2.mauSo - ps1.mauSo * ps2.tuSo;
        ps3.mauSo = ps1.mauSo *ps2.mauSo;
    }
    rutGonPS(ps3);
    cout<<ps3.tuSo<<"/"<<ps3.mauSo<<endl;
}

void tinhTich(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    ps3.tuSo = ps1.tuSo * ps2.tuSo;
    ps3.mauSo = ps1.mauSo *ps2.mauSo;
    rutGonPS(ps3);
    cout<<ps3.tuSo<<"/"<<ps3.mauSo<<endl;
}

void tinhThuong(PhanSo ps1, PhanSo ps2) {
    PhanSo ps3;
    ps3.tuSo = ps1.tuSo * ps2.mauSo;
    ps3.mauSo = ps1.mauSo *ps2.tuSo;
    rutGonPS(ps3);
    cout<<ps3.tuSo<<"/"<<ps3.mauSo<<endl;
}
