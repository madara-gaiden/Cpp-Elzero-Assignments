#include <iostream>
using namespace std;

int main(){
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    cout << int(c + (c + a/a)) << "\n"; // 12
    cout << (int(c) + int(c)) + (int(c) + int(c)) << "\n"; // 20
    cout << int(int(c) * (c + a/a)) << "\n"; // 32
    cout << a * int(c) << "\n"; // 5000
    cout << char(b/a * (int(c) + a/a + a/a + a/a)) << "\n"; // P = 80   
    return 0;
}   