#include <iostream>
using namespace std;

int main(){ 
    int a = 10;
    int b = 25;
    int c = 15;

    cout << (a < b) << "\n";         
    cout << (c > a) << "\n";         
    cout << (a + c <= b) << "\n";    
    cout << (c >= a) << "\n";         
    cout << (c < b) << "\n";         
    cout << (b > a || b == c) << "\n";
    cout << !(a > b) << "\n";        
    cout << (a < b && b > a) << "\n";
    return 0;
}