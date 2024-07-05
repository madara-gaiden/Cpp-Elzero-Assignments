#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << "First: " << nums[0] << "\n";
    cout << "Last: " << nums[sizeof(nums)/sizeof(nums[0]) - 1] << "\n";

    // Method 2
    cout << "First: " << nums[0] << "\n";
    cout << "Last: " << nums[end(nums) - begin(nums) - 1] << "\n";


    // Method 3
    cout << "First: " << nums[0] << "\n";
    cout << "Last: " << nums[nums.size() - 1] << "\n";

    return 0;
}