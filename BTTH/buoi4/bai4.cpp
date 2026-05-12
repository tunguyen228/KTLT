#include <iostream>
#include <string>
using namespace std;

string daoChuoi(string s);
int demSoTu(string s);
string chuanHoa(string s);

int main() {
    string s;
    cout<<"Nhap chuoi: ";
    getline(cin, s);
    cout<<"Chuoi sau khi dao: "<<daoChuoi(s)<<endl;
    cout<<"So tu trong chuoi: "<<demSoTu(s)<<endl;
    cout<<"Chuoi sau khi chuan hoa: "<<chuanHoa(s)<<endl;
    return 0;
}

string daoChuoi(string s) {
    int i = 0, j = s.length() - 1;
    while(i < j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return s;
}

int demSoTu(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            count++;
        }
    }
    return count;
}

string chuanHoa(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        if(i == 0 || s[i - 1] == ' ') {
            s[i] = toupper(s[i]);
        }
    }
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    while(s.length() > 0 && s[0] == ' ') {
        s.erase(0, 1);
    }
    while(s.length() > 0 && s[s.length() - 1] == ' ') {
        s.erase(s.length() - 1, 1);
    }  
    return s;
}