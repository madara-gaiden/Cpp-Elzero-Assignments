#include <iostream>
using namespace std;
int main()
{
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int sizeF = size(friends);

    for (int i = 0; i < sizeF; i++)
    {
        char friendsA = friends[i][0];
        if (friendsA == 'A')
        {
            cout << friends[i] << "\n";
        }
    }
    return 0;
}