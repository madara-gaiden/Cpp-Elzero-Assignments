#include <iostream>
using namespace std;

int beforeresult(int main, int second){
    int i = 1;
    int firstMain = main;
    for(;i < second + 1;) {
        main = main + (firstMain - i);
        i++;
    }
    return main;
}

int main()
{
    cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
    cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
    return 0;
}
