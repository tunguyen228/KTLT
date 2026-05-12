#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s);

int main() {
    string s;
    cout<<"Nhap chuoi: ";
    cin>>s;
    if(palindrome(s)) {
        cout<<"Chuoi "<<s<<" la chuoi doi xung"<<endl;
    } else {
        cout<<"Chuoi "<<s<<" khong phai la chuoi doi xung"<<endl;
    }
    
    return 0;
}

bool palindrome(string s) {
    for(int i = 0; i < s.length()/2; i++) {
        if(tolower(s[i]) != tolower(s[s.length() - 1 - i])) {
            return false;
        }
    }
    return true;
}