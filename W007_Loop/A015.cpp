#include <iostream>
using namespace std;

int main()
{
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    for (int i = 0; i < int(size(nums)); i++)
    {
        cout << nums[i] << " + " << nums[help_num - i] << " = " << nums[i] + nums[help_num - i] << "\n";
    }
    return 0;
}