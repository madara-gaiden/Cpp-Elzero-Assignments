#include <iostream>
#include <cmath>
using namespace std;

//////////      The First Method     //////////

//int thepower(int base, int power){
//    cout << pow(base, power) << "\n";
//    return 0;
//}

//////////      The Second Method       //////////
int thepower(int base, int power){
    int i=1;
    int originalBase = base;
    for(;i<power;){
        base*=originalBase;
        i++;  
    }
    cout << base << "\n";
    return 0;
}

int main()
{
    thepower(2, 5); // 32
    return 0;
}
