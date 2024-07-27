#include <iostream>
using namespace std;

float money(float salary, int day){
    int i = 0;
    for(;i<(day/7);){
        i++;
    }
    day = day - (i * 2);
    return salary/day;
}
int main()
{
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}
