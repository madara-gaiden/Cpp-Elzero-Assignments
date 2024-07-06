#include <iostream>
using namespace std;
int main()
{
    // For Method
    int j = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << j << "\n";
        j *= 2;
    }
    // while Method
    int i = 0;
    j = 2;
    while (i < 7)
    {
        cout << j << "\n";
        j *= 2;
        i++;
    }
    return 0;
}