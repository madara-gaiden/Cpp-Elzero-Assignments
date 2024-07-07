#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    int sizeF = size(friends);

    for (int i = 0; i < sizeF; i++)
    {
        cout << "=========\n";
        cout << "= " << friends[i] << " =\n";
        cout << "==================\n";
        cout << "== ";
        for (int j = 0; j < size(friends[i]); j++)
        {

            cout << friends[i][j];
            if (j == size(friends[i]) - 1)
            {
                cout << " =";
            }
            else
            {
                cout << ", ";
            }

            // cout <<
        }
        cout << "\n==================\n\n";
    }
    return 0;
}