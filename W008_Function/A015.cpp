#include <iostream>
using namespace std;

float avg(int money[], int monsize) {
    int i, total;
    i = total = 0;
    for(;i < monsize;i++) {
        total+=money[i];
    }
    return total/float(monsize);
}

int main()
{
    int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}
