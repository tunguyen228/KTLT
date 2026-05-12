#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int n;
    string s;

    cout<<"Nhap so chuoi: ";
    cin>>n;
    cin.ignore();

    ofstream outFile("string.txt");
    if(outFile.is_open()) {
        for(int i = 0; i < n; i++) {
            cout<<"Nhap chuoi thu "<<i + 1<<": ";
            getline(cin, s);
            outFile<<s<<endl;
        }
        outFile.close();
    }

    ifstream inFile("string.txt");
    ofstream outFile2("string2.txt");
    int stt = 1;
    while(getline(inFile, s)) {
        for(int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
        outFile2<<stt<<". "<<s<<endl;
        stt++;
    }
    inFile.close();
    outFile2.close();
    return 0;
}