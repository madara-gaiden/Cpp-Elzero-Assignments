#include <iostream>
using namespace std;

int main(){
    short a = 100;
    long     b = 15001500;
    long double c = 10.54565746;

    cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    cout << sizeof(c) << " Bytes\n"; // 16 Bytes
    return 0;
}