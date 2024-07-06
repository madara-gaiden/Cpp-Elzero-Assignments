#include <iostream>
using namespace std;
int main()
{
    // For Method
    int j = 10;
    for (int i = 0; i < 4; i++)
    {
        cout << j << "\n";
        j *= j;
    }
    // while Method
    int i = 0;
    j = 10;
    while (i < 4)
    {
        cout << j << "\n";
        j *= j;
        i++;
    }
    return 0;
}