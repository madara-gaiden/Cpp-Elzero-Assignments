#include <iostream>
using namespace std;

int main(){
    double salary = 5000.98;
    cout << "The bytes of " << salary << " are : " << sizeof(salary) << " Bytes" << endl; 
    cout << "The Bits of " << salary << " are : " << sizeof(salary) * 8 << " Bits" << endl;
    return 0;
}