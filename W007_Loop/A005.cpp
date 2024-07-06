#include <iostream>
using namespace std;
int main()
{
    // For Method
    for (int i = 0; i < 28; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << "\n";
        }
    }
    // while Method
    int i = 0;
    while (i < 28)
    {
        if (i % 3 == 0)
        {
            cout << i << "\n";
        }
        i++;
    }
    return 0;
}