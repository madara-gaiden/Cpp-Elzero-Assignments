#include <iostream>
using namespace std;

int main()
{
    int num = 103;
    for (int i = 1; i < num; i++)
    {
        if (i > 0 && i < 10)
        {
            cout << "00" << i << "\n";
        }
        else if (i > 9 && i < 100)
        {
            cout << "0" << i << "\n";
        }
        else if (i > 99 && i < 1000)
        {
            cout << i << "\n";
        }
    }
    return 0;
}