#include <iostream>
using namespace std;

int main(){
    int vals[] = {10, 20, 30};
    int num = 10;
    vals[0] *= num;
    vals[1] *= num;
    vals[2] *= num;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
    return 0;
}