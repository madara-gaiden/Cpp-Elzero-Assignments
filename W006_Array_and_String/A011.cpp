#include <array>
#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    array<int, 3> oldNums = {10, 20, 30};
    array<int, 3> newNums;

    newNums[oldNums.size() - oldNums.size()] = oldNums[oldNums.size() - index];
    newNums[index] = oldNums[index];
    newNums[oldNums.size() - index] = oldNums[oldNums.size() - oldNums.size()];
    cout << newNums[0] << "\n"; // 30
    cout << newNums[1] << "\n"; // 20
    cout << newNums[2] << "\n"; // 10
    return 0;
}