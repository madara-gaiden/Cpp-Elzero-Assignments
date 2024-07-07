#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    while (num < 520)
    {
        if (num == 2)
        {
            num = 1;
            cout << num << "\n";
        }
        else
        {
            cout << num << "\n";
        }

        num = num * 2 + 2;
    }
    return 0;
}