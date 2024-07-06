// // Output Needed
// 0 2 4 6 8 14 16 18

#include <iostream>
using namespace std;
int main()
{
    // For Method
    for (int i = 0; i < 19; i++)
    {
        if (i == 10 || i == 12)
        {
            continue;
        }
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }
    // while Method
    int i = 0;
    while (i < 19)
    {
        if (i == 10 || i == 12)
        {
            i++;
            continue;
        }
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
        i++;
    }
    return 0;
}