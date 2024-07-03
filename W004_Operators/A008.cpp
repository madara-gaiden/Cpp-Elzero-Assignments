#include <iostream>
using namespace std;

int main(){
    int num = 10;       

    cout << --num << " | " << num++ << " | " << ++num << "\n";
    cout << num++ << " | " << num << " | " << num-- << "\n";
    cout << num-- << " | " << num << " | " << --num << "\n";
    return 0;
}