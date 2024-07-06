#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Type Number 1 : ";
    cin >> n1;
    cout << "Type Number 2 : ";
    cin >> n2;

    if (n1 <= n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i == n1 || i == n2 || i % 2 == 0)
            {
                continue;
            }
            cout << i << "\n";
        }
    }
    else
    {
        for (int i = n2; i <= n1; i++)
        {
            if (i == n1 || i == n2 || i % 2 == 0)
            {
                continue;
            }
            cout << i << "\n";
        }
    }
    return 0;
}