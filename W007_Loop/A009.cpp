#include <iostream>
using namespace std;
int main()
{
    // For Method
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int sizeFriends = size(friends);
    for (int i = 0; i < sizeFriends; i++)
    {
        if (i == 1 || i == 2)
        {
            cout << friends[i] << "\n";
        }
    }
    // while Method
    int i = 0;
    while (i < sizeFriends)
    {
        if (i == 1 || i == 2)
        {
            cout << friends[i] << "\n";
        }
        i++;
    }
    return 0;
}