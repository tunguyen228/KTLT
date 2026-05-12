#include <iostream>
#include <fstream>
using namespace std;
const int MAX = 5;

int main() {
    int r, c;
    int a[MAX][MAX], b[MAX][MAX];
    ifstream inFile1("matrix1.txt");
    if(inFile1.is_open()) {
        inFile1>>r>>c;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                inFile1>>a[i][j];
            }
        }
        inFile1.close();
    }

    ifstream inFile2("matrix2.txt");
    if(inFile2.is_open()) {
        inFile2>>r>>c;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                inFile2>>b[i][j];
            }
        }
        inFile2.close();
    }

    int tong[MAX][MAX];
    ofstream outFile3("matrix3.txt");
    if(outFile3.is_open()) {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                tong[i][j] = a[i][j] + b[i][j];
                outFile3<<setw(3)<<tong[i][j]<<" ";
            }
            outFile3<<endl;
        }
        outFile3.close();
    }

    return 0;
}