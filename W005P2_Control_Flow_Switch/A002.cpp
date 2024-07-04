#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day){
        case 1:
        case 2:
        case 3:
            cout << "Shop Is Open\n";
            break;
        case 4:
        case 5:
            cout << "Shop Is Closed\n";
            break;
        default:
        cout << "Day Is Not Valid\n";
    }

    return 0;
}