#include <iostream>
using namespace std;
int main()
{
    // For Method
    int j = 2;
    for (int i = 0; i < 6; i++)
    {
        cout << j << "\n";
        j = j * 2 + 2;
    }
    // while Method
    int i = 0;
    j = 2;
    while (i < 6)
    {
        cout << j << "\n";
        j = j * 2 + 2;
        i++;
    }
    return 0;
}