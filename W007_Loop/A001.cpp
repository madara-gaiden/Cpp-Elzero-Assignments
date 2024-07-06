#include <iostream>
using namespace std;

int main()
{
    // For Output
    int i = 0;
    for (; i < 11; i++)
    {
        cout << i << "\n";
    }

    // While Output
    i = 0;
    while (i < 11)
    {
        cout << i << "\n";
        i++;
    }

    // Do While Output
    i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 11);
    return 0;
}