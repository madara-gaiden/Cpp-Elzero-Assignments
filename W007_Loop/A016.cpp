#include <iostream>
using namespace std;

int main()
{
    int index = 10;
    int jump = 2;

    for (;;)
    {
        cout << index << "\n";
        index -= jump;
        if (index == 2)
        {
            break;
        }
    }

    return 0;
}