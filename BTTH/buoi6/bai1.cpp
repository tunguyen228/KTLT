#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Nhap 3 so nguyen a b c: ";
    cin>>a>>b>>c;

    ofstream outFile ("songuyen.txt");
    if(outFile.is_open()) {
        outFile<<a<<"#"<<b<<"#"<<c;
        outFile.close();
    }

    int sum = 0;
    ifstream inFile ("songuyen.txt");
    if(inFile.is_open()) {
        string s;
        while(getline(inFile, s, '#')) {
            if(!s.empty()) {
                sum += stoi(s);
            }
        }
        inFile.close();
    }

    ofstream resultFile("songuyen.txt", ios::app);
    if(resultFile.is_open()) {
        resultFile<<"#"<<sum<<endl;
        resultFile.close();
    }
    return 0;
}