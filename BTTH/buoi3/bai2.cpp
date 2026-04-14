#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    const int MAX = 30;
    int arr[MAX];
    for(int i = 0; i < MAX; i++) {
        arr[i] = rand() % 10;
    }
    int *p = arr;
    cout<<"Ki phap do doi: \n";
    for(int offset = 0; offset < MAX; offset++) {
        cout<<*(p + offset)<<"\t";
    }
    cout<<"\nKi phap chi so: \n";
    for(int i = 0; i < MAX; i++) {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
    return 0;
}