#include <iostream>
using namespace std;

int main(){
    int a = 69, b = 108, c = 122, d = 101, e = 114, f = 111;

    cout << "Character Of This ASCII Value " << a << " is " << char(a) << endl; //E
    cout << "Character Of This ASCII Value " << b << " is " << char(b) << endl; //l
    cout << "Character Of This ASCII Value " << c << " is " << char(c) << endl; //z
    cout << "Character Of This ASCII Value " << d << " is " << char(d) << endl; //e
    cout << "Character Of This ASCII Value " << e << " is " << char(e) << endl; //r
    cout << "Character Of This ASCII Value " << f << " is " << char(f) << endl; //o
    cout << char(a) << char(b) <<char(c) <<char(d) <<char(e) <<char(f) << endl; 
    return 0;
}